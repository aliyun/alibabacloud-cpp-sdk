// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateChainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChainConfig, chainConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
      DARABONBA_PTR_TO_JSON(ScopeExclude, scopeExclude_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChainConfig, chainConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
      DARABONBA_PTR_FROM_JSON(ScopeExclude, scopeExclude_);
    };
    CreateChainRequest() = default ;
    CreateChainRequest(const CreateChainRequest &) = default ;
    CreateChainRequest(CreateChainRequest &&) = default ;
    CreateChainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChainRequest() = default ;
    CreateChainRequest& operator=(const CreateChainRequest &) = default ;
    CreateChainRequest& operator=(CreateChainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chainConfig_ == nullptr
        && return this->description_ == nullptr && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->repoName_ == nullptr && return this->repoNamespaceName_ == nullptr
        && return this->scopeExclude_ == nullptr; };
    // chainConfig Field Functions 
    bool hasChainConfig() const { return this->chainConfig_ != nullptr;};
    void deleteChainConfig() { this->chainConfig_ = nullptr;};
    inline string chainConfig() const { DARABONBA_PTR_GET_DEFAULT(chainConfig_, "") };
    inline CreateChainRequest& setChainConfig(string chainConfig) { DARABONBA_PTR_SET_VALUE(chainConfig_, chainConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateChainRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateChainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateChainRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline CreateChainRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespaceName Field Functions 
    bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
    void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
    inline string repoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
    inline CreateChainRequest& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


    // scopeExclude Field Functions 
    bool hasScopeExclude() const { return this->scopeExclude_ != nullptr;};
    void deleteScopeExclude() { this->scopeExclude_ = nullptr;};
    inline const vector<string> & scopeExclude() const { DARABONBA_PTR_GET_CONST(scopeExclude_, vector<string>) };
    inline vector<string> scopeExclude() { DARABONBA_PTR_GET(scopeExclude_, vector<string>) };
    inline CreateChainRequest& setScopeExclude(const vector<string> & scopeExclude) { DARABONBA_PTR_SET_VALUE(scopeExclude_, scopeExclude) };
    inline CreateChainRequest& setScopeExclude(vector<string> && scopeExclude) { DARABONBA_PTR_SET_RVALUE(scopeExclude_, scopeExclude) };


  protected:
    // The configuration of the delivery chain in the JSON format.
    std::shared_ptr<string> chainConfig_ = nullptr;
    // The description of the delivery chain.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the delivery chain.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> repoNamespaceName_ = nullptr;
    // Repositories in which the delivery chain does not take effect.
    std::shared_ptr<vector<string>> scopeExclude_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
