// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClustersRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClustersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterIds, DBClusterIds_);
      DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_TO_JSON(DBClusterVersion, DBClusterVersion_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterIds, DBClusterIds_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_FROM_JSON(DBClusterVersion, DBClusterVersion_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDBClustersRequest() = default ;
    DescribeDBClustersRequest(const DescribeDBClustersRequest &) = default ;
    DescribeDBClustersRequest(DescribeDBClustersRequest &&) = default ;
    DescribeDBClustersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersRequest() = default ;
    DescribeDBClustersRequest& operator=(const DescribeDBClustersRequest &) = default ;
    DescribeDBClustersRequest& operator=(DescribeDBClustersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterDescription_ != nullptr
        && this->DBClusterIds_ != nullptr && this->DBClusterStatus_ != nullptr && this->DBClusterVersion_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->productVersion_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->tag_ != nullptr; };
    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeDBClustersRequest& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterIds Field Functions 
    bool hasDBClusterIds() const { return this->DBClusterIds_ != nullptr;};
    void deleteDBClusterIds() { this->DBClusterIds_ = nullptr;};
    inline string DBClusterIds() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIds_, "") };
    inline DescribeDBClustersRequest& setDBClusterIds(string DBClusterIds) { DARABONBA_PTR_SET_VALUE(DBClusterIds_, DBClusterIds) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string DBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeDBClustersRequest& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBClusterVersion Field Functions 
    bool hasDBClusterVersion() const { return this->DBClusterVersion_ != nullptr;};
    void deleteDBClusterVersion() { this->DBClusterVersion_ = nullptr;};
    inline string DBClusterVersion() const { DARABONBA_PTR_GET_DEFAULT(DBClusterVersion_, "") };
    inline DescribeDBClustersRequest& setDBClusterVersion(string DBClusterVersion) { DARABONBA_PTR_SET_VALUE(DBClusterVersion_, DBClusterVersion) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBClustersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDBClustersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string productVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline DescribeDBClustersRequest& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBClustersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBClustersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDBClustersRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDBClustersRequestTag>) };
    inline vector<DescribeDBClustersRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeDBClustersRequestTag>) };
    inline DescribeDBClustersRequest& setTag(const vector<DescribeDBClustersRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDBClustersRequest& setTag(vector<DescribeDBClustersRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The description of the cluster.
    // 
    // *   The description cannot start with `http://` or `https://`.
    // *   The description must be 2 to 256 characters in length
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // If you do not specify this parameter, the information about all clusters that reside in the region is returned.
    std::shared_ptr<string> DBClusterIds_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   **Preparing**
    // *   **Creating**
    // *   **Running**
    // *   **Deleting**
    // *   **Restoring**
    // *   **ClassChanging**
    // *   **NetAddressCreating**
    // *   **NetAddressDeleting**
    // *   **NetAddressModifying**
    std::shared_ptr<string> DBClusterStatus_ = nullptr;
    // The version number corresponding to the edition of the cluster. Valid values:
    // 
    // *   **3.0**: Data Warehouse Edition.
    // *   **5.0** (default): includes Data Lakehouse Edition, Enterprise Edition, and Basic Edition.
    // *   **All**: all editions, including Data Warehouse Edition, Data Lakehouse Edition, Enterprise Edition, and Basic Edition.
    std::shared_ptr<string> DBClusterVersion_ = nullptr;
    // The page number. Pages start from page 1. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The edition of the cluster. Valid values:
    // 
    // *   **EnterpriseVersion**: Enterprise Edition.
    // *   **BasicVersion**: Basic Edition.
    // 
    // >  If you leave this parameter empty, the information about clusters of all editions is returned.
    std::shared_ptr<string> productVersion_ = nullptr;
    // The region ID of the cluster.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/454314.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID. If you do not specify this parameter, the information about all resource groups in the cluster is returned.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags that are added to the cluster.
    std::shared_ptr<vector<DescribeDBClustersRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
