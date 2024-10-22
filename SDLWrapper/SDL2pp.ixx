module;

export module SDL2pp;
export import :Types;
export import :Impl;
export import :Window;
export import :Renderer;
export import <SDL2/SDL.h>;
export import <SDL2/SDL_mixer.h>;

namespace SDL2pp
{
	export template<>
	struct SDL2Destructor<Mix_Chunk>
	{
		void operator()(Mix_Chunk* chunk) const { Mix_FreeChunk(chunk); }
	};

	export template<>
	struct SDL2Destructor<Mix_Music>
	{
		void operator()(Mix_Music* chunk) const { Mix_FreeMusic(chunk); }
	};
}