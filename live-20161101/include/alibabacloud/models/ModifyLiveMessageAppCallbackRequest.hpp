// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEAPPCALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEAPPCALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveMessageAppCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveMessageAppCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(EventCallbackUrl, eventCallbackUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveMessageAppCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(EventCallbackUrl, eventCallbackUrl_);
    };
    ModifyLiveMessageAppCallbackRequest() = default ;
    ModifyLiveMessageAppCallbackRequest(const ModifyLiveMessageAppCallbackRequest &) = default ;
    ModifyLiveMessageAppCallbackRequest(ModifyLiveMessageAppCallbackRequest &&) = default ;
    ModifyLiveMessageAppCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveMessageAppCallbackRequest() = default ;
    ModifyLiveMessageAppCallbackRequest& operator=(const ModifyLiveMessageAppCallbackRequest &) = default ;
    ModifyLiveMessageAppCallbackRequest& operator=(ModifyLiveMessageAppCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->dataCenter_ != nullptr && this->eventCallbackUrl_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyLiveMessageAppCallbackRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ModifyLiveMessageAppCallbackRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // eventCallbackUrl Field Functions 
    bool hasEventCallbackUrl() const { return this->eventCallbackUrl_ != nullptr;};
    void deleteEventCallbackUrl() { this->eventCallbackUrl_ = nullptr;};
    inline string eventCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(eventCallbackUrl_, "") };
    inline ModifyLiveMessageAppCallbackRequest& setEventCallbackUrl(string eventCallbackUrl) { DARABONBA_PTR_SET_VALUE(eventCallbackUrl_, eventCallbackUrl) };


  protected:
    // The ID of the interactive messaging application whose callback settings you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The callback URL for events such as user logon, logoff, joining a group, and leaving a group. If you leave this parameter empty, callbacks are disabled. The callback URL must start with http:// or https:// and cannot contain a private IP address or a port number.
    std::shared_ptr<string> eventCallbackUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
