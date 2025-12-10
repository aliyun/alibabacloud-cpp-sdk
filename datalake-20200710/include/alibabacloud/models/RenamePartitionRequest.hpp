// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENAMEPARTITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENAMEPARTITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PartitionInput.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class RenamePartitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenamePartitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(PartitionInput, partitionInput_);
      DARABONBA_PTR_TO_JSON(PartitionValues, partitionValues_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, RenamePartitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(PartitionInput, partitionInput_);
      DARABONBA_PTR_FROM_JSON(PartitionValues, partitionValues_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    RenamePartitionRequest() = default ;
    RenamePartitionRequest(const RenamePartitionRequest &) = default ;
    RenamePartitionRequest(RenamePartitionRequest &&) = default ;
    RenamePartitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenamePartitionRequest() = default ;
    RenamePartitionRequest& operator=(const RenamePartitionRequest &) = default ;
    RenamePartitionRequest& operator=(RenamePartitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->partitionInput_ == nullptr && return this->partitionValues_ == nullptr && return this->tableName_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline RenamePartitionRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline RenamePartitionRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // partitionInput Field Functions 
    bool hasPartitionInput() const { return this->partitionInput_ != nullptr;};
    void deletePartitionInput() { this->partitionInput_ = nullptr;};
    inline const PartitionInput & partitionInput() const { DARABONBA_PTR_GET_CONST(partitionInput_, PartitionInput) };
    inline PartitionInput partitionInput() { DARABONBA_PTR_GET(partitionInput_, PartitionInput) };
    inline RenamePartitionRequest& setPartitionInput(const PartitionInput & partitionInput) { DARABONBA_PTR_SET_VALUE(partitionInput_, partitionInput) };
    inline RenamePartitionRequest& setPartitionInput(PartitionInput && partitionInput) { DARABONBA_PTR_SET_RVALUE(partitionInput_, partitionInput) };


    // partitionValues Field Functions 
    bool hasPartitionValues() const { return this->partitionValues_ != nullptr;};
    void deletePartitionValues() { this->partitionValues_ = nullptr;};
    inline const vector<string> & partitionValues() const { DARABONBA_PTR_GET_CONST(partitionValues_, vector<string>) };
    inline vector<string> partitionValues() { DARABONBA_PTR_GET(partitionValues_, vector<string>) };
    inline RenamePartitionRequest& setPartitionValues(const vector<string> & partitionValues) { DARABONBA_PTR_SET_VALUE(partitionValues_, partitionValues) };
    inline RenamePartitionRequest& setPartitionValues(vector<string> && partitionValues) { DARABONBA_PTR_SET_RVALUE(partitionValues_, partitionValues) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline RenamePartitionRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The renamed partition information, which is the same as the partition information you specify for the CreatePartition operation.
    std::shared_ptr<PartitionInput> partitionInput_ = nullptr;
    // The values of the partition key columns.
    std::shared_ptr<vector<string>> partitionValues_ = nullptr;
    // The name of the data table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
