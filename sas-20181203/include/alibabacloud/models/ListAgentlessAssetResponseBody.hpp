// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSASSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSASSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAgentlessAssetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessAssetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetList, assetList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessAssetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetList, assetList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAgentlessAssetResponseBody() = default ;
    ListAgentlessAssetResponseBody(const ListAgentlessAssetResponseBody &) = default ;
    ListAgentlessAssetResponseBody(ListAgentlessAssetResponseBody &&) = default ;
    ListAgentlessAssetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessAssetResponseBody() = default ;
    ListAgentlessAssetResponseBody& operator=(const ListAgentlessAssetResponseBody &) = default ;
    ListAgentlessAssetResponseBody& operator=(ListAgentlessAssetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The current page number in a paginated query.
      shared_ptr<int32_t> currentPage_ {};
      // The maximum number of items to display per page in a paginated query.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of items.
      shared_ptr<int32_t> totalCount_ {};
    };

    class AssetList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetList& obj) { 
        DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, AssetList& obj) { 
        DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      AssetList() = default ;
      AssetList(const AssetList &) = default ;
      AssetList(AssetList &&) = default ;
      AssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssetList() = default ;
      AssetList& operator=(const AssetList &) = default ;
      AssetList& operator=(AssetList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->diskType_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->platform_ == nullptr && this->regionId_ == nullptr && this->targetType_ == nullptr; };
      // diskType Field Functions 
      bool hasDiskType() const { return this->diskType_ != nullptr;};
      void deleteDiskType() { this->diskType_ = nullptr;};
      inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
      inline AssetList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AssetList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline AssetList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline AssetList& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AssetList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline int32_t getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
      inline AssetList& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The type of the cloud disk. Values:
      // 
      // - system: System disk.
      // 
      // - data: Data disk.
      shared_ptr<string> diskType_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The instance name.
      shared_ptr<string> instanceName_ {};
      // Operating system type.
      shared_ptr<string> platform_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The type of the asset. Values:
      // 
      // - **3**: User snapshot
      // 
      // - **4**: User-defined image
      shared_ptr<int32_t> targetType_ {};
    };

    virtual bool empty() const override { return this->assetList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // assetList Field Functions 
    bool hasAssetList() const { return this->assetList_ != nullptr;};
    void deleteAssetList() { this->assetList_ = nullptr;};
    inline const vector<ListAgentlessAssetResponseBody::AssetList> & getAssetList() const { DARABONBA_PTR_GET_CONST(assetList_, vector<ListAgentlessAssetResponseBody::AssetList>) };
    inline vector<ListAgentlessAssetResponseBody::AssetList> getAssetList() { DARABONBA_PTR_GET(assetList_, vector<ListAgentlessAssetResponseBody::AssetList>) };
    inline ListAgentlessAssetResponseBody& setAssetList(const vector<ListAgentlessAssetResponseBody::AssetList> & assetList) { DARABONBA_PTR_SET_VALUE(assetList_, assetList) };
    inline ListAgentlessAssetResponseBody& setAssetList(vector<ListAgentlessAssetResponseBody::AssetList> && assetList) { DARABONBA_PTR_SET_RVALUE(assetList_, assetList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListAgentlessAssetResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListAgentlessAssetResponseBody::PageInfo) };
    inline ListAgentlessAssetResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListAgentlessAssetResponseBody::PageInfo) };
    inline ListAgentlessAssetResponseBody& setPageInfo(const ListAgentlessAssetResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAgentlessAssetResponseBody& setPageInfo(ListAgentlessAssetResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentlessAssetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of returned assets.
    shared_ptr<vector<ListAgentlessAssetResponseBody::AssetList>> assetList_ {};
    // Pagination information.
    shared_ptr<ListAgentlessAssetResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is a unique identifier generated by Alibaba Cloud for this request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
