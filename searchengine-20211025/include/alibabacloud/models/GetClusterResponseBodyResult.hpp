// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetClusterResponseBodyResultDataNode.hpp>
#include <alibabacloud/models/GetClusterResponseBodyResultQueryNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetClusterResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(configUpdateTime, configUpdateTime_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(currentAdvanceConfigVersion, currentAdvanceConfigVersion_);
      DARABONBA_PTR_TO_JSON(currentOnlineConfigVersion, currentOnlineConfigVersion_);
      DARABONBA_PTR_TO_JSON(dataNode, dataNode_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(latestAdvanceConfigVersion, latestAdvanceConfigVersion_);
      DARABONBA_PTR_TO_JSON(latestOnlineConfigVersion, latestOnlineConfigVersion_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(queryNode, queryNode_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(configUpdateTime, configUpdateTime_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(currentAdvanceConfigVersion, currentAdvanceConfigVersion_);
      DARABONBA_PTR_FROM_JSON(currentOnlineConfigVersion, currentOnlineConfigVersion_);
      DARABONBA_PTR_FROM_JSON(dataNode, dataNode_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(latestAdvanceConfigVersion, latestAdvanceConfigVersion_);
      DARABONBA_PTR_FROM_JSON(latestOnlineConfigVersion, latestOnlineConfigVersion_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(queryNode, queryNode_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetClusterResponseBodyResult() = default ;
    GetClusterResponseBodyResult(const GetClusterResponseBodyResult &) = default ;
    GetClusterResponseBodyResult(GetClusterResponseBodyResult &&) = default ;
    GetClusterResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterResponseBodyResult() = default ;
    GetClusterResponseBodyResult& operator=(const GetClusterResponseBodyResult &) = default ;
    GetClusterResponseBodyResult& operator=(GetClusterResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->configUpdateTime_ != nullptr && this->createTime_ != nullptr && this->currentAdvanceConfigVersion_ != nullptr && this->currentOnlineConfigVersion_ != nullptr && this->dataNode_ != nullptr
        && this->description_ != nullptr && this->latestAdvanceConfigVersion_ != nullptr && this->latestOnlineConfigVersion_ != nullptr && this->name_ != nullptr && this->queryNode_ != nullptr
        && this->status_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, Darabonba::Json> & config() const { DARABONBA_PTR_GET_CONST(config_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> config() { DARABONBA_PTR_GET(config_, map<string, Darabonba::Json>) };
    inline GetClusterResponseBodyResult& setConfig(const map<string, Darabonba::Json> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetClusterResponseBodyResult& setConfig(map<string, Darabonba::Json> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // configUpdateTime Field Functions 
    bool hasConfigUpdateTime() const { return this->configUpdateTime_ != nullptr;};
    void deleteConfigUpdateTime() { this->configUpdateTime_ = nullptr;};
    inline string configUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(configUpdateTime_, "") };
    inline GetClusterResponseBodyResult& setConfigUpdateTime(string configUpdateTime) { DARABONBA_PTR_SET_VALUE(configUpdateTime_, configUpdateTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetClusterResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // currentAdvanceConfigVersion Field Functions 
    bool hasCurrentAdvanceConfigVersion() const { return this->currentAdvanceConfigVersion_ != nullptr;};
    void deleteCurrentAdvanceConfigVersion() { this->currentAdvanceConfigVersion_ = nullptr;};
    inline string currentAdvanceConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(currentAdvanceConfigVersion_, "") };
    inline GetClusterResponseBodyResult& setCurrentAdvanceConfigVersion(string currentAdvanceConfigVersion) { DARABONBA_PTR_SET_VALUE(currentAdvanceConfigVersion_, currentAdvanceConfigVersion) };


    // currentOnlineConfigVersion Field Functions 
    bool hasCurrentOnlineConfigVersion() const { return this->currentOnlineConfigVersion_ != nullptr;};
    void deleteCurrentOnlineConfigVersion() { this->currentOnlineConfigVersion_ = nullptr;};
    inline string currentOnlineConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(currentOnlineConfigVersion_, "") };
    inline GetClusterResponseBodyResult& setCurrentOnlineConfigVersion(string currentOnlineConfigVersion) { DARABONBA_PTR_SET_VALUE(currentOnlineConfigVersion_, currentOnlineConfigVersion) };


    // dataNode Field Functions 
    bool hasDataNode() const { return this->dataNode_ != nullptr;};
    void deleteDataNode() { this->dataNode_ = nullptr;};
    inline const Models::GetClusterResponseBodyResultDataNode & dataNode() const { DARABONBA_PTR_GET_CONST(dataNode_, Models::GetClusterResponseBodyResultDataNode) };
    inline Models::GetClusterResponseBodyResultDataNode dataNode() { DARABONBA_PTR_GET(dataNode_, Models::GetClusterResponseBodyResultDataNode) };
    inline GetClusterResponseBodyResult& setDataNode(const Models::GetClusterResponseBodyResultDataNode & dataNode) { DARABONBA_PTR_SET_VALUE(dataNode_, dataNode) };
    inline GetClusterResponseBodyResult& setDataNode(Models::GetClusterResponseBodyResultDataNode && dataNode) { DARABONBA_PTR_SET_RVALUE(dataNode_, dataNode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetClusterResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // latestAdvanceConfigVersion Field Functions 
    bool hasLatestAdvanceConfigVersion() const { return this->latestAdvanceConfigVersion_ != nullptr;};
    void deleteLatestAdvanceConfigVersion() { this->latestAdvanceConfigVersion_ = nullptr;};
    inline string latestAdvanceConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(latestAdvanceConfigVersion_, "") };
    inline GetClusterResponseBodyResult& setLatestAdvanceConfigVersion(string latestAdvanceConfigVersion) { DARABONBA_PTR_SET_VALUE(latestAdvanceConfigVersion_, latestAdvanceConfigVersion) };


    // latestOnlineConfigVersion Field Functions 
    bool hasLatestOnlineConfigVersion() const { return this->latestOnlineConfigVersion_ != nullptr;};
    void deleteLatestOnlineConfigVersion() { this->latestOnlineConfigVersion_ = nullptr;};
    inline string latestOnlineConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(latestOnlineConfigVersion_, "") };
    inline GetClusterResponseBodyResult& setLatestOnlineConfigVersion(string latestOnlineConfigVersion) { DARABONBA_PTR_SET_VALUE(latestOnlineConfigVersion_, latestOnlineConfigVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetClusterResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // queryNode Field Functions 
    bool hasQueryNode() const { return this->queryNode_ != nullptr;};
    void deleteQueryNode() { this->queryNode_ = nullptr;};
    inline const Models::GetClusterResponseBodyResultQueryNode & queryNode() const { DARABONBA_PTR_GET_CONST(queryNode_, Models::GetClusterResponseBodyResultQueryNode) };
    inline Models::GetClusterResponseBodyResultQueryNode queryNode() { DARABONBA_PTR_GET(queryNode_, Models::GetClusterResponseBodyResultQueryNode) };
    inline GetClusterResponseBodyResult& setQueryNode(const Models::GetClusterResponseBodyResultQueryNode & queryNode) { DARABONBA_PTR_SET_VALUE(queryNode_, queryNode) };
    inline GetClusterResponseBodyResult& setQueryNode(Models::GetClusterResponseBodyResultQueryNode && queryNode) { DARABONBA_PTR_SET_RVALUE(queryNode_, queryNode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetClusterResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The configuration information.
    std::shared_ptr<map<string, Darabonba::Json>> config_ = nullptr;
    // The time when the cluster was updated.
    std::shared_ptr<string> configUpdateTime_ = nullptr;
    // The time when the cluster was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The effective advanced configuration version.
    std::shared_ptr<string> currentAdvanceConfigVersion_ = nullptr;
    // The effective online configuration version.
    std::shared_ptr<string> currentOnlineConfigVersion_ = nullptr;
    // The specifications of Searcher workers.
    std::shared_ptr<Models::GetClusterResponseBodyResultDataNode> dataNode_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> description_ = nullptr;
    // The latest advanced configuration version.
    std::shared_ptr<string> latestAdvanceConfigVersion_ = nullptr;
    // The latest online configuration version.
    std::shared_ptr<string> latestOnlineConfigVersion_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> name_ = nullptr;
    // The specifications of Query Result Searcher (QRS) workers.
    std::shared_ptr<Models::GetClusterResponseBodyResultQueryNode> queryNode_ = nullptr;
    // The creation status of the cluster. Valid values: NEW and PUBLISH. NEW indicates that the cluster is being created. PUBLISH indicates that the cluster is created.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
