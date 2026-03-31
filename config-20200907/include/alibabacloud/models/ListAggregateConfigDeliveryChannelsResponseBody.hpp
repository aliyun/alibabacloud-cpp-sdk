// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGDELIVERYCHANNELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGDELIVERYCHANNELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateConfigDeliveryChannelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateConfigDeliveryChannelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannels, deliveryChannels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateConfigDeliveryChannelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannels, deliveryChannels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAggregateConfigDeliveryChannelsResponseBody() = default ;
    ListAggregateConfigDeliveryChannelsResponseBody(const ListAggregateConfigDeliveryChannelsResponseBody &) = default ;
    ListAggregateConfigDeliveryChannelsResponseBody(ListAggregateConfigDeliveryChannelsResponseBody &&) = default ;
    ListAggregateConfigDeliveryChannelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateConfigDeliveryChannelsResponseBody() = default ;
    ListAggregateConfigDeliveryChannelsResponseBody& operator=(const ListAggregateConfigDeliveryChannelsResponseBody &) = default ;
    ListAggregateConfigDeliveryChannelsResponseBody& operator=(ListAggregateConfigDeliveryChannelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeliveryChannels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeliveryChannels& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
        DARABONBA_PTR_TO_JSON(CompliantSnapshot, compliantSnapshot_);
        DARABONBA_PTR_TO_JSON(ConfigurationItemChangeNotification, configurationItemChangeNotification_);
        DARABONBA_PTR_TO_JSON(ConfigurationSnapshot, configurationSnapshot_);
        DARABONBA_PTR_TO_JSON(DeliveryChannelAssumeRoleArn, deliveryChannelAssumeRoleArn_);
        DARABONBA_PTR_TO_JSON(DeliveryChannelCondition, deliveryChannelCondition_);
        DARABONBA_PTR_TO_JSON(DeliveryChannelId, deliveryChannelId_);
        DARABONBA_PTR_TO_JSON(DeliveryChannelName, deliveryChannelName_);
        DARABONBA_PTR_TO_JSON(DeliveryChannelTargetArn, deliveryChannelTargetArn_);
        DARABONBA_PTR_TO_JSON(DeliveryChannelType, deliveryChannelType_);
        DARABONBA_PTR_TO_JSON(DeliverySnapshotTime, deliverySnapshotTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(NonCompliantNotification, nonCompliantNotification_);
        DARABONBA_PTR_TO_JSON(OversizedDataOSSTargetArn, oversizedDataOSSTargetArn_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DeliveryChannels& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
        DARABONBA_PTR_FROM_JSON(CompliantSnapshot, compliantSnapshot_);
        DARABONBA_PTR_FROM_JSON(ConfigurationItemChangeNotification, configurationItemChangeNotification_);
        DARABONBA_PTR_FROM_JSON(ConfigurationSnapshot, configurationSnapshot_);
        DARABONBA_PTR_FROM_JSON(DeliveryChannelAssumeRoleArn, deliveryChannelAssumeRoleArn_);
        DARABONBA_PTR_FROM_JSON(DeliveryChannelCondition, deliveryChannelCondition_);
        DARABONBA_PTR_FROM_JSON(DeliveryChannelId, deliveryChannelId_);
        DARABONBA_PTR_FROM_JSON(DeliveryChannelName, deliveryChannelName_);
        DARABONBA_PTR_FROM_JSON(DeliveryChannelTargetArn, deliveryChannelTargetArn_);
        DARABONBA_PTR_FROM_JSON(DeliveryChannelType, deliveryChannelType_);
        DARABONBA_PTR_FROM_JSON(DeliverySnapshotTime, deliverySnapshotTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(NonCompliantNotification, nonCompliantNotification_);
        DARABONBA_PTR_FROM_JSON(OversizedDataOSSTargetArn, oversizedDataOSSTargetArn_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DeliveryChannels() = default ;
      DeliveryChannels(const DeliveryChannels &) = default ;
      DeliveryChannels(DeliveryChannels &&) = default ;
      DeliveryChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeliveryChannels() = default ;
      DeliveryChannels& operator=(const DeliveryChannels &) = default ;
      DeliveryChannels& operator=(DeliveryChannels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->aggregatorId_ == nullptr && this->compliantSnapshot_ == nullptr && this->configurationItemChangeNotification_ == nullptr && this->configurationSnapshot_ == nullptr && this->deliveryChannelAssumeRoleArn_ == nullptr
        && this->deliveryChannelCondition_ == nullptr && this->deliveryChannelId_ == nullptr && this->deliveryChannelName_ == nullptr && this->deliveryChannelTargetArn_ == nullptr && this->deliveryChannelType_ == nullptr
        && this->deliverySnapshotTime_ == nullptr && this->description_ == nullptr && this->nonCompliantNotification_ == nullptr && this->oversizedDataOSSTargetArn_ == nullptr && this->status_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline DeliveryChannels& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // aggregatorId Field Functions 
      bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
      void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
      inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
      inline DeliveryChannels& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


      // compliantSnapshot Field Functions 
      bool hasCompliantSnapshot() const { return this->compliantSnapshot_ != nullptr;};
      void deleteCompliantSnapshot() { this->compliantSnapshot_ = nullptr;};
      inline bool getCompliantSnapshot() const { DARABONBA_PTR_GET_DEFAULT(compliantSnapshot_, false) };
      inline DeliveryChannels& setCompliantSnapshot(bool compliantSnapshot) { DARABONBA_PTR_SET_VALUE(compliantSnapshot_, compliantSnapshot) };


      // configurationItemChangeNotification Field Functions 
      bool hasConfigurationItemChangeNotification() const { return this->configurationItemChangeNotification_ != nullptr;};
      void deleteConfigurationItemChangeNotification() { this->configurationItemChangeNotification_ = nullptr;};
      inline bool getConfigurationItemChangeNotification() const { DARABONBA_PTR_GET_DEFAULT(configurationItemChangeNotification_, false) };
      inline DeliveryChannels& setConfigurationItemChangeNotification(bool configurationItemChangeNotification) { DARABONBA_PTR_SET_VALUE(configurationItemChangeNotification_, configurationItemChangeNotification) };


      // configurationSnapshot Field Functions 
      bool hasConfigurationSnapshot() const { return this->configurationSnapshot_ != nullptr;};
      void deleteConfigurationSnapshot() { this->configurationSnapshot_ = nullptr;};
      inline bool getConfigurationSnapshot() const { DARABONBA_PTR_GET_DEFAULT(configurationSnapshot_, false) };
      inline DeliveryChannels& setConfigurationSnapshot(bool configurationSnapshot) { DARABONBA_PTR_SET_VALUE(configurationSnapshot_, configurationSnapshot) };


      // deliveryChannelAssumeRoleArn Field Functions 
      bool hasDeliveryChannelAssumeRoleArn() const { return this->deliveryChannelAssumeRoleArn_ != nullptr;};
      void deleteDeliveryChannelAssumeRoleArn() { this->deliveryChannelAssumeRoleArn_ = nullptr;};
      inline string getDeliveryChannelAssumeRoleArn() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelAssumeRoleArn_, "") };
      inline DeliveryChannels& setDeliveryChannelAssumeRoleArn(string deliveryChannelAssumeRoleArn) { DARABONBA_PTR_SET_VALUE(deliveryChannelAssumeRoleArn_, deliveryChannelAssumeRoleArn) };


      // deliveryChannelCondition Field Functions 
      bool hasDeliveryChannelCondition() const { return this->deliveryChannelCondition_ != nullptr;};
      void deleteDeliveryChannelCondition() { this->deliveryChannelCondition_ = nullptr;};
      inline string getDeliveryChannelCondition() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelCondition_, "") };
      inline DeliveryChannels& setDeliveryChannelCondition(string deliveryChannelCondition) { DARABONBA_PTR_SET_VALUE(deliveryChannelCondition_, deliveryChannelCondition) };


      // deliveryChannelId Field Functions 
      bool hasDeliveryChannelId() const { return this->deliveryChannelId_ != nullptr;};
      void deleteDeliveryChannelId() { this->deliveryChannelId_ = nullptr;};
      inline string getDeliveryChannelId() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelId_, "") };
      inline DeliveryChannels& setDeliveryChannelId(string deliveryChannelId) { DARABONBA_PTR_SET_VALUE(deliveryChannelId_, deliveryChannelId) };


      // deliveryChannelName Field Functions 
      bool hasDeliveryChannelName() const { return this->deliveryChannelName_ != nullptr;};
      void deleteDeliveryChannelName() { this->deliveryChannelName_ = nullptr;};
      inline string getDeliveryChannelName() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelName_, "") };
      inline DeliveryChannels& setDeliveryChannelName(string deliveryChannelName) { DARABONBA_PTR_SET_VALUE(deliveryChannelName_, deliveryChannelName) };


      // deliveryChannelTargetArn Field Functions 
      bool hasDeliveryChannelTargetArn() const { return this->deliveryChannelTargetArn_ != nullptr;};
      void deleteDeliveryChannelTargetArn() { this->deliveryChannelTargetArn_ = nullptr;};
      inline string getDeliveryChannelTargetArn() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelTargetArn_, "") };
      inline DeliveryChannels& setDeliveryChannelTargetArn(string deliveryChannelTargetArn) { DARABONBA_PTR_SET_VALUE(deliveryChannelTargetArn_, deliveryChannelTargetArn) };


      // deliveryChannelType Field Functions 
      bool hasDeliveryChannelType() const { return this->deliveryChannelType_ != nullptr;};
      void deleteDeliveryChannelType() { this->deliveryChannelType_ = nullptr;};
      inline string getDeliveryChannelType() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelType_, "") };
      inline DeliveryChannels& setDeliveryChannelType(string deliveryChannelType) { DARABONBA_PTR_SET_VALUE(deliveryChannelType_, deliveryChannelType) };


      // deliverySnapshotTime Field Functions 
      bool hasDeliverySnapshotTime() const { return this->deliverySnapshotTime_ != nullptr;};
      void deleteDeliverySnapshotTime() { this->deliverySnapshotTime_ = nullptr;};
      inline string getDeliverySnapshotTime() const { DARABONBA_PTR_GET_DEFAULT(deliverySnapshotTime_, "") };
      inline DeliveryChannels& setDeliverySnapshotTime(string deliverySnapshotTime) { DARABONBA_PTR_SET_VALUE(deliverySnapshotTime_, deliverySnapshotTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DeliveryChannels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // nonCompliantNotification Field Functions 
      bool hasNonCompliantNotification() const { return this->nonCompliantNotification_ != nullptr;};
      void deleteNonCompliantNotification() { this->nonCompliantNotification_ = nullptr;};
      inline bool getNonCompliantNotification() const { DARABONBA_PTR_GET_DEFAULT(nonCompliantNotification_, false) };
      inline DeliveryChannels& setNonCompliantNotification(bool nonCompliantNotification) { DARABONBA_PTR_SET_VALUE(nonCompliantNotification_, nonCompliantNotification) };


      // oversizedDataOSSTargetArn Field Functions 
      bool hasOversizedDataOSSTargetArn() const { return this->oversizedDataOSSTargetArn_ != nullptr;};
      void deleteOversizedDataOSSTargetArn() { this->oversizedDataOSSTargetArn_ = nullptr;};
      inline string getOversizedDataOSSTargetArn() const { DARABONBA_PTR_GET_DEFAULT(oversizedDataOSSTargetArn_, "") };
      inline DeliveryChannels& setOversizedDataOSSTargetArn(string oversizedDataOSSTargetArn) { DARABONBA_PTR_SET_VALUE(oversizedDataOSSTargetArn_, oversizedDataOSSTargetArn) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline DeliveryChannels& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the member in the account group.
      shared_ptr<int64_t> accountId_ {};
      // The ID of the account group.
      shared_ptr<string> aggregatorId_ {};
      // Indicates whether the specified destination receives scheduled compliant snapshots. Cloud Config delivers scheduled compliant snapshots at `04:00Z` and `16:00Z` to Log Service every day. The time is displayed in UTC. Valid values:
      // 
      // *   true: The specified destination receives scheduled compliant snapshots.
      // *   false: The specified destination does not receive scheduled compliant snapshots.
      shared_ptr<bool> compliantSnapshot_ {};
      // Indicates whether the specified destination receives resource change logs. If the value of this parameter is true, Cloud Config delivers the resource change logs to OSS, Log Service, or MNS when the configurations of the resources change. Valid values:
      // 
      // *   true: The specified destination receives resource change logs.
      // *   false: The specified destination does not receive resource change logs.
      shared_ptr<bool> configurationItemChangeNotification_ {};
      // Indicates whether the specified destination receives scheduled resource snapshots. Cloud Config delivers scheduled resource snapshots at `04:00Z` and `16:00Z` to OSS, MNS, or Log Service every day. The time is displayed in UTC. Valid values:
      // 
      // *   true: The specified destination receives scheduled resource snapshots.
      // *   false: The specified destination does not receive scheduled resource snapshots.
      shared_ptr<bool> configurationSnapshot_ {};
      // The ARN of the role that is assigned to the delivery channel.
      shared_ptr<string> deliveryChannelAssumeRoleArn_ {};
      // The rule that is attached to the delivery channel. This parameter is available when you deliver data of all types to MNS or deliver snapshots to Log Service.
      // 
      // *   If the value of the DeliveryChannelType parameter is MNS, take note of the following settings of the lowest risk level and resource types of the events to which you subscribed:
      // 
      //     *   The lowest risk level of the events to which you want to subscribe is in the following format: `{"filterType":"RuleRiskLevel","value":"1","multiple":false}`.
      // 
      //         The `value` field indicates the risk level of the events to which you want to subscribe. Valid values: 1, 2, and 3. The value 1 indicates the high risk level, the value 2 indicates the medium risk level, and the value 3 indicates the low risk level.
      // 
      //     *   The setting of the resource types of the events to which you want to subscribe is in the following format: `{"filterType":"ResourceType","values":["ACS::ACK::Cluster","ACS::ActionTrail::Trail","ACS::CBWP::CommonBandwidthPackage"],"multiple":true}`.
      // 
      //         The `values` field indicates the resource types of the events to which you want to subscribe. The value of the field is a JSON array. Examples:
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
      shared_ptr<string> deliveryChannelId_ {};
      // The name of the delivery channel.
      shared_ptr<string> deliveryChannelName_ {};
      // The ARN of the delivery destination.
      // 
      // *   If the value of the DeliveryChannelType parameter is OSS, the value of this parameter is the ARN of the destination OSS bucket.
      // *   If the value of the DeliveryChannelType parameter is MNS, the value of this parameter is the ARN of the destination MNS topic.
      // *   If the value of the DeliveryChannelType parameter is SLS, the value of this parameter is the ARN of the destination Log Service Logstore.
      shared_ptr<string> deliveryChannelTargetArn_ {};
      // The type of the delivery channel. Valid values:
      // 
      // *   OSS: Object Storage Service (OSS)
      // *   MNS: Message Service (MNS)
      // *   SLS: Log Service
      shared_ptr<string> deliveryChannelType_ {};
      // The time when Cloud Config delivers scheduled resources snapshots every day.
      // 
      // Format: `HH:mmZ`. This time is displayed in UTC.
      shared_ptr<string> deliverySnapshotTime_ {};
      // The description of the delivery channel.
      shared_ptr<string> description_ {};
      // Indicates whether the specified destination receives resource non-compliance events. If the value of this parameter is true, Cloud Config delivers resource non-compliance events to Log Service or MNS when resources are evaluated as non-compliant. Valid values:
      // 
      // *   true: The specified destination receives resource non-compliance events.
      // *   false: The specified destination does not receive resource non-compliance events.
      shared_ptr<bool> nonCompliantNotification_ {};
      // The ARN of the OSS bucket to which the delivered data is transferred when the size of the data exceeds the specified upper limit of the delivery channel.
      shared_ptr<string> oversizedDataOSSTargetArn_ {};
      // The status of the delivery channel. Valid values:
      // 
      // *   0: The delivery channel is disabled.
      // *   1: The delivery channel is enabled.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->deliveryChannels_ == nullptr
        && this->requestId_ == nullptr; };
    // deliveryChannels Field Functions 
    bool hasDeliveryChannels() const { return this->deliveryChannels_ != nullptr;};
    void deleteDeliveryChannels() { this->deliveryChannels_ = nullptr;};
    inline const vector<ListAggregateConfigDeliveryChannelsResponseBody::DeliveryChannels> & getDeliveryChannels() const { DARABONBA_PTR_GET_CONST(deliveryChannels_, vector<ListAggregateConfigDeliveryChannelsResponseBody::DeliveryChannels>) };
    inline vector<ListAggregateConfigDeliveryChannelsResponseBody::DeliveryChannels> getDeliveryChannels() { DARABONBA_PTR_GET(deliveryChannels_, vector<ListAggregateConfigDeliveryChannelsResponseBody::DeliveryChannels>) };
    inline ListAggregateConfigDeliveryChannelsResponseBody& setDeliveryChannels(const vector<ListAggregateConfigDeliveryChannelsResponseBody::DeliveryChannels> & deliveryChannels) { DARABONBA_PTR_SET_VALUE(deliveryChannels_, deliveryChannels) };
    inline ListAggregateConfigDeliveryChannelsResponseBody& setDeliveryChannels(vector<ListAggregateConfigDeliveryChannelsResponseBody::DeliveryChannels> && deliveryChannels) { DARABONBA_PTR_SET_RVALUE(deliveryChannels_, deliveryChannels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregateConfigDeliveryChannelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the delivery channels.
    shared_ptr<vector<ListAggregateConfigDeliveryChannelsResponseBody::DeliveryChannels>> deliveryChannels_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
