// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTEINSTANCESINPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTEINSTANCESINPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{
namespace Models
{
  class ListComputeInstancesInPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeInstancesInPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeInstancesInPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListComputeInstancesInPageResponseBody() = default ;
    ListComputeInstancesInPageResponseBody(const ListComputeInstancesInPageResponseBody &) = default ;
    ListComputeInstancesInPageResponseBody(ListComputeInstancesInPageResponseBody &&) = default ;
    ListComputeInstancesInPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeInstancesInPageResponseBody() = default ;
    ListComputeInstancesInPageResponseBody& operator=(const ListComputeInstancesInPageResponseBody &) = default ;
    ListComputeInstancesInPageResponseBody& operator=(ListComputeInstancesInPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AutoRenewFlag, autoRenewFlag_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Cu, cu_);
        DARABONBA_PTR_TO_JSON(CuLimitSum, cuLimitSum_);
        DARABONBA_PTR_TO_JSON(CuReservedSum, cuReservedSum_);
        DARABONBA_PTR_TO_JSON(CuUsedSum, cuUsedSum_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
        DARABONBA_PTR_TO_JSON(TotalJobs, totalJobs_);
        DARABONBA_PTR_TO_JSON(TotalRunningJobs, totalRunningJobs_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoRenewFlag, autoRenewFlag_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Cu, cu_);
        DARABONBA_PTR_FROM_JSON(CuLimitSum, cuLimitSum_);
        DARABONBA_PTR_FROM_JSON(CuReservedSum, cuReservedSum_);
        DARABONBA_PTR_FROM_JSON(CuUsedSum, cuUsedSum_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
        DARABONBA_PTR_FROM_JSON(TotalJobs, totalJobs_);
        DARABONBA_PTR_FROM_JSON(TotalRunningJobs, totalRunningJobs_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoRenewFlag_ == nullptr
        && this->chargeType_ == nullptr && this->commodityCode_ == nullptr && this->createTime_ == nullptr && this->cu_ == nullptr && this->cuLimitSum_ == nullptr
        && this->cuReservedSum_ == nullptr && this->cuUsedSum_ == nullptr && this->expireTime_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->owner_ == nullptr && this->regionId_ == nullptr && this->serviceStatus_ == nullptr && this->totalJobs_ == nullptr && this->totalRunningJobs_ == nullptr
        && this->vSwitchIds_ == nullptr && this->version_ == nullptr && this->vpcId_ == nullptr; };
      // autoRenewFlag Field Functions 
      bool hasAutoRenewFlag() const { return this->autoRenewFlag_ != nullptr;};
      void deleteAutoRenewFlag() { this->autoRenewFlag_ = nullptr;};
      inline bool getAutoRenewFlag() const { DARABONBA_PTR_GET_DEFAULT(autoRenewFlag_, false) };
      inline Data& setAutoRenewFlag(bool autoRenewFlag) { DARABONBA_PTR_SET_VALUE(autoRenewFlag_, autoRenewFlag) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Data& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Data& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
      inline Data& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // cuLimitSum Field Functions 
      bool hasCuLimitSum() const { return this->cuLimitSum_ != nullptr;};
      void deleteCuLimitSum() { this->cuLimitSum_ = nullptr;};
      inline double getCuLimitSum() const { DARABONBA_PTR_GET_DEFAULT(cuLimitSum_, 0.0) };
      inline Data& setCuLimitSum(double cuLimitSum) { DARABONBA_PTR_SET_VALUE(cuLimitSum_, cuLimitSum) };


      // cuReservedSum Field Functions 
      bool hasCuReservedSum() const { return this->cuReservedSum_ != nullptr;};
      void deleteCuReservedSum() { this->cuReservedSum_ = nullptr;};
      inline double getCuReservedSum() const { DARABONBA_PTR_GET_DEFAULT(cuReservedSum_, 0.0) };
      inline Data& setCuReservedSum(double cuReservedSum) { DARABONBA_PTR_SET_VALUE(cuReservedSum_, cuReservedSum) };


      // cuUsedSum Field Functions 
      bool hasCuUsedSum() const { return this->cuUsedSum_ != nullptr;};
      void deleteCuUsedSum() { this->cuUsedSum_ = nullptr;};
      inline double getCuUsedSum() const { DARABONBA_PTR_GET_DEFAULT(cuUsedSum_, 0.0) };
      inline Data& setCuUsedSum(double cuUsedSum) { DARABONBA_PTR_SET_VALUE(cuUsedSum_, cuUsedSum) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // serviceStatus Field Functions 
      bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
      void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
      inline string getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
      inline Data& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


      // totalJobs Field Functions 
      bool hasTotalJobs() const { return this->totalJobs_ != nullptr;};
      void deleteTotalJobs() { this->totalJobs_ = nullptr;};
      inline int64_t getTotalJobs() const { DARABONBA_PTR_GET_DEFAULT(totalJobs_, 0L) };
      inline Data& setTotalJobs(int64_t totalJobs) { DARABONBA_PTR_SET_VALUE(totalJobs_, totalJobs) };


      // totalRunningJobs Field Functions 
      bool hasTotalRunningJobs() const { return this->totalRunningJobs_ != nullptr;};
      void deleteTotalRunningJobs() { this->totalRunningJobs_ = nullptr;};
      inline int64_t getTotalRunningJobs() const { DARABONBA_PTR_GET_DEFAULT(totalRunningJobs_, 0L) };
      inline Data& setTotalRunningJobs(int64_t totalRunningJobs) { DARABONBA_PTR_SET_VALUE(totalRunningJobs_, totalRunningJobs) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline Data& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline Data& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<bool> autoRenewFlag_ {};
      shared_ptr<string> chargeType_ {};
      shared_ptr<string> commodityCode_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> createTime_ {};
      shared_ptr<int32_t> cu_ {};
      shared_ptr<double> cuLimitSum_ {};
      shared_ptr<double> cuReservedSum_ {};
      shared_ptr<double> cuUsedSum_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> expireTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> serviceStatus_ {};
      shared_ptr<int64_t> totalJobs_ {};
      shared_ptr<int64_t> totalRunningJobs_ {};
      shared_ptr<vector<string>> vSwitchIds_ {};
      shared_ptr<string> version_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->data_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline ListComputeInstancesInPageResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListComputeInstancesInPageResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListComputeInstancesInPageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListComputeInstancesInPageResponseBody::Data>) };
    inline vector<ListComputeInstancesInPageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListComputeInstancesInPageResponseBody::Data>) };
    inline ListComputeInstancesInPageResponseBody& setData(const vector<ListComputeInstancesInPageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListComputeInstancesInPageResponseBody& setData(vector<ListComputeInstancesInPageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListComputeInstancesInPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListComputeInstancesInPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListComputeInstancesInPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListComputeInstancesInPageResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<ListComputeInstancesInPageResponseBody::Data>> data_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
