// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ConfigValue.hpp>
#include <alibabacloud/models/ModifyIndexRequestDataSourceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIndexRequest& obj) { 
      DARABONBA_PTR_TO_JSON(buildParallelNum, buildParallelNum_);
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(clusterConfigName, clusterConfigName_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(dataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(dataSourceInfo, dataSourceInfo_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_ANY_TO_JSON(extend, extend_);
      DARABONBA_PTR_TO_JSON(mergeParallelNum, mergeParallelNum_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
      DARABONBA_PTR_TO_JSON(pushMode, pushMode_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIndexRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(buildParallelNum, buildParallelNum_);
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(clusterConfigName, clusterConfigName_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(dataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(dataSourceInfo, dataSourceInfo_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_ANY_FROM_JSON(extend, extend_);
      DARABONBA_PTR_FROM_JSON(mergeParallelNum, mergeParallelNum_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
      DARABONBA_PTR_FROM_JSON(pushMode, pushMode_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    ModifyIndexRequest() = default ;
    ModifyIndexRequest(const ModifyIndexRequest &) = default ;
    ModifyIndexRequest(ModifyIndexRequest &&) = default ;
    ModifyIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIndexRequest() = default ;
    ModifyIndexRequest& operator=(const ModifyIndexRequest &) = default ;
    ModifyIndexRequest& operator=(ModifyIndexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildParallelNum_ != nullptr
        && this->cluster_ != nullptr && this->clusterConfigName_ != nullptr && this->config_ != nullptr && this->content_ != nullptr && this->dataSource_ != nullptr
        && this->dataSourceInfo_ != nullptr && this->description_ != nullptr && this->domain_ != nullptr && this->extend_ != nullptr && this->mergeParallelNum_ != nullptr
        && this->partition_ != nullptr && this->pushMode_ != nullptr && this->dryRun_ != nullptr; };
    // buildParallelNum Field Functions 
    bool hasBuildParallelNum() const { return this->buildParallelNum_ != nullptr;};
    void deleteBuildParallelNum() { this->buildParallelNum_ = nullptr;};
    inline int32_t buildParallelNum() const { DARABONBA_PTR_GET_DEFAULT(buildParallelNum_, 0) };
    inline ModifyIndexRequest& setBuildParallelNum(int32_t buildParallelNum) { DARABONBA_PTR_SET_VALUE(buildParallelNum_, buildParallelNum) };


    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const map<string, Darabonba::Json> & cluster() const { DARABONBA_PTR_GET_CONST(cluster_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> cluster() { DARABONBA_PTR_GET(cluster_, map<string, Darabonba::Json>) };
    inline ModifyIndexRequest& setCluster(const map<string, Darabonba::Json> & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline ModifyIndexRequest& setCluster(map<string, Darabonba::Json> && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


    // clusterConfigName Field Functions 
    bool hasClusterConfigName() const { return this->clusterConfigName_ != nullptr;};
    void deleteClusterConfigName() { this->clusterConfigName_ = nullptr;};
    inline string clusterConfigName() const { DARABONBA_PTR_GET_DEFAULT(clusterConfigName_, "") };
    inline ModifyIndexRequest& setClusterConfigName(string clusterConfigName) { DARABONBA_PTR_SET_VALUE(clusterConfigName_, clusterConfigName) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, ConfigValue> & config() const { DARABONBA_PTR_GET_CONST(config_, map<string, ConfigValue>) };
    inline map<string, ConfigValue> config() { DARABONBA_PTR_GET(config_, map<string, ConfigValue>) };
    inline ModifyIndexRequest& setConfig(const map<string, ConfigValue> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ModifyIndexRequest& setConfig(map<string, ConfigValue> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ModifyIndexRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string dataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline ModifyIndexRequest& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // dataSourceInfo Field Functions 
    bool hasDataSourceInfo() const { return this->dataSourceInfo_ != nullptr;};
    void deleteDataSourceInfo() { this->dataSourceInfo_ = nullptr;};
    inline const ModifyIndexRequestDataSourceInfo & dataSourceInfo() const { DARABONBA_PTR_GET_CONST(dataSourceInfo_, ModifyIndexRequestDataSourceInfo) };
    inline ModifyIndexRequestDataSourceInfo dataSourceInfo() { DARABONBA_PTR_GET(dataSourceInfo_, ModifyIndexRequestDataSourceInfo) };
    inline ModifyIndexRequest& setDataSourceInfo(const ModifyIndexRequestDataSourceInfo & dataSourceInfo) { DARABONBA_PTR_SET_VALUE(dataSourceInfo_, dataSourceInfo) };
    inline ModifyIndexRequest& setDataSourceInfo(ModifyIndexRequestDataSourceInfo && dataSourceInfo) { DARABONBA_PTR_SET_RVALUE(dataSourceInfo_, dataSourceInfo) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyIndexRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyIndexRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline     const Darabonba::Json & extend() const { DARABONBA_GET(extend_) };
    Darabonba::Json & extend() { DARABONBA_GET(extend_) };
    inline ModifyIndexRequest& setExtend(const Darabonba::Json & extend) { DARABONBA_SET_VALUE(extend_, extend) };
    inline ModifyIndexRequest& setExtend(Darabonba::Json & extend) { DARABONBA_SET_RVALUE(extend_, extend) };


    // mergeParallelNum Field Functions 
    bool hasMergeParallelNum() const { return this->mergeParallelNum_ != nullptr;};
    void deleteMergeParallelNum() { this->mergeParallelNum_ = nullptr;};
    inline int32_t mergeParallelNum() const { DARABONBA_PTR_GET_DEFAULT(mergeParallelNum_, 0) };
    inline ModifyIndexRequest& setMergeParallelNum(int32_t mergeParallelNum) { DARABONBA_PTR_SET_VALUE(mergeParallelNum_, mergeParallelNum) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline int32_t partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0) };
    inline ModifyIndexRequest& setPartition(int32_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // pushMode Field Functions 
    bool hasPushMode() const { return this->pushMode_ != nullptr;};
    void deletePushMode() { this->pushMode_ = nullptr;};
    inline string pushMode() const { DARABONBA_PTR_GET_DEFAULT(pushMode_, "") };
    inline ModifyIndexRequest& setPushMode(string pushMode) { DARABONBA_PTR_SET_VALUE(pushMode_, pushMode) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyIndexRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The maximum number of full indexes that can be concurrently built.
    std::shared_ptr<int32_t> buildParallelNum_ = nullptr;
    // The cluster information.
    std::shared_ptr<map<string, Darabonba::Json>> cluster_ = nullptr;
    // The name of the configuration file.
    std::shared_ptr<string> clusterConfigName_ = nullptr;
    // The information about the offline configuration.
    std::shared_ptr<map<string, ConfigValue>> config_ = nullptr;
    // The file content.
    std::shared_ptr<string> content_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> dataSource_ = nullptr;
    // The information about the data source, which is required for the new version of OpenSearch Vector Search Edition.
    std::shared_ptr<ModifyIndexRequestDataSourceInfo> dataSourceInfo_ = nullptr;
    // The description of the data source.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the data center in which the data source is deployed.
    std::shared_ptr<string> domain_ = nullptr;
    Darabonba::Json extend_ = nullptr;
    // The maximum number of full indexes that can be concurrently merged.
    std::shared_ptr<int32_t> mergeParallelNum_ = nullptr;
    // The number of shards.
    std::shared_ptr<int32_t> partition_ = nullptr;
    // The push mode of the configuration. By default, only the configuration is pushed.
    std::shared_ptr<string> pushMode_ = nullptr;
    // Specifies whether to check the validity of input parameters. Default value: false.
    // 
    // Valid values:
    // 
    // *   **true**: checks only the validity of input parameters.
    // *   **false**: checks the validity of input parameters and creates an attribution configuration.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
