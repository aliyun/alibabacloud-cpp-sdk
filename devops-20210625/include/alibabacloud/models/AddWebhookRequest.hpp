// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWEBHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDWEBHOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class AddWebhookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWebhookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enableSslVerification, enableSslVerification_);
      DARABONBA_PTR_TO_JSON(mergeRequestsEvents, mergeRequestsEvents_);
      DARABONBA_PTR_TO_JSON(noteEvents, noteEvents_);
      DARABONBA_PTR_TO_JSON(pushEvents, pushEvents_);
      DARABONBA_PTR_TO_JSON(secretToken, secretToken_);
      DARABONBA_PTR_TO_JSON(tagPushEvents, tagPushEvents_);
      DARABONBA_PTR_TO_JSON(url, url_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, AddWebhookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enableSslVerification, enableSslVerification_);
      DARABONBA_PTR_FROM_JSON(mergeRequestsEvents, mergeRequestsEvents_);
      DARABONBA_PTR_FROM_JSON(noteEvents, noteEvents_);
      DARABONBA_PTR_FROM_JSON(pushEvents, pushEvents_);
      DARABONBA_PTR_FROM_JSON(secretToken, secretToken_);
      DARABONBA_PTR_FROM_JSON(tagPushEvents, tagPushEvents_);
      DARABONBA_PTR_FROM_JSON(url, url_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    AddWebhookRequest() = default ;
    AddWebhookRequest(const AddWebhookRequest &) = default ;
    AddWebhookRequest(AddWebhookRequest &&) = default ;
    AddWebhookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWebhookRequest() = default ;
    AddWebhookRequest& operator=(const AddWebhookRequest &) = default ;
    AddWebhookRequest& operator=(AddWebhookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->description_ == nullptr && return this->enableSslVerification_ == nullptr && return this->mergeRequestsEvents_ == nullptr && return this->noteEvents_ == nullptr && return this->pushEvents_ == nullptr
        && return this->secretToken_ == nullptr && return this->tagPushEvents_ == nullptr && return this->url_ == nullptr && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline AddWebhookRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddWebhookRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableSslVerification Field Functions 
    bool hasEnableSslVerification() const { return this->enableSslVerification_ != nullptr;};
    void deleteEnableSslVerification() { this->enableSslVerification_ = nullptr;};
    inline bool enableSslVerification() const { DARABONBA_PTR_GET_DEFAULT(enableSslVerification_, false) };
    inline AddWebhookRequest& setEnableSslVerification(bool enableSslVerification) { DARABONBA_PTR_SET_VALUE(enableSslVerification_, enableSslVerification) };


    // mergeRequestsEvents Field Functions 
    bool hasMergeRequestsEvents() const { return this->mergeRequestsEvents_ != nullptr;};
    void deleteMergeRequestsEvents() { this->mergeRequestsEvents_ = nullptr;};
    inline bool mergeRequestsEvents() const { DARABONBA_PTR_GET_DEFAULT(mergeRequestsEvents_, false) };
    inline AddWebhookRequest& setMergeRequestsEvents(bool mergeRequestsEvents) { DARABONBA_PTR_SET_VALUE(mergeRequestsEvents_, mergeRequestsEvents) };


    // noteEvents Field Functions 
    bool hasNoteEvents() const { return this->noteEvents_ != nullptr;};
    void deleteNoteEvents() { this->noteEvents_ = nullptr;};
    inline bool noteEvents() const { DARABONBA_PTR_GET_DEFAULT(noteEvents_, false) };
    inline AddWebhookRequest& setNoteEvents(bool noteEvents) { DARABONBA_PTR_SET_VALUE(noteEvents_, noteEvents) };


    // pushEvents Field Functions 
    bool hasPushEvents() const { return this->pushEvents_ != nullptr;};
    void deletePushEvents() { this->pushEvents_ = nullptr;};
    inline bool pushEvents() const { DARABONBA_PTR_GET_DEFAULT(pushEvents_, false) };
    inline AddWebhookRequest& setPushEvents(bool pushEvents) { DARABONBA_PTR_SET_VALUE(pushEvents_, pushEvents) };


    // secretToken Field Functions 
    bool hasSecretToken() const { return this->secretToken_ != nullptr;};
    void deleteSecretToken() { this->secretToken_ = nullptr;};
    inline string secretToken() const { DARABONBA_PTR_GET_DEFAULT(secretToken_, "") };
    inline AddWebhookRequest& setSecretToken(string secretToken) { DARABONBA_PTR_SET_VALUE(secretToken_, secretToken) };


    // tagPushEvents Field Functions 
    bool hasTagPushEvents() const { return this->tagPushEvents_ != nullptr;};
    void deleteTagPushEvents() { this->tagPushEvents_ = nullptr;};
    inline bool tagPushEvents() const { DARABONBA_PTR_GET_DEFAULT(tagPushEvents_, false) };
    inline AddWebhookRequest& setTagPushEvents(bool tagPushEvents) { DARABONBA_PTR_SET_VALUE(tagPushEvents_, tagPushEvents) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline AddWebhookRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline AddWebhookRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enableSslVerification_ = nullptr;
    std::shared_ptr<bool> mergeRequestsEvents_ = nullptr;
    std::shared_ptr<bool> noteEvents_ = nullptr;
    std::shared_ptr<bool> pushEvents_ = nullptr;
    std::shared_ptr<string> secretToken_ = nullptr;
    std::shared_ptr<bool> tagPushEvents_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
