// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRIUTILIZATIONDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRIUTILIZATIONDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryRIUtilizationDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRIUtilizationDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeductedInstanceId, deductedInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RICommodityCode, RICommodityCode_);
      DARABONBA_PTR_TO_JSON(RIInstanceId, RIInstanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRIUtilizationDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeductedInstanceId, deductedInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RICommodityCode, RICommodityCode_);
      DARABONBA_PTR_FROM_JSON(RIInstanceId, RIInstanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    QueryRIUtilizationDetailRequest() = default ;
    QueryRIUtilizationDetailRequest(const QueryRIUtilizationDetailRequest &) = default ;
    QueryRIUtilizationDetailRequest(QueryRIUtilizationDetailRequest &&) = default ;
    QueryRIUtilizationDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRIUtilizationDetailRequest() = default ;
    QueryRIUtilizationDetailRequest& operator=(const QueryRIUtilizationDetailRequest &) = default ;
    QueryRIUtilizationDetailRequest& operator=(QueryRIUtilizationDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deductedInstanceId_ != nullptr
        && this->endTime_ != nullptr && this->instanceSpec_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->RICommodityCode_ != nullptr
        && this->RIInstanceId_ != nullptr && this->startTime_ != nullptr; };
    // deductedInstanceId Field Functions 
    bool hasDeductedInstanceId() const { return this->deductedInstanceId_ != nullptr;};
    void deleteDeductedInstanceId() { this->deductedInstanceId_ = nullptr;};
    inline string deductedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(deductedInstanceId_, "") };
    inline QueryRIUtilizationDetailRequest& setDeductedInstanceId(string deductedInstanceId) { DARABONBA_PTR_SET_VALUE(deductedInstanceId_, deductedInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QueryRIUtilizationDetailRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline QueryRIUtilizationDetailRequest& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryRIUtilizationDetailRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryRIUtilizationDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // RICommodityCode Field Functions 
    bool hasRICommodityCode() const { return this->RICommodityCode_ != nullptr;};
    void deleteRICommodityCode() { this->RICommodityCode_ = nullptr;};
    inline string RICommodityCode() const { DARABONBA_PTR_GET_DEFAULT(RICommodityCode_, "") };
    inline QueryRIUtilizationDetailRequest& setRICommodityCode(string RICommodityCode) { DARABONBA_PTR_SET_VALUE(RICommodityCode_, RICommodityCode) };


    // RIInstanceId Field Functions 
    bool hasRIInstanceId() const { return this->RIInstanceId_ != nullptr;};
    void deleteRIInstanceId() { this->RIInstanceId_ = nullptr;};
    inline string RIInstanceId() const { DARABONBA_PTR_GET_DEFAULT(RIInstanceId_, "") };
    inline QueryRIUtilizationDetailRequest& setRIInstanceId(string RIInstanceId) { DARABONBA_PTR_SET_VALUE(RIInstanceId_, RIInstanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QueryRIUtilizationDetailRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the instance whose fees are deducted by using the RI. If this parameter is left empty, the usage details of all instances are queried.
    std::shared_ptr<string> deductedInstanceId_ = nullptr;
    // The time when the RI expires. Specify the time in the YYYY-MM-DD HH:mm:ss format.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The instance type of the RI.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // The number of the page to return. Default value: 1.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries to return on each page. Default value: 20. Maximum value: 300.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The code of the service to which the RI is applied. Default value: ecsRi. Valid values:
    // 
    // *   ecsRi: ECS RI.
    // *   scu_bag: storage capacity unit (SCU).
    // 
    // This parameter is required.
    std::shared_ptr<string> RICommodityCode_ = nullptr;
    // The ID of the RI. If this parameter is left empty, the usage details of all RIs are queried.
    std::shared_ptr<string> RIInstanceId_ = nullptr;
    // The time when the RI was created. Specify the time in the YYYY-MM-DD HH:mm:ss format.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
