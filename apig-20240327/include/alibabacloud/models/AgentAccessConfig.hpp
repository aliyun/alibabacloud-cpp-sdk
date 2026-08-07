// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTACCESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AGENTACCESSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AgentAuthorizationPrincipal.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AgentAccessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentAccessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(aiRequestLogEnabled, aiRequestLogEnabled_);
      DARABONBA_PTR_TO_JSON(authorization, authorization_);
      DARABONBA_PTR_TO_JSON(basePath, basePath_);
      DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
      DARABONBA_PTR_TO_JSON(removeBasePathOnForward, removeBasePathOnForward_);
    };
    friend void from_json(const Darabonba::Json& j, AgentAccessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(aiRequestLogEnabled, aiRequestLogEnabled_);
      DARABONBA_PTR_FROM_JSON(authorization, authorization_);
      DARABONBA_PTR_FROM_JSON(basePath, basePath_);
      DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
      DARABONBA_PTR_FROM_JSON(removeBasePathOnForward, removeBasePathOnForward_);
    };
    AgentAccessConfig() = default ;
    AgentAccessConfig(const AgentAccessConfig &) = default ;
    AgentAccessConfig(AgentAccessConfig &&) = default ;
    AgentAccessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentAccessConfig() = default ;
    AgentAccessConfig& operator=(const AgentAccessConfig &) = default ;
    AgentAccessConfig& operator=(AgentAccessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Authorization : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Authorization& obj) { 
        DARABONBA_PTR_TO_JSON(authType, authType_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(principals, principals_);
      };
      friend void from_json(const Darabonba::Json& j, Authorization& obj) { 
        DARABONBA_PTR_FROM_JSON(authType, authType_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(principals, principals_);
      };
      Authorization() = default ;
      Authorization(const Authorization &) = default ;
      Authorization(Authorization &&) = default ;
      Authorization(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Authorization() = default ;
      Authorization& operator=(const Authorization &) = default ;
      Authorization& operator=(Authorization &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authType_ == nullptr
        && this->enabled_ == nullptr && this->principals_ == nullptr; };
      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline Authorization& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Authorization& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // principals Field Functions 
      bool hasPrincipals() const { return this->principals_ != nullptr;};
      void deletePrincipals() { this->principals_ = nullptr;};
      inline const vector<AgentAuthorizationPrincipal> & getPrincipals() const { DARABONBA_PTR_GET_CONST(principals_, vector<AgentAuthorizationPrincipal>) };
      inline vector<AgentAuthorizationPrincipal> getPrincipals() { DARABONBA_PTR_GET(principals_, vector<AgentAuthorizationPrincipal>) };
      inline Authorization& setPrincipals(const vector<AgentAuthorizationPrincipal> & principals) { DARABONBA_PTR_SET_VALUE(principals_, principals) };
      inline Authorization& setPrincipals(vector<AgentAuthorizationPrincipal> && principals) { DARABONBA_PTR_SET_RVALUE(principals_, principals) };


    protected:
      shared_ptr<string> authType_ {};
      // This parameter is required.
      shared_ptr<bool> enabled_ {};
      shared_ptr<vector<AgentAuthorizationPrincipal>> principals_ {};
    };

    virtual bool empty() const override { return this->aiRequestLogEnabled_ == nullptr
        && this->authorization_ == nullptr && this->basePath_ == nullptr && this->domainIds_ == nullptr && this->removeBasePathOnForward_ == nullptr; };
    // aiRequestLogEnabled Field Functions 
    bool hasAiRequestLogEnabled() const { return this->aiRequestLogEnabled_ != nullptr;};
    void deleteAiRequestLogEnabled() { this->aiRequestLogEnabled_ = nullptr;};
    inline bool getAiRequestLogEnabled() const { DARABONBA_PTR_GET_DEFAULT(aiRequestLogEnabled_, false) };
    inline AgentAccessConfig& setAiRequestLogEnabled(bool aiRequestLogEnabled) { DARABONBA_PTR_SET_VALUE(aiRequestLogEnabled_, aiRequestLogEnabled) };


    // authorization Field Functions 
    bool hasAuthorization() const { return this->authorization_ != nullptr;};
    void deleteAuthorization() { this->authorization_ = nullptr;};
    inline const AgentAccessConfig::Authorization & getAuthorization() const { DARABONBA_PTR_GET_CONST(authorization_, AgentAccessConfig::Authorization) };
    inline AgentAccessConfig::Authorization getAuthorization() { DARABONBA_PTR_GET(authorization_, AgentAccessConfig::Authorization) };
    inline AgentAccessConfig& setAuthorization(const AgentAccessConfig::Authorization & authorization) { DARABONBA_PTR_SET_VALUE(authorization_, authorization) };
    inline AgentAccessConfig& setAuthorization(AgentAccessConfig::Authorization && authorization) { DARABONBA_PTR_SET_RVALUE(authorization_, authorization) };


    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string getBasePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline AgentAccessConfig& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & getDomainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> getDomainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline AgentAccessConfig& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline AgentAccessConfig& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // removeBasePathOnForward Field Functions 
    bool hasRemoveBasePathOnForward() const { return this->removeBasePathOnForward_ != nullptr;};
    void deleteRemoveBasePathOnForward() { this->removeBasePathOnForward_ = nullptr;};
    inline bool getRemoveBasePathOnForward() const { DARABONBA_PTR_GET_DEFAULT(removeBasePathOnForward_, false) };
    inline AgentAccessConfig& setRemoveBasePathOnForward(bool removeBasePathOnForward) { DARABONBA_PTR_SET_VALUE(removeBasePathOnForward_, removeBasePathOnForward) };


  protected:
    shared_ptr<bool> aiRequestLogEnabled_ {};
    shared_ptr<AgentAccessConfig::Authorization> authorization_ {};
    // This parameter is required.
    shared_ptr<string> basePath_ {};
    // This parameter is required.
    shared_ptr<vector<string>> domainIds_ {};
    shared_ptr<bool> removeBasePathOnForward_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
