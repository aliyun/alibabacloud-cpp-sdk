// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYNODEMODELS_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYNODEMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListNodesResponseBodyNodeModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyNodeModels& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyNodeModels& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    ListNodesResponseBodyNodeModels() = default ;
    ListNodesResponseBodyNodeModels(const ListNodesResponseBodyNodeModels &) = default ;
    ListNodesResponseBodyNodeModels(ListNodesResponseBodyNodeModels &&) = default ;
    ListNodesResponseBodyNodeModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyNodeModels() = default ;
    ListNodesResponseBodyNodeModels& operator=(const ListNodesResponseBodyNodeModels &) = default ;
    ListNodesResponseBodyNodeModels& operator=(ListNodesResponseBodyNodeModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && return this->nodeId_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListNodesResponseBodyNodeModels& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListNodesResponseBodyNodeModels& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The billing method of the resource node.
    // 
    // >  This parameter is returned only if the ChargeResourceMode parameter of the delivery group to which the resource node belongs is set to Node.
    // 
    // Valid values:
    // 
    // *   PostPaid: pay-as-you-go
    // *   Prepaid: subscription
    std::shared_ptr<string> chargeType_ = nullptr;
    // The ID of the resource node.
    // 
    // >  This parameter is returned only if the ChargeResourceMode parameter of the delivery group to which the resource node belongs is set to Node.
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
