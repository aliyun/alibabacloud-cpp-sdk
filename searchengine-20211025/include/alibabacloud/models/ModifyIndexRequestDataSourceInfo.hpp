// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINDEXREQUESTDATASOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINDEXREQUESTDATASOURCEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyIndexRequestDataSourceInfoConfig.hpp>
#include <alibabacloud/models/ModifyIndexRequestDataSourceInfoSaroConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyIndexRequestDataSourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIndexRequestDataSourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_TO_JSON(buildMode, buildMode_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(dataTimeSec, dataTimeSec_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(generation, generation_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ossDataPath, ossDataPath_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
      DARABONBA_PTR_TO_JSON(processParallelNum, processParallelNum_);
      DARABONBA_PTR_TO_JSON(processPartitionCount, processPartitionCount_);
      DARABONBA_PTR_TO_JSON(saroConfig, saroConfig_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIndexRequestDataSourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_FROM_JSON(buildMode, buildMode_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(dataTimeSec, dataTimeSec_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(generation, generation_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ossDataPath, ossDataPath_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
      DARABONBA_PTR_FROM_JSON(processParallelNum, processParallelNum_);
      DARABONBA_PTR_FROM_JSON(processPartitionCount, processPartitionCount_);
      DARABONBA_PTR_FROM_JSON(saroConfig, saroConfig_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ModifyIndexRequestDataSourceInfo() = default ;
    ModifyIndexRequestDataSourceInfo(const ModifyIndexRequestDataSourceInfo &) = default ;
    ModifyIndexRequestDataSourceInfo(ModifyIndexRequestDataSourceInfo &&) = default ;
    ModifyIndexRequestDataSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIndexRequestDataSourceInfo() = default ;
    ModifyIndexRequestDataSourceInfo& operator=(const ModifyIndexRequestDataSourceInfo &) = default ;
    ModifyIndexRequestDataSourceInfo& operator=(ModifyIndexRequestDataSourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoBuildIndex_ != nullptr
        && this->buildMode_ != nullptr && this->config_ != nullptr && this->dataTimeSec_ != nullptr && this->domain_ != nullptr && this->generation_ != nullptr
        && this->name_ != nullptr && this->ossDataPath_ != nullptr && this->partition_ != nullptr && this->processParallelNum_ != nullptr && this->processPartitionCount_ != nullptr
        && this->saroConfig_ != nullptr && this->type_ != nullptr; };
    // autoBuildIndex Field Functions 
    bool hasAutoBuildIndex() const { return this->autoBuildIndex_ != nullptr;};
    void deleteAutoBuildIndex() { this->autoBuildIndex_ = nullptr;};
    inline bool autoBuildIndex() const { DARABONBA_PTR_GET_DEFAULT(autoBuildIndex_, false) };
    inline ModifyIndexRequestDataSourceInfo& setAutoBuildIndex(bool autoBuildIndex) { DARABONBA_PTR_SET_VALUE(autoBuildIndex_, autoBuildIndex) };


    // buildMode Field Functions 
    bool hasBuildMode() const { return this->buildMode_ != nullptr;};
    void deleteBuildMode() { this->buildMode_ = nullptr;};
    inline string buildMode() const { DARABONBA_PTR_GET_DEFAULT(buildMode_, "") };
    inline ModifyIndexRequestDataSourceInfo& setBuildMode(string buildMode) { DARABONBA_PTR_SET_VALUE(buildMode_, buildMode) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::ModifyIndexRequestDataSourceInfoConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::ModifyIndexRequestDataSourceInfoConfig) };
    inline Models::ModifyIndexRequestDataSourceInfoConfig config() { DARABONBA_PTR_GET(config_, Models::ModifyIndexRequestDataSourceInfoConfig) };
    inline ModifyIndexRequestDataSourceInfo& setConfig(const Models::ModifyIndexRequestDataSourceInfoConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ModifyIndexRequestDataSourceInfo& setConfig(Models::ModifyIndexRequestDataSourceInfoConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // dataTimeSec Field Functions 
    bool hasDataTimeSec() const { return this->dataTimeSec_ != nullptr;};
    void deleteDataTimeSec() { this->dataTimeSec_ = nullptr;};
    inline int32_t dataTimeSec() const { DARABONBA_PTR_GET_DEFAULT(dataTimeSec_, 0) };
    inline ModifyIndexRequestDataSourceInfo& setDataTimeSec(int32_t dataTimeSec) { DARABONBA_PTR_SET_VALUE(dataTimeSec_, dataTimeSec) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyIndexRequestDataSourceInfo& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // generation Field Functions 
    bool hasGeneration() const { return this->generation_ != nullptr;};
    void deleteGeneration() { this->generation_ = nullptr;};
    inline int64_t generation() const { DARABONBA_PTR_GET_DEFAULT(generation_, 0L) };
    inline ModifyIndexRequestDataSourceInfo& setGeneration(int64_t generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyIndexRequestDataSourceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossDataPath Field Functions 
    bool hasOssDataPath() const { return this->ossDataPath_ != nullptr;};
    void deleteOssDataPath() { this->ossDataPath_ = nullptr;};
    inline string ossDataPath() const { DARABONBA_PTR_GET_DEFAULT(ossDataPath_, "") };
    inline ModifyIndexRequestDataSourceInfo& setOssDataPath(string ossDataPath) { DARABONBA_PTR_SET_VALUE(ossDataPath_, ossDataPath) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline string partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, "") };
    inline ModifyIndexRequestDataSourceInfo& setPartition(string partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // processParallelNum Field Functions 
    bool hasProcessParallelNum() const { return this->processParallelNum_ != nullptr;};
    void deleteProcessParallelNum() { this->processParallelNum_ = nullptr;};
    inline int32_t processParallelNum() const { DARABONBA_PTR_GET_DEFAULT(processParallelNum_, 0) };
    inline ModifyIndexRequestDataSourceInfo& setProcessParallelNum(int32_t processParallelNum) { DARABONBA_PTR_SET_VALUE(processParallelNum_, processParallelNum) };


    // processPartitionCount Field Functions 
    bool hasProcessPartitionCount() const { return this->processPartitionCount_ != nullptr;};
    void deleteProcessPartitionCount() { this->processPartitionCount_ = nullptr;};
    inline int32_t processPartitionCount() const { DARABONBA_PTR_GET_DEFAULT(processPartitionCount_, 0) };
    inline ModifyIndexRequestDataSourceInfo& setProcessPartitionCount(int32_t processPartitionCount) { DARABONBA_PTR_SET_VALUE(processPartitionCount_, processPartitionCount) };


    // saroConfig Field Functions 
    bool hasSaroConfig() const { return this->saroConfig_ != nullptr;};
    void deleteSaroConfig() { this->saroConfig_ = nullptr;};
    inline const Models::ModifyIndexRequestDataSourceInfoSaroConfig & saroConfig() const { DARABONBA_PTR_GET_CONST(saroConfig_, Models::ModifyIndexRequestDataSourceInfoSaroConfig) };
    inline Models::ModifyIndexRequestDataSourceInfoSaroConfig saroConfig() { DARABONBA_PTR_GET(saroConfig_, Models::ModifyIndexRequestDataSourceInfoSaroConfig) };
    inline ModifyIndexRequestDataSourceInfo& setSaroConfig(const Models::ModifyIndexRequestDataSourceInfoSaroConfig & saroConfig) { DARABONBA_PTR_SET_VALUE(saroConfig_, saroConfig) };
    inline ModifyIndexRequestDataSourceInfo& setSaroConfig(Models::ModifyIndexRequestDataSourceInfoSaroConfig && saroConfig) { DARABONBA_PTR_SET_RVALUE(saroConfig_, saroConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyIndexRequestDataSourceInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to enable the automatic full indexing feature.
    std::shared_ptr<bool> autoBuildIndex_ = nullptr;
    // The reindexing method. Valid values: api: API data source. indexRecover: data recovery by using indexing.
    std::shared_ptr<string> buildMode_ = nullptr;
    // The configurations of the MaxCompute data source.
    std::shared_ptr<Models::ModifyIndexRequestDataSourceInfoConfig> config_ = nullptr;
    // The start timestamp from which incremental data is retrieved.
    std::shared_ptr<int32_t> dataTimeSec_ = nullptr;
    // The offline deployment name of the data source.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the index version from which data is restored.
    std::shared_ptr<int64_t> generation_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ossDataPath_ = nullptr;
    std::shared_ptr<string> partition_ = nullptr;
    // The maximum number of full indexes that can be concurrently processed.
    std::shared_ptr<int32_t> processParallelNum_ = nullptr;
    // The number of resources used for data update.
    std::shared_ptr<int32_t> processPartitionCount_ = nullptr;
    // The configurations of the SARO data source.
    std::shared_ptr<Models::ModifyIndexRequestDataSourceInfoSaroConfig> saroConfig_ = nullptr;
    // The type of the data source. Valid values: odps, swift, saro, oss, and unKnow.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
