// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTableRequestDataProcessConfig.hpp>
#include <alibabacloud/models/CreateTableRequestDataSource.hpp>
#include <map>
#include <alibabacloud/models/CreateTableRequestVectorIndex.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dataProcessConfig, dataProcessConfig_);
      DARABONBA_PTR_TO_JSON(dataProcessorCount, dataProcessorCount_);
      DARABONBA_PTR_TO_JSON(dataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(fieldSchema, fieldSchema_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(partitionCount, partitionCount_);
      DARABONBA_PTR_TO_JSON(primaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(rawSchema, rawSchema_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(vectorIndex, vectorIndex_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dataProcessConfig, dataProcessConfig_);
      DARABONBA_PTR_FROM_JSON(dataProcessorCount, dataProcessorCount_);
      DARABONBA_PTR_FROM_JSON(dataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(fieldSchema, fieldSchema_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(partitionCount, partitionCount_);
      DARABONBA_PTR_FROM_JSON(primaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(rawSchema, rawSchema_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(vectorIndex, vectorIndex_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateTableRequest() = default ;
    CreateTableRequest(const CreateTableRequest &) = default ;
    CreateTableRequest(CreateTableRequest &&) = default ;
    CreateTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTableRequest() = default ;
    CreateTableRequest& operator=(const CreateTableRequest &) = default ;
    CreateTableRequest& operator=(CreateTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataProcessConfig_ != nullptr
        && this->dataProcessorCount_ != nullptr && this->dataSource_ != nullptr && this->fieldSchema_ != nullptr && this->name_ != nullptr && this->partitionCount_ != nullptr
        && this->primaryKey_ != nullptr && this->rawSchema_ != nullptr && this->scene_ != nullptr && this->vectorIndex_ != nullptr && this->dryRun_ != nullptr; };
    // dataProcessConfig Field Functions 
    bool hasDataProcessConfig() const { return this->dataProcessConfig_ != nullptr;};
    void deleteDataProcessConfig() { this->dataProcessConfig_ = nullptr;};
    inline const vector<CreateTableRequestDataProcessConfig> & dataProcessConfig() const { DARABONBA_PTR_GET_CONST(dataProcessConfig_, vector<CreateTableRequestDataProcessConfig>) };
    inline vector<CreateTableRequestDataProcessConfig> dataProcessConfig() { DARABONBA_PTR_GET(dataProcessConfig_, vector<CreateTableRequestDataProcessConfig>) };
    inline CreateTableRequest& setDataProcessConfig(const vector<CreateTableRequestDataProcessConfig> & dataProcessConfig) { DARABONBA_PTR_SET_VALUE(dataProcessConfig_, dataProcessConfig) };
    inline CreateTableRequest& setDataProcessConfig(vector<CreateTableRequestDataProcessConfig> && dataProcessConfig) { DARABONBA_PTR_SET_RVALUE(dataProcessConfig_, dataProcessConfig) };


    // dataProcessorCount Field Functions 
    bool hasDataProcessorCount() const { return this->dataProcessorCount_ != nullptr;};
    void deleteDataProcessorCount() { this->dataProcessorCount_ = nullptr;};
    inline int32_t dataProcessorCount() const { DARABONBA_PTR_GET_DEFAULT(dataProcessorCount_, 0) };
    inline CreateTableRequest& setDataProcessorCount(int32_t dataProcessorCount) { DARABONBA_PTR_SET_VALUE(dataProcessorCount_, dataProcessorCount) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const CreateTableRequestDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, CreateTableRequestDataSource) };
    inline CreateTableRequestDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, CreateTableRequestDataSource) };
    inline CreateTableRequest& setDataSource(const CreateTableRequestDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline CreateTableRequest& setDataSource(CreateTableRequestDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // fieldSchema Field Functions 
    bool hasFieldSchema() const { return this->fieldSchema_ != nullptr;};
    void deleteFieldSchema() { this->fieldSchema_ = nullptr;};
    inline const map<string, string> & fieldSchema() const { DARABONBA_PTR_GET_CONST(fieldSchema_, map<string, string>) };
    inline map<string, string> fieldSchema() { DARABONBA_PTR_GET(fieldSchema_, map<string, string>) };
    inline CreateTableRequest& setFieldSchema(const map<string, string> & fieldSchema) { DARABONBA_PTR_SET_VALUE(fieldSchema_, fieldSchema) };
    inline CreateTableRequest& setFieldSchema(map<string, string> && fieldSchema) { DARABONBA_PTR_SET_RVALUE(fieldSchema_, fieldSchema) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTableRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partitionCount Field Functions 
    bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
    void deletePartitionCount() { this->partitionCount_ = nullptr;};
    inline int32_t partitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, 0) };
    inline CreateTableRequest& setPartitionCount(int32_t partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline CreateTableRequest& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // rawSchema Field Functions 
    bool hasRawSchema() const { return this->rawSchema_ != nullptr;};
    void deleteRawSchema() { this->rawSchema_ = nullptr;};
    inline string rawSchema() const { DARABONBA_PTR_GET_DEFAULT(rawSchema_, "") };
    inline CreateTableRequest& setRawSchema(string rawSchema) { DARABONBA_PTR_SET_VALUE(rawSchema_, rawSchema) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline CreateTableRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // vectorIndex Field Functions 
    bool hasVectorIndex() const { return this->vectorIndex_ != nullptr;};
    void deleteVectorIndex() { this->vectorIndex_ = nullptr;};
    inline const vector<CreateTableRequestVectorIndex> & vectorIndex() const { DARABONBA_PTR_GET_CONST(vectorIndex_, vector<CreateTableRequestVectorIndex>) };
    inline vector<CreateTableRequestVectorIndex> vectorIndex() { DARABONBA_PTR_GET(vectorIndex_, vector<CreateTableRequestVectorIndex>) };
    inline CreateTableRequest& setVectorIndex(const vector<CreateTableRequestVectorIndex> & vectorIndex) { DARABONBA_PTR_SET_VALUE(vectorIndex_, vectorIndex) };
    inline CreateTableRequest& setVectorIndex(vector<CreateTableRequestVectorIndex> && vectorIndex) { DARABONBA_PTR_SET_RVALUE(vectorIndex_, vectorIndex) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTableRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The configurations about field processing.
    std::shared_ptr<vector<CreateTableRequestDataProcessConfig>> dataProcessConfig_ = nullptr;
    // The number of resources used for data update.
    std::shared_ptr<int32_t> dataProcessorCount_ = nullptr;
    // The configurations of the data source.
    std::shared_ptr<CreateTableRequestDataSource> dataSource_ = nullptr;
    // The fields.
    std::shared_ptr<map<string, string>> fieldSchema_ = nullptr;
    // The index name.
    std::shared_ptr<string> name_ = nullptr;
    // The number of data shards.
    std::shared_ptr<int32_t> partitionCount_ = nullptr;
    // The primary key field.
    std::shared_ptr<string> primaryKey_ = nullptr;
    // The instance schema. If this parameter is specified, the parameters about the index are not required.
    std::shared_ptr<string> rawSchema_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    // The index schema.
    std::shared_ptr<vector<CreateTableRequestVectorIndex>> vectorIndex_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. The system only checks the validity of the data source. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
