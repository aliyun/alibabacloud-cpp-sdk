// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONFIGDELIVERYCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONFIGDELIVERYCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CreateConfigDeliveryChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConfigDeliveryChannelRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateConfigDeliveryChannelRequest& obj) { 
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
    CreateConfigDeliveryChannelRequest() = default ;
    CreateConfigDeliveryChannelRequest(const CreateConfigDeliveryChannelRequest &) = default ;
    CreateConfigDeliveryChannelRequest(CreateConfigDeliveryChannelRequest &&) = default ;
    CreateConfigDeliveryChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConfigDeliveryChannelRequest() = default ;
    CreateConfigDeliveryChannelRequest& operator=(const CreateConfigDeliveryChannelRequest &) = default ;
    CreateConfigDeliveryChannelRequest& operator=(CreateConfigDeliveryChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->compliantSnapshot_ == nullptr && this->configurationItemChangeNotification_ == nullptr && this->configurationSnapshot_ == nullptr && this->deliveryChannelCondition_ == nullptr && this->deliveryChannelName_ == nullptr
        && this->deliveryChannelTargetArn_ == nullptr && this->deliveryChannelType_ == nullptr && this->deliverySnapshotTime_ == nullptr && this->description_ == nullptr && this->nonCompliantNotification_ == nullptr
        && this->oversizedDataOSSTargetArn_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateConfigDeliveryChannelRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compliantSnapshot Field Functions 
    bool hasCompliantSnapshot() const { return this->compliantSnapshot_ != nullptr;};
    void deleteCompliantSnapshot() { this->compliantSnapshot_ = nullptr;};
    inline bool getCompliantSnapshot() const { DARABONBA_PTR_GET_DEFAULT(compliantSnapshot_, false) };
    inline CreateConfigDeliveryChannelRequest& setCompliantSnapshot(bool compliantSnapshot) { DARABONBA_PTR_SET_VALUE(compliantSnapshot_, compliantSnapshot) };


    // configurationItemChangeNotification Field Functions 
    bool hasConfigurationItemChangeNotification() const { return this->configurationItemChangeNotification_ != nullptr;};
    void deleteConfigurationItemChangeNotification() { this->configurationItemChangeNotification_ = nullptr;};
    inline bool getConfigurationItemChangeNotification() const { DARABONBA_PTR_GET_DEFAULT(configurationItemChangeNotification_, false) };
    inline CreateConfigDeliveryChannelRequest& setConfigurationItemChangeNotification(bool configurationItemChangeNotification) { DARABONBA_PTR_SET_VALUE(configurationItemChangeNotification_, configurationItemChangeNotification) };


    // configurationSnapshot Field Functions 
    bool hasConfigurationSnapshot() const { return this->configurationSnapshot_ != nullptr;};
    void deleteConfigurationSnapshot() { this->configurationSnapshot_ = nullptr;};
    inline bool getConfigurationSnapshot() const { DARABONBA_PTR_GET_DEFAULT(configurationSnapshot_, false) };
    inline CreateConfigDeliveryChannelRequest& setConfigurationSnapshot(bool configurationSnapshot) { DARABONBA_PTR_SET_VALUE(configurationSnapshot_, configurationSnapshot) };


    // deliveryChannelCondition Field Functions 
    bool hasDeliveryChannelCondition() const { return this->deliveryChannelCondition_ != nullptr;};
    void deleteDeliveryChannelCondition() { this->deliveryChannelCondition_ = nullptr;};
    inline string getDeliveryChannelCondition() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelCondition_, "") };
    inline CreateConfigDeliveryChannelRequest& setDeliveryChannelCondition(string deliveryChannelCondition) { DARABONBA_PTR_SET_VALUE(deliveryChannelCondition_, deliveryChannelCondition) };


    // deliveryChannelName Field Functions 
    bool hasDeliveryChannelName() const { return this->deliveryChannelName_ != nullptr;};
    void deleteDeliveryChannelName() { this->deliveryChannelName_ = nullptr;};
    inline string getDeliveryChannelName() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelName_, "") };
    inline CreateConfigDeliveryChannelRequest& setDeliveryChannelName(string deliveryChannelName) { DARABONBA_PTR_SET_VALUE(deliveryChannelName_, deliveryChannelName) };


    // deliveryChannelTargetArn Field Functions 
    bool hasDeliveryChannelTargetArn() const { return this->deliveryChannelTargetArn_ != nullptr;};
    void deleteDeliveryChannelTargetArn() { this->deliveryChannelTargetArn_ = nullptr;};
    inline string getDeliveryChannelTargetArn() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelTargetArn_, "") };
    inline CreateConfigDeliveryChannelRequest& setDeliveryChannelTargetArn(string deliveryChannelTargetArn) { DARABONBA_PTR_SET_VALUE(deliveryChannelTargetArn_, deliveryChannelTargetArn) };


    // deliveryChannelType Field Functions 
    bool hasDeliveryChannelType() const { return this->deliveryChannelType_ != nullptr;};
    void deleteDeliveryChannelType() { this->deliveryChannelType_ = nullptr;};
    inline string getDeliveryChannelType() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelType_, "") };
    inline CreateConfigDeliveryChannelRequest& setDeliveryChannelType(string deliveryChannelType) { DARABONBA_PTR_SET_VALUE(deliveryChannelType_, deliveryChannelType) };


    // deliverySnapshotTime Field Functions 
    bool hasDeliverySnapshotTime() const { return this->deliverySnapshotTime_ != nullptr;};
    void deleteDeliverySnapshotTime() { this->deliverySnapshotTime_ = nullptr;};
    inline string getDeliverySnapshotTime() const { DARABONBA_PTR_GET_DEFAULT(deliverySnapshotTime_, "") };
    inline CreateConfigDeliveryChannelRequest& setDeliverySnapshotTime(string deliverySnapshotTime) { DARABONBA_PTR_SET_VALUE(deliverySnapshotTime_, deliverySnapshotTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConfigDeliveryChannelRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nonCompliantNotification Field Functions 
    bool hasNonCompliantNotification() const { return this->nonCompliantNotification_ != nullptr;};
    void deleteNonCompliantNotification() { this->nonCompliantNotification_ = nullptr;};
    inline bool getNonCompliantNotification() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantNotification_, false) };
    inline CreateConfigDeliveryChannelRequest& setNonCompliantNotification(bool nonCompliantNotification) { DARABONBA_PTR_SET_VALUE(nonCompliantNotification_, nonCompliantNotification) };


    // oversizedDataOSSTargetArn Field Functions 
    bool hasOversizedDataOSSTargetArn() const { return this->oversizedDataOSSTargetArn_ != nullptr;};
    void deleteOversizedDataOSSTargetArn() { this->oversizedDataOSSTargetArn_ = nullptr;};
    inline string getOversizedDataOSSTargetArn() const { DARABONBA_PTR_GET_DEFAULT(oversizedDataOSSTargetArn_, "") };
    inline CreateConfigDeliveryChannelRequest& setOversizedDataOSSTargetArn(string oversizedDataOSSTargetArn) { DARABONBA_PTR_SET_VALUE(oversizedDataOSSTargetArn_, oversizedDataOSSTargetArn) };


  protected:
    // A client token. It is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that the value is unique among different requests.
    // 
    // `ClientToken` can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // Specifies whether to deliver compliance snapshots. Cloud Config delivers the compliance and non-compliance information of resources to SLS. Valid values:
    // 
    // - true: Deliver compliance snapshots.
    // 
    // - false: Do not deliver compliance snapshots.
    shared_ptr<bool> compliantSnapshot_ {};
    // Specifies whether to deliver resource configuration histories. When the configuration of a resource changes, Cloud Config delivers the resource configuration history to OSS, SLS, or MNS. Valid values:
    // 
    // - true: Deliver resource configuration histories.
    // 
    // - false (default): Do not deliver resource configuration histories.
    // 
    // > * If the delivery channel is OSS, you must set at least one of `ConfigurationSnapshot` (scheduled resource snapshots) and `ConfigurationItemChangeNotification` (resource configuration histories) to true.
    // 
    // > - If the delivery channel is SLS, you must set at least one of `ConfigurationSnapshot` (scheduled resource snapshots), `CompliantSnapshot` (compliance snapshots), `ConfigurationItemChangeNotification` (resource configuration histories), and `NonCompliantNotification` (non-compliant events) to true.
    // 
    // > - If the delivery channel is MNS, you must set at least one of `ConfigurationItemChangeNotification` (resource configuration histories) and `NonCompliantNotification` (non-compliant events) to true.
    shared_ptr<bool> configurationItemChangeNotification_ {};
    // Specifies whether to deliver scheduled resource snapshots. Cloud Config delivers scheduled resource snapshots to OSS or SLS at `04:00Z` and `16:00Z` (UTC) every day. Valid values:
    // 
    // - true: Deliver scheduled resource snapshots.
    // 
    // - false (default): Do not deliver scheduled resource snapshots.
    // 
    // > * If the delivery channel is OSS, you must set at least one of `ConfigurationSnapshot` (scheduled resource snapshots) and `ConfigurationItemChangeNotification` (resource configuration histories) to true.
    // 
    // > - If the delivery channel is SLS, you must set at least one of `ConfigurationSnapshot` (scheduled resource snapshots), `ConfigurationItemChangeNotification` (resource configuration histories), `CompliantSnapshot` (compliance snapshots), and `NonCompliantNotification` (non-compliant events) to true.
    shared_ptr<bool> configurationSnapshot_ {};
    // An additional rule for the delivery channel. Use this rule to specify filter conditions for subscriptions.
    // 
    // - If you subscribe to compliance events, you can specify the minimum risk level and resource types as follows:
    // 
    //   - To specify the minimum risk level of events, use `{"filterType":"RuleRiskLevel","value":"1","multiple":false}`.
    // 
    //     `value` specifies the risk level to filter. Valid values: 1 for high, 2 for medium, and 3 for low.
    // 
    //     `multiple` specifies whether the filter supports multiple values. The risk level filter supports only a single value. Therefore, set `multiple` to `false` when you deliver compliance events.
    // 
    //   - To specify the resource types of events, use `{"filterType":"ResourceType","values":["ACS::ACK::Cluster","ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage"],"multiple":true}`.
    // 
    //     `values` specifies the resource types to which you want to subscribe. The value is a JSON array of resource types.
    //     Example:
    //     `[{"filterType":"ResourceType","values":["ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage","ACS::CDN::Domain","ACS::CEN::CenBandwidthPackage","ACS::CEN::CenInstance","ACS::CEN::Flowlog","ACS::DdosCoo::Instance"],"multiple":true}]`
    // 
    //     `multiple` specifies whether the filter supports multiple values. The resource type filter supports multiple values. If you select multiple resource types, set `multiple` to `true`.
    // 
    //   - You can also specify a risk level and resource types at the same time. Example:
    //     `[{"filterType":"RuleRiskLevel","value":"2","multiple":false},{"filterType":"ResourceType","values":["ACS::CDN::Domain","ACS::ActionTrail::Trail"],"multiple":true}]`
    // 
    // - If you subscribe to resource configuration deliveries, you can specify the resource types as `{"filterType":"ResourceType","values":["ACS::ACK::Cluster","ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage"],"multiple":true}`.
    // 
    //   `values` specifies the resource types that you want to deliver. The value is a JSON array of resource types.
    //   Example:
    //   `[{"filterType":"ResourceType","values":["ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage","ACS::CDN::Domain","ACS::CEN::CenBandwidthPackage","ACS::CEN::CenInstance","ACS::CEN::Flowlog","ACS::DdosCoo::Instance"],"multiple":true}]`
    shared_ptr<string> deliveryChannelCondition_ {};
    // The name of the delivery channel.
    // 
    // > If you do not set this parameter, the value is left empty.
    shared_ptr<string> deliveryChannelName_ {};
    // The ARN of the delivery destination. Valid values:
    // 
    // - If the delivery channel is OSS, the value is in the format of `acs:oss:{RegionId}:{accountId}:{bucketName}`. Example: `acs:oss:cn-shanghai:100931896542****:new-bucket`.
    // 
    // - If the delivery channel is MNS, the value is in the format of `acs:mns:{RegionId}:{accountId}:/topics/{topicName}`. Example: `acs:mns:cn-shanghai:100931896542****:/topics/topic1`.
    // 
    // - If the delivery channel is SLS, the value is in the format of `acs:log:{RegionId}:{accountId}:project/{projectName}/logstore/{logstoreName}`. Example: `acs:log:cn-shanghai:100931896542****:project/project1/logstore/logstore1`.
    // 
    // This parameter is required.
    shared_ptr<string> deliveryChannelTargetArn_ {};
    // The type of the delivery channel. Valid values:
    // 
    // - OSS: Object Storage Service.
    // 
    // - MNS: Simple Message Queue (formerly MNS).
    // 
    // - SLS: Simple Log Service.
    // 
    // This parameter is required.
    shared_ptr<string> deliveryChannelType_ {};
    // The time when Cloud Config starts to deliver scheduled resource snapshots every day.
    // 
    // The value must be in the `HH:mmZ` format (UTC).
    // 
    // > When you enable scheduled resource snapshot delivery, you can use this parameter to customize the delivery time. If you do not set this parameter, the snapshots are delivered at `04:00Z` and `16:00Z` (UTC) by default.
    shared_ptr<string> deliverySnapshotTime_ {};
    // The description of the delivery channel.
    shared_ptr<string> description_ {};
    // Specifies whether to deliver non-compliant events. When a resource is evaluated as non-compliant, Cloud Config delivers the non-compliant event to SLS or MNS. Valid values:
    // 
    // - true: Deliver non-compliant events.
    // 
    // - false (default): Do not deliver non-compliant events.
    // 
    // > * If the delivery channel is SLS, you must set at least one of `ConfigurationSnapshot` (scheduled resource snapshots), `CompliantSnapshot` (compliance snapshots), `ConfigurationItemChangeNotification` (resource configuration histories), and `NonCompliantNotification` (non-compliant events) to true.
    // 
    // > - If the delivery channel is MNS, you must set at least one of `ConfigurationItemChangeNotification` (resource configuration histories) and `NonCompliantNotification` (non-compliant events) to true.
    shared_ptr<bool> nonCompliantNotification_ {};
    // The ARN of the OSS bucket to which the oversized data is delivered when the size of the data exceeds the limit of the delivery channel. The format is `acs:oss:{RegionId}:{accountId}:{bucketName}`.
    // 
    // If you do not set this parameter, Cloud Config delivers only the summary of the data.
    // 
    // > This parameter is supported only for SLS and MNS delivery channels. The delivery channel limit for SLS is 1 MB. The delivery channel limit for MNS is 64 KB.
    shared_ptr<string> oversizedDataOSSTargetArn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
