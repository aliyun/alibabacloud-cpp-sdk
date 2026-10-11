// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEGRESSPROXYRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEGRESSPROXYRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class DeleteEgressProxyRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEgressProxyRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
      DARABONBA_PTR_TO_JSON(EgressProxyRuleIds, egressProxyRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEgressProxyRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleIds, egressProxyRuleIds_);
    };
    DeleteEgressProxyRulesRequest() = default ;
    DeleteEgressProxyRulesRequest(const DeleteEgressProxyRulesRequest &) = default ;
    DeleteEgressProxyRulesRequest(DeleteEgressProxyRulesRequest &&) = default ;
    DeleteEgressProxyRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEgressProxyRulesRequest() = default ;
    DeleteEgressProxyRulesRequest& operator=(const DeleteEgressProxyRulesRequest &) = default ;
    DeleteEgressProxyRulesRequest& operator=(DeleteEgressProxyRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->egressProxyRuleGroupId_ == nullptr && this->egressProxyRuleIds_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteEgressProxyRulesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteEgressProxyRulesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyRuleGroupId Field Functions 
    bool hasEgressProxyRuleGroupId() const { return this->egressProxyRuleGroupId_ != nullptr;};
    void deleteEgressProxyRuleGroupId() { this->egressProxyRuleGroupId_ = nullptr;};
    inline string getEgressProxyRuleGroupId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleGroupId_, "") };
    inline DeleteEgressProxyRulesRequest& setEgressProxyRuleGroupId(string egressProxyRuleGroupId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupId_, egressProxyRuleGroupId) };


    // egressProxyRuleIds Field Functions 
    bool hasEgressProxyRuleIds() const { return this->egressProxyRuleIds_ != nullptr;};
    void deleteEgressProxyRuleIds() { this->egressProxyRuleIds_ = nullptr;};
    inline const vector<string> & getEgressProxyRuleIds() const { DARABONBA_PTR_GET_CONST(egressProxyRuleIds_, vector<string>) };
    inline vector<string> getEgressProxyRuleIds() { DARABONBA_PTR_GET(egressProxyRuleIds_, vector<string>) };
    inline DeleteEgressProxyRulesRequest& setEgressProxyRuleIds(const vector<string> & egressProxyRuleIds) { DARABONBA_PTR_SET_VALUE(egressProxyRuleIds_, egressProxyRuleIds) };
    inline DeleteEgressProxyRulesRequest& setEgressProxyRuleIds(vector<string> && egressProxyRuleIds) { DARABONBA_PTR_SET_RVALUE(egressProxyRuleIds_, egressProxyRuleIds) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > Note: If you do not specify this parameter, the system automatically uses the request ID of the API request as the client token. The request ID of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run on the request. Valid values:
    // 
    // - **true**: performs only a dry run and does not delete the rules. The system checks whether required parameters are specified, the request format is valid, and the service limits are met. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // 
    // - **false** (default): performs a dry run and sends the actual request. If the request passes the dry run, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The ID of the egress proxy rule group.
    // 
    // This parameter is required.
    shared_ptr<string> egressProxyRuleGroupId_ {};
    // The IDs of the egress proxy rules.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> egressProxyRuleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
