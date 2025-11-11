// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTMESSAGESSEARCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOADOUTPUTMESSAGESSEARCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultImages.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultVideos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult& obj) { 
      DARABONBA_PTR_TO_JSON(Audios, audios_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(MultimodalSearchQuery, multimodalSearchQuery_);
      DARABONBA_PTR_TO_JSON(Texts, texts_);
      DARABONBA_PTR_TO_JSON(Videos, videos_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Audios, audios_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(MultimodalSearchQuery, multimodalSearchQuery_);
      DARABONBA_PTR_FROM_JSON(Texts, texts_);
      DARABONBA_PTR_FROM_JSON(Videos, videos_);
    };
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult(const RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult(RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult &&) = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult() = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult& operator=(const RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult &) = default ;
    RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult& operator=(RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audios_ == nullptr
        && return this->images_ == nullptr && return this->multimodalSearchQuery_ == nullptr && return this->texts_ == nullptr && return this->videos_ == nullptr; };
    // audios Field Functions 
    bool hasAudios() const { return this->audios_ != nullptr;};
    void deleteAudios() { this->audios_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios> & audios() const { DARABONBA_PTR_GET_CONST(audios_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios> audios() { DARABONBA_PTR_GET(audios_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios>) };
    inline RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult& setAudios(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios> & audios) { DARABONBA_PTR_SET_VALUE(audios_, audios) };
    inline RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult& setAudios(vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios> && audios) { DARABONBA_PTR_SET_RVALUE(audios_, audios) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultImages>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultImages> images() { DARABONBA_PTR_GET(images_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultImages>) };
    inline RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult& setImages(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult& setImages(vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // multimodalSearchQuery Field Functions 
    bool hasMultimodalSearchQuery() const { return this->multimodalSearchQuery_ != nullptr;};
    void deleteMultimodalSearchQuery() { this->multimodalSearchQuery_ = nullptr;};
    inline string multimodalSearchQuery() const { DARABONBA_PTR_GET_DEFAULT(multimodalSearchQuery_, "") };
    inline RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult& setMultimodalSearchQuery(string multimodalSearchQuery) { DARABONBA_PTR_SET_VALUE(multimodalSearchQuery_, multimodalSearchQuery) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts> texts() { DARABONBA_PTR_GET(texts_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts>) };
    inline RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult& setTexts(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult& setTexts(vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


    // videos Field Functions 
    bool hasVideos() const { return this->videos_ != nullptr;};
    void deleteVideos() { this->videos_ = nullptr;};
    inline const vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultVideos> & videos() const { DARABONBA_PTR_GET_CONST(videos_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultVideos>) };
    inline vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultVideos> videos() { DARABONBA_PTR_GET(videos_, vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultVideos>) };
    inline RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult& setVideos(const vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultVideos> & videos) { DARABONBA_PTR_SET_VALUE(videos_, videos) };
    inline RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResult& setVideos(vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultVideos> && videos) { DARABONBA_PTR_SET_RVALUE(videos_, videos) };


  protected:
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultAudios>> audios_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultImages>> images_ = nullptr;
    std::shared_ptr<string> multimodalSearchQuery_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultTexts>> texts_ = nullptr;
    std::shared_ptr<vector<Models::RunSearchGenerationResponseBodyPayloadOutputMessagesSearchResultVideos>> videos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
