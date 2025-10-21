// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SESSIONCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_SESSIONCLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BasicResourceSetting.hpp>
#include <alibabacloud/models/Logging.hpp>
#include <alibabacloud/models/SessionClusterStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class SessionCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SessionCluster& obj) { 
      DARABONBA_PTR_TO_JSON(basicResourceSetting, basicResourceSetting_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(deploymentTargetName, deploymentTargetName_);
      DARABONBA_PTR_TO_JSON(engineVersion, engineVersion_);
      DARABONBA_ANY_TO_JSON(flinkConf, flinkConf_);
      DARABONBA_ANY_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(logging, logging_);
      DARABONBA_PTR_TO_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(modifierName, modifierName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(sessionClusterId, sessionClusterId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, SessionCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(basicResourceSetting, basicResourceSetting_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(deploymentTargetName, deploymentTargetName_);
      DARABONBA_PTR_FROM_JSON(engineVersion, engineVersion_);
      DARABONBA_ANY_FROM_JSON(flinkConf, flinkConf_);
      DARABONBA_ANY_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(logging, logging_);
      DARABONBA_PTR_FROM_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(modifierName, modifierName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(sessionClusterId, sessionClusterId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    SessionCluster() = default ;
    SessionCluster(const SessionCluster &) = default ;
    SessionCluster(SessionCluster &&) = default ;
    SessionCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SessionCluster() = default ;
    SessionCluster& operator=(const SessionCluster &) = default ;
    SessionCluster& operator=(SessionCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basicResourceSetting_ == nullptr
        && return this->createdAt_ == nullptr && return this->creator_ == nullptr && return this->creatorName_ == nullptr && return this->deploymentTargetName_ == nullptr && return this->engineVersion_ == nullptr
        && return this->flinkConf_ == nullptr && return this->labels_ == nullptr && return this->logging_ == nullptr && return this->modifiedAt_ == nullptr && return this->modifier_ == nullptr
        && return this->modifierName_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->sessionClusterId_ == nullptr && return this->status_ == nullptr
        && return this->workspace_ == nullptr; };
    // basicResourceSetting Field Functions 
    bool hasBasicResourceSetting() const { return this->basicResourceSetting_ != nullptr;};
    void deleteBasicResourceSetting() { this->basicResourceSetting_ = nullptr;};
    inline const BasicResourceSetting & basicResourceSetting() const { DARABONBA_PTR_GET_CONST(basicResourceSetting_, BasicResourceSetting) };
    inline BasicResourceSetting basicResourceSetting() { DARABONBA_PTR_GET(basicResourceSetting_, BasicResourceSetting) };
    inline SessionCluster& setBasicResourceSetting(const BasicResourceSetting & basicResourceSetting) { DARABONBA_PTR_SET_VALUE(basicResourceSetting_, basicResourceSetting) };
    inline SessionCluster& setBasicResourceSetting(BasicResourceSetting && basicResourceSetting) { DARABONBA_PTR_SET_RVALUE(basicResourceSetting_, basicResourceSetting) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline SessionCluster& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline SessionCluster& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline SessionCluster& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // deploymentTargetName Field Functions 
    bool hasDeploymentTargetName() const { return this->deploymentTargetName_ != nullptr;};
    void deleteDeploymentTargetName() { this->deploymentTargetName_ = nullptr;};
    inline string deploymentTargetName() const { DARABONBA_PTR_GET_DEFAULT(deploymentTargetName_, "") };
    inline SessionCluster& setDeploymentTargetName(string deploymentTargetName) { DARABONBA_PTR_SET_VALUE(deploymentTargetName_, deploymentTargetName) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline SessionCluster& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // flinkConf Field Functions 
    bool hasFlinkConf() const { return this->flinkConf_ != nullptr;};
    void deleteFlinkConf() { this->flinkConf_ = nullptr;};
    inline     const Darabonba::Json & flinkConf() const { DARABONBA_GET(flinkConf_) };
    Darabonba::Json & flinkConf() { DARABONBA_GET(flinkConf_) };
    inline SessionCluster& setFlinkConf(const Darabonba::Json & flinkConf) { DARABONBA_SET_VALUE(flinkConf_, flinkConf) };
    inline SessionCluster& setFlinkConf(Darabonba::Json & flinkConf) { DARABONBA_SET_RVALUE(flinkConf_, flinkConf) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline     const Darabonba::Json & labels() const { DARABONBA_GET(labels_) };
    Darabonba::Json & labels() { DARABONBA_GET(labels_) };
    inline SessionCluster& setLabels(const Darabonba::Json & labels) { DARABONBA_SET_VALUE(labels_, labels) };
    inline SessionCluster& setLabels(Darabonba::Json & labels) { DARABONBA_SET_RVALUE(labels_, labels) };


    // logging Field Functions 
    bool hasLogging() const { return this->logging_ != nullptr;};
    void deleteLogging() { this->logging_ = nullptr;};
    inline const Logging & logging() const { DARABONBA_PTR_GET_CONST(logging_, Logging) };
    inline Logging logging() { DARABONBA_PTR_GET(logging_, Logging) };
    inline SessionCluster& setLogging(const Logging & logging) { DARABONBA_PTR_SET_VALUE(logging_, logging) };
    inline SessionCluster& setLogging(Logging && logging) { DARABONBA_PTR_SET_RVALUE(logging_, logging) };


    // modifiedAt Field Functions 
    bool hasModifiedAt() const { return this->modifiedAt_ != nullptr;};
    void deleteModifiedAt() { this->modifiedAt_ = nullptr;};
    inline int64_t modifiedAt() const { DARABONBA_PTR_GET_DEFAULT(modifiedAt_, 0L) };
    inline SessionCluster& setModifiedAt(int64_t modifiedAt) { DARABONBA_PTR_SET_VALUE(modifiedAt_, modifiedAt) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline SessionCluster& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // modifierName Field Functions 
    bool hasModifierName() const { return this->modifierName_ != nullptr;};
    void deleteModifierName() { this->modifierName_ = nullptr;};
    inline string modifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
    inline SessionCluster& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SessionCluster& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline SessionCluster& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // sessionClusterId Field Functions 
    bool hasSessionClusterId() const { return this->sessionClusterId_ != nullptr;};
    void deleteSessionClusterId() { this->sessionClusterId_ = nullptr;};
    inline string sessionClusterId() const { DARABONBA_PTR_GET_DEFAULT(sessionClusterId_, "") };
    inline SessionCluster& setSessionClusterId(string sessionClusterId) { DARABONBA_PTR_SET_VALUE(sessionClusterId_, sessionClusterId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const SessionClusterStatus & status() const { DARABONBA_PTR_GET_CONST(status_, SessionClusterStatus) };
    inline SessionClusterStatus status() { DARABONBA_PTR_GET(status_, SessionClusterStatus) };
    inline SessionCluster& setStatus(const SessionClusterStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline SessionCluster& setStatus(SessionClusterStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline SessionCluster& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<BasicResourceSetting> basicResourceSetting_ = nullptr;
    std::shared_ptr<int64_t> createdAt_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> creatorName_ = nullptr;
    std::shared_ptr<string> deploymentTargetName_ = nullptr;
    std::shared_ptr<string> engineVersion_ = nullptr;
    Darabonba::Json flinkConf_ = nullptr;
    Darabonba::Json labels_ = nullptr;
    std::shared_ptr<Logging> logging_ = nullptr;
    std::shared_ptr<int64_t> modifiedAt_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> modifierName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> sessionClusterId_ = nullptr;
    std::shared_ptr<SessionClusterStatus> status_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
