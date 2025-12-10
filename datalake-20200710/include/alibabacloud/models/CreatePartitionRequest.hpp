// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPARTITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPARTITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PartitionInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class CreatePartitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePartitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(IfNotExists, ifNotExists_);
      DARABONBA_PTR_TO_JSON(NeedResult, needResult_);
      DARABONBA_PTR_TO_JSON(PartitionInput, partitionInput_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePartitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(IfNotExists, ifNotExists_);
      DARABONBA_PTR_FROM_JSON(NeedResult, needResult_);
      DARABONBA_PTR_FROM_JSON(PartitionInput, partitionInput_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    CreatePartitionRequest() = default ;
    CreatePartitionRequest(const CreatePartitionRequest &) = default ;
    CreatePartitionRequest(CreatePartitionRequest &&) = default ;
    CreatePartitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePartitionRequest() = default ;
    CreatePartitionRequest& operator=(const CreatePartitionRequest &) = default ;
    CreatePartitionRequest& operator=(CreatePartitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->ifNotExists_ == nullptr && return this->needResult_ == nullptr && return this->partitionInput_ == nullptr && return this->tableName_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline CreatePartitionRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline CreatePartitionRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // ifNotExists Field Functions 
    bool hasIfNotExists() const { return this->ifNotExists_ != nullptr;};
    void deleteIfNotExists() { this->ifNotExists_ = nullptr;};
    inline bool ifNotExists() const { DARABONBA_PTR_GET_DEFAULT(ifNotExists_, false) };
    inline CreatePartitionRequest& setIfNotExists(bool ifNotExists) { DARABONBA_PTR_SET_VALUE(ifNotExists_, ifNotExists) };


    // needResult Field Functions 
    bool hasNeedResult() const { return this->needResult_ != nullptr;};
    void deleteNeedResult() { this->needResult_ = nullptr;};
    inline bool needResult() const { DARABONBA_PTR_GET_DEFAULT(needResult_, false) };
    inline CreatePartitionRequest& setNeedResult(bool needResult) { DARABONBA_PTR_SET_VALUE(needResult_, needResult) };


    // partitionInput Field Functions 
    bool hasPartitionInput() const { return this->partitionInput_ != nullptr;};
    void deletePartitionInput() { this->partitionInput_ = nullptr;};
    inline const PartitionInput & partitionInput() const { DARABONBA_PTR_GET_CONST(partitionInput_, PartitionInput) };
    inline PartitionInput partitionInput() { DARABONBA_PTR_GET(partitionInput_, PartitionInput) };
    inline CreatePartitionRequest& setPartitionInput(const PartitionInput & partitionInput) { DARABONBA_PTR_SET_VALUE(partitionInput_, partitionInput) };
    inline CreatePartitionRequest& setPartitionInput(PartitionInput && partitionInput) { DARABONBA_PTR_SET_RVALUE(partitionInput_, partitionInput) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreatePartitionRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Specifies whether to ignore errors if the name of the partition to be created already exists.
    std::shared_ptr<bool> ifNotExists_ = nullptr;
    // Specifies whether to return partition information. If this parameter is set to true, the Partition parameter is returned.
    std::shared_ptr<bool> needResult_ = nullptr;
    // The information about the partition to be created.
    std::shared_ptr<PartitionInput> partitionInput_ = nullptr;
    // The name of the data table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
