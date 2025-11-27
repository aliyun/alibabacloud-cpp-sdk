// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMEROLECHAIN_HPP_
#define ALIBABACLOUD_MODELS_ASSUMEROLECHAIN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AssumeRoleChainNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class AssumeRoleChain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeRoleChain& obj) { 
      DARABONBA_PTR_TO_JSON(Chain, chain_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeRoleChain& obj) { 
      DARABONBA_PTR_FROM_JSON(Chain, chain_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
    };
    AssumeRoleChain() = default ;
    AssumeRoleChain(const AssumeRoleChain &) = default ;
    AssumeRoleChain(AssumeRoleChain &&) = default ;
    AssumeRoleChain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeRoleChain() = default ;
    AssumeRoleChain& operator=(const AssumeRoleChain &) = default ;
    AssumeRoleChain& operator=(AssumeRoleChain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chain_ == nullptr
        && return this->policy_ == nullptr; };
    // chain Field Functions 
    bool hasChain() const { return this->chain_ != nullptr;};
    void deleteChain() { this->chain_ = nullptr;};
    inline const vector<AssumeRoleChainNode> & chain() const { DARABONBA_PTR_GET_CONST(chain_, vector<AssumeRoleChainNode>) };
    inline vector<AssumeRoleChainNode> chain() { DARABONBA_PTR_GET(chain_, vector<AssumeRoleChainNode>) };
    inline AssumeRoleChain& setChain(const vector<AssumeRoleChainNode> & chain) { DARABONBA_PTR_SET_VALUE(chain_, chain) };
    inline AssumeRoleChain& setChain(vector<AssumeRoleChainNode> && chain) { DARABONBA_PTR_SET_RVALUE(chain_, chain) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline AssumeRoleChain& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


  protected:
    std::shared_ptr<vector<AssumeRoleChainNode>> chain_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
