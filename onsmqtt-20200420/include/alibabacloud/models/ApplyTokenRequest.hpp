// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class ApplyTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    ApplyTokenRequest() = default ;
    ApplyTokenRequest(const ApplyTokenRequest &) = default ;
    ApplyTokenRequest(ApplyTokenRequest &&) = default ;
    ApplyTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyTokenRequest() = default ;
    ApplyTokenRequest& operator=(const ApplyTokenRequest &) = default ;
    ApplyTokenRequest& operator=(ApplyTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr
        && this->expireTime_ == nullptr && this->instanceId_ == nullptr && this->resources_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline string getActions() const { DARABONBA_PTR_GET_DEFAULT(actions_, "") };
    inline ApplyTokenRequest& setActions(string actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline ApplyTokenRequest& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ApplyTokenRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline ApplyTokenRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


  protected:
    // The permission type of the token. Valid values:
    // - **R**: read-only permissions. The client can only subscribe to the specified topics and cannot publish messages to the topics.
    // - **W**: write-only permissions. The client can only publish messages to the specified topics and cannot subscribe to the topics.
    // - **R,W**: read and write permissions. The client can publish messages to and subscribe to the specified topics. Separate **R** and **W** with a comma (,).
    // 
    // This parameter is required.
    shared_ptr<string> actions_ {};
    // The expiration time of the token. The value is a millisecond timestamp. The minimum effective period is 60 seconds, and the maximum effective period is 30 days. If the specified value exceeds 30 days, the API operation does not return an error, but the actual effective period is 30 days.
    // 
    // Example: If the effective period of the token is 60 seconds and the current system time in milliseconds is 1609434061000, set this parameter to **1609434121000**, which is the sum of 1609434061000 and 60 × 1000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> expireTime_ {};
    // The ID of the ApsaraMQ for MQTT instance. The instance ID must match the actual instance ID used by the client. You can obtain the instance ID on the **Instance Details** page in the [console](https://mqtt.console.aliyun.com/).
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The resource name, which is the topic of ApsaraMQ for MQTT. Separate multiple topics with commas (,). Each token can be used to perform operations on up to 100 resources. If multiple topics are specified, they must be sorted in lexicographical order.
    // The resource parameter registered when you apply for a token supports the MQTT wildcard syntax, including the plus sign (+) for single-level wildcards and the number sign (#) for multi-level wildcards.
    // 
    // For example, if you set **Resources** to "Topic1/+" when you apply for a token, the client can perform operations on any topic in the format of "Topic1/xxx". If you set **Resources** to "Topic1/#", the client can perform operations on any multi-level topic in the format of "Topic1/xxx/xxx/xxx".
    // 
    // > ApsaraMQ for MQTT supports matching child topics. You do not need to create child topics in the console. You can directly configure the settings in the message sending and receiving code. The forward slash (/) in a topic name is used to separate the parent topic and child topics. For more information, see [Terms](https://help.aliyun.com/document_detail/42420.html).
    // 
    // This parameter is required.
    shared_ptr<string> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
