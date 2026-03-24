// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKSPMINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKSPMINSTANCESREQUEST_HPP_
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
  class ListKspmInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKspmInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKspmInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListKspmInstancesRequest() = default ;
    ListKspmInstancesRequest(const ListKspmInstancesRequest &) = default ;
    ListKspmInstancesRequest(ListKspmInstancesRequest &&) = default ;
    ListKspmInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKspmInstancesRequest() = default ;
    ListKspmInstancesRequest& operator=(const ListKspmInstancesRequest &) = default ;
    ListKspmInstancesRequest& operator=(ListKspmInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudAssetTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAssetTypes& obj) { 
        DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, CloudAssetTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      CloudAssetTypes() = default ;
      CloudAssetTypes(const CloudAssetTypes &) = default ;
      CloudAssetTypes(CloudAssetTypes &&) = default ;
      CloudAssetTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAssetTypes() = default ;
      CloudAssetTypes& operator=(const CloudAssetTypes &) = default ;
      CloudAssetTypes& operator=(CloudAssetTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetType_ == nullptr && this->vendor_ == nullptr; };
      // assetSubType Field Functions 
      bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
      void deleteAssetSubType() { this->assetSubType_ = nullptr;};
      inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
      inline CloudAssetTypes& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
      inline CloudAssetTypes& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
      inline CloudAssetTypes& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // Subtype of the product.
      // Asset type-subtype. Values:
      // 
      // - **0**: Workload
      //     *  **0**: Pod
      //     *  **1**: DaemonSet
      //     *  **2**: StatefulSet
      // - **1**: Service
      //     *  **0**: Service
      // - **2**: Namespace
      //     *  **0**: Namespace
      // - **3**: Authorization
      //     *  **0**: Role
      //     *  **1**: ClusterRole
      //     *  **2**: ClusterRoleBinding
      //     *  **3**: RoleBinding
      //     *  **4**: ServiceAccount
      // - **4**: Storage
      //     *  **0**: PersistentVolume
      //     *  **1**: PersistentVolumeClaim
      //     *  **2**: StorageClass
      // - **5**: Container
      //     *  **0**: Image
      // - **6**: Network
      //     *  **0**: Route
      //     *  **0**: Ingress
      // - **7**: Configuration
      //     *  **0**: ConfigMap
      // - **8**: Policies
      //     *  **0**: LimitRanges
      //     *  **1**: ResourceQuota
      shared_ptr<int32_t> assetSubType_ {};
      // Type of the asset. Values:
      // 
      // - **0**: Workload
      // - **1**: Service
      // - **2**: Namespace
      // - **3**: Authorization
      // - **4**: Storage
      // - **5**: Container
      // - **6**: Network
      // - **7**: Configuration
      // - **8**: Policies
      shared_ptr<int32_t> assetType_ {};
      // Vendor of the asset. The fixed value is **200**.
      shared_ptr<int32_t> vendor_ {};
    };

    virtual bool empty() const override { return this->cloudAssetTypes_ == nullptr
        && this->criteria_ == nullptr && this->currentPage_ == nullptr && this->logicalExp_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr; };
    // cloudAssetTypes Field Functions 
    bool hasCloudAssetTypes() const { return this->cloudAssetTypes_ != nullptr;};
    void deleteCloudAssetTypes() { this->cloudAssetTypes_ = nullptr;};
    inline const vector<ListKspmInstancesRequest::CloudAssetTypes> & getCloudAssetTypes() const { DARABONBA_PTR_GET_CONST(cloudAssetTypes_, vector<ListKspmInstancesRequest::CloudAssetTypes>) };
    inline vector<ListKspmInstancesRequest::CloudAssetTypes> getCloudAssetTypes() { DARABONBA_PTR_GET(cloudAssetTypes_, vector<ListKspmInstancesRequest::CloudAssetTypes>) };
    inline ListKspmInstancesRequest& setCloudAssetTypes(const vector<ListKspmInstancesRequest::CloudAssetTypes> & cloudAssetTypes) { DARABONBA_PTR_SET_VALUE(cloudAssetTypes_, cloudAssetTypes) };
    inline ListKspmInstancesRequest& setCloudAssetTypes(vector<ListKspmInstancesRequest::CloudAssetTypes> && cloudAssetTypes) { DARABONBA_PTR_SET_RVALUE(cloudAssetTypes_, cloudAssetTypes) };


    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string getCriteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline ListKspmInstancesRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListKspmInstancesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // logicalExp Field Functions 
    bool hasLogicalExp() const { return this->logicalExp_ != nullptr;};
    void deleteLogicalExp() { this->logicalExp_ = nullptr;};
    inline string getLogicalExp() const { DARABONBA_PTR_GET_DEFAULT(logicalExp_, "") };
    inline ListKspmInstancesRequest& setLogicalExp(string logicalExp) { DARABONBA_PTR_SET_VALUE(logicalExp_, logicalExp) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListKspmInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListKspmInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // List of Kubernetes asset type information.
    shared_ptr<vector<ListKspmInstancesRequest::CloudAssetTypes>> cloudAssetTypes_ {};
    // Set the conditions for searching assets. This parameter is in JSON format, and case sensitivity should be noted when entering parameters. It includes the following fields:
    // 
    // - **name**: Search item
    // - **value**: Value of the search item
    // - **logicalExp**: The relationship between search items when multiple conditions are used. Values:
    //     - **OR**: Indicates an **or** relationship between multiple conditions.
    //     - **AND**: Indicates an **and** relationship between multiple conditions.
    // > Supports using region, instance name, instance ID, alarm status, risk status, and tag search conditions.
    shared_ptr<string> criteria_ {};
    // Set which page to start displaying the query results from. The default value is 1, indicating that the display starts from the first page.
    shared_ptr<int32_t> currentPage_ {};
    // Set the logical relationship that takes effect between multiple search conditions. Values:
    // 
    // - **OR**: Indicates an **or** relationship between multiple search conditions.
    // - **AND**: Indicates an **and** relationship between multiple search conditions.
    shared_ptr<string> logicalExp_ {};
    // The maximum number of data entries displayed per page during pagination. The default value is 20.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the region where the instance is located.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
