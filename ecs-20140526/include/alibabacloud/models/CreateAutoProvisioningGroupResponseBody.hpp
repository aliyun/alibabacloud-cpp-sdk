// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateAutoProvisioningGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoProvisioningGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupId, autoProvisioningGroupId_);
      DARABONBA_PTR_TO_JSON(LaunchResults, launchResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoProvisioningGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupId, autoProvisioningGroupId_);
      DARABONBA_PTR_FROM_JSON(LaunchResults, launchResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAutoProvisioningGroupResponseBody() = default ;
    CreateAutoProvisioningGroupResponseBody(const CreateAutoProvisioningGroupResponseBody &) = default ;
    CreateAutoProvisioningGroupResponseBody(CreateAutoProvisioningGroupResponseBody &&) = default ;
    CreateAutoProvisioningGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoProvisioningGroupResponseBody() = default ;
    CreateAutoProvisioningGroupResponseBody& operator=(const CreateAutoProvisioningGroupResponseBody &) = default ;
    CreateAutoProvisioningGroupResponseBody& operator=(CreateAutoProvisioningGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LaunchResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LaunchResults& obj) { 
        DARABONBA_PTR_TO_JSON(LaunchResult, launchResult_);
      };
      friend void from_json(const Darabonba::Json& j, LaunchResults& obj) { 
        DARABONBA_PTR_FROM_JSON(LaunchResult, launchResult_);
      };
      LaunchResults() = default ;
      LaunchResults(const LaunchResults &) = default ;
      LaunchResults(LaunchResults &&) = default ;
      LaunchResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LaunchResults() = default ;
      LaunchResults& operator=(const LaunchResults &) = default ;
      LaunchResults& operator=(LaunchResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LaunchResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LaunchResult& obj) { 
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, LaunchResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        LaunchResult() = default ;
        LaunchResult(const LaunchResult &) = default ;
        LaunchResult(LaunchResult &&) = default ;
        LaunchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LaunchResult() = default ;
        LaunchResult& operator=(const LaunchResult &) = default ;
        LaunchResult& operator=(LaunchResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InstanceIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceIds& obj) { 
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceIds& obj) { 
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          };
          InstanceIds() = default ;
          InstanceIds(const InstanceIds &) = default ;
          InstanceIds(InstanceIds &&) = default ;
          InstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceIds() = default ;
          InstanceIds& operator=(const InstanceIds &) = default ;
          InstanceIds& operator=(InstanceIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->instanceId_ == nullptr; };
          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
          inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
          inline InstanceIds& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
          inline InstanceIds& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


        protected:
          shared_ptr<vector<string>> instanceId_ {};
        };

        virtual bool empty() const override { return this->amount_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->instanceIds_ == nullptr && this->instanceType_ == nullptr && this->spotStrategy_ == nullptr
        && this->zoneId_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
        inline LaunchResult& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline LaunchResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline LaunchResult& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // instanceIds Field Functions 
        bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
        void deleteInstanceIds() { this->instanceIds_ = nullptr;};
        inline const LaunchResult::InstanceIds & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, LaunchResult::InstanceIds) };
        inline LaunchResult::InstanceIds getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, LaunchResult::InstanceIds) };
        inline LaunchResult& setInstanceIds(const LaunchResult::InstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
        inline LaunchResult& setInstanceIds(LaunchResult::InstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline LaunchResult& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // spotStrategy Field Functions 
        bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
        void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
        inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
        inline LaunchResult& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline LaunchResult& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The number of created instances.
        shared_ptr<int32_t> amount_ {};
        // The error code returned when the instance cannot be created.
        shared_ptr<string> errorCode_ {};
        // The error message returned when the instance cannot be created.
        shared_ptr<string> errorMsg_ {};
        // The IDs of created instances.
        shared_ptr<LaunchResult::InstanceIds> instanceIds_ {};
        // The instance type of the instance.
        shared_ptr<string> instanceType_ {};
        // The bidding policy for the pay-as-you-go instance. Valid values:
        // 
        // *   NoSpot: The instance is a regular pay-as-you-go instance.
        // *   SpotWithPriceLimit: The instance is a spot instance for which you specify the maximum hourly price.
        // *   SpotAsPriceGo: The instance is a spot instance for which the market price at the time of purchase is used as the bid price.
        shared_ptr<string> spotStrategy_ {};
        // The zone ID of the instance.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->launchResult_ == nullptr; };
      // launchResult Field Functions 
      bool hasLaunchResult() const { return this->launchResult_ != nullptr;};
      void deleteLaunchResult() { this->launchResult_ = nullptr;};
      inline const vector<LaunchResults::LaunchResult> & getLaunchResult() const { DARABONBA_PTR_GET_CONST(launchResult_, vector<LaunchResults::LaunchResult>) };
      inline vector<LaunchResults::LaunchResult> getLaunchResult() { DARABONBA_PTR_GET(launchResult_, vector<LaunchResults::LaunchResult>) };
      inline LaunchResults& setLaunchResult(const vector<LaunchResults::LaunchResult> & launchResult) { DARABONBA_PTR_SET_VALUE(launchResult_, launchResult) };
      inline LaunchResults& setLaunchResult(vector<LaunchResults::LaunchResult> && launchResult) { DARABONBA_PTR_SET_RVALUE(launchResult_, launchResult) };


    protected:
      shared_ptr<vector<LaunchResults::LaunchResult>> launchResult_ {};
    };

    virtual bool empty() const override { return this->autoProvisioningGroupId_ == nullptr
        && this->launchResults_ == nullptr && this->requestId_ == nullptr; };
    // autoProvisioningGroupId Field Functions 
    bool hasAutoProvisioningGroupId() const { return this->autoProvisioningGroupId_ != nullptr;};
    void deleteAutoProvisioningGroupId() { this->autoProvisioningGroupId_ = nullptr;};
    inline string getAutoProvisioningGroupId() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupId_, "") };
    inline CreateAutoProvisioningGroupResponseBody& setAutoProvisioningGroupId(string autoProvisioningGroupId) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupId_, autoProvisioningGroupId) };


    // launchResults Field Functions 
    bool hasLaunchResults() const { return this->launchResults_ != nullptr;};
    void deleteLaunchResults() { this->launchResults_ = nullptr;};
    inline const CreateAutoProvisioningGroupResponseBody::LaunchResults & getLaunchResults() const { DARABONBA_PTR_GET_CONST(launchResults_, CreateAutoProvisioningGroupResponseBody::LaunchResults) };
    inline CreateAutoProvisioningGroupResponseBody::LaunchResults getLaunchResults() { DARABONBA_PTR_GET(launchResults_, CreateAutoProvisioningGroupResponseBody::LaunchResults) };
    inline CreateAutoProvisioningGroupResponseBody& setLaunchResults(const CreateAutoProvisioningGroupResponseBody::LaunchResults & launchResults) { DARABONBA_PTR_SET_VALUE(launchResults_, launchResults) };
    inline CreateAutoProvisioningGroupResponseBody& setLaunchResults(CreateAutoProvisioningGroupResponseBody::LaunchResults && launchResults) { DARABONBA_PTR_SET_RVALUE(launchResults_, launchResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAutoProvisioningGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the auto provisioning group.
    shared_ptr<string> autoProvisioningGroupId_ {};
    // The instances created by the auto provisioning group. The values of the parameters in this array are returned only when AutoProvisioningGroupType is set to `instant`.
    shared_ptr<CreateAutoProvisioningGroupResponseBody::LaunchResults> launchResults_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
