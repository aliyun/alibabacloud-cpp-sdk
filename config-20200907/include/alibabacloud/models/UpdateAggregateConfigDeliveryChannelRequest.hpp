// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGGREGATECONFIGDELIVERYCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGGREGATECONFIGDELIVERYCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class UpdateAggregateConfigDeliveryChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAggregateConfigDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
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
    friend void from_json(const Darabonba::Json& j, UpdateAggregateConfigDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
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
    UpdateAggregateConfigDeliveryChannelRequest() = default ;
    UpdateAggregateConfigDeliveryChannelRequest(const UpdateAggregateConfigDeliveryChannelRequest &) = default ;
    UpdateAggregateConfigDeliveryChannelRequest(UpdateAggregateConfigDeliveryChannelRequest &&) = default ;
    UpdateAggregateConfigDeliveryChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAggregateConfigDeliveryChannelRequest() = default ;
    UpdateAggregateConfigDeliveryChannelRequest& operator=(const UpdateAggregateConfigDeliveryChannelRequest &) = default ;
    UpdateAggregateConfigDeliveryChannelRequest& operator=(UpdateAggregateConfigDeliveryChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->clientToken_ == nullptr && this->compliantSnapshot_ == nullptr && this->configurationItemChangeNotification_ == nullptr && this->configurationSnapshot_ == nullptr && this->deliveryChannelCondition_ == nullptr
        && this->deliveryChannelId_ == nullptr && this->deliveryChannelName_ == nullptr && this->deliveryChannelTargetArn_ == nullptr && this->deliverySnapshotTime_ == nullptr && this->description_ == nullptr
        && this->nonCompliantNotification_ == nullptr && this->oversizedDataOSSTargetArn_ == nullptr && this->status_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline UpdateAggregateConfigDeliveryChannelRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAggregateConfigDeliveryChannelRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compliantSnapshot Field Functions 
    bool hasCompliantSnapshot() const { return this->compliantSnapshot_ != nullptr;};
    void deleteCompliantSnapshot() { this->compliantSnapshot_ = nullptr;};
    inline bool getCompliantSnapshot() const { DARABONBA_PTR_GET_DEFAULT(compliantSnapshot_, false) };
    inline UpdateAggregateConfigDeliveryChannelRequest& setCompliantSnapshot(bool compliantSnapshot) { DARABONBA_PTR_SET_VALUE(compliantSnapshot_, compliantSnapshot) };


    // configurationItemChangeNotification Field Functions 
    bool hasConfigurationItemChangeNotification() const { return this->configurationItemChangeNotification_ != nullptr;};
    void deleteConfigurationItemChangeNotification() { this->configurationItemChangeNotification_ = nullptr;};
    inline bool getConfigurationItemChangeNotification() const { DARABONBA_PTR_GET_DEFAULT(configurationItemChangeNotification_, false) };
    inline UpdateAggregateConfigDeliveryChannelRequest& setConfigurationItemChangeNotification(bool configurationItemChangeNotification) { DARABONBA_PTR_SET_VALUE(configurationItemChangeNotification_, configurationItemChangeNotification) };


    // configurationSnapshot Field Functions 
    bool hasConfigurationSnapshot() const { return this->configurationSnapshot_ != nullptr;};
    void deleteConfigurationSnapshot() { this->configurationSnapshot_ = nullptr;};
    inline bool getConfigurationSnapshot() const { DARABONBA_PTR_GET_DEFAULT(configurationSnapshot_, false) };
    inline UpdateAggregateConfigDeliveryChannelRequest& setConfigurationSnapshot(bool configurationSnapshot) { DARABONBA_PTR_SET_VALUE(configurationSnapshot_, configurationSnapshot) };


    // deliveryChannelCondition Field Functions 
    bool hasDeliveryChannelCondition() const { return this->deliveryChannelCondition_ != nullptr;};
    void deleteDeliveryChannelCondition() { this->deliveryChannelCondition_ = nullptr;};
    inline string getDeliveryChannelCondition() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelCondition_, "") };
    inline UpdateAggregateConfigDeliveryChannelRequest& setDeliveryChannelCondition(string deliveryChannelCondition) { DARABONBA_PTR_SET_VALUE(deliveryChannelCondition_, deliveryChannelCondition) };


    // deliveryChannelId Field Functions 
    bool hasDeliveryChannelId() const { return this->deliveryChannelId_ != nullptr;};
    void deleteDeliveryChannelId() { this->deliveryChannelId_ = nullptr;};
    inline string getDeliveryChannelId() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelId_, "") };
    inline UpdateAggregateConfigDeliveryChannelRequest& setDeliveryChannelId(string deliveryChannelId) { DARABONBA_PTR_SET_VALUE(deliveryChannelId_, deliveryChannelId) };


    // deliveryChannelName Field Functions 
    bool hasDeliveryChannelName() const { return this->deliveryChannelName_ != nullptr;};
    void deleteDeliveryChannelName() { this->deliveryChannelName_ = nullptr;};
    inline string getDeliveryChannelName() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelName_, "") };
    inline UpdateAggregateConfigDeliveryChannelRequest& setDeliveryChannelName(string deliveryChannelName) { DARABONBA_PTR_SET_VALUE(deliveryChannelName_, deliveryChannelName) };


    // deliveryChannelTargetArn Field Functions 
    bool hasDeliveryChannelTargetArn() const { return this->deliveryChannelTargetArn_ != nullptr;};
    void deleteDeliveryChannelTargetArn() { this->deliveryChannelTargetArn_ = nullptr;};
    inline string getDeliveryChannelTargetArn() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelTargetArn_, "") };
    inline UpdateAggregateConfigDeliveryChannelRequest& setDeliveryChannelTargetArn(string deliveryChannelTargetArn) { DARABONBA_PTR_SET_VALUE(deliveryChannelTargetArn_, deliveryChannelTargetArn) };


    // deliverySnapshotTime Field Functions 
    bool hasDeliverySnapshotTime() const { return this->deliverySnapshotTime_ != nullptr;};
    void deleteDeliverySnapshotTime() { this->deliverySnapshotTime_ = nullptr;};
    inline string getDeliverySnapshotTime() const { DARABONBA_PTR_GET_DEFAULT(deliverySnapshotTime_, "") };
    inline UpdateAggregateConfigDeliveryChannelRequest& setDeliverySnapshotTime(string deliverySnapshotTime) { DARABONBA_PTR_SET_VALUE(deliverySnapshotTime_, deliverySnapshotTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAggregateConfigDeliveryChannelRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nonCompliantNotification Field Functions 
    bool hasNonCompliantNotification() const { return this->nonCompliantNotification_ != nullptr;};
    void deleteNonCompliantNotification() { this->nonCompliantNotification_ = nullptr;};
    inline bool getNonCompliantNotification() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantNotification_, false) };
    inline UpdateAggregateConfigDeliveryChannelRequest& setNonCompliantNotification(bool nonCompliantNotification) { DARABONBA_PTR_SET_VALUE(nonCompliantNotification_, nonCompliantNotification) };


    // oversizedDataOSSTargetArn Field Functions 
    bool hasOversizedDataOSSTargetArn() const { return this->oversizedDataOSSTargetArn_ != nullptr;};
    void deleteOversizedDataOSSTargetArn() { this->oversizedDataOSSTargetArn_ = nullptr;};
    inline string getOversizedDataOSSTargetArn() const { DARABONBA_PTR_GET_DEFAULT(oversizedDataOSSTargetArn_, "") };
    inline UpdateAggregateConfigDeliveryChannelRequest& setOversizedDataOSSTargetArn(string oversizedDataOSSTargetArn) { DARABONBA_PTR_SET_VALUE(oversizedDataOSSTargetArn_, oversizedDataOSSTargetArn) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline UpdateAggregateConfigDeliveryChannelRequest& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of the account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The `token` can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25693.html)
    shared_ptr<string> clientToken_ {};
    // Specifies whether to deliver scheduled compliant snapshots. Cloud Config delivers scheduled compliant snapshots at `04:00Z` and `16:00Z` to Log Service every day. The time is displayed in UTC. Valid values:
    // 
    // *   true: Cloud Config delivers scheduled compliant snapshots.
    // *   false (default): Cloud Config does not deliver scheduled compliant snapshots.
    shared_ptr<bool> compliantSnapshot_ {};
    // Specifies whether to deliver resource change logs. If you set this parameter to true, Cloud Config delivers resource change logs to OSS, Log Service, or MNS when the configurations of the resources change. Valid values:
    // 
    // *   true: Cloud Config delivers resource change logs.
    // *   false (default): Cloud Config does not deliver resource change logs.
    // 
    // > This parameter is available for delivery channels of the OSS, SLS, and MNS types.
    shared_ptr<bool> configurationItemChangeNotification_ {};
    // Specifies whether to deliver scheduled resource snapshots. Cloud Config delivers scheduled resource snapshots at `04:00Z` and `16:00Z` to OSS, MNS, or Log Service every day. The time is displayed in UTC. Valid values:
    // 
    // *   true: Cloud Config delivers scheduled resource snapshots.
    // *   false (default): Cloud Config does not deliver scheduled resource snapshots.
    shared_ptr<bool> configurationSnapshot_ {};
    // The rule that is attached to the delivery channel. This parameter is available when you deliver data of all types to MNS or deliver snapshots to Log Service.
    // 
    // *   If the value of the DeliveryChannelType parameter is MNS, take note of the following settings of the lowest risk level and resource types of the events to which you subscribed:
    // 
    //     *   The lowest risk level of the events to which you want to subscribe is in the following format: `{"filterType":"RuleRiskLevel","value":"1","multiple":false}`.
    // 
    //         The `value` field indicates the lowest risk level of the events to which you subscribed. Valid values: 1, 2, and 3, where 1 indicates the high risk level, 2 indicates the medium risk level, and 3 indicates the low risk level.
    // 
    //     *   The setting of the resource types of the events to which you want to subscribe is in the following format: `{"filterType":"ResourceType","values":["ACS::ACK::Cluster","ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage"],"multiple":true}`.
    // 
    //         The `values` field indicates the resource types of the events to which you subscribed. The value of the field is a JSON array. Examples:
    // 
    // `[{"filterType":"ResourceType","values":["ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage","ACS::CDN::Domain","ACS::CEN::CenBandwidthPackage","ACS::CEN::CenInstance","ACS::CEN::Flowlog","ACS::DdosCoo::Instance"],"multiple":true}]`
    // 
    // *   If you set the DeliveryChannelType parameter to SLS, the setting of the resource types of the snapshots to which you want to deliver is in the following format: `{"filterType":"ResourceType","values":["ACS::ACK::Cluster","ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage"],"multiple":true}`.
    // 
    //     The `values` field specifies the resource types of the snapshots to which you want to deliver. The value of the field is a JSON array. Examples:
    // 
    // `[{"filterType":"ResourceType","values":["ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage","ACS::CDN::Domain","ACS::CEN::CenBandwidthPackage","ACS::CEN::CenInstance","ACS::CEN::Flowlog","ACS::DdosCoo::Instance"],"multiple":true}]`
    shared_ptr<string> deliveryChannelCondition_ {};
    // The ID of the delivery channel.
    // 
    // For more information about how to obtain the ID of a delivery channel, see [ListAggregateConfigDeliveryChannels](https://help.aliyun.com/document_detail/429842.html).
    // 
    // This parameter is required.
    shared_ptr<string> deliveryChannelId_ {};
    // The name of the delivery channel.
    shared_ptr<string> deliveryChannelName_ {};
    // The ARN of the delivery destination. Valid values:
    // 
    // *   `acs:oss:{RegionId}:{accountId}:{bucketName}` if your delivery destination is an OSS bucket. Example: `acs:oss:cn-shanghai:100931896542****:new-bucket`.
    // *   `acs:mns:{RegionId}:{accountId}:/topics/{topicName}` if your delivery destination is an MNS topic. Example: `acs:mns:cn-shanghai:100931896542****:/topics/topic1`.
    // *   `acs:log:{RegionId}:{accountId}:project/{projectName}/logstore/{logstoreName}` if your delivery destination is a Log Service Logstore. Example: `acs:log:cn-shanghai:100931896542****:project/project1/logstore/logstore1`.
    shared_ptr<string> deliveryChannelTargetArn_ {};
    // The time when Cloud Config delivers scheduled resources snapshots every day.
    // 
    // Format: `HH:mmZ`. This time is displayed in UTC.
    // 
    // > When you enable the scheduled resource delivery feature, you can specify a custom delivery time for this parameter. If you do not configure this parameter, Cloud Config automatically delivers scheduled resource snapshots at `04:00Z` and `16:00Z` every day.
    shared_ptr<string> deliverySnapshotTime_ {};
    // The description of the delivery channel.
    shared_ptr<string> description_ {};
    // Specifies whether to deliver resource non-compliance events. If you set this parameter to true, Cloud Config delivers resource non-compliance events to Log Service or MNS when resources are considered non-compliant. Valid values:
    // 
    // *   true: Cloud Config delivers resource non-compliance events.
    // *   false (default): Cloud Config does not deliver resource non-compliance events.
    // 
    // > This parameter is available only for delivery channels of the SLS or MNS type.
    shared_ptr<bool> nonCompliantNotification_ {};
    // The ARN of the OSS bucket to which the delivered data is transferred when the size of the data exceeds the specified upper limit of the delivery channel. Format: `acs:oss:{RegionId}:{accountId}:{bucketName}`.
    // 
    // If you do not configure this parameter, Cloud Config delivers only summary data.
    // 
    // > This parameter is available only for delivery channels of the SLS or MNS type. The upper limit on the storage size of delivery channels of the SLS type is 1 MB, and the upper limit on the storage size of delivery channels of the MNS type is 64 KB.
    shared_ptr<string> oversizedDataOSSTargetArn_ {};
    // Specifies whether to enable the delivery channel. Valid values:
    // 
    // *   0: The delivery channel is disabled. Cloud Config retains the most recent delivery configuration and stops resource data delivery.
    // *   1 (default): The delivery channel is enabled.
    shared_ptr<int64_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
