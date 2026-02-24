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
      shared_ptr<int64_t> accountId_ {};
      shared_ptr<string> aggregatorId_ {};
      shared_ptr<bool> compliantSnapshot_ {};
      shared_ptr<bool> configurationItemChangeNotification_ {};
      shared_ptr<bool> configurationSnapshot_ {};
      shared_ptr<string> deliveryChannelAssumeRoleArn_ {};
      shared_ptr<string> deliveryChannelCondition_ {};
      shared_ptr<string> deliveryChannelId_ {};
      shared_ptr<string> deliveryChannelName_ {};
      shared_ptr<string> deliveryChannelTargetArn_ {};
      shared_ptr<string> deliveryChannelType_ {};
      shared_ptr<string> deliverySnapshotTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> nonCompliantNotification_ {};
      shared_ptr<string> oversizedDataOSSTargetArn_ {};
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
    shared_ptr<vector<ListAggregateConfigDeliveryChannelsResponseBody::DeliveryChannels>> deliveryChannels_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
