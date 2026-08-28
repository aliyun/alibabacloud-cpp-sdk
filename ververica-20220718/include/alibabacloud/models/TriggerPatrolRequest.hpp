// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERPATROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERPATROLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class TriggerPatrolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerPatrolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(scopeConfig, scopeConfig_);
      DARABONBA_PTR_TO_JSON(scopeType, scopeType_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerPatrolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(scopeConfig, scopeConfig_);
      DARABONBA_PTR_FROM_JSON(scopeType, scopeType_);
    };
    TriggerPatrolRequest() = default ;
    TriggerPatrolRequest(const TriggerPatrolRequest &) = default ;
    TriggerPatrolRequest(TriggerPatrolRequest &&) = default ;
    TriggerPatrolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerPatrolRequest() = default ;
    TriggerPatrolRequest& operator=(const TriggerPatrolRequest &) = default ;
    TriggerPatrolRequest& operator=(TriggerPatrolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScopeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScopeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(deploymentIds, deploymentIds_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, ScopeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(deploymentIds, deploymentIds_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
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
      // The list of deployment IDs. This parameter is valid only when scopeType is set to DEPLOYMENTS.
      shared_ptr<vector<string>> deploymentIds_ {};
      // The tag mapping. This parameter is valid only when scopeType is set to TAGS. The key is the tag name, and the value is a list of tag values.
      shared_ptr<map<string, vector<string>>> tags_ {};
    };

    virtual bool empty() const override { return this->scopeConfig_ == nullptr
        && this->scopeType_ == nullptr; };
    // scopeConfig Field Functions 
    bool hasScopeConfig() const { return this->scopeConfig_ != nullptr;};
    void deleteScopeConfig() { this->scopeConfig_ = nullptr;};
    inline const TriggerPatrolRequest::ScopeConfig & getScopeConfig() const { DARABONBA_PTR_GET_CONST(scopeConfig_, TriggerPatrolRequest::ScopeConfig) };
    inline TriggerPatrolRequest::ScopeConfig getScopeConfig() { DARABONBA_PTR_GET(scopeConfig_, TriggerPatrolRequest::ScopeConfig) };
    inline TriggerPatrolRequest& setScopeConfig(const TriggerPatrolRequest::ScopeConfig & scopeConfig) { DARABONBA_PTR_SET_VALUE(scopeConfig_, scopeConfig) };
    inline TriggerPatrolRequest& setScopeConfig(TriggerPatrolRequest::ScopeConfig && scopeConfig) { DARABONBA_PTR_SET_RVALUE(scopeConfig_, scopeConfig) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline TriggerPatrolRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


  protected:
    // The inspection scope configuration.
    shared_ptr<TriggerPatrolRequest::ScopeConfig> scopeConfig_ {};
    // The inspection scope type.
    // 
    // This parameter is required.
    shared_ptr<string> scopeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
