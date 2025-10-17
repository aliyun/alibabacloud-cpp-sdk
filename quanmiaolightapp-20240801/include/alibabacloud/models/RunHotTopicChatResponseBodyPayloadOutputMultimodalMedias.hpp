// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODYPAYLOADOUTPUTMULTIMODALMEDIAS_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODYPAYLOADOUTPUTMULTIMODALMEDIAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias& obj) { 
      DARABONBA_PTR_TO_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(mediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(sortScore, sortScore_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias& obj) { 
      DARABONBA_PTR_FROM_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(mediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(sortScore, sortScore_);
    };
    RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias() = default ;
    RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias(const RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias &) = default ;
    RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias(RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias &&) = default ;
    RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias() = default ;
    RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias& operator=(const RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias &) = default ;
    RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias& operator=(RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileUrl_ == nullptr
        && return this->mediaType_ == nullptr && return this->sortScore_ == nullptr; };
    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // sortScore Field Functions 
    bool hasSortScore() const { return this->sortScore_ != nullptr;};
    void deleteSortScore() { this->sortScore_ = nullptr;};
    inline double sortScore() const { DARABONBA_PTR_GET_DEFAULT(sortScore_, 0.0) };
    inline RunHotTopicChatResponseBodyPayloadOutputMultimodalMedias& setSortScore(double sortScore) { DARABONBA_PTR_SET_VALUE(sortScore_, sortScore) };


  protected:
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<double> sortScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
