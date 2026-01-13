// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPTYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPTYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppliedScope, appliedScope_);
      DARABONBA_PTR_TO_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(DesktopGroupIdForModify, desktopGroupIdForModify_);
      DARABONBA_PTR_TO_JSON(DesktopIdForModify, desktopIdForModify_);
      DARABONBA_PTR_TO_JSON(DesktopTypeId, desktopTypeId_);
      DARABONBA_PTR_TO_JSON(DesktopTypeIdList, desktopTypeIdList_);
      DARABONBA_PTR_TO_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_TO_JSON(GpuDriverType, gpuDriverType_);
      DARABONBA_PTR_TO_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(ScopeSet, scopeSet_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
      DARABONBA_PTR_TO_JSON(SupportMinSessionCount, supportMinSessionCount_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppliedScope, appliedScope_);
      DARABONBA_PTR_FROM_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupIdForModify, desktopGroupIdForModify_);
      DARABONBA_PTR_FROM_JSON(DesktopIdForModify, desktopIdForModify_);
      DARABONBA_PTR_FROM_JSON(DesktopTypeId, desktopTypeId_);
      DARABONBA_PTR_FROM_JSON(DesktopTypeIdList, desktopTypeIdList_);
      DARABONBA_PTR_FROM_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_FROM_JSON(GpuDriverType, gpuDriverType_);
      DARABONBA_PTR_FROM_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(ScopeSet, scopeSet_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
      DARABONBA_PTR_FROM_JSON(SupportMinSessionCount, supportMinSessionCount_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDesktopTypesRequest() = default ;
    DescribeDesktopTypesRequest(const DescribeDesktopTypesRequest &) = default ;
    DescribeDesktopTypesRequest(DescribeDesktopTypesRequest &&) = default ;
    DescribeDesktopTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopTypesRequest() = default ;
    DescribeDesktopTypesRequest& operator=(const DescribeDesktopTypesRequest &) = default ;
    DescribeDesktopTypesRequest& operator=(DescribeDesktopTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appliedScope_ == nullptr
        && this->cpuCount_ == nullptr && this->desktopGroupIdForModify_ == nullptr && this->desktopIdForModify_ == nullptr && this->desktopTypeId_ == nullptr && this->desktopTypeIdList_ == nullptr
        && this->gpuCount_ == nullptr && this->gpuDriverType_ == nullptr && this->gpuMemory_ == nullptr && this->instanceTypeFamily_ == nullptr && this->memorySize_ == nullptr
        && this->officeSiteId_ == nullptr && this->orderBy_ == nullptr && this->orderType_ == nullptr && this->regionId_ == nullptr && this->scope_ == nullptr
        && this->scopeSet_ == nullptr && this->sortType_ == nullptr && this->supportMinSessionCount_ == nullptr && this->zoneId_ == nullptr; };
    // appliedScope Field Functions 
    bool hasAppliedScope() const { return this->appliedScope_ != nullptr;};
    void deleteAppliedScope() { this->appliedScope_ = nullptr;};
    inline string getAppliedScope() const { DARABONBA_PTR_GET_DEFAULT(appliedScope_, "") };
    inline DescribeDesktopTypesRequest& setAppliedScope(string appliedScope) { DARABONBA_PTR_SET_VALUE(appliedScope_, appliedScope) };


    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline int32_t getCpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0) };
    inline DescribeDesktopTypesRequest& setCpuCount(int32_t cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // desktopGroupIdForModify Field Functions 
    bool hasDesktopGroupIdForModify() const { return this->desktopGroupIdForModify_ != nullptr;};
    void deleteDesktopGroupIdForModify() { this->desktopGroupIdForModify_ = nullptr;};
    inline string getDesktopGroupIdForModify() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupIdForModify_, "") };
    inline DescribeDesktopTypesRequest& setDesktopGroupIdForModify(string desktopGroupIdForModify) { DARABONBA_PTR_SET_VALUE(desktopGroupIdForModify_, desktopGroupIdForModify) };


    // desktopIdForModify Field Functions 
    bool hasDesktopIdForModify() const { return this->desktopIdForModify_ != nullptr;};
    void deleteDesktopIdForModify() { this->desktopIdForModify_ = nullptr;};
    inline string getDesktopIdForModify() const { DARABONBA_PTR_GET_DEFAULT(desktopIdForModify_, "") };
    inline DescribeDesktopTypesRequest& setDesktopIdForModify(string desktopIdForModify) { DARABONBA_PTR_SET_VALUE(desktopIdForModify_, desktopIdForModify) };


    // desktopTypeId Field Functions 
    bool hasDesktopTypeId() const { return this->desktopTypeId_ != nullptr;};
    void deleteDesktopTypeId() { this->desktopTypeId_ = nullptr;};
    inline string getDesktopTypeId() const { DARABONBA_PTR_GET_DEFAULT(desktopTypeId_, "") };
    inline DescribeDesktopTypesRequest& setDesktopTypeId(string desktopTypeId) { DARABONBA_PTR_SET_VALUE(desktopTypeId_, desktopTypeId) };


    // desktopTypeIdList Field Functions 
    bool hasDesktopTypeIdList() const { return this->desktopTypeIdList_ != nullptr;};
    void deleteDesktopTypeIdList() { this->desktopTypeIdList_ = nullptr;};
    inline const vector<string> & getDesktopTypeIdList() const { DARABONBA_PTR_GET_CONST(desktopTypeIdList_, vector<string>) };
    inline vector<string> getDesktopTypeIdList() { DARABONBA_PTR_GET(desktopTypeIdList_, vector<string>) };
    inline DescribeDesktopTypesRequest& setDesktopTypeIdList(const vector<string> & desktopTypeIdList) { DARABONBA_PTR_SET_VALUE(desktopTypeIdList_, desktopTypeIdList) };
    inline DescribeDesktopTypesRequest& setDesktopTypeIdList(vector<string> && desktopTypeIdList) { DARABONBA_PTR_SET_RVALUE(desktopTypeIdList_, desktopTypeIdList) };


    // gpuCount Field Functions 
    bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
    void deleteGpuCount() { this->gpuCount_ = nullptr;};
    inline float getGpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0.0) };
    inline DescribeDesktopTypesRequest& setGpuCount(float gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


    // gpuDriverType Field Functions 
    bool hasGpuDriverType() const { return this->gpuDriverType_ != nullptr;};
    void deleteGpuDriverType() { this->gpuDriverType_ = nullptr;};
    inline string getGpuDriverType() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverType_, "") };
    inline DescribeDesktopTypesRequest& setGpuDriverType(string gpuDriverType) { DARABONBA_PTR_SET_VALUE(gpuDriverType_, gpuDriverType) };


    // gpuMemory Field Functions 
    bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
    void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
    inline int32_t getGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0) };
    inline DescribeDesktopTypesRequest& setGpuMemory(int32_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string getInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeDesktopTypesRequest& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline DescribeDesktopTypesRequest& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeDesktopTypesRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribeDesktopTypesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeDesktopTypesRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDesktopTypesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeDesktopTypesRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // scopeSet Field Functions 
    bool hasScopeSet() const { return this->scopeSet_ != nullptr;};
    void deleteScopeSet() { this->scopeSet_ = nullptr;};
    inline const vector<string> & getScopeSet() const { DARABONBA_PTR_GET_CONST(scopeSet_, vector<string>) };
    inline vector<string> getScopeSet() { DARABONBA_PTR_GET(scopeSet_, vector<string>) };
    inline DescribeDesktopTypesRequest& setScopeSet(const vector<string> & scopeSet) { DARABONBA_PTR_SET_VALUE(scopeSet_, scopeSet) };
    inline DescribeDesktopTypesRequest& setScopeSet(vector<string> && scopeSet) { DARABONBA_PTR_SET_RVALUE(scopeSet_, scopeSet) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline string getSortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, "") };
    inline DescribeDesktopTypesRequest& setSortType(string sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


    // supportMinSessionCount Field Functions 
    bool hasSupportMinSessionCount() const { return this->supportMinSessionCount_ != nullptr;};
    void deleteSupportMinSessionCount() { this->supportMinSessionCount_ = nullptr;};
    inline int32_t getSupportMinSessionCount() const { DARABONBA_PTR_GET_DEFAULT(supportMinSessionCount_, 0) };
    inline DescribeDesktopTypesRequest& setSupportMinSessionCount(int32_t supportMinSessionCount) { DARABONBA_PTR_SET_VALUE(supportMinSessionCount_, supportMinSessionCount) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDesktopTypesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Applicable Scope of specifications. Default value: `Public`
    shared_ptr<string> appliedScope_ {};
    // The number of vCPUs.
    shared_ptr<int32_t> cpuCount_ {};
    // The ID of the cloud computer share you want to modify. If this parameter is provided, the response will include compatibility information for the specified specification.
    shared_ptr<string> desktopGroupIdForModify_ {};
    // The ID of the cloud computer when you change instance types of cloud computers. If you specify this parameter, the information about whether the instance type is compatible with the cloud computer is included in the response.
    shared_ptr<string> desktopIdForModify_ {};
    // The specification ID.
    // 
    // >  If both `InstanceTypeFamily` and `DesktopTypeId` are empty, all cloud computer specifications will be queried.
    // 
    // Valid values:
    // 
    // *   eds.enterprise_office.4c8g
    // *   eds.hf.4c8g
    // *   ecd.basic.large
    // *   ecd.advanced.large
    // *   eds.enterprise_office.8c16g
    // *   ecd.basic.small
    // *   ecd.graphics.2xlarge
    // *   eds.hf.8c16g
    // *   eds.hf.12c24g
    // *   eds.general.8c16g
    // *   eds.general.16c32g
    // *   ecd.advanced.xlarge
    // *   eds.graphics.16c1t4
    // *   ecd.graphics.xlarge
    // *   ecd.performance.2xlarge
    // *   eds.general.8c32g
    // *   eds.general.2c2g
    // *   eds.general.2c4g
    // *   eds.graphics.24c1t4
    // *   eds.general.4c8g
    // *   eds.enterprise_office.2c4g
    // *   eds.general.4c16g
    // *   eds.general.2c8g
    shared_ptr<string> desktopTypeId_ {};
    // The specification IDs.
    shared_ptr<vector<string>> desktopTypeIdList_ {};
    // The number of GPUs.
    shared_ptr<float> gpuCount_ {};
    // The GPU driver type.
    // 
    // Valid values:
    // 
    // *   T4
    // *   A10
    // *   G28
    // *   G39
    shared_ptr<string> gpuDriverType_ {};
    // The GPU memory size. Unit: MB.
    shared_ptr<int32_t> gpuMemory_ {};
    // The name of the specification family.
    // 
    // >  If both `InstanceTypeFamily` and `DesktopTypeId` are empty, all specification families will be queried.
    // 
    // Valid values:
    // 
    // *   ecd.advanced
    // *   eds.graphics
    // *   ecd.basic
    // *   eds.enterprise_office
    // *   eds.hf
    // *   ecd.graphics
    // *   eds.general
    // *   ecd.performance
    shared_ptr<string> instanceTypeFamily_ {};
    // The memory size. Unit: MiB.
    shared_ptr<int32_t> memorySize_ {};
    shared_ptr<string> officeSiteId_ {};
    // The sorting field. If this parameter is not provided, results are sorted by creation time in descending order.
    // 
    // Valid values:
    // 
    // *   Memory: sorts by memory size.
    // *   Cpu: sorts by the number of vCPUs.
    shared_ptr<string> orderBy_ {};
    // The order type.
    shared_ptr<string> orderType_ {};
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The sales mode of the specification.
    // 
    // Valid values:
    // 
    // *   MonthPackage: the monthly subscription mode.
    // *   FastBuy: the quick purchase mode.
    shared_ptr<string> scope_ {};
    shared_ptr<vector<string>> scopeSet_ {};
    // The sorting order.
    // 
    // Valid values:
    // 
    // *   ASC (default): the ascending order.
    // *   DESC: the descending order.
    shared_ptr<string> sortType_ {};
    // The number of sessions supported by the specification.
    shared_ptr<int32_t> supportMinSessionCount_ {};
    // >  This parameter is not publicly available.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
