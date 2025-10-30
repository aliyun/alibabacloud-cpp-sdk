// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEPOOLMANAGEMENTAUTOREPAIRPOLICY_HPP_
#define ALIBABACLOUD_MODELS_NODEPOOLMANAGEMENTAUTOREPAIRPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class NodepoolManagementAutoRepairPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodepoolManagementAutoRepairPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(restart_node, restartNode_);
    };
    friend void from_json(const Darabonba::Json& j, NodepoolManagementAutoRepairPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(restart_node, restartNode_);
    };
    NodepoolManagementAutoRepairPolicy() = default ;
    NodepoolManagementAutoRepairPolicy(const NodepoolManagementAutoRepairPolicy &) = default ;
    NodepoolManagementAutoRepairPolicy(NodepoolManagementAutoRepairPolicy &&) = default ;
    NodepoolManagementAutoRepairPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodepoolManagementAutoRepairPolicy() = default ;
    NodepoolManagementAutoRepairPolicy& operator=(const NodepoolManagementAutoRepairPolicy &) = default ;
    NodepoolManagementAutoRepairPolicy& operator=(NodepoolManagementAutoRepairPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->restartNode_ == nullptr; };
    // restartNode Field Functions 
    bool hasRestartNode() const { return this->restartNode_ != nullptr;};
    void deleteRestartNode() { this->restartNode_ = nullptr;};
    inline bool restartNode() const { DARABONBA_PTR_GET_DEFAULT(restartNode_, false) };
    inline NodepoolManagementAutoRepairPolicy& setRestartNode(bool restartNode) { DARABONBA_PTR_SET_VALUE(restartNode_, restartNode) };


  protected:
    std::shared_ptr<bool> restartNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
