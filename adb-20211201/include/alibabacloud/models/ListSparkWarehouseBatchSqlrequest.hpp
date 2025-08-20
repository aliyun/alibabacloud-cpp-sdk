// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPARKWAREHOUSEBATCHSQLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSPARKWAREHOUSEBATCHSQLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListSparkWarehouseBatchSQLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSparkWarehouseBatchSQLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSparkWarehouseBatchSQLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
    };
    ListSparkWarehouseBatchSQLRequest() = default ;
    ListSparkWarehouseBatchSQLRequest(const ListSparkWarehouseBatchSQLRequest &) = default ;
    ListSparkWarehouseBatchSQLRequest(ListSparkWarehouseBatchSQLRequest &&) = default ;
    ListSparkWarehouseBatchSQLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSparkWarehouseBatchSQLRequest() = default ;
    ListSparkWarehouseBatchSQLRequest& operator=(const ListSparkWarehouseBatchSQLRequest &) = default ;
    ListSparkWarehouseBatchSQLRequest& operator=(ListSparkWarehouseBatchSQLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->resourceGroupName_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ListSparkWarehouseBatchSQLRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListSparkWarehouseBatchSQLRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListSparkWarehouseBatchSQLRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline ListSparkWarehouseBatchSQLRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The name of the interactive resource group for which the Spark engine is enabled.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
