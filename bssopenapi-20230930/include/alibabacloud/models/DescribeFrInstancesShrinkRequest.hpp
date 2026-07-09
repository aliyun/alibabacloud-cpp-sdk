// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFRINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFRINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DescribeFrInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFrInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CapacityType, capacityType_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceTag, instanceTag_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
      DARABONBA_PTR_TO_JSON(SortRule, sortRule_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFrInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CapacityType, capacityType_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceTag, instanceTag_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
      DARABONBA_PTR_FROM_JSON(SortRule, sortRule_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    DescribeFrInstancesShrinkRequest() = default ;
    DescribeFrInstancesShrinkRequest(const DescribeFrInstancesShrinkRequest &) = default ;
    DescribeFrInstancesShrinkRequest(DescribeFrInstancesShrinkRequest &&) = default ;
    DescribeFrInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFrInstancesShrinkRequest() = default ;
    DescribeFrInstancesShrinkRequest& operator=(const DescribeFrInstancesShrinkRequest &) = default ;
    DescribeFrInstancesShrinkRequest& operator=(DescribeFrInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacityType_ == nullptr
        && this->commodityCode_ == nullptr && this->cycleType_ == nullptr && this->ecIdAccountIdsShrink_ == nullptr && this->endTime_ == nullptr && this->group_ == nullptr
        && this->instanceId_ == nullptr && this->instanceTag_ == nullptr && this->nbid_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->productCode_ == nullptr && this->sortField_ == nullptr && this->sortRule_ == nullptr && this->spec_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->templateCode_ == nullptr; };
    // capacityType Field Functions 
    bool hasCapacityType() const { return this->capacityType_ != nullptr;};
    void deleteCapacityType() { this->capacityType_ = nullptr;};
    inline string getCapacityType() const { DARABONBA_PTR_GET_DEFAULT(capacityType_, "") };
    inline DescribeFrInstancesShrinkRequest& setCapacityType(string capacityType) { DARABONBA_PTR_SET_VALUE(capacityType_, capacityType) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeFrInstancesShrinkRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // cycleType Field Functions 
    bool hasCycleType() const { return this->cycleType_ != nullptr;};
    void deleteCycleType() { this->cycleType_ = nullptr;};
    inline string getCycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
    inline DescribeFrInstancesShrinkRequest& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


    // ecIdAccountIdsShrink Field Functions 
    bool hasEcIdAccountIdsShrink() const { return this->ecIdAccountIdsShrink_ != nullptr;};
    void deleteEcIdAccountIdsShrink() { this->ecIdAccountIdsShrink_ = nullptr;};
    inline string getEcIdAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ecIdAccountIdsShrink_, "") };
    inline DescribeFrInstancesShrinkRequest& setEcIdAccountIdsShrink(string ecIdAccountIdsShrink) { DARABONBA_PTR_SET_VALUE(ecIdAccountIdsShrink_, ecIdAccountIdsShrink) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeFrInstancesShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline DescribeFrInstancesShrinkRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeFrInstancesShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceTag Field Functions 
    bool hasInstanceTag() const { return this->instanceTag_ != nullptr;};
    void deleteInstanceTag() { this->instanceTag_ = nullptr;};
    inline string getInstanceTag() const { DARABONBA_PTR_GET_DEFAULT(instanceTag_, "") };
    inline DescribeFrInstancesShrinkRequest& setInstanceTag(string instanceTag) { DARABONBA_PTR_SET_VALUE(instanceTag_, instanceTag) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline DescribeFrInstancesShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeFrInstancesShrinkRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFrInstancesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeFrInstancesShrinkRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline DescribeFrInstancesShrinkRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // sortRule Field Functions 
    bool hasSortRule() const { return this->sortRule_ != nullptr;};
    void deleteSortRule() { this->sortRule_ = nullptr;};
    inline string getSortRule() const { DARABONBA_PTR_GET_DEFAULT(sortRule_, "") };
    inline DescribeFrInstancesShrinkRequest& setSortRule(string sortRule) { DARABONBA_PTR_SET_VALUE(sortRule_, sortRule) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeFrInstancesShrinkRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeFrInstancesShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFrInstancesShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline DescribeFrInstancesShrinkRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // The capacity type.
    shared_ptr<string> capacityType_ {};
    // The commodity code.
    shared_ptr<string> commodityCode_ {};
    // The cycle type.
    shared_ptr<string> cycleType_ {};
    // The enterprise and account list. If this parameter is empty, the current account is queried.
    shared_ptr<string> ecIdAccountIdsShrink_ {};
    // The end time.
    shared_ptr<int64_t> endTime_ {};
    // The resource dimension to query.
    shared_ptr<string> group_ {};
    // The instance name.
    shared_ptr<string> instanceId_ {};
    // The instance label value of the resource plan.
    shared_ptr<string> instanceTag_ {};
    // The primary marketplace ID. If this parameter is empty, the marketplace ID of the current user is used by default.
    shared_ptr<string> nbid_ {};
    // The current page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The product code.
    shared_ptr<string> productCode_ {};
    // The sort field.
    shared_ptr<string> sortField_ {};
    // The sorting rule.
    shared_ptr<string> sortRule_ {};
    // The specification.
    shared_ptr<string> spec_ {};
    // The start time.
    shared_ptr<int64_t> startTime_ {};
    // The resource status.
    shared_ptr<string> status_ {};
    // The template code.
    shared_ptr<string> templateCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
