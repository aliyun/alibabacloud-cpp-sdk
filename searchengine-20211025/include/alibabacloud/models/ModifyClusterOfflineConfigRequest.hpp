// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTEROFFLINECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTEROFFLINECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyClusterOfflineConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterOfflineConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(buildMode, buildMode_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(dataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(dataTimeSec, dataTimeSec_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(generation, generation_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
      DARABONBA_PTR_TO_JSON(pushMode, pushMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterOfflineConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(buildMode, buildMode_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(dataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(dataTimeSec, dataTimeSec_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(generation, generation_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
      DARABONBA_PTR_FROM_JSON(pushMode, pushMode_);
    };
    ModifyClusterOfflineConfigRequest() = default ;
    ModifyClusterOfflineConfigRequest(const ModifyClusterOfflineConfigRequest &) = default ;
    ModifyClusterOfflineConfigRequest(ModifyClusterOfflineConfigRequest &&) = default ;
    ModifyClusterOfflineConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterOfflineConfigRequest() = default ;
    ModifyClusterOfflineConfigRequest& operator=(const ModifyClusterOfflineConfigRequest &) = default ;
    ModifyClusterOfflineConfigRequest& operator=(ModifyClusterOfflineConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildMode_ != nullptr
        && this->config_ != nullptr && this->dataSourceName_ != nullptr && this->dataSourceType_ != nullptr && this->dataTimeSec_ != nullptr && this->domain_ != nullptr
        && this->generation_ != nullptr && this->partition_ != nullptr && this->pushMode_ != nullptr; };
    // buildMode Field Functions 
    bool hasBuildMode() const { return this->buildMode_ != nullptr;};
    void deleteBuildMode() { this->buildMode_ = nullptr;};
    inline string buildMode() const { DARABONBA_PTR_GET_DEFAULT(buildMode_, "") };
    inline ModifyClusterOfflineConfigRequest& setBuildMode(string buildMode) { DARABONBA_PTR_SET_VALUE(buildMode_, buildMode) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, int32_t> & config() const { DARABONBA_PTR_GET_CONST(config_, map<string, int32_t>) };
    inline map<string, int32_t> config() { DARABONBA_PTR_GET(config_, map<string, int32_t>) };
    inline ModifyClusterOfflineConfigRequest& setConfig(const map<string, int32_t> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ModifyClusterOfflineConfigRequest& setConfig(map<string, int32_t> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline ModifyClusterOfflineConfigRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ModifyClusterOfflineConfigRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // dataTimeSec Field Functions 
    bool hasDataTimeSec() const { return this->dataTimeSec_ != nullptr;};
    void deleteDataTimeSec() { this->dataTimeSec_ = nullptr;};
    inline int32_t dataTimeSec() const { DARABONBA_PTR_GET_DEFAULT(dataTimeSec_, 0) };
    inline ModifyClusterOfflineConfigRequest& setDataTimeSec(int32_t dataTimeSec) { DARABONBA_PTR_SET_VALUE(dataTimeSec_, dataTimeSec) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyClusterOfflineConfigRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // generation Field Functions 
    bool hasGeneration() const { return this->generation_ != nullptr;};
    void deleteGeneration() { this->generation_ = nullptr;};
    inline int64_t generation() const { DARABONBA_PTR_GET_DEFAULT(generation_, 0L) };
    inline ModifyClusterOfflineConfigRequest& setGeneration(int64_t generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline string partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, "") };
    inline ModifyClusterOfflineConfigRequest& setPartition(string partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // pushMode Field Functions 
    bool hasPushMode() const { return this->pushMode_ != nullptr;};
    void deletePushMode() { this->pushMode_ = nullptr;};
    inline string pushMode() const { DARABONBA_PTR_GET_DEFAULT(pushMode_, "") };
    inline ModifyClusterOfflineConfigRequest& setPushMode(string pushMode) { DARABONBA_PTR_SET_VALUE(pushMode_, pushMode) };


  protected:
    // The reindexing method. Valid values: api: API data source. indexRecover: data recovery by using indexing.
    std::shared_ptr<string> buildMode_ = nullptr;
    // The configuration name, which is stored as a key.
    std::shared_ptr<map<string, int32_t>> config_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The type of the data source. Valid values: odps: MaxCompute. swift: Swift. unKnow: unknown type.
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // This parameter is required when index building by using API data sources is triggered.
    std::shared_ptr<int32_t> dataTimeSec_ = nullptr;
    // The data center in which the data source is deployed.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the full index version.
    std::shared_ptr<int64_t> generation_ = nullptr;
    // This parameter is required when index building for full data in a MaxCompute data source is triggered.
    std::shared_ptr<string> partition_ = nullptr;
    // The push mode of the configuration. By default, only the configuration is pushed.
    std::shared_ptr<string> pushMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
