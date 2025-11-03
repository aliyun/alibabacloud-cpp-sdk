// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODYCHAINCONFIGNODES_HPP_
#define ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODYCHAINCONFIGNODES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetChainResponseBodyChainConfigNodesNodeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetChainResponseBodyChainConfigNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChainResponseBodyChainConfigNodes& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(NodeConfig, nodeConfig_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetChainResponseBodyChainConfigNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(NodeConfig, nodeConfig_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
    };
    GetChainResponseBodyChainConfigNodes() = default ;
    GetChainResponseBodyChainConfigNodes(const GetChainResponseBodyChainConfigNodes &) = default ;
    GetChainResponseBodyChainConfigNodes(GetChainResponseBodyChainConfigNodes &&) = default ;
    GetChainResponseBodyChainConfigNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChainResponseBodyChainConfigNodes() = default ;
    GetChainResponseBodyChainConfigNodes& operator=(const GetChainResponseBodyChainConfigNodes &) = default ;
    GetChainResponseBodyChainConfigNodes& operator=(GetChainResponseBodyChainConfigNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->nodeConfig_ == nullptr && return this->nodeName_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetChainResponseBodyChainConfigNodes& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // nodeConfig Field Functions 
    bool hasNodeConfig() const { return this->nodeConfig_ != nullptr;};
    void deleteNodeConfig() { this->nodeConfig_ = nullptr;};
    inline const Models::GetChainResponseBodyChainConfigNodesNodeConfig & nodeConfig() const { DARABONBA_PTR_GET_CONST(nodeConfig_, Models::GetChainResponseBodyChainConfigNodesNodeConfig) };
    inline Models::GetChainResponseBodyChainConfigNodesNodeConfig nodeConfig() { DARABONBA_PTR_GET(nodeConfig_, Models::GetChainResponseBodyChainConfigNodesNodeConfig) };
    inline GetChainResponseBodyChainConfigNodes& setNodeConfig(const Models::GetChainResponseBodyChainConfigNodesNodeConfig & nodeConfig) { DARABONBA_PTR_SET_VALUE(nodeConfig_, nodeConfig) };
    inline GetChainResponseBodyChainConfigNodes& setNodeConfig(Models::GetChainResponseBodyChainConfigNodesNodeConfig && nodeConfig) { DARABONBA_PTR_SET_RVALUE(nodeConfig_, nodeConfig) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetChainResponseBodyChainConfigNodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<Models::GetChainResponseBodyChainConfigNodesNodeConfig> nodeConfig_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
