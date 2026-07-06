// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetConsumerProgressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerProgressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(HideLastTimestamp, hideLastTimestamp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerProgressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(HideLastTimestamp, hideLastTimestamp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetConsumerProgressRequest() = default ;
    GetConsumerProgressRequest(const GetConsumerProgressRequest &) = default ;
    GetConsumerProgressRequest(GetConsumerProgressRequest &&) = default ;
    GetConsumerProgressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerProgressRequest() = default ;
    GetConsumerProgressRequest& operator=(const GetConsumerProgressRequest &) = default ;
    GetConsumerProgressRequest& operator=(GetConsumerProgressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerId_ == nullptr
        && this->hideLastTimestamp_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline GetConsumerProgressRequest& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // hideLastTimestamp Field Functions 
    bool hasHideLastTimestamp() const { return this->hideLastTimestamp_ != nullptr;};
    void deleteHideLastTimestamp() { this->hideLastTimestamp_ = nullptr;};
    inline bool getHideLastTimestamp() const { DARABONBA_PTR_GET_DEFAULT(hideLastTimestamp_, false) };
    inline GetConsumerProgressRequest& setHideLastTimestamp(bool hideLastTimestamp) { DARABONBA_PTR_SET_VALUE(hideLastTimestamp_, hideLastTimestamp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetConsumerProgressRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetConsumerProgressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the consumer group.
    // 
    // This parameter is required.
    shared_ptr<string> consumerId_ {};
    // Specifies whether to hide the \\`LastTimestamp\\` parameter. The default value is false. Set this parameter to true for better performance.
    // 
    // > - If you set this parameter to true, -1 is returned for the \\`LastTimestamp\\` parameter. Otherwise, a specific value is returned. This parameter is supported only for topics of cloud storage on provisioned instances.
    // >
    // > - This operation processes a large amount of data and consumes a high degree of performance. Set this parameter to true to reduce the processing time.
    shared_ptr<bool> hideLastTimestamp_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
