// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPRESPONSEBODYLAUNCHRESULTSLAUNCHRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPRESPONSEBODYLAUNCHRESULTSLAUNCHRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResultInstanceIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult() = default ;
    CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult(const CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult &) = default ;
    CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult(CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult &&) = default ;
    CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult() = default ;
    CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult& operator=(const CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult &) = default ;
    CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult& operator=(CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr && return this->instanceIds_ == nullptr && return this->instanceType_ == nullptr && return this->spotStrategy_ == nullptr
        && return this->zoneId_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const Models::CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResultInstanceIds & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, Models::CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResultInstanceIds) };
    inline Models::CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResultInstanceIds instanceIds() { DARABONBA_PTR_GET(instanceIds_, Models::CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResultInstanceIds) };
    inline CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult& setInstanceIds(const Models::CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResultInstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult& setInstanceIds(Models::CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResultInstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of created instances.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // The error code returned when the instance cannot be created.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned when the instance cannot be created.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The IDs of created instances.
    std::shared_ptr<Models::CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResultInstanceIds> instanceIds_ = nullptr;
    // The instance type of the instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The bidding policy for the pay-as-you-go instance. Valid values:
    // 
    // *   NoSpot: The instance is a regular pay-as-you-go instance.
    // *   SpotWithPriceLimit: The instance is a spot instance for which you specify the maximum hourly price.
    // *   SpotAsPriceGo: The instance is a spot instance for which the market price at the time of purchase is used as the bid price.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The zone ID of the instance.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
