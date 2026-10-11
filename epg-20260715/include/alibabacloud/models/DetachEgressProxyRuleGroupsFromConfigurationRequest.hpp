// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHEGRESSPROXYRULEGROUPSFROMCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHEGRESSPROXYRULEGROUPSFROMCONFIGURATIONREQUEST_HPP_
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
  class DetachEgressProxyRuleGroupsFromConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachEgressProxyRuleGroupsFromConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
      DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupIds, egressProxyRuleGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, DetachEgressProxyRuleGroupsFromConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupIds, egressProxyRuleGroupIds_);
    };
    DetachEgressProxyRuleGroupsFromConfigurationRequest() = default ;
    DetachEgressProxyRuleGroupsFromConfigurationRequest(const DetachEgressProxyRuleGroupsFromConfigurationRequest &) = default ;
    DetachEgressProxyRuleGroupsFromConfigurationRequest(DetachEgressProxyRuleGroupsFromConfigurationRequest &&) = default ;
    DetachEgressProxyRuleGroupsFromConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachEgressProxyRuleGroupsFromConfigurationRequest() = default ;
    DetachEgressProxyRuleGroupsFromConfigurationRequest& operator=(const DetachEgressProxyRuleGroupsFromConfigurationRequest &) = default ;
    DetachEgressProxyRuleGroupsFromConfigurationRequest& operator=(DetachEgressProxyRuleGroupsFromConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->egressProxyConfigurationId_ == nullptr && this->egressProxyRuleGroupIds_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DetachEgressProxyRuleGroupsFromConfigurationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DetachEgressProxyRuleGroupsFromConfigurationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyConfigurationId Field Functions 
    bool hasEgressProxyConfigurationId() const { return this->egressProxyConfigurationId_ != nullptr;};
    void deleteEgressProxyConfigurationId() { this->egressProxyConfigurationId_ = nullptr;};
    inline string getEgressProxyConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyConfigurationId_, "") };
    inline DetachEgressProxyRuleGroupsFromConfigurationRequest& setEgressProxyConfigurationId(string egressProxyConfigurationId) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationId_, egressProxyConfigurationId) };


    // egressProxyRuleGroupIds Field Functions 
    bool hasEgressProxyRuleGroupIds() const { return this->egressProxyRuleGroupIds_ != nullptr;};
    void deleteEgressProxyRuleGroupIds() { this->egressProxyRuleGroupIds_ = nullptr;};
    inline const vector<string> & getEgressProxyRuleGroupIds() const { DARABONBA_PTR_GET_CONST(egressProxyRuleGroupIds_, vector<string>) };
    inline vector<string> getEgressProxyRuleGroupIds() { DARABONBA_PTR_GET(egressProxyRuleGroupIds_, vector<string>) };
    inline DetachEgressProxyRuleGroupsFromConfigurationRequest& setEgressProxyRuleGroupIds(const vector<string> & egressProxyRuleGroupIds) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupIds_, egressProxyRuleGroupIds) };
    inline DetachEgressProxyRuleGroupsFromConfigurationRequest& setEgressProxyRuleGroupIds(vector<string> && egressProxyRuleGroupIds) { DARABONBA_PTR_SET_RVALUE(egressProxyRuleGroupIds_, egressProxyRuleGroupIds) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > Note If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run on the request. Valid values:
    // 
    // - **true**: Sends a check request and does not disassociate the egress proxy rule groups. The check items include whether the required parameters are specified, the request format, and service limits. If the check fails, the corresponding error is returned. If the check succeeds, the DryRunOperation error code is returned.
    // 
    // - **false** (default): Sends a normal request. After the check succeeds, an HTTP 2xx status code is returned and the operation is directly executed.
    shared_ptr<bool> dryRun_ {};
    // The ID of the egress proxy configuration.
    // 
    // This parameter is required.
    shared_ptr<string> egressProxyConfigurationId_ {};
    // The IDs of the egress proxy rule groups to be disassociated from the egress proxy configuration.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> egressProxyRuleGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
