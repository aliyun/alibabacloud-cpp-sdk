// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHEGRESSPROXYRULEGROUPSTOCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHEGRESSPROXYRULEGROUPSTOCONFIGURATIONREQUEST_HPP_
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
  class AttachEgressProxyRuleGroupsToConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachEgressProxyRuleGroupsToConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
      DARABONBA_PTR_TO_JSON(EgressProxyRuleGroups, egressProxyRuleGroups_);
    };
    friend void from_json(const Darabonba::Json& j, AttachEgressProxyRuleGroupsToConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroups, egressProxyRuleGroups_);
    };
    AttachEgressProxyRuleGroupsToConfigurationRequest() = default ;
    AttachEgressProxyRuleGroupsToConfigurationRequest(const AttachEgressProxyRuleGroupsToConfigurationRequest &) = default ;
    AttachEgressProxyRuleGroupsToConfigurationRequest(AttachEgressProxyRuleGroupsToConfigurationRequest &&) = default ;
    AttachEgressProxyRuleGroupsToConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachEgressProxyRuleGroupsToConfigurationRequest() = default ;
    AttachEgressProxyRuleGroupsToConfigurationRequest& operator=(const AttachEgressProxyRuleGroupsToConfigurationRequest &) = default ;
    AttachEgressProxyRuleGroupsToConfigurationRequest& operator=(AttachEgressProxyRuleGroupsToConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EgressProxyRuleGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EgressProxyRuleGroups& obj) { 
        DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
      };
      friend void from_json(const Darabonba::Json& j, EgressProxyRuleGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
      };
      EgressProxyRuleGroups() = default ;
      EgressProxyRuleGroups(const EgressProxyRuleGroups &) = default ;
      EgressProxyRuleGroups(EgressProxyRuleGroups &&) = default ;
      EgressProxyRuleGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EgressProxyRuleGroups() = default ;
      EgressProxyRuleGroups& operator=(const EgressProxyRuleGroups &) = default ;
      EgressProxyRuleGroups& operator=(EgressProxyRuleGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->egressProxyRuleGroupId_ == nullptr
        && this->priority_ == nullptr; };
      // egressProxyRuleGroupId Field Functions 
      bool hasEgressProxyRuleGroupId() const { return this->egressProxyRuleGroupId_ != nullptr;};
      void deleteEgressProxyRuleGroupId() { this->egressProxyRuleGroupId_ = nullptr;};
      inline string getEgressProxyRuleGroupId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleGroupId_, "") };
      inline EgressProxyRuleGroups& setEgressProxyRuleGroupId(string egressProxyRuleGroupId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupId_, egressProxyRuleGroupId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline EgressProxyRuleGroups& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    protected:
      // The ID of the egress proxy rule group.
      // 
      // This parameter is required.
      shared_ptr<string> egressProxyRuleGroupId_ {};
      // The priority of the egress proxy rule group in the egress proxy configuration. Valid values: 1 to 1000. A smaller value indicates a higher priority.
      // 
      // This parameter is required.
      shared_ptr<int32_t> priority_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->egressProxyConfigurationId_ == nullptr && this->egressProxyRuleGroups_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AttachEgressProxyRuleGroupsToConfigurationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AttachEgressProxyRuleGroupsToConfigurationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyConfigurationId Field Functions 
    bool hasEgressProxyConfigurationId() const { return this->egressProxyConfigurationId_ != nullptr;};
    void deleteEgressProxyConfigurationId() { this->egressProxyConfigurationId_ = nullptr;};
    inline string getEgressProxyConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyConfigurationId_, "") };
    inline AttachEgressProxyRuleGroupsToConfigurationRequest& setEgressProxyConfigurationId(string egressProxyConfigurationId) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationId_, egressProxyConfigurationId) };


    // egressProxyRuleGroups Field Functions 
    bool hasEgressProxyRuleGroups() const { return this->egressProxyRuleGroups_ != nullptr;};
    void deleteEgressProxyRuleGroups() { this->egressProxyRuleGroups_ = nullptr;};
    inline const vector<AttachEgressProxyRuleGroupsToConfigurationRequest::EgressProxyRuleGroups> & getEgressProxyRuleGroups() const { DARABONBA_PTR_GET_CONST(egressProxyRuleGroups_, vector<AttachEgressProxyRuleGroupsToConfigurationRequest::EgressProxyRuleGroups>) };
    inline vector<AttachEgressProxyRuleGroupsToConfigurationRequest::EgressProxyRuleGroups> getEgressProxyRuleGroups() { DARABONBA_PTR_GET(egressProxyRuleGroups_, vector<AttachEgressProxyRuleGroupsToConfigurationRequest::EgressProxyRuleGroups>) };
    inline AttachEgressProxyRuleGroupsToConfigurationRequest& setEgressProxyRuleGroups(const vector<AttachEgressProxyRuleGroupsToConfigurationRequest::EgressProxyRuleGroups> & egressProxyRuleGroups) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroups_, egressProxyRuleGroups) };
    inline AttachEgressProxyRuleGroupsToConfigurationRequest& setEgressProxyRuleGroups(vector<AttachEgressProxyRuleGroupsToConfigurationRequest::EgressProxyRuleGroups> && egressProxyRuleGroups) { DARABONBA_PTR_SET_RVALUE(egressProxyRuleGroups_, egressProxyRuleGroups) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > Note If you do not specify this parameter, the system automatically uses the RequestId of the API request as the client token. The RequestId of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run. Valid values:
    // 
    // - **true**: performs a dry run and does not attach the egress proxy rule groups. The system checks whether required parameters are specified, the request format is valid, and the service limits are met. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // 
    // - **false** (default): sends a normal request. If the request passes the check, the system returns an HTTP 2xx status code and performs the operation.
    shared_ptr<bool> dryRun_ {};
    // The ID of the egress proxy configuration.
    // 
    // This parameter is required.
    shared_ptr<string> egressProxyConfigurationId_ {};
    // The list of egress proxy rule group references to be attached to the egress proxy configuration.
    // 
    // This parameter is required.
    shared_ptr<vector<AttachEgressProxyRuleGroupsToConfigurationRequest::EgressProxyRuleGroups>> egressProxyRuleGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
