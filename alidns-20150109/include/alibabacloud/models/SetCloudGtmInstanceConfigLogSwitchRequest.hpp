// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCLOUDGTMINSTANCECONFIGLOGSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCLOUDGTMINSTANCECONFIGLOGSWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SetCloudGtmInstanceConfigLogSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCloudGtmInstanceConfigLogSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SetCloudGtmInstanceConfigLogSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SetCloudGtmInstanceConfigLogSwitchRequest() = default ;
    SetCloudGtmInstanceConfigLogSwitchRequest(const SetCloudGtmInstanceConfigLogSwitchRequest &) = default ;
    SetCloudGtmInstanceConfigLogSwitchRequest(SetCloudGtmInstanceConfigLogSwitchRequest &&) = default ;
    SetCloudGtmInstanceConfigLogSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCloudGtmInstanceConfigLogSwitchRequest() = default ;
    SetCloudGtmInstanceConfigLogSwitchRequest& operator=(const SetCloudGtmInstanceConfigLogSwitchRequest &) = default ;
    SetCloudGtmInstanceConfigLogSwitchRequest& operator=(SetCloudGtmInstanceConfigLogSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->configId_ == nullptr && this->instanceId_ == nullptr && this->status_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SetCloudGtmInstanceConfigLogSwitchRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline SetCloudGtmInstanceConfigLogSwitchRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetCloudGtmInstanceConfigLogSwitchRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SetCloudGtmInstanceConfigLogSwitchRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The client token that is used to ensure the idempotence of the request. Generate a unique value for this parameter. The client token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The ID of the instance configuration. A and AAAA records can be configured for the same connected domain name and GTM instance. In this case, the GTM instance has two instance configurations. ConfigId uniquely identifies an instance configuration. To find the ConfigId for a domain name instance, call the [ListCloudGtmInstanceConfigs](https://help.aliyun.com/document_detail/2797349.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> configId_ {};
    // The ID of the Global Traffic Manager (GTM) 3.0 instance.
    shared_ptr<string> instanceId_ {};
    // The status of the network traffic analysis feature:
    // 
    // - enable
    // 
    // - disable
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
