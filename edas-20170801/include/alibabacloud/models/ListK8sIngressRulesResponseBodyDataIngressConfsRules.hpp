// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SINGRESSRULESRESPONSEBODYDATAINGRESSCONFSRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SINGRESSRULESRESPONSEBODYDATAINGRESSCONFSRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sIngressRulesResponseBodyDataIngressConfsRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sIngressRulesResponseBodyDataIngressConfsRules& obj) { 
      DARABONBA_PTR_TO_JSON(EnableTls, enableTls_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sIngressRulesResponseBodyDataIngressConfsRules& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableTls, enableTls_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
    };
    ListK8sIngressRulesResponseBodyDataIngressConfsRules() = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfsRules(const ListK8sIngressRulesResponseBodyDataIngressConfsRules &) = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfsRules(ListK8sIngressRulesResponseBodyDataIngressConfsRules &&) = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfsRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sIngressRulesResponseBodyDataIngressConfsRules() = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfsRules& operator=(const ListK8sIngressRulesResponseBodyDataIngressConfsRules &) = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfsRules& operator=(ListK8sIngressRulesResponseBodyDataIngressConfsRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableTls_ == nullptr
        && return this->host_ == nullptr && return this->paths_ == nullptr && return this->secretName_ == nullptr; };
    // enableTls Field Functions 
    bool hasEnableTls() const { return this->enableTls_ != nullptr;};
    void deleteEnableTls() { this->enableTls_ = nullptr;};
    inline bool enableTls() const { DARABONBA_PTR_GET_DEFAULT(enableTls_, false) };
    inline ListK8sIngressRulesResponseBodyDataIngressConfsRules& setEnableTls(bool enableTls) { DARABONBA_PTR_SET_VALUE(enableTls_, enableTls) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfsRules& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths>) };
    inline vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths> paths() { DARABONBA_PTR_GET(paths_, vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths>) };
    inline ListK8sIngressRulesResponseBodyDataIngressConfsRules& setPaths(const vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline ListK8sIngressRulesResponseBodyDataIngressConfsRules& setPaths(vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfsRules& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


  protected:
    // Indicates whether TLS is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableTls_ = nullptr;
    // The domain name to be accessed.
    std::shared_ptr<string> host_ = nullptr;
    // The paths to be accessed.
    std::shared_ptr<vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfsRulesPaths>> paths_ = nullptr;
    // The name of the Secret that stores the Transport Layer Security (TLS) certificate.
    std::shared_ptr<string> secretName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
