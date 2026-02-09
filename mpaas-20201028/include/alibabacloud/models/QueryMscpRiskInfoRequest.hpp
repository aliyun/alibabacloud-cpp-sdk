// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMSCPRISKINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMSCPRISKINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMscpRiskInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMscpRiskInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApdidToken, apdidToken_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TerminalType, terminalType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMscpRiskInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApdidToken, apdidToken_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TerminalType, terminalType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryMscpRiskInfoRequest() = default ;
    QueryMscpRiskInfoRequest(const QueryMscpRiskInfoRequest &) = default ;
    QueryMscpRiskInfoRequest(QueryMscpRiskInfoRequest &&) = default ;
    QueryMscpRiskInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMscpRiskInfoRequest() = default ;
    QueryMscpRiskInfoRequest& operator=(const QueryMscpRiskInfoRequest &) = default ;
    QueryMscpRiskInfoRequest& operator=(QueryMscpRiskInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apdidToken_ == nullptr
        && this->appId_ == nullptr && this->tenantId_ == nullptr && this->terminalType_ == nullptr && this->workspaceId_ == nullptr; };
    // apdidToken Field Functions 
    bool hasApdidToken() const { return this->apdidToken_ != nullptr;};
    void deleteApdidToken() { this->apdidToken_ = nullptr;};
    inline string getApdidToken() const { DARABONBA_PTR_GET_DEFAULT(apdidToken_, "") };
    inline QueryMscpRiskInfoRequest& setApdidToken(string apdidToken) { DARABONBA_PTR_SET_VALUE(apdidToken_, apdidToken) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline QueryMscpRiskInfoRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline QueryMscpRiskInfoRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // terminalType Field Functions 
    bool hasTerminalType() const { return this->terminalType_ != nullptr;};
    void deleteTerminalType() { this->terminalType_ = nullptr;};
    inline string getTerminalType() const { DARABONBA_PTR_GET_DEFAULT(terminalType_, "") };
    inline QueryMscpRiskInfoRequest& setTerminalType(string terminalType) { DARABONBA_PTR_SET_VALUE(terminalType_, terminalType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryMscpRiskInfoRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // ApdidToken
    shared_ptr<string> apdidToken_ {};
    // AppId
    shared_ptr<string> appId_ {};
    // TenantId
    shared_ptr<string> tenantId_ {};
    // TerminalType
    shared_ptr<string> terminalType_ {};
    // WorkspaceId
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
