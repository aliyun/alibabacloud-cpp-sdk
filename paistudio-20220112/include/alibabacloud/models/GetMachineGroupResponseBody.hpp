// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMACHINEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMACHINEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetMachineGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMachineGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DefaultDriver, defaultDriver_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EcsType, ecsType_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtExpired, gmtExpired_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GmtStarted, gmtStarted_);
      DARABONBA_PTR_TO_JSON(MachineGroupID, machineGroupID_);
      DARABONBA_PTR_TO_JSON(OrderID, orderID_);
      DARABONBA_PTR_TO_JSON(OrderInstanceId, orderInstanceId_);
      DARABONBA_PTR_TO_JSON(PAIResourceID, PAIResourceID_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(RegionID, regionID_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportedDrivers, supportedDrivers_);
    };
    friend void from_json(const Darabonba::Json& j, GetMachineGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DefaultDriver, defaultDriver_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EcsType, ecsType_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtExpired, gmtExpired_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GmtStarted, gmtStarted_);
      DARABONBA_PTR_FROM_JSON(MachineGroupID, machineGroupID_);
      DARABONBA_PTR_FROM_JSON(OrderID, orderID_);
      DARABONBA_PTR_FROM_JSON(OrderInstanceId, orderInstanceId_);
      DARABONBA_PTR_FROM_JSON(PAIResourceID, PAIResourceID_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(RegionID, regionID_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportedDrivers, supportedDrivers_);
    };
    GetMachineGroupResponseBody() = default ;
    GetMachineGroupResponseBody(const GetMachineGroupResponseBody &) = default ;
    GetMachineGroupResponseBody(GetMachineGroupResponseBody &&) = default ;
    GetMachineGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMachineGroupResponseBody() = default ;
    GetMachineGroupResponseBody& operator=(const GetMachineGroupResponseBody &) = default ;
    GetMachineGroupResponseBody& operator=(GetMachineGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->defaultDriver_ == nullptr && return this->duration_ == nullptr && return this->ecsType_ == nullptr && return this->gmtCreated_ == nullptr && return this->gmtExpired_ == nullptr
        && return this->gmtModified_ == nullptr && return this->gmtStarted_ == nullptr && return this->machineGroupID_ == nullptr && return this->orderID_ == nullptr && return this->orderInstanceId_ == nullptr
        && return this->PAIResourceID_ == nullptr && return this->payType_ == nullptr && return this->pricingCycle_ == nullptr && return this->regionID_ == nullptr && return this->requestId_ == nullptr
        && return this->status_ == nullptr && return this->supportedDrivers_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline GetMachineGroupResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // defaultDriver Field Functions 
    bool hasDefaultDriver() const { return this->defaultDriver_ != nullptr;};
    void deleteDefaultDriver() { this->defaultDriver_ = nullptr;};
    inline string defaultDriver() const { DARABONBA_PTR_GET_DEFAULT(defaultDriver_, "") };
    inline GetMachineGroupResponseBody& setDefaultDriver(string defaultDriver) { DARABONBA_PTR_SET_VALUE(defaultDriver_, defaultDriver) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetMachineGroupResponseBody& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // ecsType Field Functions 
    bool hasEcsType() const { return this->ecsType_ != nullptr;};
    void deleteEcsType() { this->ecsType_ = nullptr;};
    inline string ecsType() const { DARABONBA_PTR_GET_DEFAULT(ecsType_, "") };
    inline GetMachineGroupResponseBody& setEcsType(string ecsType) { DARABONBA_PTR_SET_VALUE(ecsType_, ecsType) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline GetMachineGroupResponseBody& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtExpired Field Functions 
    bool hasGmtExpired() const { return this->gmtExpired_ != nullptr;};
    void deleteGmtExpired() { this->gmtExpired_ = nullptr;};
    inline string gmtExpired() const { DARABONBA_PTR_GET_DEFAULT(gmtExpired_, "") };
    inline GetMachineGroupResponseBody& setGmtExpired(string gmtExpired) { DARABONBA_PTR_SET_VALUE(gmtExpired_, gmtExpired) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetMachineGroupResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // gmtStarted Field Functions 
    bool hasGmtStarted() const { return this->gmtStarted_ != nullptr;};
    void deleteGmtStarted() { this->gmtStarted_ = nullptr;};
    inline string gmtStarted() const { DARABONBA_PTR_GET_DEFAULT(gmtStarted_, "") };
    inline GetMachineGroupResponseBody& setGmtStarted(string gmtStarted) { DARABONBA_PTR_SET_VALUE(gmtStarted_, gmtStarted) };


    // machineGroupID Field Functions 
    bool hasMachineGroupID() const { return this->machineGroupID_ != nullptr;};
    void deleteMachineGroupID() { this->machineGroupID_ = nullptr;};
    inline string machineGroupID() const { DARABONBA_PTR_GET_DEFAULT(machineGroupID_, "") };
    inline GetMachineGroupResponseBody& setMachineGroupID(string machineGroupID) { DARABONBA_PTR_SET_VALUE(machineGroupID_, machineGroupID) };


    // orderID Field Functions 
    bool hasOrderID() const { return this->orderID_ != nullptr;};
    void deleteOrderID() { this->orderID_ = nullptr;};
    inline string orderID() const { DARABONBA_PTR_GET_DEFAULT(orderID_, "") };
    inline GetMachineGroupResponseBody& setOrderID(string orderID) { DARABONBA_PTR_SET_VALUE(orderID_, orderID) };


    // orderInstanceId Field Functions 
    bool hasOrderInstanceId() const { return this->orderInstanceId_ != nullptr;};
    void deleteOrderInstanceId() { this->orderInstanceId_ = nullptr;};
    inline string orderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(orderInstanceId_, "") };
    inline GetMachineGroupResponseBody& setOrderInstanceId(string orderInstanceId) { DARABONBA_PTR_SET_VALUE(orderInstanceId_, orderInstanceId) };


    // PAIResourceID Field Functions 
    bool hasPAIResourceID() const { return this->PAIResourceID_ != nullptr;};
    void deletePAIResourceID() { this->PAIResourceID_ = nullptr;};
    inline string PAIResourceID() const { DARABONBA_PTR_GET_DEFAULT(PAIResourceID_, "") };
    inline GetMachineGroupResponseBody& setPAIResourceID(string PAIResourceID) { DARABONBA_PTR_SET_VALUE(PAIResourceID_, PAIResourceID) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline GetMachineGroupResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline GetMachineGroupResponseBody& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // regionID Field Functions 
    bool hasRegionID() const { return this->regionID_ != nullptr;};
    void deleteRegionID() { this->regionID_ = nullptr;};
    inline string regionID() const { DARABONBA_PTR_GET_DEFAULT(regionID_, "") };
    inline GetMachineGroupResponseBody& setRegionID(string regionID) { DARABONBA_PTR_SET_VALUE(regionID_, regionID) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMachineGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMachineGroupResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportedDrivers Field Functions 
    bool hasSupportedDrivers() const { return this->supportedDrivers_ != nullptr;};
    void deleteSupportedDrivers() { this->supportedDrivers_ = nullptr;};
    inline const vector<string> & supportedDrivers() const { DARABONBA_PTR_GET_CONST(supportedDrivers_, vector<string>) };
    inline vector<string> supportedDrivers() { DARABONBA_PTR_GET(supportedDrivers_, vector<string>) };
    inline GetMachineGroupResponseBody& setSupportedDrivers(const vector<string> & supportedDrivers) { DARABONBA_PTR_SET_VALUE(supportedDrivers_, supportedDrivers) };
    inline GetMachineGroupResponseBody& setSupportedDrivers(vector<string> && supportedDrivers) { DARABONBA_PTR_SET_RVALUE(supportedDrivers_, supportedDrivers) };


  protected:
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<string> defaultDriver_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> ecsType_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> gmtExpired_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> gmtStarted_ = nullptr;
    std::shared_ptr<string> machineGroupID_ = nullptr;
    std::shared_ptr<string> orderID_ = nullptr;
    std::shared_ptr<string> orderInstanceId_ = nullptr;
    std::shared_ptr<string> PAIResourceID_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> pricingCycle_ = nullptr;
    std::shared_ptr<string> regionID_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<string>> supportedDrivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
