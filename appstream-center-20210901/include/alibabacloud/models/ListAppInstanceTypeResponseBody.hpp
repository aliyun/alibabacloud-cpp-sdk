// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCETYPERESPONSEBODY_HPP_
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
  class ListAppInstanceTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceTypeModels, appInstanceTypeModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceTypeModels, appInstanceTypeModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAppInstanceTypeResponseBody() = default ;
    ListAppInstanceTypeResponseBody(const ListAppInstanceTypeResponseBody &) = default ;
    ListAppInstanceTypeResponseBody(ListAppInstanceTypeResponseBody &&) = default ;
    ListAppInstanceTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceTypeResponseBody() = default ;
    ListAppInstanceTypeResponseBody& operator=(const ListAppInstanceTypeResponseBody &) = default ;
    ListAppInstanceTypeResponseBody& operator=(ListAppInstanceTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppInstanceTypeModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppInstanceTypeModels& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceType, appInstanceType_);
        DARABONBA_PTR_TO_JSON(AppInstanceTypeFamily, appInstanceTypeFamily_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_TO_JSON(Gpu, gpu_);
        DARABONBA_PTR_TO_JSON(GpuMemory, gpuMemory_);
        DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceTypeName, instanceTypeName_);
        DARABONBA_PTR_TO_JSON(InventoryInfo, inventoryInfo_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      };
      friend void from_json(const Darabonba::Json& j, AppInstanceTypeModels& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceType, appInstanceType_);
        DARABONBA_PTR_FROM_JSON(AppInstanceTypeFamily, appInstanceTypeFamily_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
        DARABONBA_PTR_FROM_JSON(GpuMemory, gpuMemory_);
        DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceTypeName, instanceTypeName_);
        DARABONBA_PTR_FROM_JSON(InventoryInfo, inventoryInfo_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      };
      AppInstanceTypeModels() = default ;
      AppInstanceTypeModels(const AppInstanceTypeModels &) = default ;
      AppInstanceTypeModels(AppInstanceTypeModels &&) = default ;
      AppInstanceTypeModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppInstanceTypeModels() = default ;
      AppInstanceTypeModels& operator=(const AppInstanceTypeModels &) = default ;
      AppInstanceTypeModels& operator=(AppInstanceTypeModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InventoryInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InventoryInfo& obj) { 
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(ZoneInventoryInfo, zoneInventoryInfo_);
        };
        friend void from_json(const Darabonba::Json& j, InventoryInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(ZoneInventoryInfo, zoneInventoryInfo_);
        };
        InventoryInfo() = default ;
        InventoryInfo(const InventoryInfo &) = default ;
        InventoryInfo(InventoryInfo &&) = default ;
        InventoryInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InventoryInfo() = default ;
        InventoryInfo& operator=(const InventoryInfo &) = default ;
        InventoryInfo& operator=(InventoryInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ZoneInventoryInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ZoneInventoryInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          };
          friend void from_json(const Darabonba::Json& j, ZoneInventoryInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          };
          ZoneInventoryInfo() = default ;
          ZoneInventoryInfo(const ZoneInventoryInfo &) = default ;
          ZoneInventoryInfo(ZoneInventoryInfo &&) = default ;
          ZoneInventoryInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ZoneInventoryInfo() = default ;
          ZoneInventoryInfo& operator=(const ZoneInventoryInfo &) = default ;
          ZoneInventoryInfo& operator=(ZoneInventoryInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->zoneId_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
          inline ZoneInventoryInfo& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // zoneId Field Functions 
          bool hasZoneId() const { return this->zoneId_ != nullptr;};
          void deleteZoneId() { this->zoneId_ = nullptr;};
          inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
          inline ZoneInventoryInfo& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        protected:
          // The available quantity in the zone obtained in this query. Unit: instances. This value is an inventory snapshot and does not indicate that resources have been reserved for the current account.
          shared_ptr<string> amount_ {};
          // The zone ID, which can be queried by calling the [ListZones](https://api.aliyun.com/document/appstream-center/2021-09-01/ListZones) operation.
          shared_ptr<string> zoneId_ {};
        };

        virtual bool empty() const override { return this->regionId_ == nullptr
        && this->status_ == nullptr && this->zoneInventoryInfo_ == nullptr; };
        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline InventoryInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline InventoryInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // zoneInventoryInfo Field Functions 
        bool hasZoneInventoryInfo() const { return this->zoneInventoryInfo_ != nullptr;};
        void deleteZoneInventoryInfo() { this->zoneInventoryInfo_ = nullptr;};
        inline const vector<InventoryInfo::ZoneInventoryInfo> & getZoneInventoryInfo() const { DARABONBA_PTR_GET_CONST(zoneInventoryInfo_, vector<InventoryInfo::ZoneInventoryInfo>) };
        inline vector<InventoryInfo::ZoneInventoryInfo> getZoneInventoryInfo() { DARABONBA_PTR_GET(zoneInventoryInfo_, vector<InventoryInfo::ZoneInventoryInfo>) };
        inline InventoryInfo& setZoneInventoryInfo(const vector<InventoryInfo::ZoneInventoryInfo> & zoneInventoryInfo) { DARABONBA_PTR_SET_VALUE(zoneInventoryInfo_, zoneInventoryInfo) };
        inline InventoryInfo& setZoneInventoryInfo(vector<InventoryInfo::ZoneInventoryInfo> && zoneInventoryInfo) { DARABONBA_PTR_SET_RVALUE(zoneInventoryInfo_, zoneInventoryInfo) };


      protected:
        // The business region ID corresponding to the inventory query.
        shared_ptr<string> regionId_ {};
        // The instance type inventory status obtained in the current query.
        // 
        // - `Available`: The total inventory of the queried zones is greater than 0.
        // - `SoldOut`: The total inventory of the queried zones is not greater than 0.
        shared_ptr<string> status_ {};
        // The list of inventory information returned by zone.
        shared_ptr<vector<InventoryInfo::ZoneInventoryInfo>> zoneInventoryInfo_ {};
      };

      virtual bool empty() const override { return this->appInstanceType_ == nullptr
        && this->appInstanceTypeFamily_ == nullptr && this->cpu_ == nullptr && this->dataDiskSize_ == nullptr && this->gpu_ == nullptr && this->gpuMemory_ == nullptr
        && this->gpuSpec_ == nullptr && this->id_ == nullptr && this->instanceTypeName_ == nullptr && this->inventoryInfo_ == nullptr && this->memory_ == nullptr
        && this->productType_ == nullptr && this->systemDiskSize_ == nullptr; };
      // appInstanceType Field Functions 
      bool hasAppInstanceType() const { return this->appInstanceType_ != nullptr;};
      void deleteAppInstanceType() { this->appInstanceType_ = nullptr;};
      inline string getAppInstanceType() const { DARABONBA_PTR_GET_DEFAULT(appInstanceType_, "") };
      inline AppInstanceTypeModels& setAppInstanceType(string appInstanceType) { DARABONBA_PTR_SET_VALUE(appInstanceType_, appInstanceType) };


      // appInstanceTypeFamily Field Functions 
      bool hasAppInstanceTypeFamily() const { return this->appInstanceTypeFamily_ != nullptr;};
      void deleteAppInstanceTypeFamily() { this->appInstanceTypeFamily_ = nullptr;};
      inline string getAppInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(appInstanceTypeFamily_, "") };
      inline AppInstanceTypeModels& setAppInstanceTypeFamily(string appInstanceTypeFamily) { DARABONBA_PTR_SET_VALUE(appInstanceTypeFamily_, appInstanceTypeFamily) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline AppInstanceTypeModels& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // dataDiskSize Field Functions 
      bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
      void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
      inline int64_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0L) };
      inline AppInstanceTypeModels& setDataDiskSize(int64_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


      // gpu Field Functions 
      bool hasGpu() const { return this->gpu_ != nullptr;};
      void deleteGpu() { this->gpu_ = nullptr;};
      inline string getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, "") };
      inline AppInstanceTypeModels& setGpu(string gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


      // gpuMemory Field Functions 
      bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
      void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
      inline int64_t getGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0L) };
      inline AppInstanceTypeModels& setGpuMemory(int64_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


      // gpuSpec Field Functions 
      bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
      void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
      inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
      inline AppInstanceTypeModels& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline AppInstanceTypeModels& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceTypeName Field Functions 
      bool hasInstanceTypeName() const { return this->instanceTypeName_ != nullptr;};
      void deleteInstanceTypeName() { this->instanceTypeName_ = nullptr;};
      inline string getInstanceTypeName() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeName_, "") };
      inline AppInstanceTypeModels& setInstanceTypeName(string instanceTypeName) { DARABONBA_PTR_SET_VALUE(instanceTypeName_, instanceTypeName) };


      // inventoryInfo Field Functions 
      bool hasInventoryInfo() const { return this->inventoryInfo_ != nullptr;};
      void deleteInventoryInfo() { this->inventoryInfo_ = nullptr;};
      inline const AppInstanceTypeModels::InventoryInfo & getInventoryInfo() const { DARABONBA_PTR_GET_CONST(inventoryInfo_, AppInstanceTypeModels::InventoryInfo) };
      inline AppInstanceTypeModels::InventoryInfo getInventoryInfo() { DARABONBA_PTR_GET(inventoryInfo_, AppInstanceTypeModels::InventoryInfo) };
      inline AppInstanceTypeModels& setInventoryInfo(const AppInstanceTypeModels::InventoryInfo & inventoryInfo) { DARABONBA_PTR_SET_VALUE(inventoryInfo_, inventoryInfo) };
      inline AppInstanceTypeModels& setInventoryInfo(AppInstanceTypeModels::InventoryInfo && inventoryInfo) { DARABONBA_PTR_SET_RVALUE(inventoryInfo_, inventoryInfo) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline AppInstanceTypeModels& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline AppInstanceTypeModels& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int64_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0L) };
      inline AppInstanceTypeModels& setSystemDiskSize(int64_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    protected:
      // The session instance type code, which can be used as the session instance type parameter for subsequent operations.
      shared_ptr<string> appInstanceType_ {};
      // The instance type family code to which the session instance type belongs.
      shared_ptr<string> appInstanceTypeFamily_ {};
      // The number of CPU cores included in the instance type, represented by a numeric string. Unit: cores.
      shared_ptr<string> cpu_ {};
      // The data cloud disk capacity of the instance type. Unit: GB.
      shared_ptr<int64_t> dataDiskSize_ {};
      // Not enabled yet. The example value is only used to demonstrate the format and does not represent the actual number of GPUs returned by this operation.
      shared_ptr<string> gpu_ {};
      // The GPU memory capacity of the instance type. Unit: MB.
      shared_ptr<int64_t> gpuMemory_ {};
      // The display value or display range of the GPU memory. Display it as the returned text. Do not directly use it as a numeric value for capacity conversion.
      shared_ptr<string> gpuSpec_ {};
      // The identifier of the instance type record. When integrating with pricing or creation operations, use `AppInstanceType`. Do not use this field to replace the instance type code.
      shared_ptr<int64_t> id_ {};
      // The display name of the instance type. The Chinese name is used only when `Language` is set to `zh-CN`. For other values or when omitted, the instance type code is used.
      shared_ptr<string> instanceTypeName_ {};
      // The inventory information of the instance type. This parameter is returned only when the inventory is queried and the relevant information is obtained. If this parameter is not returned, it does not mean that the inventory is 0.
      shared_ptr<AppInstanceTypeModels::InventoryInfo> inventoryInfo_ {};
      // The memory capacity of the instance type. Unit: MB.
      shared_ptr<int64_t> memory_ {};
      // The type of the product to which the instance type belongs. The current document displays the following values:
      // 
      // - `CloudApp`: Wuying Cloud Application.
      shared_ptr<string> productType_ {};
      // The system cloud disk capacity of the instance type. Unit: GB.
      shared_ptr<int64_t> systemDiskSize_ {};
    };

    virtual bool empty() const override { return this->appInstanceTypeModels_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // appInstanceTypeModels Field Functions 
    bool hasAppInstanceTypeModels() const { return this->appInstanceTypeModels_ != nullptr;};
    void deleteAppInstanceTypeModels() { this->appInstanceTypeModels_ = nullptr;};
    inline const vector<ListAppInstanceTypeResponseBody::AppInstanceTypeModels> & getAppInstanceTypeModels() const { DARABONBA_PTR_GET_CONST(appInstanceTypeModels_, vector<ListAppInstanceTypeResponseBody::AppInstanceTypeModels>) };
    inline vector<ListAppInstanceTypeResponseBody::AppInstanceTypeModels> getAppInstanceTypeModels() { DARABONBA_PTR_GET(appInstanceTypeModels_, vector<ListAppInstanceTypeResponseBody::AppInstanceTypeModels>) };
    inline ListAppInstanceTypeResponseBody& setAppInstanceTypeModels(const vector<ListAppInstanceTypeResponseBody::AppInstanceTypeModels> & appInstanceTypeModels) { DARABONBA_PTR_SET_VALUE(appInstanceTypeModels_, appInstanceTypeModels) };
    inline ListAppInstanceTypeResponseBody& setAppInstanceTypeModels(vector<ListAppInstanceTypeResponseBody::AppInstanceTypeModels> && appInstanceTypeModels) { DARABONBA_PTR_SET_RVALUE(appInstanceTypeModels_, appInstanceTypeModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAppInstanceTypeResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppInstanceTypeResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppInstanceTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAppInstanceTypeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of session instance types on the current page.
    shared_ptr<vector<ListAppInstanceTypeResponseBody::AppInstanceTypeModels>> appInstanceTypeModels_ {};
    // The page number used in this query, which corresponds to the request parameters and the total number of entries.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page used in this query.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier of the request, which can be used to troubleshoot request issues.
    shared_ptr<string> requestId_ {};
    // The total number of instance types that meet all filtering conditions, not the number of entries on the current page.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
