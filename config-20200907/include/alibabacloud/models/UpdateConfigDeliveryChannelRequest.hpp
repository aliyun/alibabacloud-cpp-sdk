// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGDELIVERYCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGDELIVERYCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class UpdateConfigDeliveryChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConfigDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CompliantSnapshot, compliantSnapshot_);
      DARABONBA_PTR_TO_JSON(ConfigurationItemChangeNotification, configurationItemChangeNotification_);
      DARABONBA_PTR_TO_JSON(ConfigurationSnapshot, configurationSnapshot_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelCondition, deliveryChannelCondition_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelId, deliveryChannelId_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelTargetArn, deliveryChannelTargetArn_);
      DARABONBA_PTR_TO_JSON(DeliverySnapshotTime, deliverySnapshotTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NonCompliantNotification, nonCompliantNotification_);
      DARABONBA_PTR_TO_JSON(OversizedDataOSSTargetArn, oversizedDataOSSTargetArn_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConfigDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CompliantSnapshot, compliantSnapshot_);
      DARABONBA_PTR_FROM_JSON(ConfigurationItemChangeNotification, configurationItemChangeNotification_);
      DARABONBA_PTR_FROM_JSON(ConfigurationSnapshot, configurationSnapshot_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelCondition, deliveryChannelCondition_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelId, deliveryChannelId_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelTargetArn, deliveryChannelTargetArn_);
      DARABONBA_PTR_FROM_JSON(DeliverySnapshotTime, deliverySnapshotTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NonCompliantNotification, nonCompliantNotification_);
      DARABONBA_PTR_FROM_JSON(OversizedDataOSSTargetArn, oversizedDataOSSTargetArn_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateConfigDeliveryChannelRequest() = default ;
    UpdateConfigDeliveryChannelRequest(const UpdateConfigDeliveryChannelRequest &) = default ;
    UpdateConfigDeliveryChannelRequest(UpdateConfigDeliveryChannelRequest &&) = default ;
    UpdateConfigDeliveryChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConfigDeliveryChannelRequest() = default ;
    UpdateConfigDeliveryChannelRequest& operator=(const UpdateConfigDeliveryChannelRequest &) = default ;
    UpdateConfigDeliveryChannelRequest& operator=(UpdateConfigDeliveryChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->compliantSnapshot_ == nullptr && this->configurationItemChangeNotification_ == nullptr && this->configurationSnapshot_ == nullptr && this->deliveryChannelCondition_ == nullptr && this->deliveryChannelId_ == nullptr
        && this->deliveryChannelName_ == nullptr && this->deliveryChannelTargetArn_ == nullptr && this->deliverySnapshotTime_ == nullptr && this->description_ == nullptr && this->nonCompliantNotification_ == nullptr
        && this->oversizedDataOSSTargetArn_ == nullptr && this->status_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateConfigDeliveryChannelRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compliantSnapshot Field Functions 
    bool hasCompliantSnapshot() const { return this->compliantSnapshot_ != nullptr;};
    void deleteCompliantSnapshot() { this->compliantSnapshot_ = nullptr;};
    inline bool getCompliantSnapshot() const { DARABONBA_PTR_GET_DEFAULT(compliantSnapshot_, false) };
    inline UpdateConfigDeliveryChannelRequest& setCompliantSnapshot(bool compliantSnapshot) { DARABONBA_PTR_SET_VALUE(compliantSnapshot_, compliantSnapshot) };


    // configurationItemChangeNotification Field Functions 
    bool hasConfigurationItemChangeNotification() const { return this->configurationItemChangeNotification_ != nullptr;};
    void deleteConfigurationItemChangeNotification() { this->configurationItemChangeNotification_ = nullptr;};
    inline bool getConfigurationItemChangeNotification() const { DARABONBA_PTR_GET_DEFAULT(configurationItemChangeNotification_, false) };
    inline UpdateConfigDeliveryChannelRequest& setConfigurationItemChangeNotification(bool configurationItemChangeNotification) { DARABONBA_PTR_SET_VALUE(configurationItemChangeNotification_, configurationItemChangeNotification) };


    // configurationSnapshot Field Functions 
    bool hasConfigurationSnapshot() const { return this->configurationSnapshot_ != nullptr;};
    void deleteConfigurationSnapshot() { this->configurationSnapshot_ = nullptr;};
    inline bool getConfigurationSnapshot() const { DARABONBA_PTR_GET_DEFAULT(configurationSnapshot_, false) };
    inline UpdateConfigDeliveryChannelRequest& setConfigurationSnapshot(bool configurationSnapshot) { DARABONBA_PTR_SET_VALUE(configurationSnapshot_, configurationSnapshot) };


    // deliveryChannelCondition Field Functions 
    bool hasDeliveryChannelCondition() const { return this->deliveryChannelCondition_ != nullptr;};
    void deleteDeliveryChannelCondition() { this->deliveryChannelCondition_ = nullptr;};
    inline string getDeliveryChannelCondition() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelCondition_, "") };
    inline UpdateConfigDeliveryChannelRequest& setDeliveryChannelCondition(string deliveryChannelCondition) { DARABONBA_PTR_SET_VALUE(deliveryChannelCondition_, deliveryChannelCondition) };


    // deliveryChannelId Field Functions 
    bool hasDeliveryChannelId() const { return this->deliveryChannelId_ != nullptr;};
    void deleteDeliveryChannelId() { this->deliveryChannelId_ = nullptr;};
    inline string getDeliveryChannelId() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelId_, "") };
    inline UpdateConfigDeliveryChannelRequest& setDeliveryChannelId(string deliveryChannelId) { DARABONBA_PTR_SET_VALUE(deliveryChannelId_, deliveryChannelId) };


    // deliveryChannelName Field Functions 
    bool hasDeliveryChannelName() const { return this->deliveryChannelName_ != nullptr;};
    void deleteDeliveryChannelName() { this->deliveryChannelName_ = nullptr;};
    inline string getDeliveryChannelName() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelName_, "") };
    inline UpdateConfigDeliveryChannelRequest& setDeliveryChannelName(string deliveryChannelName) { DARABONBA_PTR_SET_VALUE(deliveryChannelName_, deliveryChannelName) };


    // deliveryChannelTargetArn Field Functions 
    bool hasDeliveryChannelTargetArn() const { return this->deliveryChannelTargetArn_ != nullptr;};
    void deleteDeliveryChannelTargetArn() { this->deliveryChannelTargetArn_ = nullptr;};
    inline string getDeliveryChannelTargetArn() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelTargetArn_, "") };
    inline UpdateConfigDeliveryChannelRequest& setDeliveryChannelTargetArn(string deliveryChannelTargetArn) { DARABONBA_PTR_SET_VALUE(deliveryChannelTargetArn_, deliveryChannelTargetArn) };


    // deliverySnapshotTime Field Functions 
    bool hasDeliverySnapshotTime() const { return this->deliverySnapshotTime_ != nullptr;};
    void deleteDeliverySnapshotTime() { this->deliverySnapshotTime_ = nullptr;};
    inline string getDeliverySnapshotTime() const { DARABONBA_PTR_GET_DEFAULT(deliverySnapshotTime_, "") };
    inline UpdateConfigDeliveryChannelRequest& setDeliverySnapshotTime(string deliverySnapshotTime) { DARABONBA_PTR_SET_VALUE(deliverySnapshotTime_, deliverySnapshotTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateConfigDeliveryChannelRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nonCompliantNotification Field Functions 
    bool hasNonCompliantNotification() const { return this->nonCompliantNotification_ != nullptr;};
    void deleteNonCompliantNotification() { this->nonCompliantNotification_ = nullptr;};
    inline bool getNonCompliantNotification() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantNotification_, false) };
    inline UpdateConfigDeliveryChannelRequest& setNonCompliantNotification(bool nonCompliantNotification) { DARABONBA_PTR_SET_VALUE(nonCompliantNotification_, nonCompliantNotification) };


    // oversizedDataOSSTargetArn Field Functions 
    bool hasOversizedDataOSSTargetArn() const { return this->oversizedDataOSSTargetArn_ != nullptr;};
    void deleteOversizedDataOSSTargetArn() { this->oversizedDataOSSTargetArn_ = nullptr;};
    inline string getOversizedDataOSSTargetArn() const { DARABONBA_PTR_GET_DEFAULT(oversizedDataOSSTargetArn_, "") };
    inline UpdateConfigDeliveryChannelRequest& setOversizedDataOSSTargetArn(string oversizedDataOSSTargetArn) { DARABONBA_PTR_SET_VALUE(oversizedDataOSSTargetArn_, oversizedDataOSSTargetArn) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline UpdateConfigDeliveryChannelRequest& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // A client token used to ensure the idempotence of the request. Use a client to generate the token, and make sure that the token is unique among different requests.
    // 
    // The `ClientToken` parameter can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // Specifies whether to deliver resource compliance snapshots. Cloud Config delivers resource compliance and non-compliance information to SLS. Valid values:
    // 
    // - true: The resource compliance snapshots are delivered.
    // 
    // - false: The resource compliance snapshots are not delivered.
    shared_ptr<bool> compliantSnapshot_ {};
    // Specifies whether to deliver the resource configuration history. Cloud Config delivers the resource configuration history to OSS, SLS, or MNS when the configuration of a resource changes. Valid values:
    // 
    // - true: The resource configuration history is delivered.
    // 
    // - false (default): The resource configuration history is not delivered.
    // 
    // > This parameter is available for delivery channels of the OSS, SLS, and MNS types.
    shared_ptr<bool> configurationItemChangeNotification_ {};
    // Specifies whether to deliver scheduled resource snapshots. Cloud Config delivers scheduled resource snapshots to OSS or SLS at `04:00Z` and `16:00Z` (UTC) every day. Valid values:
    // 
    // - true: The scheduled resource snapshots are delivered.
    // 
    // - false (default): The scheduled resource snapshots are not delivered.
    shared_ptr<bool> configurationSnapshot_ {};
    // The rule that is attached to the delivery channel. This parameter is applicable to all deliveries to MNS and snapshot deliveries to SLS.
    // 
    // - If you specify the minimum risk level of events and the resource types for an MNS subscription, use the following formats:
    // 
    //   - The minimum risk level of the subscribed events: `{"filterType":"RuleRiskLevel","value":"1","multiple":false}`.
    // 
    //     `value` specifies the risk level. Valid values: 1 (high risk), 2 (medium risk), and 3 (low risk).
    // 
    //   - The resource types of the subscribed events: `{"filterType":"ResourceType","values":["ACS::ACK::Cluster","ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage"],"multiple":true}`.
    // 
    //     `values` specifies the resource types of the subscribed events. The value is a JSON array.
    //     Example:
    //     `[{"filterType":"ResourceType","values":["ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage","ACS::CDN::Domain","ACS::CEN::CenBandwidthPackage","ACS::CEN::CenInstance","ACS::CEN::Flowlog","ACS::DdosCoo::Instance"],"multiple":true}]`
    // 
    // - If you specify the resource types of snapshots delivered to SLS, use the following format: `{"filterType":"ResourceType","values":["ACS::ACK::Cluster","ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage"],"multiple":true}`.
    // 
    //   `values` specifies the resource types of the snapshots to deliver. The value is a JSON array.
    //   Example:
    //   `[{"filterType":"ResourceType","values":["ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage","ACS::CDN::Domain","ACS::CEN::CenBandwidthPackage","ACS::CEN::CenInstance","ACS::CEN::Flowlog","ACS::DdosCoo::Instance"],"multiple":true}]`
    shared_ptr<string> deliveryChannelCondition_ {};
    // The ID of the delivery channel.
    // 
    // For more information about how to obtain the delivery channel ID, see [ListConfigDeliveryChannels](https://help.aliyun.com/document_detail/429841.html).
    // 
    // This parameter is required.
    shared_ptr<string> deliveryChannelId_ {};
    // The name of the delivery channel.
    shared_ptr<string> deliveryChannelName_ {};
    // The Alibaba Cloud Resource Name (ARN) of the delivery destination. Valid values:
    // 
    // - If the delivery channel is Object Storage Service (OSS), the value is in the format of `acs:oss:{RegionId}:{accountId}:{bucketName}`. Example: `acs:oss:cn-shanghai:100931896542****:new-bucket`.
    // 
    // - If the delivery channel is MNS, the value is in the format of `acs:mns:{RegionId}:{accountId}:/topics/{topicName}`. Example: `acs:mns:cn-shanghai:100931896542****:/topics/topic1`.
    // 
    // - If the delivery channel is Simple Log Service (SLS), the value is in the format of `acs:log:{RegionId}:{accountId}:project/{projectName}/logstore/{logstoreName}`. Example: `acs:log:cn-shanghai:100931896542****:project/project1/logstore/logstore1`.
    shared_ptr<string> deliveryChannelTargetArn_ {};
    // The time of day when the scheduled resource snapshot is delivered.
    // 
    // The value is in the `HH:mmZ` format. The time is in UTC.
    // 
    // > If you enable scheduled delivery of resource snapshots, use this parameter to specify a delivery time. If you do not specify this parameter, Cloud Config delivers the scheduled resource snapshots at `04:00Z` and `16:00Z` by default.
    shared_ptr<string> deliverySnapshotTime_ {};
    // The description of the delivery channel.
    shared_ptr<string> description_ {};
    // Specifies whether to deliver resource non-compliance events. Cloud Config delivers resource non-compliance events to SLS or MNS when a resource is evaluated as non-compliant. Valid values:
    // 
    // - true: The resource non-compliance events are delivered.
    // 
    // - false (default): The resource non-compliance events are not delivered.
    // 
    // > This parameter is available only for delivery channels of the SLS and MNS types.
    shared_ptr<bool> nonCompliantNotification_ {};
    // The ARN of the OSS bucket where data is delivered when the data size exceeds the limit of the delivery channel. The value is in the format of `acs:oss:{RegionId}:{accountId}:{bucketName}`.
    // 
    // If you do not specify this parameter, Cloud Config delivers only the summary of the data.
    // 
    // > This parameter is available only for delivery channels of the SLS and MNS types. The maximum size of data that can be delivered to SLS is 1 MB. The maximum size of data that can be delivered to MNS is 64 KB.
    shared_ptr<string> oversizedDataOSSTargetArn_ {};
    // The status of the delivery channel. Valid values:
    // 
    // - 0: The delivery channel is disabled. Cloud Config retains the most recent delivery configuration and stops delivering resource data.
    // 
    // - 1 (default): The delivery channel is enabled.
    shared_ptr<int64_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
