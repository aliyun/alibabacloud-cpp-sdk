// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAppInstanceTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_TO_JSON(AppInstanceType, appInstanceType_);
      DARABONBA_PTR_TO_JSON(AppInstanceTypeFamily, appInstanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(AppInstanceTypeList, appInstanceTypeList_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(QueryInventory, queryInventory_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceType, appInstanceType_);
      DARABONBA_PTR_FROM_JSON(AppInstanceTypeFamily, appInstanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(AppInstanceTypeList, appInstanceTypeList_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(QueryInventory, queryInventory_);
    };
    ListAppInstanceTypeRequest() = default ;
    ListAppInstanceTypeRequest(const ListAppInstanceTypeRequest &) = default ;
    ListAppInstanceTypeRequest(ListAppInstanceTypeRequest &&) = default ;
    ListAppInstanceTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceTypeRequest() = default ;
    ListAppInstanceTypeRequest& operator=(const ListAppInstanceTypeRequest &) = default ;
    ListAppInstanceTypeRequest& operator=(ListAppInstanceTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCenterImageId_ == nullptr
        && this->appInstanceType_ == nullptr && this->appInstanceTypeFamily_ == nullptr && this->appInstanceTypeList_ == nullptr && this->bizRegionId_ == nullptr && this->category_ == nullptr
        && this->chargeType_ == nullptr && this->cpu_ == nullptr && this->gpuMemory_ == nullptr && this->language_ == nullptr && this->memory_ == nullptr
        && this->osType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->productType_ == nullptr && this->queryInventory_ == nullptr; };
    // appCenterImageId Field Functions 
    bool hasAppCenterImageId() const { return this->appCenterImageId_ != nullptr;};
    void deleteAppCenterImageId() { this->appCenterImageId_ = nullptr;};
    inline string getAppCenterImageId() const { DARABONBA_PTR_GET_DEFAULT(appCenterImageId_, "") };
    inline ListAppInstanceTypeRequest& setAppCenterImageId(string appCenterImageId) { DARABONBA_PTR_SET_VALUE(appCenterImageId_, appCenterImageId) };


    // appInstanceType Field Functions 
    bool hasAppInstanceType() const { return this->appInstanceType_ != nullptr;};
    void deleteAppInstanceType() { this->appInstanceType_ = nullptr;};
    inline string getAppInstanceType() const { DARABONBA_PTR_GET_DEFAULT(appInstanceType_, "") };
    inline ListAppInstanceTypeRequest& setAppInstanceType(string appInstanceType) { DARABONBA_PTR_SET_VALUE(appInstanceType_, appInstanceType) };


    // appInstanceTypeFamily Field Functions 
    bool hasAppInstanceTypeFamily() const { return this->appInstanceTypeFamily_ != nullptr;};
    void deleteAppInstanceTypeFamily() { this->appInstanceTypeFamily_ = nullptr;};
    inline string getAppInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(appInstanceTypeFamily_, "") };
    inline ListAppInstanceTypeRequest& setAppInstanceTypeFamily(string appInstanceTypeFamily) { DARABONBA_PTR_SET_VALUE(appInstanceTypeFamily_, appInstanceTypeFamily) };


    // appInstanceTypeList Field Functions 
    bool hasAppInstanceTypeList() const { return this->appInstanceTypeList_ != nullptr;};
    void deleteAppInstanceTypeList() { this->appInstanceTypeList_ = nullptr;};
    inline const vector<string> & getAppInstanceTypeList() const { DARABONBA_PTR_GET_CONST(appInstanceTypeList_, vector<string>) };
    inline vector<string> getAppInstanceTypeList() { DARABONBA_PTR_GET(appInstanceTypeList_, vector<string>) };
    inline ListAppInstanceTypeRequest& setAppInstanceTypeList(const vector<string> & appInstanceTypeList) { DARABONBA_PTR_SET_VALUE(appInstanceTypeList_, appInstanceTypeList) };
    inline ListAppInstanceTypeRequest& setAppInstanceTypeList(vector<string> && appInstanceTypeList) { DARABONBA_PTR_SET_RVALUE(appInstanceTypeList_, appInstanceTypeList) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ListAppInstanceTypeRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListAppInstanceTypeRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListAppInstanceTypeRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline ListAppInstanceTypeRequest& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // gpuMemory Field Functions 
    bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
    void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
    inline int32_t getGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0) };
    inline ListAppInstanceTypeRequest& setGpuMemory(int32_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListAppInstanceTypeRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline ListAppInstanceTypeRequest& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline ListAppInstanceTypeRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAppInstanceTypeRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppInstanceTypeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListAppInstanceTypeRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // queryInventory Field Functions 
    bool hasQueryInventory() const { return this->queryInventory_ != nullptr;};
    void deleteQueryInventory() { this->queryInventory_ = nullptr;};
    inline bool getQueryInventory() const { DARABONBA_PTR_GET_DEFAULT(queryInventory_, false) };
    inline ListAppInstanceTypeRequest& setQueryInventory(bool queryInventory) { DARABONBA_PTR_SET_VALUE(queryInventory_, queryInventory) };


  protected:
    // The application image ID. The current session specification query does not filter based on this parameter. Omit this parameter. Do not infer image compatibility based on whether this parameter is specified.
    shared_ptr<string> appCenterImageId_ {};
    // The session specification code. Exact match is performed based on the complete code. If this parameter and `AppInstanceTypeList` are specified at the same time, the results are filtered by intersection. You can perform a conditional query without this parameter by using this operation first, and then select the returned codes.
    shared_ptr<string> appInstanceType_ {};
    // The specification family code. Exact match is performed based on the complete code. Use the specification family value from the query results. Do not extract it from the specification name.
    shared_ptr<string> appInstanceTypeFamily_ {};
    // The list of session specification codes. Up to 100 items are supported. This parameter takes effect by intersection with other filtering conditions. If this parameter and `AppInstanceType` are specified at the same time, the results must also match the single code.
    shared_ptr<vector<string>> appInstanceTypeList_ {};
    // The business region ID. If this parameter is omitted, the region of the current request is used. The specifications that can be queried may vary by region and account. You can call [ListRegions](https://api.aliyun.com/document/appstream-center/2021-09-01/ListRegions) to obtain the business region.
    shared_ptr<string> bizRegionId_ {};
    // The specification category filtering condition. If this parameter is omitted, no category filtering condition is added. Valid values:
    // 
    // - `Cpu`: CPU specification.
    // - `Gpu`: GPU specification.
    shared_ptr<string> category_ {};
    // The billing method for filtering available specifications. If this parameter is omitted, no billing method condition is added. Valid values:
    // 
    // - `PrePaid`: Subscription.
    // - `PostPaid`: Pay-as-you-go.
    shared_ptr<string> chargeType_ {};
    // The number of CPU cores for exact filtering. Use a decimal numeric string. Unit: cores. If this parameter is omitted, the number of CPU cores is not limited.
    shared_ptr<string> cpu_ {};
    // The GPU memory capacity for exact filtering. Unit: MB. If this parameter is omitted, the GPU memory capacity is not limited.
    shared_ptr<int32_t> gpuMemory_ {};
    // The language for the specification name.
    // 
    // - `zh-CN`: Use the Chinese name of the specification.
    // - Other values or omitted: Use the specification code as the name.
    // 
    // This parameter only affects the display of `InstanceTypeName` and does not change the specification code.
    shared_ptr<string> language_ {};
    // The memory capacity for exact filtering. Unit: MB. If this parameter is omitted, the memory capacity is not limited.
    shared_ptr<int32_t> memory_ {};
    // The operating system type. Use the following value for the Wuying Cloud Application (CloudApp) scenario:
    // 
    // - `Windows`: Windows operating system.
    // 
    // If this parameter is omitted, no operating system filtering condition is added.
    shared_ptr<string> osType_ {};
    // The page number. Explicitly specify a page number starting from 1. If this parameter is omitted, the default value 0 is used to query the first batch of results. For subsequent pages, request in the order of 1, 2, and 3.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of specifications returned per page. Unit: entries. Default value: 200. Explicitly set a positive integer that meets your business needs. The default value here does not represent the maximum value allowed by the service.
    shared_ptr<int32_t> pageSize_ {};
    // The product type. Set the value to the following fixed value when you call this operation:
    // 
    // - `CloudApp`: Wuying Cloud Application.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // Specifies whether to query the specification inventory at the same time. Default value: `false`.
    // 
    // - `true`: Queries the inventory and returns InventoryInfo when inventory information is available.
    // - `false`: Queries only the specifications and does not query the inventory.
    shared_ptr<bool> queryInventory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
