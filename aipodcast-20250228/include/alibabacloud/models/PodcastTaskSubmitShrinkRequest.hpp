// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PODCASTTASKSUBMITSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PODCASTTASKSUBMITSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIPodcast20250228
{
namespace Models
{
  class PodcastTaskSubmitShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PodcastTaskSubmitShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(counts, counts_);
      DARABONBA_PTR_TO_JSON(fileUrls, fileUrlsShrink_);
      DARABONBA_PTR_TO_JSON(sourceLang, sourceLang_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(topic, topic_);
      DARABONBA_PTR_TO_JSON(voices, voicesShrink_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, PodcastTaskSubmitShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(counts, counts_);
      DARABONBA_PTR_FROM_JSON(fileUrls, fileUrlsShrink_);
      DARABONBA_PTR_FROM_JSON(sourceLang, sourceLang_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(topic, topic_);
      DARABONBA_PTR_FROM_JSON(voices, voicesShrink_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    PodcastTaskSubmitShrinkRequest() = default ;
    PodcastTaskSubmitShrinkRequest(const PodcastTaskSubmitShrinkRequest &) = default ;
    PodcastTaskSubmitShrinkRequest(PodcastTaskSubmitShrinkRequest &&) = default ;
    PodcastTaskSubmitShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PodcastTaskSubmitShrinkRequest() = default ;
    PodcastTaskSubmitShrinkRequest& operator=(const PodcastTaskSubmitShrinkRequest &) = default ;
    PodcastTaskSubmitShrinkRequest& operator=(PodcastTaskSubmitShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->counts_ != nullptr
        && this->fileUrlsShrink_ != nullptr && this->sourceLang_ != nullptr && this->text_ != nullptr && this->topic_ != nullptr && this->voicesShrink_ != nullptr
        && this->workspaceId_ != nullptr; };
    // counts Field Functions 
    bool hasCounts() const { return this->counts_ != nullptr;};
    void deleteCounts() { this->counts_ = nullptr;};
    inline int32_t counts() const { DARABONBA_PTR_GET_DEFAULT(counts_, 0) };
    inline PodcastTaskSubmitShrinkRequest& setCounts(int32_t counts) { DARABONBA_PTR_SET_VALUE(counts_, counts) };


    // fileUrlsShrink Field Functions 
    bool hasFileUrlsShrink() const { return this->fileUrlsShrink_ != nullptr;};
    void deleteFileUrlsShrink() { this->fileUrlsShrink_ = nullptr;};
    inline string fileUrlsShrink() const { DARABONBA_PTR_GET_DEFAULT(fileUrlsShrink_, "") };
    inline PodcastTaskSubmitShrinkRequest& setFileUrlsShrink(string fileUrlsShrink) { DARABONBA_PTR_SET_VALUE(fileUrlsShrink_, fileUrlsShrink) };


    // sourceLang Field Functions 
    bool hasSourceLang() const { return this->sourceLang_ != nullptr;};
    void deleteSourceLang() { this->sourceLang_ = nullptr;};
    inline string sourceLang() const { DARABONBA_PTR_GET_DEFAULT(sourceLang_, "") };
    inline PodcastTaskSubmitShrinkRequest& setSourceLang(string sourceLang) { DARABONBA_PTR_SET_VALUE(sourceLang_, sourceLang) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline PodcastTaskSubmitShrinkRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline PodcastTaskSubmitShrinkRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // voicesShrink Field Functions 
    bool hasVoicesShrink() const { return this->voicesShrink_ != nullptr;};
    void deleteVoicesShrink() { this->voicesShrink_ = nullptr;};
    inline string voicesShrink() const { DARABONBA_PTR_GET_DEFAULT(voicesShrink_, "") };
    inline PodcastTaskSubmitShrinkRequest& setVoicesShrink(string voicesShrink) { DARABONBA_PTR_SET_VALUE(voicesShrink_, voicesShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline PodcastTaskSubmitShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int32_t> counts_ = nullptr;
    std::shared_ptr<string> fileUrlsShrink_ = nullptr;
    std::shared_ptr<string> sourceLang_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
    std::shared_ptr<string> voicesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIPodcast20250228
#endif
