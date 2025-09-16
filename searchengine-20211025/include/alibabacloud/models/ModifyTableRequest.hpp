// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyTableRequestDataProcessConfig.hpp>
#include <alibabacloud/models/ModifyTableRequestDataSource.hpp>
#include <map>
#include <alibabacloud/models/ModifyTableRequestVectorIndex.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dataProcessConfig, dataProcessConfig_);
      DARABONBA_PTR_TO_JSON(dataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(fieldSchema, fieldSchema_);
      DARABONBA_PTR_TO_JSON(partitionCount, partitionCount_);
      DARABONBA_PTR_TO_JSON(primaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(rawSchema, rawSchema_);
      DARABONBA_PTR_TO_JSON(vectorIndex, vectorIndex_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dataProcessConfig, dataProcessConfig_);
      DARABONBA_PTR_FROM_JSON(dataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(fieldSchema, fieldSchema_);
      DARABONBA_PTR_FROM_JSON(partitionCount, partitionCount_);
      DARABONBA_PTR_FROM_JSON(primaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(rawSchema, rawSchema_);
      DARABONBA_PTR_FROM_JSON(vectorIndex, vectorIndex_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    ModifyTableRequest() = default ;
    ModifyTableRequest(const ModifyTableRequest &) = default ;
    ModifyTableRequest(ModifyTableRequest &&) = default ;
    ModifyTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTableRequest() = default ;
    ModifyTableRequest& operator=(const ModifyTableRequest &) = default ;
    ModifyTableRequest& operator=(ModifyTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataProcessConfig_ != nullptr
        && this->dataSource_ != nullptr && this->fieldSchema_ != nullptr && this->partitionCount_ != nullptr && this->primaryKey_ != nullptr && this->rawSchema_ != nullptr
        && this->vectorIndex_ != nullptr && this->dryRun_ != nullptr; };
    // dataProcessConfig Field Functions 
    bool hasDataProcessConfig() const { return this->dataProcessConfig_ != nullptr;};
    void deleteDataProcessConfig() { this->dataProcessConfig_ = nullptr;};
    inline const vector<ModifyTableRequestDataProcessConfig> & dataProcessConfig() const { DARABONBA_PTR_GET_CONST(dataProcessConfig_, vector<ModifyTableRequestDataProcessConfig>) };
    inline vector<ModifyTableRequestDataProcessConfig> dataProcessConfig() { DARABONBA_PTR_GET(dataProcessConfig_, vector<ModifyTableRequestDataProcessConfig>) };
    inline ModifyTableRequest& setDataProcessConfig(const vector<ModifyTableRequestDataProcessConfig> & dataProcessConfig) { DARABONBA_PTR_SET_VALUE(dataProcessConfig_, dataProcessConfig) };
    inline ModifyTableRequest& setDataProcessConfig(vector<ModifyTableRequestDataProcessConfig> && dataProcessConfig) { DARABONBA_PTR_SET_RVALUE(dataProcessConfig_, dataProcessConfig) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const ModifyTableRequestDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, ModifyTableRequestDataSource) };
    inline ModifyTableRequestDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, ModifyTableRequestDataSource) };
    inline ModifyTableRequest& setDataSource(const ModifyTableRequestDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline ModifyTableRequest& setDataSource(ModifyTableRequestDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // fieldSchema Field Functions 
    bool hasFieldSchema() const { return this->fieldSchema_ != nullptr;};
    void deleteFieldSchema() { this->fieldSchema_ = nullptr;};
    inline const map<string, string> & fieldSchema() const { DARABONBA_PTR_GET_CONST(fieldSchema_, map<string, string>) };
    inline map<string, string> fieldSchema() { DARABONBA_PTR_GET(fieldSchema_, map<string, string>) };
    inline ModifyTableRequest& setFieldSchema(const map<string, string> & fieldSchema) { DARABONBA_PTR_SET_VALUE(fieldSchema_, fieldSchema) };
    inline ModifyTableRequest& setFieldSchema(map<string, string> && fieldSchema) { DARABONBA_PTR_SET_RVALUE(fieldSchema_, fieldSchema) };


    // partitionCount Field Functions 
    bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
    void deletePartitionCount() { this->partitionCount_ = nullptr;};
    inline int32_t partitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, 0) };
    inline ModifyTableRequest& setPartitionCount(int32_t partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline ModifyTableRequest& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // rawSchema Field Functions 
    bool hasRawSchema() const { return this->rawSchema_ != nullptr;};
    void deleteRawSchema() { this->rawSchema_ = nullptr;};
    inline string rawSchema() const { DARABONBA_PTR_GET_DEFAULT(rawSchema_, "") };
    inline ModifyTableRequest& setRawSchema(string rawSchema) { DARABONBA_PTR_SET_VALUE(rawSchema_, rawSchema) };


    // vectorIndex Field Functions 
    bool hasVectorIndex() const { return this->vectorIndex_ != nullptr;};
    void deleteVectorIndex() { this->vectorIndex_ = nullptr;};
    inline const vector<ModifyTableRequestVectorIndex> & vectorIndex() const { DARABONBA_PTR_GET_CONST(vectorIndex_, vector<ModifyTableRequestVectorIndex>) };
    inline vector<ModifyTableRequestVectorIndex> vectorIndex() { DARABONBA_PTR_GET(vectorIndex_, vector<ModifyTableRequestVectorIndex>) };
    inline ModifyTableRequest& setVectorIndex(const vector<ModifyTableRequestVectorIndex> & vectorIndex) { DARABONBA_PTR_SET_VALUE(vectorIndex_, vectorIndex) };
    inline ModifyTableRequest& setVectorIndex(vector<ModifyTableRequestVectorIndex> && vectorIndex) { DARABONBA_PTR_SET_RVALUE(vectorIndex_, vectorIndex) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyTableRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The configurations about field processing.
    std::shared_ptr<vector<ModifyTableRequestDataProcessConfig>> dataProcessConfig_ = nullptr;
    // The configurations of the data source.
    std::shared_ptr<ModifyTableRequestDataSource> dataSource_ = nullptr;
    // The fields.
    std::shared_ptr<map<string, string>> fieldSchema_ = nullptr;
    // The number of data shards.
    std::shared_ptr<int32_t> partitionCount_ = nullptr;
    // The primary key field.
    std::shared_ptr<string> primaryKey_ = nullptr;
    // The instance schema. If this parameter is specified, the parameters about the index are not required.
    std::shared_ptr<string> rawSchema_ = nullptr;
    // The index schema.
    std::shared_ptr<vector<ModifyTableRequestVectorIndex>> vectorIndex_ = nullptr;
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
