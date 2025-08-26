// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PODCASTTASKSUBMITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PODCASTTASKSUBMITREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIPodcast20250228
{
namespace Models
{
  class PodcastTaskSubmitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PodcastTaskSubmitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(counts, counts_);
      DARABONBA_PTR_TO_JSON(fileUrls, fileUrls_);
      DARABONBA_PTR_TO_JSON(sourceLang, sourceLang_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(topic, topic_);
      DARABONBA_PTR_TO_JSON(voices, voices_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, PodcastTaskSubmitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(counts, counts_);
      DARABONBA_PTR_FROM_JSON(fileUrls, fileUrls_);
      DARABONBA_PTR_FROM_JSON(sourceLang, sourceLang_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(topic, topic_);
      DARABONBA_PTR_FROM_JSON(voices, voices_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    PodcastTaskSubmitRequest() = default ;
    PodcastTaskSubmitRequest(const PodcastTaskSubmitRequest &) = default ;
    PodcastTaskSubmitRequest(PodcastTaskSubmitRequest &&) = default ;
    PodcastTaskSubmitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PodcastTaskSubmitRequest() = default ;
    PodcastTaskSubmitRequest& operator=(const PodcastTaskSubmitRequest &) = default ;
    PodcastTaskSubmitRequest& operator=(PodcastTaskSubmitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->counts_ != nullptr
        && this->fileUrls_ != nullptr && this->sourceLang_ != nullptr && this->text_ != nullptr && this->topic_ != nullptr && this->voices_ != nullptr
        && this->workspaceId_ != nullptr; };
    // counts Field Functions 
    bool hasCounts() const { return this->counts_ != nullptr;};
    void deleteCounts() { this->counts_ = nullptr;};
    inline int32_t counts() const { DARABONBA_PTR_GET_DEFAULT(counts_, 0) };
    inline PodcastTaskSubmitRequest& setCounts(int32_t counts) { DARABONBA_PTR_SET_VALUE(counts_, counts) };


    // fileUrls Field Functions 
    bool hasFileUrls() const { return this->fileUrls_ != nullptr;};
    void deleteFileUrls() { this->fileUrls_ = nullptr;};
    inline const vector<string> & fileUrls() const { DARABONBA_PTR_GET_CONST(fileUrls_, vector<string>) };
    inline vector<string> fileUrls() { DARABONBA_PTR_GET(fileUrls_, vector<string>) };
    inline PodcastTaskSubmitRequest& setFileUrls(const vector<string> & fileUrls) { DARABONBA_PTR_SET_VALUE(fileUrls_, fileUrls) };
    inline PodcastTaskSubmitRequest& setFileUrls(vector<string> && fileUrls) { DARABONBA_PTR_SET_RVALUE(fileUrls_, fileUrls) };


    // sourceLang Field Functions 
    bool hasSourceLang() const { return this->sourceLang_ != nullptr;};
    void deleteSourceLang() { this->sourceLang_ = nullptr;};
    inline string sourceLang() const { DARABONBA_PTR_GET_DEFAULT(sourceLang_, "") };
    inline PodcastTaskSubmitRequest& setSourceLang(string sourceLang) { DARABONBA_PTR_SET_VALUE(sourceLang_, sourceLang) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline PodcastTaskSubmitRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline PodcastTaskSubmitRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // voices Field Functions 
    bool hasVoices() const { return this->voices_ != nullptr;};
    void deleteVoices() { this->voices_ = nullptr;};
    inline const vector<string> & voices() const { DARABONBA_PTR_GET_CONST(voices_, vector<string>) };
    inline vector<string> voices() { DARABONBA_PTR_GET(voices_, vector<string>) };
    inline PodcastTaskSubmitRequest& setVoices(const vector<string> & voices) { DARABONBA_PTR_SET_VALUE(voices_, voices) };
    inline PodcastTaskSubmitRequest& setVoices(vector<string> && voices) { DARABONBA_PTR_SET_RVALUE(voices_, voices) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline PodcastTaskSubmitRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int32_t> counts_ = nullptr;
    std::shared_ptr<vector<string>> fileUrls_ = nullptr;
    std::shared_ptr<string> sourceLang_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
    std::shared_ptr<vector<string>> voices_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIPodcast20250228
#endif
