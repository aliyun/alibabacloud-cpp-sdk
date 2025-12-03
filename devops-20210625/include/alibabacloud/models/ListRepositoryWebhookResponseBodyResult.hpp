// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSITORYWEBHOOKRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSITORYWEBHOOKRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListRepositoryWebhookResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepositoryWebhookResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enableSslVerification, enableSslVerification_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(lastTestResult, lastTestResult_);
      DARABONBA_PTR_TO_JSON(mergeRequestsEvents, mergeRequestsEvents_);
      DARABONBA_PTR_TO_JSON(noteEvents, noteEvents_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(pushEvents, pushEvents_);
      DARABONBA_PTR_TO_JSON(secretToken, secretToken_);
      DARABONBA_PTR_TO_JSON(tagPushEvents, tagPushEvents_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepositoryWebhookResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enableSslVerification, enableSslVerification_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(lastTestResult, lastTestResult_);
      DARABONBA_PTR_FROM_JSON(mergeRequestsEvents, mergeRequestsEvents_);
      DARABONBA_PTR_FROM_JSON(noteEvents, noteEvents_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(pushEvents, pushEvents_);
      DARABONBA_PTR_FROM_JSON(secretToken, secretToken_);
      DARABONBA_PTR_FROM_JSON(tagPushEvents, tagPushEvents_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ListRepositoryWebhookResponseBodyResult() = default ;
    ListRepositoryWebhookResponseBodyResult(const ListRepositoryWebhookResponseBodyResult &) = default ;
    ListRepositoryWebhookResponseBodyResult(ListRepositoryWebhookResponseBodyResult &&) = default ;
    ListRepositoryWebhookResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepositoryWebhookResponseBodyResult() = default ;
    ListRepositoryWebhookResponseBodyResult& operator=(const ListRepositoryWebhookResponseBodyResult &) = default ;
    ListRepositoryWebhookResponseBodyResult& operator=(ListRepositoryWebhookResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && return this->description_ == nullptr && return this->enableSslVerification_ == nullptr && return this->id_ == nullptr && return this->lastTestResult_ == nullptr && return this->mergeRequestsEvents_ == nullptr
        && return this->noteEvents_ == nullptr && return this->projectId_ == nullptr && return this->pushEvents_ == nullptr && return this->secretToken_ == nullptr && return this->tagPushEvents_ == nullptr
        && return this->url_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListRepositoryWebhookResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListRepositoryWebhookResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableSslVerification Field Functions 
    bool hasEnableSslVerification() const { return this->enableSslVerification_ != nullptr;};
    void deleteEnableSslVerification() { this->enableSslVerification_ = nullptr;};
    inline bool enableSslVerification() const { DARABONBA_PTR_GET_DEFAULT(enableSslVerification_, false) };
    inline ListRepositoryWebhookResponseBodyResult& setEnableSslVerification(bool enableSslVerification) { DARABONBA_PTR_SET_VALUE(enableSslVerification_, enableSslVerification) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListRepositoryWebhookResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastTestResult Field Functions 
    bool hasLastTestResult() const { return this->lastTestResult_ != nullptr;};
    void deleteLastTestResult() { this->lastTestResult_ = nullptr;};
    inline string lastTestResult() const { DARABONBA_PTR_GET_DEFAULT(lastTestResult_, "") };
    inline ListRepositoryWebhookResponseBodyResult& setLastTestResult(string lastTestResult) { DARABONBA_PTR_SET_VALUE(lastTestResult_, lastTestResult) };


    // mergeRequestsEvents Field Functions 
    bool hasMergeRequestsEvents() const { return this->mergeRequestsEvents_ != nullptr;};
    void deleteMergeRequestsEvents() { this->mergeRequestsEvents_ = nullptr;};
    inline bool mergeRequestsEvents() const { DARABONBA_PTR_GET_DEFAULT(mergeRequestsEvents_, false) };
    inline ListRepositoryWebhookResponseBodyResult& setMergeRequestsEvents(bool mergeRequestsEvents) { DARABONBA_PTR_SET_VALUE(mergeRequestsEvents_, mergeRequestsEvents) };


    // noteEvents Field Functions 
    bool hasNoteEvents() const { return this->noteEvents_ != nullptr;};
    void deleteNoteEvents() { this->noteEvents_ = nullptr;};
    inline bool noteEvents() const { DARABONBA_PTR_GET_DEFAULT(noteEvents_, false) };
    inline ListRepositoryWebhookResponseBodyResult& setNoteEvents(bool noteEvents) { DARABONBA_PTR_SET_VALUE(noteEvents_, noteEvents) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListRepositoryWebhookResponseBodyResult& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // pushEvents Field Functions 
    bool hasPushEvents() const { return this->pushEvents_ != nullptr;};
    void deletePushEvents() { this->pushEvents_ = nullptr;};
    inline bool pushEvents() const { DARABONBA_PTR_GET_DEFAULT(pushEvents_, false) };
    inline ListRepositoryWebhookResponseBodyResult& setPushEvents(bool pushEvents) { DARABONBA_PTR_SET_VALUE(pushEvents_, pushEvents) };


    // secretToken Field Functions 
    bool hasSecretToken() const { return this->secretToken_ != nullptr;};
    void deleteSecretToken() { this->secretToken_ = nullptr;};
    inline string secretToken() const { DARABONBA_PTR_GET_DEFAULT(secretToken_, "") };
    inline ListRepositoryWebhookResponseBodyResult& setSecretToken(string secretToken) { DARABONBA_PTR_SET_VALUE(secretToken_, secretToken) };


    // tagPushEvents Field Functions 
    bool hasTagPushEvents() const { return this->tagPushEvents_ != nullptr;};
    void deleteTagPushEvents() { this->tagPushEvents_ = nullptr;};
    inline bool tagPushEvents() const { DARABONBA_PTR_GET_DEFAULT(tagPushEvents_, false) };
    inline ListRepositoryWebhookResponseBodyResult& setTagPushEvents(bool tagPushEvents) { DARABONBA_PTR_SET_VALUE(tagPushEvents_, tagPushEvents) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListRepositoryWebhookResponseBodyResult& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enableSslVerification_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lastTestResult_ = nullptr;
    std::shared_ptr<bool> mergeRequestsEvents_ = nullptr;
    std::shared_ptr<bool> noteEvents_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<bool> pushEvents_ = nullptr;
    std::shared_ptr<string> secretToken_ = nullptr;
    std::shared_ptr<bool> tagPushEvents_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
