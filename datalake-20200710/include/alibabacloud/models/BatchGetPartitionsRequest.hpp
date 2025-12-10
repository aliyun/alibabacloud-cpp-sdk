// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETPARTITIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETPARTITIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchGetPartitionsRequestPartitionValueList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class BatchGetPartitionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetPartitionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(IsShareSd, isShareSd_);
      DARABONBA_PTR_TO_JSON(PartitionValueList, partitionValueList_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetPartitionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(IsShareSd, isShareSd_);
      DARABONBA_PTR_FROM_JSON(PartitionValueList, partitionValueList_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    BatchGetPartitionsRequest() = default ;
    BatchGetPartitionsRequest(const BatchGetPartitionsRequest &) = default ;
    BatchGetPartitionsRequest(BatchGetPartitionsRequest &&) = default ;
    BatchGetPartitionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetPartitionsRequest() = default ;
    BatchGetPartitionsRequest& operator=(const BatchGetPartitionsRequest &) = default ;
    BatchGetPartitionsRequest& operator=(BatchGetPartitionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->isShareSd_ == nullptr && return this->partitionValueList_ == nullptr && return this->tableName_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline BatchGetPartitionsRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline BatchGetPartitionsRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // isShareSd Field Functions 
    bool hasIsShareSd() const { return this->isShareSd_ != nullptr;};
    void deleteIsShareSd() { this->isShareSd_ = nullptr;};
    inline bool isShareSd() const { DARABONBA_PTR_GET_DEFAULT(isShareSd_, false) };
    inline BatchGetPartitionsRequest& setIsShareSd(bool isShareSd) { DARABONBA_PTR_SET_VALUE(isShareSd_, isShareSd) };


    // partitionValueList Field Functions 
    bool hasPartitionValueList() const { return this->partitionValueList_ != nullptr;};
    void deletePartitionValueList() { this->partitionValueList_ = nullptr;};
    inline const vector<BatchGetPartitionsRequestPartitionValueList> & partitionValueList() const { DARABONBA_PTR_GET_CONST(partitionValueList_, vector<BatchGetPartitionsRequestPartitionValueList>) };
    inline vector<BatchGetPartitionsRequestPartitionValueList> partitionValueList() { DARABONBA_PTR_GET(partitionValueList_, vector<BatchGetPartitionsRequestPartitionValueList>) };
    inline BatchGetPartitionsRequest& setPartitionValueList(const vector<BatchGetPartitionsRequestPartitionValueList> & partitionValueList) { DARABONBA_PTR_SET_VALUE(partitionValueList_, partitionValueList) };
    inline BatchGetPartitionsRequest& setPartitionValueList(vector<BatchGetPartitionsRequestPartitionValueList> && partitionValueList) { DARABONBA_PTR_SET_RVALUE(partitionValueList_, partitionValueList) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline BatchGetPartitionsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Specifies whether to share the column information of SD in the partition.
    std::shared_ptr<bool> isShareSd_ = nullptr;
    // The values of the partition key columns.
    std::shared_ptr<vector<BatchGetPartitionsRequestPartitionValueList>> partitionValueList_ = nullptr;
    // The name of the data table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
