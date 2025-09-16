// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETTABLERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTableResponseBodyResultDataProcessConfig.hpp>
#include <alibabacloud/models/GetTableResponseBodyResultDataSource.hpp>
#include <map>
#include <alibabacloud/models/GetTableResponseBodyResultVectorIndex.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetTableResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(dataProcessConfig, dataProcessConfig_);
      DARABONBA_PTR_TO_JSON(dataProcessorCount, dataProcessorCount_);
      DARABONBA_PTR_TO_JSON(dataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(fieldSchema, fieldSchema_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(partitionCount, partitionCount_);
      DARABONBA_PTR_TO_JSON(primaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(rawSchema, rawSchema_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(vectorIndex, vectorIndex_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(dataProcessConfig, dataProcessConfig_);
      DARABONBA_PTR_FROM_JSON(dataProcessorCount, dataProcessorCount_);
      DARABONBA_PTR_FROM_JSON(dataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(fieldSchema, fieldSchema_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(partitionCount, partitionCount_);
      DARABONBA_PTR_FROM_JSON(primaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(rawSchema, rawSchema_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(vectorIndex, vectorIndex_);
    };
    GetTableResponseBodyResult() = default ;
    GetTableResponseBodyResult(const GetTableResponseBodyResult &) = default ;
    GetTableResponseBodyResult(GetTableResponseBodyResult &&) = default ;
    GetTableResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableResponseBodyResult() = default ;
    GetTableResponseBodyResult& operator=(const GetTableResponseBodyResult &) = default ;
    GetTableResponseBodyResult& operator=(GetTableResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataProcessConfig_ != nullptr
        && this->dataProcessorCount_ != nullptr && this->dataSource_ != nullptr && this->fieldSchema_ != nullptr && this->name_ != nullptr && this->partitionCount_ != nullptr
        && this->primaryKey_ != nullptr && this->rawSchema_ != nullptr && this->status_ != nullptr && this->vectorIndex_ != nullptr; };
    // dataProcessConfig Field Functions 
    bool hasDataProcessConfig() const { return this->dataProcessConfig_ != nullptr;};
    void deleteDataProcessConfig() { this->dataProcessConfig_ = nullptr;};
    inline const vector<Models::GetTableResponseBodyResultDataProcessConfig> & dataProcessConfig() const { DARABONBA_PTR_GET_CONST(dataProcessConfig_, vector<Models::GetTableResponseBodyResultDataProcessConfig>) };
    inline vector<Models::GetTableResponseBodyResultDataProcessConfig> dataProcessConfig() { DARABONBA_PTR_GET(dataProcessConfig_, vector<Models::GetTableResponseBodyResultDataProcessConfig>) };
    inline GetTableResponseBodyResult& setDataProcessConfig(const vector<Models::GetTableResponseBodyResultDataProcessConfig> & dataProcessConfig) { DARABONBA_PTR_SET_VALUE(dataProcessConfig_, dataProcessConfig) };
    inline GetTableResponseBodyResult& setDataProcessConfig(vector<Models::GetTableResponseBodyResultDataProcessConfig> && dataProcessConfig) { DARABONBA_PTR_SET_RVALUE(dataProcessConfig_, dataProcessConfig) };


    // dataProcessorCount Field Functions 
    bool hasDataProcessorCount() const { return this->dataProcessorCount_ != nullptr;};
    void deleteDataProcessorCount() { this->dataProcessorCount_ = nullptr;};
    inline int32_t dataProcessorCount() const { DARABONBA_PTR_GET_DEFAULT(dataProcessorCount_, 0) };
    inline GetTableResponseBodyResult& setDataProcessorCount(int32_t dataProcessorCount) { DARABONBA_PTR_SET_VALUE(dataProcessorCount_, dataProcessorCount) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const Models::GetTableResponseBodyResultDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Models::GetTableResponseBodyResultDataSource) };
    inline Models::GetTableResponseBodyResultDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, Models::GetTableResponseBodyResultDataSource) };
    inline GetTableResponseBodyResult& setDataSource(const Models::GetTableResponseBodyResultDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline GetTableResponseBodyResult& setDataSource(Models::GetTableResponseBodyResultDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // fieldSchema Field Functions 
    bool hasFieldSchema() const { return this->fieldSchema_ != nullptr;};
    void deleteFieldSchema() { this->fieldSchema_ = nullptr;};
    inline const map<string, string> & fieldSchema() const { DARABONBA_PTR_GET_CONST(fieldSchema_, map<string, string>) };
    inline map<string, string> fieldSchema() { DARABONBA_PTR_GET(fieldSchema_, map<string, string>) };
    inline GetTableResponseBodyResult& setFieldSchema(const map<string, string> & fieldSchema) { DARABONBA_PTR_SET_VALUE(fieldSchema_, fieldSchema) };
    inline GetTableResponseBodyResult& setFieldSchema(map<string, string> && fieldSchema) { DARABONBA_PTR_SET_RVALUE(fieldSchema_, fieldSchema) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTableResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partitionCount Field Functions 
    bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
    void deletePartitionCount() { this->partitionCount_ = nullptr;};
    inline int32_t partitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, 0) };
    inline GetTableResponseBodyResult& setPartitionCount(int32_t partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline GetTableResponseBodyResult& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // rawSchema Field Functions 
    bool hasRawSchema() const { return this->rawSchema_ != nullptr;};
    void deleteRawSchema() { this->rawSchema_ = nullptr;};
    inline string rawSchema() const { DARABONBA_PTR_GET_DEFAULT(rawSchema_, "") };
    inline GetTableResponseBodyResult& setRawSchema(string rawSchema) { DARABONBA_PTR_SET_VALUE(rawSchema_, rawSchema) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTableResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vectorIndex Field Functions 
    bool hasVectorIndex() const { return this->vectorIndex_ != nullptr;};
    void deleteVectorIndex() { this->vectorIndex_ = nullptr;};
    inline const vector<Models::GetTableResponseBodyResultVectorIndex> & vectorIndex() const { DARABONBA_PTR_GET_CONST(vectorIndex_, vector<Models::GetTableResponseBodyResultVectorIndex>) };
    inline vector<Models::GetTableResponseBodyResultVectorIndex> vectorIndex() { DARABONBA_PTR_GET(vectorIndex_, vector<Models::GetTableResponseBodyResultVectorIndex>) };
    inline GetTableResponseBodyResult& setVectorIndex(const vector<Models::GetTableResponseBodyResultVectorIndex> & vectorIndex) { DARABONBA_PTR_SET_VALUE(vectorIndex_, vectorIndex) };
    inline GetTableResponseBodyResult& setVectorIndex(vector<Models::GetTableResponseBodyResultVectorIndex> && vectorIndex) { DARABONBA_PTR_SET_RVALUE(vectorIndex_, vectorIndex) };


  protected:
    // The configurations about field processing.
    std::shared_ptr<vector<Models::GetTableResponseBodyResultDataProcessConfig>> dataProcessConfig_ = nullptr;
    std::shared_ptr<int32_t> dataProcessorCount_ = nullptr;
    std::shared_ptr<Models::GetTableResponseBodyResultDataSource> dataSource_ = nullptr;
    // The field. The value is a key-value pair in which the key indicates the field name and value indicates the field type.
    std::shared_ptr<map<string, string>> fieldSchema_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> partitionCount_ = nullptr;
    std::shared_ptr<string> primaryKey_ = nullptr;
    std::shared_ptr<string> rawSchema_ = nullptr;
    // The state of the index table. Valid values: NEW, PUBLISH, IN_USE, NOT_USE, STOP_USE, RESTORE_USE, and FAIL. After an index is created in an OpenSearch Retrieval Engine Edition instance, the index enters the IN_USE state. If the first full index fails to be created in an OpenSearch Vector Search Edition instance of the new version, the index is in the FAIL state.
    std::shared_ptr<string> status_ = nullptr;
    // The index schema.
    std::shared_ptr<vector<Models::GetTableResponseBodyResultVectorIndex>> vectorIndex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
