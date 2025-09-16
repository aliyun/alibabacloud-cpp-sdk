// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINDEXREQUESTDATASOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEINDEXREQUESTDATASOURCEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIndexRequestDataSourceInfoConfig.hpp>
#include <alibabacloud/models/CreateIndexRequestDataSourceInfoSaroConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateIndexRequestDataSourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIndexRequestDataSourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(dataTimeSec, dataTimeSec_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(processParallelNum, processParallelNum_);
      DARABONBA_PTR_TO_JSON(processPartitionCount, processPartitionCount_);
      DARABONBA_PTR_TO_JSON(saroConfig, saroConfig_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIndexRequestDataSourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(autoBuildIndex, autoBuildIndex_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(dataTimeSec, dataTimeSec_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(processParallelNum, processParallelNum_);
      DARABONBA_PTR_FROM_JSON(processPartitionCount, processPartitionCount_);
      DARABONBA_PTR_FROM_JSON(saroConfig, saroConfig_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateIndexRequestDataSourceInfo() = default ;
    CreateIndexRequestDataSourceInfo(const CreateIndexRequestDataSourceInfo &) = default ;
    CreateIndexRequestDataSourceInfo(CreateIndexRequestDataSourceInfo &&) = default ;
    CreateIndexRequestDataSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIndexRequestDataSourceInfo() = default ;
    CreateIndexRequestDataSourceInfo& operator=(const CreateIndexRequestDataSourceInfo &) = default ;
    CreateIndexRequestDataSourceInfo& operator=(CreateIndexRequestDataSourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoBuildIndex_ != nullptr
        && this->config_ != nullptr && this->dataTimeSec_ != nullptr && this->domain_ != nullptr && this->name_ != nullptr && this->processParallelNum_ != nullptr
        && this->processPartitionCount_ != nullptr && this->saroConfig_ != nullptr && this->scene_ != nullptr && this->type_ != nullptr; };
    // autoBuildIndex Field Functions 
    bool hasAutoBuildIndex() const { return this->autoBuildIndex_ != nullptr;};
    void deleteAutoBuildIndex() { this->autoBuildIndex_ = nullptr;};
    inline bool autoBuildIndex() const { DARABONBA_PTR_GET_DEFAULT(autoBuildIndex_, false) };
    inline CreateIndexRequestDataSourceInfo& setAutoBuildIndex(bool autoBuildIndex) { DARABONBA_PTR_SET_VALUE(autoBuildIndex_, autoBuildIndex) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::CreateIndexRequestDataSourceInfoConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::CreateIndexRequestDataSourceInfoConfig) };
    inline Models::CreateIndexRequestDataSourceInfoConfig config() { DARABONBA_PTR_GET(config_, Models::CreateIndexRequestDataSourceInfoConfig) };
    inline CreateIndexRequestDataSourceInfo& setConfig(const Models::CreateIndexRequestDataSourceInfoConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline CreateIndexRequestDataSourceInfo& setConfig(Models::CreateIndexRequestDataSourceInfoConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // dataTimeSec Field Functions 
    bool hasDataTimeSec() const { return this->dataTimeSec_ != nullptr;};
    void deleteDataTimeSec() { this->dataTimeSec_ = nullptr;};
    inline int32_t dataTimeSec() const { DARABONBA_PTR_GET_DEFAULT(dataTimeSec_, 0) };
    inline CreateIndexRequestDataSourceInfo& setDataTimeSec(int32_t dataTimeSec) { DARABONBA_PTR_SET_VALUE(dataTimeSec_, dataTimeSec) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateIndexRequestDataSourceInfo& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateIndexRequestDataSourceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // processParallelNum Field Functions 
    bool hasProcessParallelNum() const { return this->processParallelNum_ != nullptr;};
    void deleteProcessParallelNum() { this->processParallelNum_ = nullptr;};
    inline int32_t processParallelNum() const { DARABONBA_PTR_GET_DEFAULT(processParallelNum_, 0) };
    inline CreateIndexRequestDataSourceInfo& setProcessParallelNum(int32_t processParallelNum) { DARABONBA_PTR_SET_VALUE(processParallelNum_, processParallelNum) };


    // processPartitionCount Field Functions 
    bool hasProcessPartitionCount() const { return this->processPartitionCount_ != nullptr;};
    void deleteProcessPartitionCount() { this->processPartitionCount_ = nullptr;};
    inline int32_t processPartitionCount() const { DARABONBA_PTR_GET_DEFAULT(processPartitionCount_, 0) };
    inline CreateIndexRequestDataSourceInfo& setProcessPartitionCount(int32_t processPartitionCount) { DARABONBA_PTR_SET_VALUE(processPartitionCount_, processPartitionCount) };


    // saroConfig Field Functions 
    bool hasSaroConfig() const { return this->saroConfig_ != nullptr;};
    void deleteSaroConfig() { this->saroConfig_ = nullptr;};
    inline const Models::CreateIndexRequestDataSourceInfoSaroConfig & saroConfig() const { DARABONBA_PTR_GET_CONST(saroConfig_, Models::CreateIndexRequestDataSourceInfoSaroConfig) };
    inline Models::CreateIndexRequestDataSourceInfoSaroConfig saroConfig() { DARABONBA_PTR_GET(saroConfig_, Models::CreateIndexRequestDataSourceInfoSaroConfig) };
    inline CreateIndexRequestDataSourceInfo& setSaroConfig(const Models::CreateIndexRequestDataSourceInfoSaroConfig & saroConfig) { DARABONBA_PTR_SET_VALUE(saroConfig_, saroConfig) };
    inline CreateIndexRequestDataSourceInfo& setSaroConfig(Models::CreateIndexRequestDataSourceInfoSaroConfig && saroConfig) { DARABONBA_PTR_SET_RVALUE(saroConfig_, saroConfig) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline CreateIndexRequestDataSourceInfo& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateIndexRequestDataSourceInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to enable automatic full indexing.
    std::shared_ptr<bool> autoBuildIndex_ = nullptr;
    // The information about the MaxCompute data source.
    std::shared_ptr<Models::CreateIndexRequestDataSourceInfoConfig> config_ = nullptr;
    // The start timestamp from which incremental data is retrieved.
    std::shared_ptr<int32_t> dataTimeSec_ = nullptr;
    // The data center in which the data source is deployed.
    std::shared_ptr<string> domain_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> name_ = nullptr;
    // The maximum number of full indexes that can be concurrently processed.
    std::shared_ptr<int32_t> processParallelNum_ = nullptr;
    // The number of resources used for data update.
    std::shared_ptr<int32_t> processPartitionCount_ = nullptr;
    // The configurations of the SARO data source.
    std::shared_ptr<Models::CreateIndexRequestDataSourceInfoSaroConfig> saroConfig_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   odps
    // *   swift
    // *   saro
    // *   oss
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
