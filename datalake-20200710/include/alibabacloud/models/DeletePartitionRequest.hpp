// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPARTITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPARTITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class DeletePartitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePartitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(IfExists, ifExists_);
      DARABONBA_PTR_TO_JSON(PartitionValues, partitionValues_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePartitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(IfExists, ifExists_);
      DARABONBA_PTR_FROM_JSON(PartitionValues, partitionValues_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DeletePartitionRequest() = default ;
    DeletePartitionRequest(const DeletePartitionRequest &) = default ;
    DeletePartitionRequest(DeletePartitionRequest &&) = default ;
    DeletePartitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePartitionRequest() = default ;
    DeletePartitionRequest& operator=(const DeletePartitionRequest &) = default ;
    DeletePartitionRequest& operator=(DeletePartitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->ifExists_ == nullptr && return this->partitionValues_ == nullptr && return this->tableName_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline DeletePartitionRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DeletePartitionRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // ifExists Field Functions 
    bool hasIfExists() const { return this->ifExists_ != nullptr;};
    void deleteIfExists() { this->ifExists_ = nullptr;};
    inline bool ifExists() const { DARABONBA_PTR_GET_DEFAULT(ifExists_, false) };
    inline DeletePartitionRequest& setIfExists(bool ifExists) { DARABONBA_PTR_SET_VALUE(ifExists_, ifExists) };


    // partitionValues Field Functions 
    bool hasPartitionValues() const { return this->partitionValues_ != nullptr;};
    void deletePartitionValues() { this->partitionValues_ = nullptr;};
    inline const vector<string> & partitionValues() const { DARABONBA_PTR_GET_CONST(partitionValues_, vector<string>) };
    inline vector<string> partitionValues() { DARABONBA_PTR_GET(partitionValues_, vector<string>) };
    inline DeletePartitionRequest& setPartitionValues(const vector<string> & partitionValues) { DARABONBA_PTR_SET_VALUE(partitionValues_, partitionValues) };
    inline DeletePartitionRequest& setPartitionValues(vector<string> && partitionValues) { DARABONBA_PTR_SET_RVALUE(partitionValues_, partitionValues) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DeletePartitionRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Specifies whether to ignore errors if the partition that you want to delete does not exist. Valid values:
    // 
    // *   true: ignores errors and no error will be reported.
    // *   false: does not ignore errors and errors will be reported.
    std::shared_ptr<bool> ifExists_ = nullptr;
    // The values of the partition key columns.
    std::shared_ptr<vector<string>> partitionValues_ = nullptr;
    // The name of the data table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
