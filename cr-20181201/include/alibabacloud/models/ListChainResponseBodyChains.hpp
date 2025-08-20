// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHAINRESPONSEBODYCHAINS_HPP_
#define ALIBABACLOUD_MODELS_LISTCHAINRESPONSEBODYCHAINS_HPP_
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
  class ListChainResponseBodyChains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChainResponseBodyChains& obj) { 
      DARABONBA_PTR_TO_JSON(ChainId, chainId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ScopeExclude, scopeExclude_);
      DARABONBA_PTR_TO_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
    };
    friend void from_json(const Darabonba::Json& j, ListChainResponseBodyChains& obj) { 
      DARABONBA_PTR_FROM_JSON(ChainId, chainId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ScopeExclude, scopeExclude_);
      DARABONBA_PTR_FROM_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
    };
    ListChainResponseBodyChains() = default ;
    ListChainResponseBodyChains(const ListChainResponseBodyChains &) = default ;
    ListChainResponseBodyChains(ListChainResponseBodyChains &&) = default ;
    ListChainResponseBodyChains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChainResponseBodyChains() = default ;
    ListChainResponseBodyChains& operator=(const ListChainResponseBodyChains &) = default ;
    ListChainResponseBodyChains& operator=(ListChainResponseBodyChains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chainId_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->instanceId_ != nullptr && this->modifiedTime_ != nullptr && this->name_ != nullptr
        && this->scopeExclude_ != nullptr && this->scopeId_ != nullptr && this->scopeType_ != nullptr; };
    // chainId Field Functions 
    bool hasChainId() const { return this->chainId_ != nullptr;};
    void deleteChainId() { this->chainId_ = nullptr;};
    inline string chainId() const { DARABONBA_PTR_GET_DEFAULT(chainId_, "") };
    inline ListChainResponseBodyChains& setChainId(string chainId) { DARABONBA_PTR_SET_VALUE(chainId_, chainId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListChainResponseBodyChains& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListChainResponseBodyChains& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListChainResponseBodyChains& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline ListChainResponseBodyChains& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListChainResponseBodyChains& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scopeExclude Field Functions 
    bool hasScopeExclude() const { return this->scopeExclude_ != nullptr;};
    void deleteScopeExclude() { this->scopeExclude_ = nullptr;};
    inline const vector<string> & scopeExclude() const { DARABONBA_PTR_GET_CONST(scopeExclude_, vector<string>) };
    inline vector<string> scopeExclude() { DARABONBA_PTR_GET(scopeExclude_, vector<string>) };
    inline ListChainResponseBodyChains& setScopeExclude(const vector<string> & scopeExclude) { DARABONBA_PTR_SET_VALUE(scopeExclude_, scopeExclude) };
    inline ListChainResponseBodyChains& setScopeExclude(vector<string> && scopeExclude) { DARABONBA_PTR_SET_RVALUE(scopeExclude_, scopeExclude) };


    // scopeId Field Functions 
    bool hasScopeId() const { return this->scopeId_ != nullptr;};
    void deleteScopeId() { this->scopeId_ = nullptr;};
    inline string scopeId() const { DARABONBA_PTR_GET_DEFAULT(scopeId_, "") };
    inline ListChainResponseBodyChains& setScopeId(string scopeId) { DARABONBA_PTR_SET_VALUE(scopeId_, scopeId) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline ListChainResponseBodyChains& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


  protected:
    // The ID of the delivery chain.
    std::shared_ptr<string> chainId_ = nullptr;
    // The time when the delivery chain was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the delivery chain.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The time when the delivery chain was last modified.
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    // The name of the delivery chain.
    std::shared_ptr<string> name_ = nullptr;
    // Repositories to which the delivery chain does not apply.
    std::shared_ptr<vector<string>> scopeExclude_ = nullptr;
    // The ID of the delivery chain scope.
    std::shared_ptr<string> scopeId_ = nullptr;
    // The type of the delivery chain scope.
    std::shared_ptr<string> scopeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
