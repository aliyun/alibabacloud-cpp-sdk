// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAVATARSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAVATARSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class StartAvatarSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAvatarSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(channelToken, channelToken_);
      DARABONBA_PTR_TO_JSON(customPushUrl, customPushUrl_);
      DARABONBA_PTR_TO_JSON(customUserId, customUserId_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartAvatarSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(channelToken, channelToken_);
      DARABONBA_PTR_FROM_JSON(customPushUrl, customPushUrl_);
      DARABONBA_PTR_FROM_JSON(customUserId, customUserId_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    StartAvatarSessionRequest() = default ;
    StartAvatarSessionRequest(const StartAvatarSessionRequest &) = default ;
    StartAvatarSessionRequest(StartAvatarSessionRequest &&) = default ;
    StartAvatarSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAvatarSessionRequest() = default ;
    StartAvatarSessionRequest& operator=(const StartAvatarSessionRequest &) = default ;
    StartAvatarSessionRequest& operator=(StartAvatarSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelToken_ == nullptr
        && this->customPushUrl_ == nullptr && this->customUserId_ == nullptr && this->projectId_ == nullptr && this->requestId_ == nullptr; };
    // channelToken Field Functions 
    bool hasChannelToken() const { return this->channelToken_ != nullptr;};
    void deleteChannelToken() { this->channelToken_ = nullptr;};
    inline string getChannelToken() const { DARABONBA_PTR_GET_DEFAULT(channelToken_, "") };
    inline StartAvatarSessionRequest& setChannelToken(string channelToken) { DARABONBA_PTR_SET_VALUE(channelToken_, channelToken) };


    // customPushUrl Field Functions 
    bool hasCustomPushUrl() const { return this->customPushUrl_ != nullptr;};
    void deleteCustomPushUrl() { this->customPushUrl_ = nullptr;};
    inline string getCustomPushUrl() const { DARABONBA_PTR_GET_DEFAULT(customPushUrl_, "") };
    inline StartAvatarSessionRequest& setCustomPushUrl(string customPushUrl) { DARABONBA_PTR_SET_VALUE(customPushUrl_, customPushUrl) };


    // customUserId Field Functions 
    bool hasCustomUserId() const { return this->customUserId_ != nullptr;};
    void deleteCustomUserId() { this->customUserId_ = nullptr;};
    inline string getCustomUserId() const { DARABONBA_PTR_GET_DEFAULT(customUserId_, "") };
    inline StartAvatarSessionRequest& setCustomUserId(string customUserId) { DARABONBA_PTR_SET_VALUE(customUserId_, customUserId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline StartAvatarSessionRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartAvatarSessionRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> channelToken_ {};
    shared_ptr<string> customPushUrl_ {};
    shared_ptr<string> customUserId_ {};
    shared_ptr<string> projectId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
