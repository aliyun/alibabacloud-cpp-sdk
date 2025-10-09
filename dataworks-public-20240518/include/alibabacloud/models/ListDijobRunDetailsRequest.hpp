// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBRUNDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBRUNDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobRunDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobRunDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SourceDataSourceName, sourceDataSourceName_);
      DARABONBA_PTR_TO_JSON(SourceDatabaseName, sourceDatabaseName_);
      DARABONBA_PTR_TO_JSON(SourceSchemaName, sourceSchemaName_);
      DARABONBA_PTR_TO_JSON(SourceTableName, sourceTableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobRunDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SourceDataSourceName, sourceDataSourceName_);
      DARABONBA_PTR_FROM_JSON(SourceDatabaseName, sourceDatabaseName_);
      DARABONBA_PTR_FROM_JSON(SourceSchemaName, sourceSchemaName_);
      DARABONBA_PTR_FROM_JSON(SourceTableName, sourceTableName_);
    };
    ListDIJobRunDetailsRequest() = default ;
    ListDIJobRunDetailsRequest(const ListDIJobRunDetailsRequest &) = default ;
    ListDIJobRunDetailsRequest(ListDIJobRunDetailsRequest &&) = default ;
    ListDIJobRunDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobRunDetailsRequest() = default ;
    ListDIJobRunDetailsRequest& operator=(const ListDIJobRunDetailsRequest &) = default ;
    ListDIJobRunDetailsRequest& operator=(ListDIJobRunDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIJobId_ != nullptr
        && this->instanceId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->sourceDataSourceName_ != nullptr && this->sourceDatabaseName_ != nullptr
        && this->sourceSchemaName_ != nullptr && this->sourceTableName_ != nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline ListDIJobRunDetailsRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ListDIJobRunDetailsRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListDIJobRunDetailsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDIJobRunDetailsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sourceDataSourceName Field Functions 
    bool hasSourceDataSourceName() const { return this->sourceDataSourceName_ != nullptr;};
    void deleteSourceDataSourceName() { this->sourceDataSourceName_ = nullptr;};
    inline string sourceDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceDataSourceName_, "") };
    inline ListDIJobRunDetailsRequest& setSourceDataSourceName(string sourceDataSourceName) { DARABONBA_PTR_SET_VALUE(sourceDataSourceName_, sourceDataSourceName) };


    // sourceDatabaseName Field Functions 
    bool hasSourceDatabaseName() const { return this->sourceDatabaseName_ != nullptr;};
    void deleteSourceDatabaseName() { this->sourceDatabaseName_ = nullptr;};
    inline string sourceDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(sourceDatabaseName_, "") };
    inline ListDIJobRunDetailsRequest& setSourceDatabaseName(string sourceDatabaseName) { DARABONBA_PTR_SET_VALUE(sourceDatabaseName_, sourceDatabaseName) };


    // sourceSchemaName Field Functions 
    bool hasSourceSchemaName() const { return this->sourceSchemaName_ != nullptr;};
    void deleteSourceSchemaName() { this->sourceSchemaName_ = nullptr;};
    inline string sourceSchemaName() const { DARABONBA_PTR_GET_DEFAULT(sourceSchemaName_, "") };
    inline ListDIJobRunDetailsRequest& setSourceSchemaName(string sourceSchemaName) { DARABONBA_PTR_SET_VALUE(sourceSchemaName_, sourceSchemaName) };


    // sourceTableName Field Functions 
    bool hasSourceTableName() const { return this->sourceTableName_ != nullptr;};
    void deleteSourceTableName() { this->sourceTableName_ = nullptr;};
    inline string sourceTableName() const { DARABONBA_PTR_GET_DEFAULT(sourceTableName_, "") };
    inline ListDIJobRunDetailsRequest& setSourceTableName(string sourceTableName) { DARABONBA_PTR_SET_VALUE(sourceTableName_, sourceTableName) };


  protected:
    // The ID of the synchronization task.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // The instance ID.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The name of the source.
    std::shared_ptr<string> sourceDataSourceName_ = nullptr;
    // The name of the database in the source.
    std::shared_ptr<string> sourceDatabaseName_ = nullptr;
    // The name of the schema of the source.
    std::shared_ptr<string> sourceSchemaName_ = nullptr;
    // The name of the table in the source.
    std::shared_ptr<string> sourceTableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
