// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListClustersResponseBodyResultDataNode.hpp>
#include <alibabacloud/models/ListClustersResponseBodyResultQueryNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListClustersResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(configUpdateTime, configUpdateTime_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(currentAdvanceConfigVersion, currentAdvanceConfigVersion_);
      DARABONBA_PTR_TO_JSON(currentOfflineDictConfigVersion, currentOfflineDictConfigVersion_);
      DARABONBA_PTR_TO_JSON(currentOnlineConfigVersion, currentOnlineConfigVersion_);
      DARABONBA_PTR_TO_JSON(currentOnlineQueryConfigVersion, currentOnlineQueryConfigVersion_);
      DARABONBA_PTR_TO_JSON(dataNode, dataNode_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(latestAdvanceConfigVersion, latestAdvanceConfigVersion_);
      DARABONBA_PTR_TO_JSON(latestOfflineDictConfigVersion, latestOfflineDictConfigVersion_);
      DARABONBA_PTR_TO_JSON(latestOnlineConfigVersion, latestOnlineConfigVersion_);
      DARABONBA_PTR_TO_JSON(latestOnlineQueryConfigVersion, latestOnlineQueryConfigVersion_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(queryNode, queryNode_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(configUpdateTime, configUpdateTime_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(currentAdvanceConfigVersion, currentAdvanceConfigVersion_);
      DARABONBA_PTR_FROM_JSON(currentOfflineDictConfigVersion, currentOfflineDictConfigVersion_);
      DARABONBA_PTR_FROM_JSON(currentOnlineConfigVersion, currentOnlineConfigVersion_);
      DARABONBA_PTR_FROM_JSON(currentOnlineQueryConfigVersion, currentOnlineQueryConfigVersion_);
      DARABONBA_PTR_FROM_JSON(dataNode, dataNode_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(latestAdvanceConfigVersion, latestAdvanceConfigVersion_);
      DARABONBA_PTR_FROM_JSON(latestOfflineDictConfigVersion, latestOfflineDictConfigVersion_);
      DARABONBA_PTR_FROM_JSON(latestOnlineConfigVersion, latestOnlineConfigVersion_);
      DARABONBA_PTR_FROM_JSON(latestOnlineQueryConfigVersion, latestOnlineQueryConfigVersion_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(queryNode, queryNode_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListClustersResponseBodyResult() = default ;
    ListClustersResponseBodyResult(const ListClustersResponseBodyResult &) = default ;
    ListClustersResponseBodyResult(ListClustersResponseBodyResult &&) = default ;
    ListClustersResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersResponseBodyResult() = default ;
    ListClustersResponseBodyResult& operator=(const ListClustersResponseBodyResult &) = default ;
    ListClustersResponseBodyResult& operator=(ListClustersResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->configUpdateTime_ != nullptr && this->createTime_ != nullptr && this->currentAdvanceConfigVersion_ != nullptr && this->currentOfflineDictConfigVersion_ != nullptr && this->currentOnlineConfigVersion_ != nullptr
        && this->currentOnlineQueryConfigVersion_ != nullptr && this->dataNode_ != nullptr && this->description_ != nullptr && this->latestAdvanceConfigVersion_ != nullptr && this->latestOfflineDictConfigVersion_ != nullptr
        && this->latestOnlineConfigVersion_ != nullptr && this->latestOnlineQueryConfigVersion_ != nullptr && this->name_ != nullptr && this->queryNode_ != nullptr && this->status_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, Darabonba::Json> & config() const { DARABONBA_PTR_GET_CONST(config_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> config() { DARABONBA_PTR_GET(config_, map<string, Darabonba::Json>) };
    inline ListClustersResponseBodyResult& setConfig(const map<string, Darabonba::Json> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ListClustersResponseBodyResult& setConfig(map<string, Darabonba::Json> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // configUpdateTime Field Functions 
    bool hasConfigUpdateTime() const { return this->configUpdateTime_ != nullptr;};
    void deleteConfigUpdateTime() { this->configUpdateTime_ = nullptr;};
    inline string configUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(configUpdateTime_, "") };
    inline ListClustersResponseBodyResult& setConfigUpdateTime(string configUpdateTime) { DARABONBA_PTR_SET_VALUE(configUpdateTime_, configUpdateTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListClustersResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // currentAdvanceConfigVersion Field Functions 
    bool hasCurrentAdvanceConfigVersion() const { return this->currentAdvanceConfigVersion_ != nullptr;};
    void deleteCurrentAdvanceConfigVersion() { this->currentAdvanceConfigVersion_ = nullptr;};
    inline string currentAdvanceConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(currentAdvanceConfigVersion_, "") };
    inline ListClustersResponseBodyResult& setCurrentAdvanceConfigVersion(string currentAdvanceConfigVersion) { DARABONBA_PTR_SET_VALUE(currentAdvanceConfigVersion_, currentAdvanceConfigVersion) };


    // currentOfflineDictConfigVersion Field Functions 
    bool hasCurrentOfflineDictConfigVersion() const { return this->currentOfflineDictConfigVersion_ != nullptr;};
    void deleteCurrentOfflineDictConfigVersion() { this->currentOfflineDictConfigVersion_ = nullptr;};
    inline string currentOfflineDictConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(currentOfflineDictConfigVersion_, "") };
    inline ListClustersResponseBodyResult& setCurrentOfflineDictConfigVersion(string currentOfflineDictConfigVersion) { DARABONBA_PTR_SET_VALUE(currentOfflineDictConfigVersion_, currentOfflineDictConfigVersion) };


    // currentOnlineConfigVersion Field Functions 
    bool hasCurrentOnlineConfigVersion() const { return this->currentOnlineConfigVersion_ != nullptr;};
    void deleteCurrentOnlineConfigVersion() { this->currentOnlineConfigVersion_ = nullptr;};
    inline string currentOnlineConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(currentOnlineConfigVersion_, "") };
    inline ListClustersResponseBodyResult& setCurrentOnlineConfigVersion(string currentOnlineConfigVersion) { DARABONBA_PTR_SET_VALUE(currentOnlineConfigVersion_, currentOnlineConfigVersion) };


    // currentOnlineQueryConfigVersion Field Functions 
    bool hasCurrentOnlineQueryConfigVersion() const { return this->currentOnlineQueryConfigVersion_ != nullptr;};
    void deleteCurrentOnlineQueryConfigVersion() { this->currentOnlineQueryConfigVersion_ = nullptr;};
    inline string currentOnlineQueryConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(currentOnlineQueryConfigVersion_, "") };
    inline ListClustersResponseBodyResult& setCurrentOnlineQueryConfigVersion(string currentOnlineQueryConfigVersion) { DARABONBA_PTR_SET_VALUE(currentOnlineQueryConfigVersion_, currentOnlineQueryConfigVersion) };


    // dataNode Field Functions 
    bool hasDataNode() const { return this->dataNode_ != nullptr;};
    void deleteDataNode() { this->dataNode_ = nullptr;};
    inline const Models::ListClustersResponseBodyResultDataNode & dataNode() const { DARABONBA_PTR_GET_CONST(dataNode_, Models::ListClustersResponseBodyResultDataNode) };
    inline Models::ListClustersResponseBodyResultDataNode dataNode() { DARABONBA_PTR_GET(dataNode_, Models::ListClustersResponseBodyResultDataNode) };
    inline ListClustersResponseBodyResult& setDataNode(const Models::ListClustersResponseBodyResultDataNode & dataNode) { DARABONBA_PTR_SET_VALUE(dataNode_, dataNode) };
    inline ListClustersResponseBodyResult& setDataNode(Models::ListClustersResponseBodyResultDataNode && dataNode) { DARABONBA_PTR_SET_RVALUE(dataNode_, dataNode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListClustersResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // latestAdvanceConfigVersion Field Functions 
    bool hasLatestAdvanceConfigVersion() const { return this->latestAdvanceConfigVersion_ != nullptr;};
    void deleteLatestAdvanceConfigVersion() { this->latestAdvanceConfigVersion_ = nullptr;};
    inline string latestAdvanceConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(latestAdvanceConfigVersion_, "") };
    inline ListClustersResponseBodyResult& setLatestAdvanceConfigVersion(string latestAdvanceConfigVersion) { DARABONBA_PTR_SET_VALUE(latestAdvanceConfigVersion_, latestAdvanceConfigVersion) };


    // latestOfflineDictConfigVersion Field Functions 
    bool hasLatestOfflineDictConfigVersion() const { return this->latestOfflineDictConfigVersion_ != nullptr;};
    void deleteLatestOfflineDictConfigVersion() { this->latestOfflineDictConfigVersion_ = nullptr;};
    inline string latestOfflineDictConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(latestOfflineDictConfigVersion_, "") };
    inline ListClustersResponseBodyResult& setLatestOfflineDictConfigVersion(string latestOfflineDictConfigVersion) { DARABONBA_PTR_SET_VALUE(latestOfflineDictConfigVersion_, latestOfflineDictConfigVersion) };


    // latestOnlineConfigVersion Field Functions 
    bool hasLatestOnlineConfigVersion() const { return this->latestOnlineConfigVersion_ != nullptr;};
    void deleteLatestOnlineConfigVersion() { this->latestOnlineConfigVersion_ = nullptr;};
    inline string latestOnlineConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(latestOnlineConfigVersion_, "") };
    inline ListClustersResponseBodyResult& setLatestOnlineConfigVersion(string latestOnlineConfigVersion) { DARABONBA_PTR_SET_VALUE(latestOnlineConfigVersion_, latestOnlineConfigVersion) };


    // latestOnlineQueryConfigVersion Field Functions 
    bool hasLatestOnlineQueryConfigVersion() const { return this->latestOnlineQueryConfigVersion_ != nullptr;};
    void deleteLatestOnlineQueryConfigVersion() { this->latestOnlineQueryConfigVersion_ = nullptr;};
    inline string latestOnlineQueryConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(latestOnlineQueryConfigVersion_, "") };
    inline ListClustersResponseBodyResult& setLatestOnlineQueryConfigVersion(string latestOnlineQueryConfigVersion) { DARABONBA_PTR_SET_VALUE(latestOnlineQueryConfigVersion_, latestOnlineQueryConfigVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListClustersResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // queryNode Field Functions 
    bool hasQueryNode() const { return this->queryNode_ != nullptr;};
    void deleteQueryNode() { this->queryNode_ = nullptr;};
    inline const Models::ListClustersResponseBodyResultQueryNode & queryNode() const { DARABONBA_PTR_GET_CONST(queryNode_, Models::ListClustersResponseBodyResultQueryNode) };
    inline Models::ListClustersResponseBodyResultQueryNode queryNode() { DARABONBA_PTR_GET(queryNode_, Models::ListClustersResponseBodyResultQueryNode) };
    inline ListClustersResponseBodyResult& setQueryNode(const Models::ListClustersResponseBodyResultQueryNode & queryNode) { DARABONBA_PTR_SET_VALUE(queryNode_, queryNode) };
    inline ListClustersResponseBodyResult& setQueryNode(Models::ListClustersResponseBodyResultQueryNode && queryNode) { DARABONBA_PTR_SET_RVALUE(queryNode_, queryNode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListClustersResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The configuration information.
    std::shared_ptr<map<string, Darabonba::Json>> config_ = nullptr;
    // The time when the configuration was updated.
    std::shared_ptr<string> configUpdateTime_ = nullptr;
    // The time when the cluster was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The effective advanced configuration version.
    std::shared_ptr<string> currentAdvanceConfigVersion_ = nullptr;
    // The effective dictionary configuration version.
    std::shared_ptr<string> currentOfflineDictConfigVersion_ = nullptr;
    // The effective online configuration version.
    std::shared_ptr<string> currentOnlineConfigVersion_ = nullptr;
    // The effective query configuration version.
    std::shared_ptr<string> currentOnlineQueryConfigVersion_ = nullptr;
    // The information about Searcher workers.
    std::shared_ptr<Models::ListClustersResponseBodyResultDataNode> dataNode_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> description_ = nullptr;
    // The latest advanced configuration version.
    std::shared_ptr<string> latestAdvanceConfigVersion_ = nullptr;
    // The latest dictionary configuration version.
    std::shared_ptr<string> latestOfflineDictConfigVersion_ = nullptr;
    // The latest online configuration version.
    std::shared_ptr<string> latestOnlineConfigVersion_ = nullptr;
    // The latest query configuration version.
    std::shared_ptr<string> latestOnlineQueryConfigVersion_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> name_ = nullptr;
    // The information about Query Result Searcher (QRS) workers.
    std::shared_ptr<Models::ListClustersResponseBodyResultQueryNode> queryNode_ = nullptr;
    // The cluster status. Valid values: running: The cluster is running. starting: The cluster is being started. stopping: The cluster is being stopped. stopped: The cluster is stopped.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
