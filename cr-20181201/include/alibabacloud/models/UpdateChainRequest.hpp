// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHAINREQUEST_HPP_
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
  class UpdateChainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateChainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChainConfig, chainConfig_);
      DARABONBA_PTR_TO_JSON(ChainId, chainId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ScopeExclude, scopeExclude_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateChainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChainConfig, chainConfig_);
      DARABONBA_PTR_FROM_JSON(ChainId, chainId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ScopeExclude, scopeExclude_);
    };
    UpdateChainRequest() = default ;
    UpdateChainRequest(const UpdateChainRequest &) = default ;
    UpdateChainRequest(UpdateChainRequest &&) = default ;
    UpdateChainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateChainRequest() = default ;
    UpdateChainRequest& operator=(const UpdateChainRequest &) = default ;
    UpdateChainRequest& operator=(UpdateChainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chainConfig_ != nullptr
        && this->chainId_ != nullptr && this->description_ != nullptr && this->instanceId_ != nullptr && this->name_ != nullptr && this->scopeExclude_ != nullptr; };
    // chainConfig Field Functions 
    bool hasChainConfig() const { return this->chainConfig_ != nullptr;};
    void deleteChainConfig() { this->chainConfig_ = nullptr;};
    inline string chainConfig() const { DARABONBA_PTR_GET_DEFAULT(chainConfig_, "") };
    inline UpdateChainRequest& setChainConfig(string chainConfig) { DARABONBA_PTR_SET_VALUE(chainConfig_, chainConfig) };


    // chainId Field Functions 
    bool hasChainId() const { return this->chainId_ != nullptr;};
    void deleteChainId() { this->chainId_ = nullptr;};
    inline string chainId() const { DARABONBA_PTR_GET_DEFAULT(chainId_, "") };
    inline UpdateChainRequest& setChainId(string chainId) { DARABONBA_PTR_SET_VALUE(chainId_, chainId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateChainRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateChainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateChainRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scopeExclude Field Functions 
    bool hasScopeExclude() const { return this->scopeExclude_ != nullptr;};
    void deleteScopeExclude() { this->scopeExclude_ = nullptr;};
    inline const vector<string> & scopeExclude() const { DARABONBA_PTR_GET_CONST(scopeExclude_, vector<string>) };
    inline vector<string> scopeExclude() { DARABONBA_PTR_GET(scopeExclude_, vector<string>) };
    inline UpdateChainRequest& setScopeExclude(const vector<string> & scopeExclude) { DARABONBA_PTR_SET_VALUE(scopeExclude_, scopeExclude) };
    inline UpdateChainRequest& setScopeExclude(vector<string> && scopeExclude) { DARABONBA_PTR_SET_RVALUE(scopeExclude_, scopeExclude) };


  protected:
    // The configuration of the delivery chain in the JSON format.
    // 
    // This parameter is required.
    std::shared_ptr<string> chainConfig_ = nullptr;
    // The ID of the delivery chain.
    // 
    // This parameter is required.
    std::shared_ptr<string> chainId_ = nullptr;
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
    // Repositories in which the delivery chain does not take effect.
    std::shared_ptr<vector<string>> scopeExclude_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
