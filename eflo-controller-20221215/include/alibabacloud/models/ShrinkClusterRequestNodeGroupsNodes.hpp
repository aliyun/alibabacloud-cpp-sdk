// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHRINKCLUSTERREQUESTNODEGROUPSNODES_HPP_
#define ALIBABACLOUD_MODELS_SHRINKCLUSTERREQUESTNODEGROUPSNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ShrinkClusterRequestNodeGroupsNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShrinkClusterRequestNodeGroupsNodes& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, ShrinkClusterRequestNodeGroupsNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    ShrinkClusterRequestNodeGroupsNodes() = default ;
    ShrinkClusterRequestNodeGroupsNodes(const ShrinkClusterRequestNodeGroupsNodes &) = default ;
    ShrinkClusterRequestNodeGroupsNodes(ShrinkClusterRequestNodeGroupsNodes &&) = default ;
    ShrinkClusterRequestNodeGroupsNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShrinkClusterRequestNodeGroupsNodes() = default ;
    ShrinkClusterRequestNodeGroupsNodes& operator=(const ShrinkClusterRequestNodeGroupsNodes &) = default ;
    ShrinkClusterRequestNodeGroupsNodes& operator=(ShrinkClusterRequestNodeGroupsNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeId_ != nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ShrinkClusterRequestNodeGroupsNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
