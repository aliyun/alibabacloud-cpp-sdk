// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMINSTANCECONFIGALERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMINSTANCECONFIGALERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig.hpp>
#include <alibabacloud/models/DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmInstanceConfigAlertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmInstanceConfigAlertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(AlertMode, alertMode_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmInstanceConfigAlertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(AlertMode, alertMode_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudGtmInstanceConfigAlertResponseBody() = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBody(const DescribeCloudGtmInstanceConfigAlertResponseBody &) = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBody(DescribeCloudGtmInstanceConfigAlertResponseBody &&) = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmInstanceConfigAlertResponseBody() = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBody& operator=(const DescribeCloudGtmInstanceConfigAlertResponseBody &) = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBody& operator=(DescribeCloudGtmInstanceConfigAlertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertConfig_ == nullptr
        && return this->alertGroup_ == nullptr && return this->alertMode_ == nullptr && return this->configId_ == nullptr && return this->instanceId_ == nullptr && return this->requestId_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig alertConfig() { DARABONBA_PTR_GET(alertConfig_, DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setAlertConfig(const DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setAlertConfig(DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline const DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup & alertGroup() const { DARABONBA_PTR_GET_CONST(alertGroup_, DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup alertGroup() { DARABONBA_PTR_GET(alertGroup_, DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setAlertGroup(const DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup & alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setAlertGroup(DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup && alertGroup) { DARABONBA_PTR_SET_RVALUE(alertGroup_, alertGroup) };


    // alertMode Field Functions 
    bool hasAlertMode() const { return this->alertMode_ != nullptr;};
    void deleteAlertMode() { this->alertMode_ = nullptr;};
    inline string alertMode() const { DARABONBA_PTR_GET_DEFAULT(alertMode_, "") };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setAlertMode(string alertMode) { DARABONBA_PTR_SET_VALUE(alertMode_, alertMode) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The alert configurations.
    std::shared_ptr<DescribeCloudGtmInstanceConfigAlertResponseBodyAlertConfig> alertConfig_ = nullptr;
    // The alert contact groups.
    std::shared_ptr<DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup> alertGroup_ = nullptr;
    // The alert configuration mode of the instance. Valid values:
    // 
    // *   global: global alert configuration
    // *   instance_config: custom alert configuration
    std::shared_ptr<string> alertMode_ = nullptr;
    // The configuration ID of the access domain name. Two configuration IDs exist when the access domain name is bound to the same GTM instance but an A record and an AAAA record are configured for the access domain name. The configuration ID uniquely identifies a configuration.
    std::shared_ptr<string> configId_ = nullptr;
    // The ID of the GTM 3.0 instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
