// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETINSTANCESREQUEST_HPP_
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
  class ListCloudAssetInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAssetInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAssetQueryData, cloudAssetQueryData_);
      DARABONBA_PTR_TO_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAssetQueryData, cloudAssetQueryData_);
      DARABONBA_PTR_FROM_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListCloudAssetInstancesRequest() = default ;
    ListCloudAssetInstancesRequest(const ListCloudAssetInstancesRequest &) = default ;
    ListCloudAssetInstancesRequest(ListCloudAssetInstancesRequest &&) = default ;
    ListCloudAssetInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAssetInstancesRequest() = default ;
    ListCloudAssetInstancesRequest& operator=(const ListCloudAssetInstancesRequest &) = default ;
    ListCloudAssetInstancesRequest& operator=(ListCloudAssetInstancesRequest &&) = default ;
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
      // The subtype of the cloud asset.
      // 
      // You can call the [GetCloudAssetCriteria](~~GetCloudAssetCriteria~~) operation to query the subtype of the cloud asset.
      shared_ptr<int32_t> assetSubType_ {};
      // The type of the cloud asset.
      // 
      // You can call the [GetCloudAssetCriteria](~~GetCloudAssetCriteria~~) operation to query the cloud asset type.
      shared_ptr<int32_t> assetType_ {};
      // The server type. Valid values:
      // 
      // *   **0**: a cloud asset provided by Alibaba Cloud
      // *   **1**: a cloud asset outside Alibaba Cloud
      // *   **2**: a cloud asset in a data center
      // *   **3**, **4**, **5**, and **7**: a cloud asset provided by a third-party service provider
      // *   **8**: a lightweight cloud asset
      shared_ptr<int32_t> vendor_ {};
    };

    class CloudAssetQueryData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAssetQueryData& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
      };
      friend void from_json(const Darabonba::Json& j, CloudAssetQueryData& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
      };
      CloudAssetQueryData() = default ;
      CloudAssetQueryData(const CloudAssetQueryData &) = default ;
      CloudAssetQueryData(CloudAssetQueryData &&) = default ;
      CloudAssetQueryData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAssetQueryData() = default ;
      CloudAssetQueryData& operator=(const CloudAssetQueryData &) = default ;
      CloudAssetQueryData& operator=(CloudAssetQueryData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->data_ == nullptr
        && this->operator_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
      inline CloudAssetQueryData& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline CloudAssetQueryData& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    protected:
      // Query content.
      shared_ptr<string> data_ {};
      // Query operator, currently only supports: INCLUDE.
      shared_ptr<string> operator_ {};
    };

    virtual bool empty() const override { return this->cloudAssetQueryData_ == nullptr
        && this->cloudAssetTypes_ == nullptr && this->criteria_ == nullptr && this->currentPage_ == nullptr && this->logicalExp_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr; };
    // cloudAssetQueryData Field Functions 
    bool hasCloudAssetQueryData() const { return this->cloudAssetQueryData_ != nullptr;};
    void deleteCloudAssetQueryData() { this->cloudAssetQueryData_ = nullptr;};
    inline const vector<ListCloudAssetInstancesRequest::CloudAssetQueryData> & getCloudAssetQueryData() const { DARABONBA_PTR_GET_CONST(cloudAssetQueryData_, vector<ListCloudAssetInstancesRequest::CloudAssetQueryData>) };
    inline vector<ListCloudAssetInstancesRequest::CloudAssetQueryData> getCloudAssetQueryData() { DARABONBA_PTR_GET(cloudAssetQueryData_, vector<ListCloudAssetInstancesRequest::CloudAssetQueryData>) };
    inline ListCloudAssetInstancesRequest& setCloudAssetQueryData(const vector<ListCloudAssetInstancesRequest::CloudAssetQueryData> & cloudAssetQueryData) { DARABONBA_PTR_SET_VALUE(cloudAssetQueryData_, cloudAssetQueryData) };
    inline ListCloudAssetInstancesRequest& setCloudAssetQueryData(vector<ListCloudAssetInstancesRequest::CloudAssetQueryData> && cloudAssetQueryData) { DARABONBA_PTR_SET_RVALUE(cloudAssetQueryData_, cloudAssetQueryData) };


    // cloudAssetTypes Field Functions 
    bool hasCloudAssetTypes() const { return this->cloudAssetTypes_ != nullptr;};
    void deleteCloudAssetTypes() { this->cloudAssetTypes_ = nullptr;};
    inline const vector<ListCloudAssetInstancesRequest::CloudAssetTypes> & getCloudAssetTypes() const { DARABONBA_PTR_GET_CONST(cloudAssetTypes_, vector<ListCloudAssetInstancesRequest::CloudAssetTypes>) };
    inline vector<ListCloudAssetInstancesRequest::CloudAssetTypes> getCloudAssetTypes() { DARABONBA_PTR_GET(cloudAssetTypes_, vector<ListCloudAssetInstancesRequest::CloudAssetTypes>) };
    inline ListCloudAssetInstancesRequest& setCloudAssetTypes(const vector<ListCloudAssetInstancesRequest::CloudAssetTypes> & cloudAssetTypes) { DARABONBA_PTR_SET_VALUE(cloudAssetTypes_, cloudAssetTypes) };
    inline ListCloudAssetInstancesRequest& setCloudAssetTypes(vector<ListCloudAssetInstancesRequest::CloudAssetTypes> && cloudAssetTypes) { DARABONBA_PTR_SET_RVALUE(cloudAssetTypes_, cloudAssetTypes) };


    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string getCriteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline ListCloudAssetInstancesRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCloudAssetInstancesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // logicalExp Field Functions 
    bool hasLogicalExp() const { return this->logicalExp_ != nullptr;};
    void deleteLogicalExp() { this->logicalExp_ = nullptr;};
    inline string getLogicalExp() const { DARABONBA_PTR_GET_DEFAULT(logicalExp_, "") };
    inline ListCloudAssetInstancesRequest& setLogicalExp(string logicalExp) { DARABONBA_PTR_SET_VALUE(logicalExp_, logicalExp) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCloudAssetInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCloudAssetInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Query data list based on keywords.
    shared_ptr<vector<ListCloudAssetInstancesRequest::CloudAssetQueryData>> cloudAssetQueryData_ {};
    // The details of the cloud asset.
    shared_ptr<vector<ListCloudAssetInstancesRequest::CloudAssetTypes>> cloudAssetTypes_ {};
    // The search conditions for assets. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **name**: the name of the search condition.
    // 
    // *   **value**: the value of the search condition.
    // 
    // *   **logicalExp**: the logical relation for multiple search conditions. Valid values:
    // 
    //     *   **OR**: The search conditions use a logical **OR**.
    //     *   **AND**: The search conditions use a logical **AND**.
    // 
    // > You can call the [GetCloudAssetCriteria](~~GetCloudAssetCriteria~~) operation to query supported search conditions.
    shared_ptr<string> criteria_ {};
    // The number of the page to return.
    shared_ptr<int32_t> currentPage_ {};
    // The logical relation for multiple search conditions. Valid values:
    // 
    // *   **OR**: The search conditions use a logical **OR**.
    // *   **AND**: The search conditions use a logical **AND**.
    shared_ptr<string> logicalExp_ {};
    // The number of entries to return on each page. Maximum value: 100. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
