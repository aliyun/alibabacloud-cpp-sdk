// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACKNODE_HPP_
#define ALIBABACLOUD_MODELS_ACKNODE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AckNodeSelector.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class AckNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AckNode& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeSelector, nodeSelector_);
    };
    friend void from_json(const Darabonba::Json& j, AckNode& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeSelector, nodeSelector_);
    };
    AckNode() = default ;
    AckNode(const AckNode &) = default ;
    AckNode(AckNode &&) = default ;
    AckNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AckNode() = default ;
    AckNode& operator=(const AckNode &) = default ;
    AckNode& operator=(AckNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeId_ != nullptr
        && this->nodeSelector_ != nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline AckNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeSelector Field Functions 
    bool hasNodeSelector() const { return this->nodeSelector_ != nullptr;};
    void deleteNodeSelector() { this->nodeSelector_ = nullptr;};
    inline const AckNodeSelector & nodeSelector() const { DARABONBA_PTR_GET_CONST(nodeSelector_, AckNodeSelector) };
    inline AckNodeSelector nodeSelector() { DARABONBA_PTR_GET(nodeSelector_, AckNodeSelector) };
    inline AckNode& setNodeSelector(const AckNodeSelector & nodeSelector) { DARABONBA_PTR_SET_VALUE(nodeSelector_, nodeSelector) };
    inline AckNode& setNodeSelector(AckNodeSelector && nodeSelector) { DARABONBA_PTR_SET_RVALUE(nodeSelector_, nodeSelector) };


  protected:
    // 节点ID。
    std::shared_ptr<string> nodeId_ = nullptr;
    // ACK节点选择器。
    std::shared_ptr<AckNodeSelector> nodeSelector_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
