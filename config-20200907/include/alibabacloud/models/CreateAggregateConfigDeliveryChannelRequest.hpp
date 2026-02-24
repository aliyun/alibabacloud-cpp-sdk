// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGGREGATECONFIGDELIVERYCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGGREGATECONFIGDELIVERYCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CreateAggregateConfigDeliveryChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAggregateConfigDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CompliantSnapshot, compliantSnapshot_);
      DARABONBA_PTR_TO_JSON(ConfigurationItemChangeNotification, configurationItemChangeNotification_);
      DARABONBA_PTR_TO_JSON(ConfigurationSnapshot, configurationSnapshot_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelCondition, deliveryChannelCondition_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelTargetArn, deliveryChannelTargetArn_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelType, deliveryChannelType_);
      DARABONBA_PTR_TO_JSON(DeliverySnapshotTime, deliverySnapshotTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NonCompliantNotification, nonCompliantNotification_);
      DARABONBA_PTR_TO_JSON(OversizedDataOSSTargetArn, oversizedDataOSSTargetArn_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAggregateConfigDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CompliantSnapshot, compliantSnapshot_);
      DARABONBA_PTR_FROM_JSON(ConfigurationItemChangeNotification, configurationItemChangeNotification_);
      DARABONBA_PTR_FROM_JSON(ConfigurationSnapshot, configurationSnapshot_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelCondition, deliveryChannelCondition_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelTargetArn, deliveryChannelTargetArn_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelType, deliveryChannelType_);
      DARABONBA_PTR_FROM_JSON(DeliverySnapshotTime, deliverySnapshotTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NonCompliantNotification, nonCompliantNotification_);
      DARABONBA_PTR_FROM_JSON(OversizedDataOSSTargetArn, oversizedDataOSSTargetArn_);
    };
    CreateAggregateConfigDeliveryChannelRequest() = default ;
    CreateAggregateConfigDeliveryChannelRequest(const CreateAggregateConfigDeliveryChannelRequest &) = default ;
    CreateAggregateConfigDeliveryChannelRequest(CreateAggregateConfigDeliveryChannelRequest &&) = default ;
    CreateAggregateConfigDeliveryChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAggregateConfigDeliveryChannelRequest() = default ;
    CreateAggregateConfigDeliveryChannelRequest& operator=(const CreateAggregateConfigDeliveryChannelRequest &) = default ;
    CreateAggregateConfigDeliveryChannelRequest& operator=(CreateAggregateConfigDeliveryChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->clientToken_ == nullptr && this->compliantSnapshot_ == nullptr && this->configurationItemChangeNotification_ == nullptr && this->configurationSnapshot_ == nullptr && this->deliveryChannelCondition_ == nullptr
        && this->deliveryChannelName_ == nullptr && this->deliveryChannelTargetArn_ == nullptr && this->deliveryChannelType_ == nullptr && this->deliverySnapshotTime_ == nullptr && this->description_ == nullptr
        && this->nonCompliantNotification_ == nullptr && this->oversizedDataOSSTargetArn_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline CreateAggregateConfigDeliveryChannelRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAggregateConfigDeliveryChannelRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compliantSnapshot Field Functions 
    bool hasCompliantSnapshot() const { return this->compliantSnapshot_ != nullptr;};
    void deleteCompliantSnapshot() { this->compliantSnapshot_ = nullptr;};
    inline bool getCompliantSnapshot() const { DARABONBA_PTR_GET_DEFAULT(compliantSnapshot_, false) };
    inline CreateAggregateConfigDeliveryChannelRequest& setCompliantSnapshot(bool compliantSnapshot) { DARABONBA_PTR_SET_VALUE(compliantSnapshot_, compliantSnapshot) };


    // configurationItemChangeNotification Field Functions 
    bool hasConfigurationItemChangeNotification() const { return this->configurationItemChangeNotification_ != nullptr;};
    void deleteConfigurationItemChangeNotification() { this->configurationItemChangeNotification_ = nullptr;};
    inline bool getConfigurationItemChangeNotification() const { DARABONBA_PTR_GET_DEFAULT(configurationItemChangeNotification_, false) };
    inline CreateAggregateConfigDeliveryChannelRequest& setConfigurationItemChangeNotification(bool configurationItemChangeNotification) { DARABONBA_PTR_SET_VALUE(configurationItemChangeNotification_, configurationItemChangeNotification) };


    // configurationSnapshot Field Functions 
    bool hasConfigurationSnapshot() const { return this->configurationSnapshot_ != nullptr;};
    void deleteConfigurationSnapshot() { this->configurationSnapshot_ = nullptr;};
    inline bool getConfigurationSnapshot() const { DARABONBA_PTR_GET_DEFAULT(configurationSnapshot_, false) };
    inline CreateAggregateConfigDeliveryChannelRequest& setConfigurationSnapshot(bool configurationSnapshot) { DARABONBA_PTR_SET_VALUE(configurationSnapshot_, configurationSnapshot) };


    // deliveryChannelCondition Field Functions 
    bool hasDeliveryChannelCondition() const { return this->deliveryChannelCondition_ != nullptr;};
    void deleteDeliveryChannelCondition() { this->deliveryChannelCondition_ = nullptr;};
    inline string getDeliveryChannelCondition() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelCondition_, "") };
    inline CreateAggregateConfigDeliveryChannelRequest& setDeliveryChannelCondition(string deliveryChannelCondition) { DARABONBA_PTR_SET_VALUE(deliveryChannelCondition_, deliveryChannelCondition) };


    // deliveryChannelName Field Functions 
    bool hasDeliveryChannelName() const { return this->deliveryChannelName_ != nullptr;};
    void deleteDeliveryChannelName() { this->deliveryChannelName_ = nullptr;};
    inline string getDeliveryChannelName() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelName_, "") };
    inline CreateAggregateConfigDeliveryChannelRequest& setDeliveryChannelName(string deliveryChannelName) { DARABONBA_PTR_SET_VALUE(deliveryChannelName_, deliveryChannelName) };


    // deliveryChannelTargetArn Field Functions 
    bool hasDeliveryChannelTargetArn() const { return this->deliveryChannelTargetArn_ != nullptr;};
    void deleteDeliveryChannelTargetArn() { this->deliveryChannelTargetArn_ = nullptr;};
    inline string getDeliveryChannelTargetArn() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelTargetArn_, "") };
    inline CreateAggregateConfigDeliveryChannelRequest& setDeliveryChannelTargetArn(string deliveryChannelTargetArn) { DARABONBA_PTR_SET_VALUE(deliveryChannelTargetArn_, deliveryChannelTargetArn) };


    // deliveryChannelType Field Functions 
    bool hasDeliveryChannelType() const { return this->deliveryChannelType_ != nullptr;};
    void deleteDeliveryChannelType() { this->deliveryChannelType_ = nullptr;};
    inline string getDeliveryChannelType() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelType_, "") };
    inline CreateAggregateConfigDeliveryChannelRequest& setDeliveryChannelType(string deliveryChannelType) { DARABONBA_PTR_SET_VALUE(deliveryChannelType_, deliveryChannelType) };


    // deliverySnapshotTime Field Functions 
    bool hasDeliverySnapshotTime() const { return this->deliverySnapshotTime_ != nullptr;};
    void deleteDeliverySnapshotTime() { this->deliverySnapshotTime_ = nullptr;};
    inline string getDeliverySnapshotTime() const { DARABONBA_PTR_GET_DEFAULT(deliverySnapshotTime_, "") };
    inline CreateAggregateConfigDeliveryChannelRequest& setDeliverySnapshotTime(string deliverySnapshotTime) { DARABONBA_PTR_SET_VALUE(deliverySnapshotTime_, deliverySnapshotTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAggregateConfigDeliveryChannelRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nonCompliantNotification Field Functions 
    bool hasNonCompliantNotification() const { return this->nonCompliantNotification_ != nullptr;};
    void deleteNonCompliantNotification() { this->nonCompliantNotification_ = nullptr;};
    inline bool getNonCompliantNotification() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantNotification_, false) };
    inline CreateAggregateConfigDeliveryChannelRequest& setNonCompliantNotification(bool nonCompliantNotification) { DARABONBA_PTR_SET_VALUE(nonCompliantNotification_, nonCompliantNotification) };


    // oversizedDataOSSTargetArn Field Functions 
    bool hasOversizedDataOSSTargetArn() const { return this->oversizedDataOSSTargetArn_ != nullptr;};
    void deleteOversizedDataOSSTargetArn() { this->oversizedDataOSSTargetArn_ = nullptr;};
    inline string getOversizedDataOSSTargetArn() const { DARABONBA_PTR_GET_DEFAULT(oversizedDataOSSTargetArn_, "") };
    inline CreateAggregateConfigDeliveryChannelRequest& setOversizedDataOSSTargetArn(string oversizedDataOSSTargetArn) { DARABONBA_PTR_SET_VALUE(oversizedDataOSSTargetArn_, oversizedDataOSSTargetArn) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // A client-generated token that you can use to ensure the idempotence of the request. You must make sure that the token is unique for each request.
    // 
    // The `ClientToken` parameter can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // Specifies whether to deliver compliance snapshots. Cloud Config delivers information about the compliance and non-compliance of resources to SLS. Valid values:
    // 
    // - true: Deliver compliance snapshots.
    // 
    // - false: Do not deliver compliance snapshots.
    shared_ptr<bool> compliantSnapshot_ {};
    // Specifies whether to deliver the resource configuration change history. If the configurations of a resource change, Cloud Config delivers the configuration change history to OSS, SLS, or MNS. Valid values:
    // 
    // - true: Deliver the resource configuration change history.
    // 
    // - false (default): Do not deliver the resource configuration change history.
    // 
    // > * If the delivery channel type is OSS, you must set at least one of the \\`ConfigurationSnapshot\\` and \\`ConfigurationItemChangeNotification\\` parameters to true.
    // 
    // > - If the delivery channel type is SLS, you must set at least one of the \\`ConfigurationSnapshot\\`, \\`ConfigurationItemChangeNotification\\`, and \\`NonCompliantNotification\\` parameters to true.
    // 
    // > - If the delivery channel type is MNS, you must set at least one of the \\`ConfigurationItemChangeNotification\\` and \\`NonCompliantNotification\\` parameters to true.
    shared_ptr<bool> configurationItemChangeNotification_ {};
    // Specifies whether to deliver scheduled resource snapshots. Cloud Config delivers scheduled resource snapshots to OSS, SLS, or MNS at `04:00Z` and `16:00Z` (UTC) every day. Valid values:
    // 
    // - true: Deliver scheduled resource snapshots.
    // 
    // - false (default): Do not deliver scheduled resource snapshots.
    // 
    // > * If the delivery channel type is OSS, you must set at least one of the \\`ConfigurationSnapshot\\` and \\`ConfigurationItemChangeNotification\\` parameters to true.
    // 
    // > - If the delivery channel type is SLS, you must set at least one of the \\`ConfigurationSnapshot\\`, \\`ConfigurationItemChangeNotification\\`, and \\`NonCompliantNotification\\` parameters to true.
    shared_ptr<bool> configurationSnapshot_ {};
    // The rule that is used to filter events or resources for the delivery channel. This parameter is supported for all deliveries to MNS channels and for snapshot deliveries to SLS channels.
    // 
    // - For an MNS channel, you can specify the following rules to filter events:
    // 
    //   - The minimum risk level of the events to which you want to subscribe is `{"filterType":"RuleRiskLevel","value":"1","multiple":false}`.
    // 
    //     The \\`value\\` parameter specifies the risk level. Valid values: 1, 2, and 3. The value 1 indicates high risk. The value 2 indicates medium risk. The value 3 indicates low risk.
    // 
    //   - The resource types of the events to which you want to subscribe are `{"filterType":"ResourceType","values":["ACS::ACK::Cluster","ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage"],"multiple":true}`.
    // 
    //     The \\`values\\` parameter specifies the resource types of the events to which you want to subscribe. The value of this parameter is a JSON array of strings.
    //     Example:
    //     `[{"filterType":"ResourceType","values":["ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage","ACS::CDN::Domain","ACS::CEN::CenBandwidthPackage","ACS::CEN::CenInstance","ACS::CEN::Flowlog","ACS::DdosCoo::Instance"],"multiple":true}]`
    // 
    // - For an SLS channel, you can specify the following rule to filter snapshots:
    // 
    //   The resource types of the snapshots to be delivered are `{"filterType":"ResourceType","values":["ACS::ACK::Cluster","ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage"],"multiple":true}`.
    // 
    //   `[{"filterType":"ResourceType","values":["ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage","ACS::CDN::Domain","ACS::CEN::CenBandwidthPackage","ACS::CEN::CenInstance","ACS::CEN::Flowlog","ACS::DdosCoo::Instance"],"multiple":true}]`
    shared_ptr<string> deliveryChannelCondition_ {};
    // The name of the delivery channel.
    // 
    // > If you do not set this parameter, this parameter is empty.
    shared_ptr<string> deliveryChannelName_ {};
    // The ARN of the delivery destination. Valid values:
    // 
    // - If the delivery channel type is OSS, the value of this parameter is in the `acs:oss:{RegionId}:{accountId}:{bucketName}` format. Example: `acs:oss:cn-shanghai:100931896542****:new-bucket`.
    // 
    // - If the delivery channel type is MNS, the value of this parameter is in the `acs:mns:{RegionId}:{accountId}:/topics/{topicName}` format. Example: `acs:mns:cn-shanghai:100931896542****:/topics/topic1`.
    // 
    // - If the delivery channel type is SLS, the value of this parameter is in the `acs:log:{RegionId}:{accountId}:project/{projectName}/logstore/{logstoreName}` format. Example: `acs:log:cn-shanghai:100931896542****:project/project1/logstore/logstore1`.
    // 
    // This parameter is required.
    shared_ptr<string> deliveryChannelTargetArn_ {};
    // The type of the delivery channel. Valid values:
    // 
    // - OSS: Object Storage Service
    // 
    // - MNS: Simple Message Queue
    // 
    // - SLS: Simple Log Service
    // 
    // This parameter is required.
    shared_ptr<string> deliveryChannelType_ {};
    // The time of day from which scheduled resource snapshots are delivered. The time is displayed in UTC.
    // 
    // The value is in the `HH:mmZ` format.
    // 
    // > If you enable the scheduled delivery of resource snapshots, you can use this parameter to customize the delivery time. If you do not set this parameter, the snapshots are delivered at `04:00Z` and `16:00Z` every day by default.
    shared_ptr<string> deliverySnapshotTime_ {};
    // The description of the delivery channel.
    shared_ptr<string> description_ {};
    // Specifies whether to deliver resource non-compliance events. If a resource is evaluated as non-compliant, Cloud Config delivers the non-compliance event to SLS or MNS. Valid values:
    // 
    // - true: Deliver resource non-compliance events.
    // 
    // - false (default): Do not deliver resource non-compliance events.
    // 
    // > * If the delivery channel type is SLS, you must set at least one of the \\`ConfigurationSnapshot\\`, \\`ConfigurationItemChangeNotification\\`, and \\`NonCompliantNotification\\` parameters to true.
    // 
    // > - If the delivery channel type is MNS, you must set at least one of the \\`ConfigurationItemChangeNotification\\` and \\`NonCompliantNotification\\` parameters to true.
    shared_ptr<bool> nonCompliantNotification_ {};
    // The ARN of the OSS bucket that is used to store oversized data to be delivered when the size of the data exceeds the specified limit of the delivery channel. The value is in the `acs:oss:{RegionId}:{accountId}:{bucketName}` format.
    // 
    // If you do not set this parameter, Cloud Config delivers only summary information.
    // 
    // > This parameter is applicable only to delivery channels of the SLS or MNS type. The maximum size of data that can be delivered to an SLS Logstore is 1 MB. The maximum size of data that can be delivered to an MNS topic is 64 KB.
    shared_ptr<string> oversizedDataOSSTargetArn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
