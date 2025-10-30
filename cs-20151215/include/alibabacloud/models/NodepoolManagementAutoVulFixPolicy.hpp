// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEPOOLMANAGEMENTAUTOVULFIXPOLICY_HPP_
#define ALIBABACLOUD_MODELS_NODEPOOLMANAGEMENTAUTOVULFIXPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class NodepoolManagementAutoVulFixPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodepoolManagementAutoVulFixPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(restart_node, restartNode_);
      DARABONBA_PTR_TO_JSON(vul_level, vulLevel_);
    };
    friend void from_json(const Darabonba::Json& j, NodepoolManagementAutoVulFixPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(restart_node, restartNode_);
      DARABONBA_PTR_FROM_JSON(vul_level, vulLevel_);
    };
    NodepoolManagementAutoVulFixPolicy() = default ;
    NodepoolManagementAutoVulFixPolicy(const NodepoolManagementAutoVulFixPolicy &) = default ;
    NodepoolManagementAutoVulFixPolicy(NodepoolManagementAutoVulFixPolicy &&) = default ;
    NodepoolManagementAutoVulFixPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodepoolManagementAutoVulFixPolicy() = default ;
    NodepoolManagementAutoVulFixPolicy& operator=(const NodepoolManagementAutoVulFixPolicy &) = default ;
    NodepoolManagementAutoVulFixPolicy& operator=(NodepoolManagementAutoVulFixPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->restartNode_ == nullptr
        && return this->vulLevel_ == nullptr; };
    // restartNode Field Functions 
    bool hasRestartNode() const { return this->restartNode_ != nullptr;};
    void deleteRestartNode() { this->restartNode_ = nullptr;};
    inline bool restartNode() const { DARABONBA_PTR_GET_DEFAULT(restartNode_, false) };
    inline NodepoolManagementAutoVulFixPolicy& setRestartNode(bool restartNode) { DARABONBA_PTR_SET_VALUE(restartNode_, restartNode) };


    // vulLevel Field Functions 
    bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
    void deleteVulLevel() { this->vulLevel_ = nullptr;};
    inline string vulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, "") };
    inline NodepoolManagementAutoVulFixPolicy& setVulLevel(string vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


  protected:
    std::shared_ptr<bool> restartNode_ = nullptr;
    std::shared_ptr<string> vulLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
