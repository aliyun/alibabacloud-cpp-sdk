// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHPOLICYRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHPOLICYRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuthPolicyResponseBodyDataResultAuthRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListAuthPolicyResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthPolicyResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AuthRule, authRule_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(K8sNamespace, k8sNamespace_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthPolicyResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AuthRule, authRule_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(K8sNamespace, k8sNamespace_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListAuthPolicyResponseBodyDataResult() = default ;
    ListAuthPolicyResponseBodyDataResult(const ListAuthPolicyResponseBodyDataResult &) = default ;
    ListAuthPolicyResponseBodyDataResult(ListAuthPolicyResponseBodyDataResult &&) = default ;
    ListAuthPolicyResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthPolicyResponseBodyDataResult() = default ;
    ListAuthPolicyResponseBodyDataResult& operator=(const ListAuthPolicyResponseBodyDataResult &) = default ;
    ListAuthPolicyResponseBodyDataResult& operator=(ListAuthPolicyResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->authRule_ == nullptr && return this->authType_ == nullptr && return this->enable_ == nullptr
        && return this->id_ == nullptr && return this->k8sNamespace_ == nullptr && return this->name_ == nullptr && return this->namespaceId_ == nullptr && return this->protocol_ == nullptr
        && return this->regionId_ == nullptr && return this->source_ == nullptr && return this->status_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListAuthPolicyResponseBodyDataResult& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListAuthPolicyResponseBodyDataResult& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAuthPolicyResponseBodyDataResult& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // authRule Field Functions 
    bool hasAuthRule() const { return this->authRule_ != nullptr;};
    void deleteAuthRule() { this->authRule_ = nullptr;};
    inline const vector<Models::ListAuthPolicyResponseBodyDataResultAuthRule> & authRule() const { DARABONBA_PTR_GET_CONST(authRule_, vector<Models::ListAuthPolicyResponseBodyDataResultAuthRule>) };
    inline vector<Models::ListAuthPolicyResponseBodyDataResultAuthRule> authRule() { DARABONBA_PTR_GET(authRule_, vector<Models::ListAuthPolicyResponseBodyDataResultAuthRule>) };
    inline ListAuthPolicyResponseBodyDataResult& setAuthRule(const vector<Models::ListAuthPolicyResponseBodyDataResultAuthRule> & authRule) { DARABONBA_PTR_SET_VALUE(authRule_, authRule) };
    inline ListAuthPolicyResponseBodyDataResult& setAuthRule(vector<Models::ListAuthPolicyResponseBodyDataResultAuthRule> && authRule) { DARABONBA_PTR_SET_RVALUE(authRule_, authRule) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline int32_t authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, 0) };
    inline ListAuthPolicyResponseBodyDataResult& setAuthType(int32_t authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListAuthPolicyResponseBodyDataResult& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ListAuthPolicyResponseBodyDataResult& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // k8sNamespace Field Functions 
    bool hasK8sNamespace() const { return this->k8sNamespace_ != nullptr;};
    void deleteK8sNamespace() { this->k8sNamespace_ = nullptr;};
    inline string k8sNamespace() const { DARABONBA_PTR_GET_DEFAULT(k8sNamespace_, "") };
    inline ListAuthPolicyResponseBodyDataResult& setK8sNamespace(string k8sNamespace) { DARABONBA_PTR_SET_VALUE(k8sNamespace_, k8sNamespace) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAuthPolicyResponseBodyDataResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListAuthPolicyResponseBodyDataResult& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListAuthPolicyResponseBodyDataResult& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAuthPolicyResponseBodyDataResult& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListAuthPolicyResponseBodyDataResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListAuthPolicyResponseBodyDataResult& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<string> accountId_ = nullptr;
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // The content of the service authentication rule.
    std::shared_ptr<vector<Models::ListAuthPolicyResponseBodyDataResultAuthRule>> authRule_ = nullptr;
    // The rule type. Valid values:
    // 
    // *   0: by application
    // *   1: by namespace
    std::shared_ptr<int32_t> authType_ = nullptr;
    // Indicates whether the rule was enabled or disabled. Valid values:
    // 
    // *   `true`: enabled
    // *   `false`: disabled
    std::shared_ptr<bool> enable_ = nullptr;
    // The rule ID.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The namespace.
    std::shared_ptr<string> k8sNamespace_ = nullptr;
    // The name of the authentication rule.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace ID.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The protocol type. Valid values:
    // 
    // *   **SPRING_CLOUD**
    // *   **DUBBO**
    // *   **istio**
    std::shared_ptr<string> protocol_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The source of the application.
    std::shared_ptr<string> source_ = nullptr;
    // The status.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
