// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHPOLICYRESPONSEBODYDATARESULTAUTHRULE_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHPOLICYRESPONSEBODYDATARESULTAUTHRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuthPolicyResponseBodyDataResultAuthRuleMethod.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListAuthPolicyResponseBodyDataResultAuthRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthPolicyResponseBodyDataResultAuthRule& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(Black, black_);
      DARABONBA_PTR_TO_JSON(K8sNamespaces, k8sNamespaces_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthPolicyResponseBodyDataResultAuthRule& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(Black, black_);
      DARABONBA_PTR_FROM_JSON(K8sNamespaces, k8sNamespaces_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    ListAuthPolicyResponseBodyDataResultAuthRule() = default ;
    ListAuthPolicyResponseBodyDataResultAuthRule(const ListAuthPolicyResponseBodyDataResultAuthRule &) = default ;
    ListAuthPolicyResponseBodyDataResultAuthRule(ListAuthPolicyResponseBodyDataResultAuthRule &&) = default ;
    ListAuthPolicyResponseBodyDataResultAuthRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthPolicyResponseBodyDataResultAuthRule() = default ;
    ListAuthPolicyResponseBodyDataResultAuthRule& operator=(const ListAuthPolicyResponseBodyDataResultAuthRule &) = default ;
    ListAuthPolicyResponseBodyDataResultAuthRule& operator=(ListAuthPolicyResponseBodyDataResultAuthRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIds_ == nullptr
        && return this->authType_ == nullptr && return this->black_ == nullptr && return this->k8sNamespaces_ == nullptr && return this->method_ == nullptr && return this->path_ == nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline const vector<string> & appIds() const { DARABONBA_PTR_GET_CONST(appIds_, vector<string>) };
    inline vector<string> appIds() { DARABONBA_PTR_GET(appIds_, vector<string>) };
    inline ListAuthPolicyResponseBodyDataResultAuthRule& setAppIds(const vector<string> & appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };
    inline ListAuthPolicyResponseBodyDataResultAuthRule& setAppIds(vector<string> && appIds) { DARABONBA_PTR_SET_RVALUE(appIds_, appIds) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline int32_t authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, 0) };
    inline ListAuthPolicyResponseBodyDataResultAuthRule& setAuthType(int32_t authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // black Field Functions 
    bool hasBlack() const { return this->black_ != nullptr;};
    void deleteBlack() { this->black_ = nullptr;};
    inline bool black() const { DARABONBA_PTR_GET_DEFAULT(black_, false) };
    inline ListAuthPolicyResponseBodyDataResultAuthRule& setBlack(bool black) { DARABONBA_PTR_SET_VALUE(black_, black) };


    // k8sNamespaces Field Functions 
    bool hasK8sNamespaces() const { return this->k8sNamespaces_ != nullptr;};
    void deleteK8sNamespaces() { this->k8sNamespaces_ = nullptr;};
    inline const vector<string> & k8sNamespaces() const { DARABONBA_PTR_GET_CONST(k8sNamespaces_, vector<string>) };
    inline vector<string> k8sNamespaces() { DARABONBA_PTR_GET(k8sNamespaces_, vector<string>) };
    inline ListAuthPolicyResponseBodyDataResultAuthRule& setK8sNamespaces(const vector<string> & k8sNamespaces) { DARABONBA_PTR_SET_VALUE(k8sNamespaces_, k8sNamespaces) };
    inline ListAuthPolicyResponseBodyDataResultAuthRule& setK8sNamespaces(vector<string> && k8sNamespaces) { DARABONBA_PTR_SET_RVALUE(k8sNamespaces_, k8sNamespaces) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline const Models::ListAuthPolicyResponseBodyDataResultAuthRuleMethod & method() const { DARABONBA_PTR_GET_CONST(method_, Models::ListAuthPolicyResponseBodyDataResultAuthRuleMethod) };
    inline Models::ListAuthPolicyResponseBodyDataResultAuthRuleMethod method() { DARABONBA_PTR_GET(method_, Models::ListAuthPolicyResponseBodyDataResultAuthRuleMethod) };
    inline ListAuthPolicyResponseBodyDataResultAuthRule& setMethod(const Models::ListAuthPolicyResponseBodyDataResultAuthRuleMethod & method) { DARABONBA_PTR_SET_VALUE(method_, method) };
    inline ListAuthPolicyResponseBodyDataResultAuthRule& setMethod(Models::ListAuthPolicyResponseBodyDataResultAuthRuleMethod && method) { DARABONBA_PTR_SET_RVALUE(method_, method) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListAuthPolicyResponseBodyDataResultAuthRule& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The IDs of applications.
    std::shared_ptr<vector<string>> appIds_ = nullptr;
    // The rule type. Valid values:
    // 
    // *   0: by application
    // *   1: by namespace
    std::shared_ptr<int32_t> authType_ = nullptr;
    // Indicates whether the rule is a blacklist rule.
    std::shared_ptr<bool> black_ = nullptr;
    // The queried namespaces.
    std::shared_ptr<vector<string>> k8sNamespaces_ = nullptr;
    // The request method.
    std::shared_ptr<Models::ListAuthPolicyResponseBodyDataResultAuthRuleMethod> method_ = nullptr;
    // The service path.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
