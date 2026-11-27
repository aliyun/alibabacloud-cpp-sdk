// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOKENUSAGEDETAILDTO_HPP_
#define ALIBABACLOUD_MODELS_TOKENUSAGEDETAILDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class TokenUsageDetailDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TokenUsageDetailDTO& obj) { 
      DARABONBA_PTR_TO_JSON(BizObjects, bizObjects_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(OccurredAt, occurredAt_);
      DARABONBA_PTR_TO_JSON(ScopeConfig, scopeConfig_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalJobs, totalJobs_);
      DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
      DARABONBA_PTR_TO_JSON(TriggerSource, triggerSource_);
      DARABONBA_PTR_TO_JSON(UsageType, usageType_);
      DARABONBA_PTR_TO_JSON(Workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, TokenUsageDetailDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(BizObjects, bizObjects_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(OccurredAt, occurredAt_);
      DARABONBA_PTR_FROM_JSON(ScopeConfig, scopeConfig_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalJobs, totalJobs_);
      DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
      DARABONBA_PTR_FROM_JSON(TriggerSource, triggerSource_);
      DARABONBA_PTR_FROM_JSON(UsageType, usageType_);
      DARABONBA_PTR_FROM_JSON(Workspace, workspace_);
    };
    TokenUsageDetailDTO() = default ;
    TokenUsageDetailDTO(const TokenUsageDetailDTO &) = default ;
    TokenUsageDetailDTO(TokenUsageDetailDTO &&) = default ;
    TokenUsageDetailDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TokenUsageDetailDTO() = default ;
    TokenUsageDetailDTO& operator=(const TokenUsageDetailDTO &) = default ;
    TokenUsageDetailDTO& operator=(TokenUsageDetailDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScopeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScopeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DeploymentIds, deploymentIds_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, ScopeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DeploymentIds, deploymentIds_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      ScopeConfig() = default ;
      ScopeConfig(const ScopeConfig &) = default ;
      ScopeConfig(ScopeConfig &&) = default ;
      ScopeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScopeConfig() = default ;
      ScopeConfig& operator=(const ScopeConfig &) = default ;
      ScopeConfig& operator=(ScopeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deploymentIds_ == nullptr
        && this->tags_ == nullptr; };
      // deploymentIds Field Functions 
      bool hasDeploymentIds() const { return this->deploymentIds_ != nullptr;};
      void deleteDeploymentIds() { this->deploymentIds_ = nullptr;};
      inline const vector<string> & getDeploymentIds() const { DARABONBA_PTR_GET_CONST(deploymentIds_, vector<string>) };
      inline vector<string> getDeploymentIds() { DARABONBA_PTR_GET(deploymentIds_, vector<string>) };
      inline ScopeConfig& setDeploymentIds(const vector<string> & deploymentIds) { DARABONBA_PTR_SET_VALUE(deploymentIds_, deploymentIds) };
      inline ScopeConfig& setDeploymentIds(vector<string> && deploymentIds) { DARABONBA_PTR_SET_RVALUE(deploymentIds_, deploymentIds) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const map<string, vector<string>> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, vector<string>>) };
      inline map<string, vector<string>> getTags() { DARABONBA_PTR_GET(tags_, map<string, vector<string>>) };
      inline ScopeConfig& setTags(const map<string, vector<string>> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ScopeConfig& setTags(map<string, vector<string>> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The list of deployments selected for inspection.
      shared_ptr<vector<string>> deploymentIds_ {};
      // The tag configuration selected for inspection.
      shared_ptr<map<string, vector<string>>> tags_ {};
    };

    class BizObjects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BizObjects& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Kind, kind_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, BizObjects& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Kind, kind_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      BizObjects() = default ;
      BizObjects(const BizObjects &) = default ;
      BizObjects(BizObjects &&) = default ;
      BizObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BizObjects() = default ;
      BizObjects& operator=(const BizObjects &) = default ;
      BizObjects& operator=(BizObjects &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->kind_ == nullptr && this->name_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline BizObjects& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // kind Field Functions 
      bool hasKind() const { return this->kind_ != nullptr;};
      void deleteKind() { this->kind_ = nullptr;};
      inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
      inline BizObjects& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline BizObjects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The ID of the associated item.
      shared_ptr<string> id_ {};
      // The type of the associated item.
      shared_ptr<string> kind_ {};
      // The name of the associated item.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->bizObjects_ == nullptr
        && this->namespace_ == nullptr && this->occurredAt_ == nullptr && this->scopeConfig_ == nullptr && this->scopeType_ == nullptr && this->sessionId_ == nullptr
        && this->status_ == nullptr && this->totalJobs_ == nullptr && this->totalTokens_ == nullptr && this->triggerSource_ == nullptr && this->usageType_ == nullptr
        && this->workspace_ == nullptr; };
    // bizObjects Field Functions 
    bool hasBizObjects() const { return this->bizObjects_ != nullptr;};
    void deleteBizObjects() { this->bizObjects_ = nullptr;};
    inline const vector<TokenUsageDetailDTO::BizObjects> & getBizObjects() const { DARABONBA_PTR_GET_CONST(bizObjects_, vector<TokenUsageDetailDTO::BizObjects>) };
    inline vector<TokenUsageDetailDTO::BizObjects> getBizObjects() { DARABONBA_PTR_GET(bizObjects_, vector<TokenUsageDetailDTO::BizObjects>) };
    inline TokenUsageDetailDTO& setBizObjects(const vector<TokenUsageDetailDTO::BizObjects> & bizObjects) { DARABONBA_PTR_SET_VALUE(bizObjects_, bizObjects) };
    inline TokenUsageDetailDTO& setBizObjects(vector<TokenUsageDetailDTO::BizObjects> && bizObjects) { DARABONBA_PTR_SET_RVALUE(bizObjects_, bizObjects) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline TokenUsageDetailDTO& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // occurredAt Field Functions 
    bool hasOccurredAt() const { return this->occurredAt_ != nullptr;};
    void deleteOccurredAt() { this->occurredAt_ = nullptr;};
    inline int64_t getOccurredAt() const { DARABONBA_PTR_GET_DEFAULT(occurredAt_, 0L) };
    inline TokenUsageDetailDTO& setOccurredAt(int64_t occurredAt) { DARABONBA_PTR_SET_VALUE(occurredAt_, occurredAt) };


    // scopeConfig Field Functions 
    bool hasScopeConfig() const { return this->scopeConfig_ != nullptr;};
    void deleteScopeConfig() { this->scopeConfig_ = nullptr;};
    inline const TokenUsageDetailDTO::ScopeConfig & getScopeConfig() const { DARABONBA_PTR_GET_CONST(scopeConfig_, TokenUsageDetailDTO::ScopeConfig) };
    inline TokenUsageDetailDTO::ScopeConfig getScopeConfig() { DARABONBA_PTR_GET(scopeConfig_, TokenUsageDetailDTO::ScopeConfig) };
    inline TokenUsageDetailDTO& setScopeConfig(const TokenUsageDetailDTO::ScopeConfig & scopeConfig) { DARABONBA_PTR_SET_VALUE(scopeConfig_, scopeConfig) };
    inline TokenUsageDetailDTO& setScopeConfig(TokenUsageDetailDTO::ScopeConfig && scopeConfig) { DARABONBA_PTR_SET_RVALUE(scopeConfig_, scopeConfig) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline TokenUsageDetailDTO& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline TokenUsageDetailDTO& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline TokenUsageDetailDTO& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalJobs Field Functions 
    bool hasTotalJobs() const { return this->totalJobs_ != nullptr;};
    void deleteTotalJobs() { this->totalJobs_ = nullptr;};
    inline int32_t getTotalJobs() const { DARABONBA_PTR_GET_DEFAULT(totalJobs_, 0) };
    inline TokenUsageDetailDTO& setTotalJobs(int32_t totalJobs) { DARABONBA_PTR_SET_VALUE(totalJobs_, totalJobs) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
    inline TokenUsageDetailDTO& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


    // triggerSource Field Functions 
    bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
    void deleteTriggerSource() { this->triggerSource_ = nullptr;};
    inline string getTriggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
    inline TokenUsageDetailDTO& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


    // usageType Field Functions 
    bool hasUsageType() const { return this->usageType_ != nullptr;};
    void deleteUsageType() { this->usageType_ = nullptr;};
    inline string getUsageType() const { DARABONBA_PTR_GET_DEFAULT(usageType_, "") };
    inline TokenUsageDetailDTO& setUsageType(string usageType) { DARABONBA_PTR_SET_VALUE(usageType_, usageType) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline TokenUsageDetailDTO& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The associated items of the intelligent assistant, such as jobs and deployments.
    shared_ptr<vector<TokenUsageDetailDTO::BizObjects>> bizObjects_ {};
    // namespace
    shared_ptr<string> namespace_ {};
    // The time when the request is initiated, in epoch milliseconds.
    shared_ptr<int64_t> occurredAt_ {};
    // The inspection configuration.
    shared_ptr<TokenUsageDetailDTO::ScopeConfig> scopeConfig_ {};
    // The inspection type.
    shared_ptr<string> scopeType_ {};
    // The session ID shared across multiple requests in the same session.
    shared_ptr<string> sessionId_ {};
    // The request status.
    shared_ptr<string> status_ {};
    // The number of jobs covered by the inspection.
    shared_ptr<int32_t> totalJobs_ {};
    // The number of tokens consumed by this request.
    shared_ptr<int64_t> totalTokens_ {};
    // The request trigger type, such as cron or manual.
    shared_ptr<string> triggerSource_ {};
    // The token consumption scenario.
    shared_ptr<string> usageType_ {};
    // workspace
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
