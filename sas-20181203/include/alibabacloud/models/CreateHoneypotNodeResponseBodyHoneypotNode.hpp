// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTNODERESPONSEBODYHONEYPOTNODE_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTNODERESPONSEBODYHONEYPOTNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateHoneypotNodeResponseBodyHoneypotNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoneypotNodeResponseBodyHoneypotNode& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoneypotNodeResponseBodyHoneypotNode& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    CreateHoneypotNodeResponseBodyHoneypotNode() = default ;
    CreateHoneypotNodeResponseBodyHoneypotNode(const CreateHoneypotNodeResponseBodyHoneypotNode &) = default ;
    CreateHoneypotNodeResponseBodyHoneypotNode(CreateHoneypotNodeResponseBodyHoneypotNode &&) = default ;
    CreateHoneypotNodeResponseBodyHoneypotNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoneypotNodeResponseBodyHoneypotNode() = default ;
    CreateHoneypotNodeResponseBodyHoneypotNode& operator=(const CreateHoneypotNodeResponseBodyHoneypotNode &) = default ;
    CreateHoneypotNodeResponseBodyHoneypotNode& operator=(CreateHoneypotNodeResponseBodyHoneypotNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeId_ != nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateHoneypotNodeResponseBodyHoneypotNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The ID of the management node.
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
