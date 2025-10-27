// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniBackupDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniBackupDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(UniRegionId, uniRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniBackupDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(UniRegionId, uniRegionId_);
    };
    DescribeUniBackupDatabaseRequest() = default ;
    DescribeUniBackupDatabaseRequest(const DescribeUniBackupDatabaseRequest &) = default ;
    DescribeUniBackupDatabaseRequest(DescribeUniBackupDatabaseRequest &&) = default ;
    DescribeUniBackupDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniBackupDatabaseRequest() = default ;
    DescribeUniBackupDatabaseRequest& operator=(const DescribeUniBackupDatabaseRequest &) = default ;
    DescribeUniBackupDatabaseRequest& operator=(DescribeUniBackupDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->databaseType_ == nullptr && return this->instanceName_ == nullptr && return this->pageSize_ == nullptr && return this->queryType_ == nullptr && return this->uniRegionId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeUniBackupDatabaseRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string databaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline DescribeUniBackupDatabaseRequest& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeUniBackupDatabaseRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeUniBackupDatabaseRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline DescribeUniBackupDatabaseRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // uniRegionId Field Functions 
    bool hasUniRegionId() const { return this->uniRegionId_ != nullptr;};
    void deleteUniRegionId() { this->uniRegionId_ = nullptr;};
    inline string uniRegionId() const { DARABONBA_PTR_GET_DEFAULT(uniRegionId_, "") };
    inline DescribeUniBackupDatabaseRequest& setUniRegionId(string uniRegionId) { DARABONBA_PTR_SET_VALUE(uniRegionId_, uniRegionId) };


  protected:
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The type of the database. Valid values:
    // 
    // *   **MYSQL**
    // *   **MSSQL**
    // *   **Oracle**
    std::shared_ptr<string> databaseType_ = nullptr;
    // The name of the Elastic Compute Service (ECS) instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The condition that is used to query the database. Valid values:
    // 
    // *   **create**: newly created
    // *   **restore**: restored
    std::shared_ptr<string> queryType_ = nullptr;
    // The region ID of the server that hosts the database.
    std::shared_ptr<string> uniRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
