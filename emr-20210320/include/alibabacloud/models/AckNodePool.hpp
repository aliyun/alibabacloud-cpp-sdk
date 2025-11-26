// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACKNODEPOOL_HPP_
#define ALIBABACLOUD_MODELS_ACKNODEPOOL_HPP_
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
  class AckNodePool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AckNodePool& obj) { 
      DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_TO_JSON(NodeSelector, nodeSelector_);
    };
    friend void from_json(const Darabonba::Json& j, AckNodePool& obj) { 
      DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_FROM_JSON(NodeSelector, nodeSelector_);
    };
    AckNodePool() = default ;
    AckNodePool(const AckNodePool &) = default ;
    AckNodePool(AckNodePool &&) = default ;
    AckNodePool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AckNodePool() = default ;
    AckNodePool& operator=(const AckNodePool &) = default ;
    AckNodePool& operator=(AckNodePool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodePoolId_ == nullptr
        && return this->nodeSelector_ == nullptr; };
    // nodePoolId Field Functions 
    bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
    void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
    inline string nodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
    inline AckNodePool& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


    // nodeSelector Field Functions 
    bool hasNodeSelector() const { return this->nodeSelector_ != nullptr;};
    void deleteNodeSelector() { this->nodeSelector_ = nullptr;};
    inline const AckNodeSelector & nodeSelector() const { DARABONBA_PTR_GET_CONST(nodeSelector_, AckNodeSelector) };
    inline AckNodeSelector nodeSelector() { DARABONBA_PTR_GET(nodeSelector_, AckNodeSelector) };
    inline AckNodePool& setNodeSelector(const AckNodeSelector & nodeSelector) { DARABONBA_PTR_SET_VALUE(nodeSelector_, nodeSelector) };
    inline AckNodePool& setNodeSelector(AckNodeSelector && nodeSelector) { DARABONBA_PTR_SET_RVALUE(nodeSelector_, nodeSelector) };


  protected:
    // 节点池ID。
    std::shared_ptr<string> nodePoolId_ = nullptr;
    // ACK节点选择器。
    std::shared_ptr<AckNodeSelector> nodeSelector_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
