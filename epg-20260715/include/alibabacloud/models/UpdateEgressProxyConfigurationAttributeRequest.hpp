// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEGRESSPROXYCONFIGURATIONATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEGRESSPROXYCONFIGURATIONATTRIBUTEREQUEST_HPP_
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
  class UpdateEgressProxyConfigurationAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEgressProxyConfigurationAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DefaultRulePhaseActions, defaultRulePhaseActions_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
      DARABONBA_PTR_TO_JSON(EgressProxyConfigurationName, egressProxyConfigurationName_);
      DARABONBA_PTR_TO_JSON(EgressProxyRuleGroups, egressProxyRuleGroups_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEgressProxyConfigurationAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DefaultRulePhaseActions, defaultRulePhaseActions_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationName, egressProxyConfigurationName_);
      DARABONBA_PTR_FROM_JSON(EgressProxyRuleGroups, egressProxyRuleGroups_);
    };
    UpdateEgressProxyConfigurationAttributeRequest() = default ;
    UpdateEgressProxyConfigurationAttributeRequest(const UpdateEgressProxyConfigurationAttributeRequest &) = default ;
    UpdateEgressProxyConfigurationAttributeRequest(UpdateEgressProxyConfigurationAttributeRequest &&) = default ;
    UpdateEgressProxyConfigurationAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEgressProxyConfigurationAttributeRequest() = default ;
    UpdateEgressProxyConfigurationAttributeRequest& operator=(const UpdateEgressProxyConfigurationAttributeRequest &) = default ;
    UpdateEgressProxyConfigurationAttributeRequest& operator=(UpdateEgressProxyConfigurationAttributeRequest &&) = default ;
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
      // This parameter is required.
      shared_ptr<string> egressProxyRuleGroupId_ {};
      // This parameter is required.
      shared_ptr<int32_t> priority_ {};
    };

    class DefaultRulePhaseActions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultRulePhaseActions& obj) { 
        DARABONBA_PTR_TO_JSON(PostResponse, postResponse_);
        DARABONBA_PTR_TO_JSON(PreDns, preDns_);
        DARABONBA_PTR_TO_JSON(PreRequest, preRequest_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultRulePhaseActions& obj) { 
        DARABONBA_PTR_FROM_JSON(PostResponse, postResponse_);
        DARABONBA_PTR_FROM_JSON(PreDns, preDns_);
        DARABONBA_PTR_FROM_JSON(PreRequest, preRequest_);
      };
      DefaultRulePhaseActions() = default ;
      DefaultRulePhaseActions(const DefaultRulePhaseActions &) = default ;
      DefaultRulePhaseActions(DefaultRulePhaseActions &&) = default ;
      DefaultRulePhaseActions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultRulePhaseActions() = default ;
      DefaultRulePhaseActions& operator=(const DefaultRulePhaseActions &) = default ;
      DefaultRulePhaseActions& operator=(DefaultRulePhaseActions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->postResponse_ == nullptr
        && this->preDns_ == nullptr && this->preRequest_ == nullptr; };
      // postResponse Field Functions 
      bool hasPostResponse() const { return this->postResponse_ != nullptr;};
      void deletePostResponse() { this->postResponse_ = nullptr;};
      inline string getPostResponse() const { DARABONBA_PTR_GET_DEFAULT(postResponse_, "") };
      inline DefaultRulePhaseActions& setPostResponse(string postResponse) { DARABONBA_PTR_SET_VALUE(postResponse_, postResponse) };


      // preDns Field Functions 
      bool hasPreDns() const { return this->preDns_ != nullptr;};
      void deletePreDns() { this->preDns_ = nullptr;};
      inline string getPreDns() const { DARABONBA_PTR_GET_DEFAULT(preDns_, "") };
      inline DefaultRulePhaseActions& setPreDns(string preDns) { DARABONBA_PTR_SET_VALUE(preDns_, preDns) };


      // preRequest Field Functions 
      bool hasPreRequest() const { return this->preRequest_ != nullptr;};
      void deletePreRequest() { this->preRequest_ = nullptr;};
      inline string getPreRequest() const { DARABONBA_PTR_GET_DEFAULT(preRequest_, "") };
      inline DefaultRulePhaseActions& setPreRequest(string preRequest) { DARABONBA_PTR_SET_VALUE(preRequest_, preRequest) };


    protected:
      // This parameter is required.
      shared_ptr<string> postResponse_ {};
      // This parameter is required.
      shared_ptr<string> preDns_ {};
      // This parameter is required.
      shared_ptr<string> preRequest_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->defaultRulePhaseActions_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->egressProxyConfigurationId_ == nullptr && this->egressProxyConfigurationName_ == nullptr
        && this->egressProxyRuleGroups_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEgressProxyConfigurationAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // defaultRulePhaseActions Field Functions 
    bool hasDefaultRulePhaseActions() const { return this->defaultRulePhaseActions_ != nullptr;};
    void deleteDefaultRulePhaseActions() { this->defaultRulePhaseActions_ = nullptr;};
    inline const UpdateEgressProxyConfigurationAttributeRequest::DefaultRulePhaseActions & getDefaultRulePhaseActions() const { DARABONBA_PTR_GET_CONST(defaultRulePhaseActions_, UpdateEgressProxyConfigurationAttributeRequest::DefaultRulePhaseActions) };
    inline UpdateEgressProxyConfigurationAttributeRequest::DefaultRulePhaseActions getDefaultRulePhaseActions() { DARABONBA_PTR_GET(defaultRulePhaseActions_, UpdateEgressProxyConfigurationAttributeRequest::DefaultRulePhaseActions) };
    inline UpdateEgressProxyConfigurationAttributeRequest& setDefaultRulePhaseActions(const UpdateEgressProxyConfigurationAttributeRequest::DefaultRulePhaseActions & defaultRulePhaseActions) { DARABONBA_PTR_SET_VALUE(defaultRulePhaseActions_, defaultRulePhaseActions) };
    inline UpdateEgressProxyConfigurationAttributeRequest& setDefaultRulePhaseActions(UpdateEgressProxyConfigurationAttributeRequest::DefaultRulePhaseActions && defaultRulePhaseActions) { DARABONBA_PTR_SET_RVALUE(defaultRulePhaseActions_, defaultRulePhaseActions) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateEgressProxyConfigurationAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateEgressProxyConfigurationAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyConfigurationId Field Functions 
    bool hasEgressProxyConfigurationId() const { return this->egressProxyConfigurationId_ != nullptr;};
    void deleteEgressProxyConfigurationId() { this->egressProxyConfigurationId_ = nullptr;};
    inline string getEgressProxyConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyConfigurationId_, "") };
    inline UpdateEgressProxyConfigurationAttributeRequest& setEgressProxyConfigurationId(string egressProxyConfigurationId) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationId_, egressProxyConfigurationId) };


    // egressProxyConfigurationName Field Functions 
    bool hasEgressProxyConfigurationName() const { return this->egressProxyConfigurationName_ != nullptr;};
    void deleteEgressProxyConfigurationName() { this->egressProxyConfigurationName_ = nullptr;};
    inline string getEgressProxyConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyConfigurationName_, "") };
    inline UpdateEgressProxyConfigurationAttributeRequest& setEgressProxyConfigurationName(string egressProxyConfigurationName) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationName_, egressProxyConfigurationName) };


    // egressProxyRuleGroups Field Functions 
    bool hasEgressProxyRuleGroups() const { return this->egressProxyRuleGroups_ != nullptr;};
    void deleteEgressProxyRuleGroups() { this->egressProxyRuleGroups_ = nullptr;};
    inline const vector<UpdateEgressProxyConfigurationAttributeRequest::EgressProxyRuleGroups> & getEgressProxyRuleGroups() const { DARABONBA_PTR_GET_CONST(egressProxyRuleGroups_, vector<UpdateEgressProxyConfigurationAttributeRequest::EgressProxyRuleGroups>) };
    inline vector<UpdateEgressProxyConfigurationAttributeRequest::EgressProxyRuleGroups> getEgressProxyRuleGroups() { DARABONBA_PTR_GET(egressProxyRuleGroups_, vector<UpdateEgressProxyConfigurationAttributeRequest::EgressProxyRuleGroups>) };
    inline UpdateEgressProxyConfigurationAttributeRequest& setEgressProxyRuleGroups(const vector<UpdateEgressProxyConfigurationAttributeRequest::EgressProxyRuleGroups> & egressProxyRuleGroups) { DARABONBA_PTR_SET_VALUE(egressProxyRuleGroups_, egressProxyRuleGroups) };
    inline UpdateEgressProxyConfigurationAttributeRequest& setEgressProxyRuleGroups(vector<UpdateEgressProxyConfigurationAttributeRequest::EgressProxyRuleGroups> && egressProxyRuleGroups) { DARABONBA_PTR_SET_RVALUE(egressProxyRuleGroups_, egressProxyRuleGroups) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<UpdateEgressProxyConfigurationAttributeRequest::DefaultRulePhaseActions> defaultRulePhaseActions_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> dryRun_ {};
    // This parameter is required.
    shared_ptr<string> egressProxyConfigurationId_ {};
    shared_ptr<string> egressProxyConfigurationName_ {};
    shared_ptr<vector<UpdateEgressProxyConfigurationAttributeRequest::EgressProxyRuleGroups>> egressProxyRuleGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
