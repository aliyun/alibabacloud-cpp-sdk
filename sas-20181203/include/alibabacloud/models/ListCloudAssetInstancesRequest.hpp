// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudAssetInstancesRequestCloudAssetTypes.hpp>
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
      DARABONBA_PTR_TO_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetInstancesRequest& obj) { 
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
    virtual bool empty() const override { this->cloudAssetTypes_ != nullptr
        && this->criteria_ != nullptr && this->currentPage_ != nullptr && this->logicalExp_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr; };
    // cloudAssetTypes Field Functions 
    bool hasCloudAssetTypes() const { return this->cloudAssetTypes_ != nullptr;};
    void deleteCloudAssetTypes() { this->cloudAssetTypes_ = nullptr;};
    inline const vector<ListCloudAssetInstancesRequestCloudAssetTypes> & cloudAssetTypes() const { DARABONBA_PTR_GET_CONST(cloudAssetTypes_, vector<ListCloudAssetInstancesRequestCloudAssetTypes>) };
    inline vector<ListCloudAssetInstancesRequestCloudAssetTypes> cloudAssetTypes() { DARABONBA_PTR_GET(cloudAssetTypes_, vector<ListCloudAssetInstancesRequestCloudAssetTypes>) };
    inline ListCloudAssetInstancesRequest& setCloudAssetTypes(const vector<ListCloudAssetInstancesRequestCloudAssetTypes> & cloudAssetTypes) { DARABONBA_PTR_SET_VALUE(cloudAssetTypes_, cloudAssetTypes) };
    inline ListCloudAssetInstancesRequest& setCloudAssetTypes(vector<ListCloudAssetInstancesRequestCloudAssetTypes> && cloudAssetTypes) { DARABONBA_PTR_SET_RVALUE(cloudAssetTypes_, cloudAssetTypes) };


    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string criteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline ListCloudAssetInstancesRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCloudAssetInstancesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // logicalExp Field Functions 
    bool hasLogicalExp() const { return this->logicalExp_ != nullptr;};
    void deleteLogicalExp() { this->logicalExp_ = nullptr;};
    inline string logicalExp() const { DARABONBA_PTR_GET_DEFAULT(logicalExp_, "") };
    inline ListCloudAssetInstancesRequest& setLogicalExp(string logicalExp) { DARABONBA_PTR_SET_VALUE(logicalExp_, logicalExp) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCloudAssetInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCloudAssetInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The details of the cloud asset.
    std::shared_ptr<vector<ListCloudAssetInstancesRequestCloudAssetTypes>> cloudAssetTypes_ = nullptr;
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
    std::shared_ptr<string> criteria_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The logical relation for multiple search conditions. Valid values:
    // 
    // *   **OR**: The search conditions use a logical **OR**.
    // *   **AND**: The search conditions use a logical **AND**.
    std::shared_ptr<string> logicalExp_ = nullptr;
    // The number of entries to return on each page. Maximum value: 100. Default value: 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
