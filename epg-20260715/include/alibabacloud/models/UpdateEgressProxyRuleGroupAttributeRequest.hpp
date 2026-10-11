// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEGRESSPROXYRULEGROUPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEGRESSPROXYRULEGROUPATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class UpdateEgressProxyRuleGroupAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEgressProxyRuleGroupAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
      DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
      DARABONBA_PTR_TO_JSON(EgressProxyRuleGroupName, egressProxyRuleGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEgressProxyRuleGroupAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupId, egressProxyRuleGroupId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroupName, egressProxyRuleGroupName_);
    };
    UpdateEgressProxyRuleGroupAttributeRequest() = default ;
    UpdateEgressProxyRuleGroupAttributeRequest(const UpdateEgressProxyRuleGroupAttributeRequest &) = default ;
    UpdateEgressProxyRuleGroupAttributeRequest(UpdateEgressProxyRuleGroupAttributeRequest &&) = default ;
    UpdateEgressProxyRuleGroupAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEgressProxyRuleGroupAttributeRequest() = default ;
    UpdateEgressProxyRuleGroupAttributeRequest& operator=(const UpdateEgressProxyRuleGroupAttributeRequest &) = default ;
    UpdateEgressProxyRuleGroupAttributeRequest& operator=(UpdateEgressProxyRuleGroupAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->egressProxyIpPoolId_ == nullptr && this->egressProxyRuleGroupId_ == nullptr && this->egressProxyRuleGroupName_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEgressProxyRuleGroupAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateEgressProxyRuleGroupAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateEgressProxyRuleGroupAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyIpPoolId Field Functions 
    bool hasEgressProxyIpPoolId() const { return this->egressProxyIpPoolId_ != nullptr;};
    void deleteEgressProxyIpPoolId() { this->egressProxyIpPoolId_ = nullptr;};
    inline string getEgressProxyIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyIpPoolId_, "") };
    inline UpdateEgressProxyRuleGroupAttributeRequest& setEgressProxyIpPoolId(string egressProxyIpPoolId) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolId_, egressProxyIpPoolId) };


    // egressProxyRuleGroupId Field Functions 
    bool hasEgressProxyRuleGroupId() const { return this->egressProxyRuleGroupId_ != nullptr;};
    void deleteEgressProxyRuleGroupId() { this->egressProxyRuleGroupId_ = nullptr;};
    inline string getEgressProxyRuleGroupId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleGroupId_, "") };
    inline UpdateEgressProxyRuleGroupAttributeRequest& setEgressProxyRuleGroupId(string egressProxyRuleGroupId) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupId_, egressProxyRuleGroupId) };


    // egressProxyRuleGroupName Field Functions 
    bool hasEgressProxyRuleGroupName() const { return this->egressProxyRuleGroupName_ != nullptr;};
    void deleteEgressProxyRuleGroupName() { this->egressProxyRuleGroupName_ = nullptr;};
    inline string getEgressProxyRuleGroupName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyRuleGroupName_, "") };
    inline UpdateEgressProxyRuleGroupAttributeRequest& setEgressProxyRuleGroupName(string egressProxyRuleGroupName) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroupName_, egressProxyRuleGroupName) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> egressProxyIpPoolId_ {};
    // This parameter is required.
    shared_ptr<string> egressProxyRuleGroupId_ {};
    shared_ptr<string> egressProxyRuleGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
