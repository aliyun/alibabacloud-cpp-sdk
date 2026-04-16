// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USAGEINFODTO_HPP_
#define ALIBABACLOUD_MODELS_USAGEINFODTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class UsageInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UsageInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(completionTokens, completionTokens_);
      DARABONBA_PTR_TO_JSON(imageCount, imageCount_);
      DARABONBA_PTR_TO_JSON(promptTokens, promptTokens_);
      DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
      DARABONBA_PTR_TO_JSON(videoCount, videoCount_);
      DARABONBA_PTR_TO_JSON(videoDuration, videoDuration_);
    };
    friend void from_json(const Darabonba::Json& j, UsageInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(completionTokens, completionTokens_);
      DARABONBA_PTR_FROM_JSON(imageCount, imageCount_);
      DARABONBA_PTR_FROM_JSON(promptTokens, promptTokens_);
      DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
      DARABONBA_PTR_FROM_JSON(videoCount, videoCount_);
      DARABONBA_PTR_FROM_JSON(videoDuration, videoDuration_);
    };
    UsageInfoDTO() = default ;
    UsageInfoDTO(const UsageInfoDTO &) = default ;
    UsageInfoDTO(UsageInfoDTO &&) = default ;
    UsageInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UsageInfoDTO() = default ;
    UsageInfoDTO& operator=(const UsageInfoDTO &) = default ;
    UsageInfoDTO& operator=(UsageInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completionTokens_ == nullptr
        && this->imageCount_ == nullptr && this->promptTokens_ == nullptr && this->totalTokens_ == nullptr && this->videoCount_ == nullptr && this->videoDuration_ == nullptr; };
    // completionTokens Field Functions 
    bool hasCompletionTokens() const { return this->completionTokens_ != nullptr;};
    void deleteCompletionTokens() { this->completionTokens_ = nullptr;};
    inline int32_t getCompletionTokens() const { DARABONBA_PTR_GET_DEFAULT(completionTokens_, 0) };
    inline UsageInfoDTO& setCompletionTokens(int32_t completionTokens) { DARABONBA_PTR_SET_VALUE(completionTokens_, completionTokens) };


    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int32_t getImageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
    inline UsageInfoDTO& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // promptTokens Field Functions 
    bool hasPromptTokens() const { return this->promptTokens_ != nullptr;};
    void deletePromptTokens() { this->promptTokens_ = nullptr;};
    inline int32_t getPromptTokens() const { DARABONBA_PTR_GET_DEFAULT(promptTokens_, 0) };
    inline UsageInfoDTO& setPromptTokens(int32_t promptTokens) { DARABONBA_PTR_SET_VALUE(promptTokens_, promptTokens) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int32_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0) };
    inline UsageInfoDTO& setTotalTokens(int32_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


    // videoCount Field Functions 
    bool hasVideoCount() const { return this->videoCount_ != nullptr;};
    void deleteVideoCount() { this->videoCount_ = nullptr;};
    inline int32_t getVideoCount() const { DARABONBA_PTR_GET_DEFAULT(videoCount_, 0) };
    inline UsageInfoDTO& setVideoCount(int32_t videoCount) { DARABONBA_PTR_SET_VALUE(videoCount_, videoCount) };


    // videoDuration Field Functions 
    bool hasVideoDuration() const { return this->videoDuration_ != nullptr;};
    void deleteVideoDuration() { this->videoDuration_ = nullptr;};
    inline int32_t getVideoDuration() const { DARABONBA_PTR_GET_DEFAULT(videoDuration_, 0) };
    inline UsageInfoDTO& setVideoDuration(int32_t videoDuration) { DARABONBA_PTR_SET_VALUE(videoDuration_, videoDuration) };


  protected:
    shared_ptr<int32_t> completionTokens_ {};
    shared_ptr<int32_t> imageCount_ {};
    shared_ptr<int32_t> promptTokens_ {};
    shared_ptr<int32_t> totalTokens_ {};
    shared_ptr<int32_t> videoCount_ {};
    shared_ptr<int32_t> videoDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
