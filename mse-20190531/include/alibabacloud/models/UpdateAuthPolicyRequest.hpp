// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTHPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTHPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateAuthPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAuthPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AuthRule, authRule_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(K8sNamespace, k8sNamespace_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAuthPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AuthRule, authRule_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(K8sNamespace, k8sNamespace_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    UpdateAuthPolicyRequest() = default ;
    UpdateAuthPolicyRequest(const UpdateAuthPolicyRequest &) = default ;
    UpdateAuthPolicyRequest(UpdateAuthPolicyRequest &&) = default ;
    UpdateAuthPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAuthPolicyRequest() = default ;
    UpdateAuthPolicyRequest& operator=(const UpdateAuthPolicyRequest &) = default ;
    UpdateAuthPolicyRequest& operator=(UpdateAuthPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->appId_ == nullptr && this->authRule_ == nullptr && this->enable_ == nullptr && this->id_ == nullptr && this->k8sNamespace_ == nullptr
        && this->name_ == nullptr && this->protocol_ == nullptr && this->region_ == nullptr && this->source_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateAuthPolicyRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateAuthPolicyRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // authRule Field Functions 
    bool hasAuthRule() const { return this->authRule_ != nullptr;};
    void deleteAuthRule() { this->authRule_ = nullptr;};
    inline string getAuthRule() const { DARABONBA_PTR_GET_DEFAULT(authRule_, "") };
    inline UpdateAuthPolicyRequest& setAuthRule(string authRule) { DARABONBA_PTR_SET_VALUE(authRule_, authRule) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline UpdateAuthPolicyRequest& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateAuthPolicyRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // k8sNamespace Field Functions 
    bool hasK8sNamespace() const { return this->k8sNamespace_ != nullptr;};
    void deleteK8sNamespace() { this->k8sNamespace_ = nullptr;};
    inline string getK8sNamespace() const { DARABONBA_PTR_GET_DEFAULT(k8sNamespace_, "") };
    inline UpdateAuthPolicyRequest& setK8sNamespace(string k8sNamespace) { DARABONBA_PTR_SET_VALUE(k8sNamespace_, k8sNamespace) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAuthPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateAuthPolicyRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline UpdateAuthPolicyRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateAuthPolicyRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The language of the response. Valid values: zh-CN and en-US. Default value: zh-CN. The value zh-CN indicates Chinese, and the value en-US indicates English.
    shared_ptr<string> acceptLanguage_ {};
    // The application ID.
    shared_ptr<string> appId_ {};
    // The content of the service authentication rule.
    shared_ptr<string> authRule_ {};
    // Specifies whether to enable the rule.
    shared_ptr<string> enable_ {};
    // The rule ID.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The ID of the ACK cluster namespace.
    shared_ptr<string> k8sNamespace_ {};
    // The name of the rule.
    shared_ptr<string> name_ {};
    // The protocol type. Valid values:
    // 
    // *   **SPRING_CLOUD**
    // *   **DUBBO**
    // *   **istio**
    shared_ptr<string> protocol_ {};
    // The region ID.
    shared_ptr<string> region_ {};
    // The source for application access.
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
