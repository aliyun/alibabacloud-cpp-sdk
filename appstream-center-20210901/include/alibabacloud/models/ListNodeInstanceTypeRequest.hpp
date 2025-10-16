// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEINSTANCETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEINSTANCETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListNodeInstanceTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeInstanceTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_TO_JSON(NodeInstanceTypeFamily, nodeInstanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeInstanceTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_FROM_JSON(NodeInstanceTypeFamily, nodeInstanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
    };
    ListNodeInstanceTypeRequest() = default ;
    ListNodeInstanceTypeRequest(const ListNodeInstanceTypeRequest &) = default ;
    ListNodeInstanceTypeRequest(ListNodeInstanceTypeRequest &&) = default ;
    ListNodeInstanceTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeInstanceTypeRequest() = default ;
    ListNodeInstanceTypeRequest& operator=(const ListNodeInstanceTypeRequest &) = default ;
    ListNodeInstanceTypeRequest& operator=(ListNodeInstanceTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizRegionId_ == nullptr
        && return this->cpu_ == nullptr && return this->gpu_ == nullptr && return this->gpuMemory_ == nullptr && return this->language_ == nullptr && return this->memory_ == nullptr
        && return this->nodeInstanceType_ == nullptr && return this->nodeInstanceTypeFamily_ == nullptr && return this->orderBy_ == nullptr && return this->osType_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->productType_ == nullptr && return this->sortType_ == nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ListNodeInstanceTypeRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline ListNodeInstanceTypeRequest& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline float gpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0.0) };
    inline ListNodeInstanceTypeRequest& setGpu(float gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // gpuMemory Field Functions 
    bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
    void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
    inline int32_t gpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0) };
    inline ListNodeInstanceTypeRequest& setGpuMemory(int32_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListNodeInstanceTypeRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline ListNodeInstanceTypeRequest& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nodeInstanceType Field Functions 
    bool hasNodeInstanceType() const { return this->nodeInstanceType_ != nullptr;};
    void deleteNodeInstanceType() { this->nodeInstanceType_ = nullptr;};
    inline string nodeInstanceType() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceType_, "") };
    inline ListNodeInstanceTypeRequest& setNodeInstanceType(string nodeInstanceType) { DARABONBA_PTR_SET_VALUE(nodeInstanceType_, nodeInstanceType) };


    // nodeInstanceTypeFamily Field Functions 
    bool hasNodeInstanceTypeFamily() const { return this->nodeInstanceTypeFamily_ != nullptr;};
    void deleteNodeInstanceTypeFamily() { this->nodeInstanceTypeFamily_ = nullptr;};
    inline string nodeInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceTypeFamily_, "") };
    inline ListNodeInstanceTypeRequest& setNodeInstanceTypeFamily(string nodeInstanceTypeFamily) { DARABONBA_PTR_SET_VALUE(nodeInstanceTypeFamily_, nodeInstanceTypeFamily) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListNodeInstanceTypeRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline ListNodeInstanceTypeRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNodeInstanceTypeRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNodeInstanceTypeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListNodeInstanceTypeRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline string sortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, "") };
    inline ListNodeInstanceTypeRequest& setSortType(string sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


  protected:
    // The ID of the region where the resource resides. For information about the supported regions, see [Limits](https://help.aliyun.com/document_detail/426036.html).
    // 
    // Valid values:
    // 
    // *   cn-shanghai: China (Shanghai)
    // *   cn-hangzhou: China (Hangzhou)
    std::shared_ptr<string> bizRegionId_ = nullptr;
    std::shared_ptr<float> cpu_ = nullptr;
    std::shared_ptr<float> gpu_ = nullptr;
    std::shared_ptr<int32_t> gpuMemory_ = nullptr;
    // The language that you want to use.
    // 
    // Valid values:
    // 
    // *   en-US: English (US)
    // *   zh-CN: Simplified Chinese
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<int32_t> memory_ = nullptr;
    // The resource type that you want to query. If you do not configure this parameter, all resource types are returned.
    std::shared_ptr<string> nodeInstanceType_ = nullptr;
    std::shared_ptr<string> nodeInstanceTypeFamily_ = nullptr;
    std::shared_ptr<string> orderBy_ = nullptr;
    // The operating system that is supported.
    // 
    // Valid value:
    // 
    // *   Windows: the Windows operating system
    std::shared_ptr<string> osType_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Valid values: 1 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    // 
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<string> sortType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
