// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINDEXRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETINDEXRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ResultClusterValue.hpp>
#include <alibabacloud/models/GetIndexResponseBodyResultDataSourceInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetIndexResponseBodyResultVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetIndexResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIndexResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(configWhenBuild, configWhenBuild_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(dataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(dataSourceInfo, dataSourceInfo_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(extend, extend_);
      DARABONBA_PTR_TO_JSON(fullUpdateTime, fullUpdateTime_);
      DARABONBA_PTR_TO_JSON(fullVersion, fullVersion_);
      DARABONBA_PTR_TO_JSON(incUpdateTime, incUpdateTime_);
      DARABONBA_PTR_TO_JSON(indexSize, indexSize_);
      DARABONBA_PTR_TO_JSON(indexStatus, indexStatus_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, GetIndexResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(configWhenBuild, configWhenBuild_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(dataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(dataSourceInfo, dataSourceInfo_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(extend, extend_);
      DARABONBA_PTR_FROM_JSON(fullUpdateTime, fullUpdateTime_);
      DARABONBA_PTR_FROM_JSON(fullVersion, fullVersion_);
      DARABONBA_PTR_FROM_JSON(incUpdateTime, incUpdateTime_);
      DARABONBA_PTR_FROM_JSON(indexSize, indexSize_);
      DARABONBA_PTR_FROM_JSON(indexStatus, indexStatus_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(versions, versions_);
    };
    GetIndexResponseBodyResult() = default ;
    GetIndexResponseBodyResult(const GetIndexResponseBodyResult &) = default ;
    GetIndexResponseBodyResult(GetIndexResponseBodyResult &&) = default ;
    GetIndexResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIndexResponseBodyResult() = default ;
    GetIndexResponseBodyResult& operator=(const GetIndexResponseBodyResult &) = default ;
    GetIndexResponseBodyResult& operator=(GetIndexResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cluster_ != nullptr
        && this->config_ != nullptr && this->configWhenBuild_ != nullptr && this->content_ != nullptr && this->createTime_ != nullptr && this->dataSource_ != nullptr
        && this->dataSourceInfo_ != nullptr && this->description_ != nullptr && this->domain_ != nullptr && this->extend_ != nullptr && this->fullUpdateTime_ != nullptr
        && this->fullVersion_ != nullptr && this->incUpdateTime_ != nullptr && this->indexSize_ != nullptr && this->indexStatus_ != nullptr && this->name_ != nullptr
        && this->partition_ != nullptr && this->updateTime_ != nullptr && this->versions_ != nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const map<string, Models::ResultClusterValue> & cluster() const { DARABONBA_PTR_GET_CONST(cluster_, map<string, Models::ResultClusterValue>) };
    inline map<string, Models::ResultClusterValue> cluster() { DARABONBA_PTR_GET(cluster_, map<string, Models::ResultClusterValue>) };
    inline GetIndexResponseBodyResult& setCluster(const map<string, Models::ResultClusterValue> & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline GetIndexResponseBodyResult& setCluster(map<string, Models::ResultClusterValue> && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, Darabonba::Json> & config() const { DARABONBA_PTR_GET_CONST(config_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> config() { DARABONBA_PTR_GET(config_, map<string, Darabonba::Json>) };
    inline GetIndexResponseBodyResult& setConfig(const map<string, Darabonba::Json> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetIndexResponseBodyResult& setConfig(map<string, Darabonba::Json> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // configWhenBuild Field Functions 
    bool hasConfigWhenBuild() const { return this->configWhenBuild_ != nullptr;};
    void deleteConfigWhenBuild() { this->configWhenBuild_ = nullptr;};
    inline const map<string, Darabonba::Json> & configWhenBuild() const { DARABONBA_PTR_GET_CONST(configWhenBuild_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> configWhenBuild() { DARABONBA_PTR_GET(configWhenBuild_, map<string, Darabonba::Json>) };
    inline GetIndexResponseBodyResult& setConfigWhenBuild(const map<string, Darabonba::Json> & configWhenBuild) { DARABONBA_PTR_SET_VALUE(configWhenBuild_, configWhenBuild) };
    inline GetIndexResponseBodyResult& setConfigWhenBuild(map<string, Darabonba::Json> && configWhenBuild) { DARABONBA_PTR_SET_RVALUE(configWhenBuild_, configWhenBuild) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetIndexResponseBodyResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetIndexResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string dataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline GetIndexResponseBodyResult& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // dataSourceInfo Field Functions 
    bool hasDataSourceInfo() const { return this->dataSourceInfo_ != nullptr;};
    void deleteDataSourceInfo() { this->dataSourceInfo_ = nullptr;};
    inline const Models::GetIndexResponseBodyResultDataSourceInfo & dataSourceInfo() const { DARABONBA_PTR_GET_CONST(dataSourceInfo_, Models::GetIndexResponseBodyResultDataSourceInfo) };
    inline Models::GetIndexResponseBodyResultDataSourceInfo dataSourceInfo() { DARABONBA_PTR_GET(dataSourceInfo_, Models::GetIndexResponseBodyResultDataSourceInfo) };
    inline GetIndexResponseBodyResult& setDataSourceInfo(const Models::GetIndexResponseBodyResultDataSourceInfo & dataSourceInfo) { DARABONBA_PTR_SET_VALUE(dataSourceInfo_, dataSourceInfo) };
    inline GetIndexResponseBodyResult& setDataSourceInfo(Models::GetIndexResponseBodyResultDataSourceInfo && dataSourceInfo) { DARABONBA_PTR_SET_RVALUE(dataSourceInfo_, dataSourceInfo) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetIndexResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetIndexResponseBodyResult& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline const map<string, vector<string>> & extend() const { DARABONBA_PTR_GET_CONST(extend_, map<string, vector<string>>) };
    inline map<string, vector<string>> extend() { DARABONBA_PTR_GET(extend_, map<string, vector<string>>) };
    inline GetIndexResponseBodyResult& setExtend(const map<string, vector<string>> & extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };
    inline GetIndexResponseBodyResult& setExtend(map<string, vector<string>> && extend) { DARABONBA_PTR_SET_RVALUE(extend_, extend) };


    // fullUpdateTime Field Functions 
    bool hasFullUpdateTime() const { return this->fullUpdateTime_ != nullptr;};
    void deleteFullUpdateTime() { this->fullUpdateTime_ = nullptr;};
    inline string fullUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(fullUpdateTime_, "") };
    inline GetIndexResponseBodyResult& setFullUpdateTime(string fullUpdateTime) { DARABONBA_PTR_SET_VALUE(fullUpdateTime_, fullUpdateTime) };


    // fullVersion Field Functions 
    bool hasFullVersion() const { return this->fullVersion_ != nullptr;};
    void deleteFullVersion() { this->fullVersion_ = nullptr;};
    inline int64_t fullVersion() const { DARABONBA_PTR_GET_DEFAULT(fullVersion_, 0L) };
    inline GetIndexResponseBodyResult& setFullVersion(int64_t fullVersion) { DARABONBA_PTR_SET_VALUE(fullVersion_, fullVersion) };


    // incUpdateTime Field Functions 
    bool hasIncUpdateTime() const { return this->incUpdateTime_ != nullptr;};
    void deleteIncUpdateTime() { this->incUpdateTime_ = nullptr;};
    inline string incUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(incUpdateTime_, "") };
    inline GetIndexResponseBodyResult& setIncUpdateTime(string incUpdateTime) { DARABONBA_PTR_SET_VALUE(incUpdateTime_, incUpdateTime) };


    // indexSize Field Functions 
    bool hasIndexSize() const { return this->indexSize_ != nullptr;};
    void deleteIndexSize() { this->indexSize_ = nullptr;};
    inline int64_t indexSize() const { DARABONBA_PTR_GET_DEFAULT(indexSize_, 0L) };
    inline GetIndexResponseBodyResult& setIndexSize(int64_t indexSize) { DARABONBA_PTR_SET_VALUE(indexSize_, indexSize) };


    // indexStatus Field Functions 
    bool hasIndexStatus() const { return this->indexStatus_ != nullptr;};
    void deleteIndexStatus() { this->indexStatus_ = nullptr;};
    inline string indexStatus() const { DARABONBA_PTR_GET_DEFAULT(indexStatus_, "") };
    inline GetIndexResponseBodyResult& setIndexStatus(string indexStatus) { DARABONBA_PTR_SET_VALUE(indexStatus_, indexStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetIndexResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline int32_t partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0) };
    inline GetIndexResponseBodyResult& setPartition(int32_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetIndexResponseBodyResult& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<Models::GetIndexResponseBodyResultVersions> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<Models::GetIndexResponseBodyResultVersions>) };
    inline vector<Models::GetIndexResponseBodyResultVersions> versions() { DARABONBA_PTR_GET(versions_, vector<Models::GetIndexResponseBodyResultVersions>) };
    inline GetIndexResponseBodyResult& setVersions(const vector<Models::GetIndexResponseBodyResultVersions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline GetIndexResponseBodyResult& setVersions(vector<Models::GetIndexResponseBodyResultVersions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The cluster information.
    std::shared_ptr<map<string, Models::ResultClusterValue>> cluster_ = nullptr;
    // The configuration information.
    std::shared_ptr<map<string, Darabonba::Json>> config_ = nullptr;
    // The configuration that takes effect next time.
    std::shared_ptr<map<string, Darabonba::Json>> configWhenBuild_ = nullptr;
    // The file content.
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> dataSource_ = nullptr;
    // The information about the data source.
    std::shared_ptr<Models::GetIndexResponseBodyResultDataSourceInfo> dataSourceInfo_ = nullptr;
    // The description of the index version.
    std::shared_ptr<string> description_ = nullptr;
    // The deployment name of the index.
    std::shared_ptr<string> domain_ = nullptr;
    // Extended information
    std::shared_ptr<map<string, vector<string>>> extend_ = nullptr;
    // The time when full data in the index was last updated.
    std::shared_ptr<string> fullUpdateTime_ = nullptr;
    // The data version.
    std::shared_ptr<int64_t> fullVersion_ = nullptr;
    // The time when incremental data in the index was last updated.
    std::shared_ptr<string> incUpdateTime_ = nullptr;
    // The index size.
    std::shared_ptr<int64_t> indexSize_ = nullptr;
    // The status of the index version. Valid values:
    // 
    // *   NEW: The index version is created.
    // *   PUBLISH: The index version is normal.
    // *   IN_USE: The index version is in use.
    // *   NOT_USE: The index version is not used.
    // *   STOP_USE: The index version is being stopped.
    // *   RESTORE_USE: The index version is being restored.
    // *   FAIL: The index version failed to be created.
    std::shared_ptr<string> indexStatus_ = nullptr;
    // The index name.
    std::shared_ptr<string> name_ = nullptr;
    // The number of shards.
    std::shared_ptr<int32_t> partition_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    // The information about the versions.
    std::shared_ptr<vector<Models::GetIndexResponseBodyResultVersions>> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
