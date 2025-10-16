// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUESTNODEPOOL_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUESTNODEPOOL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppInstanceGroupAttributeRequestNodePool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceGroupAttributeRequestNodePool& obj) { 
      DARABONBA_PTR_TO_JSON(NodeCapacity, nodeCapacity_);
      DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceGroupAttributeRequestNodePool& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeCapacity, nodeCapacity_);
      DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
    };
    ModifyAppInstanceGroupAttributeRequestNodePool() = default ;
    ModifyAppInstanceGroupAttributeRequestNodePool(const ModifyAppInstanceGroupAttributeRequestNodePool &) = default ;
    ModifyAppInstanceGroupAttributeRequestNodePool(ModifyAppInstanceGroupAttributeRequestNodePool &&) = default ;
    ModifyAppInstanceGroupAttributeRequestNodePool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceGroupAttributeRequestNodePool() = default ;
    ModifyAppInstanceGroupAttributeRequestNodePool& operator=(const ModifyAppInstanceGroupAttributeRequestNodePool &) = default ;
    ModifyAppInstanceGroupAttributeRequestNodePool& operator=(ModifyAppInstanceGroupAttributeRequestNodePool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeCapacity_ == nullptr
        && return this->nodePoolId_ == nullptr; };
    // nodeCapacity Field Functions 
    bool hasNodeCapacity() const { return this->nodeCapacity_ != nullptr;};
    void deleteNodeCapacity() { this->nodeCapacity_ = nullptr;};
    inline int32_t nodeCapacity() const { DARABONBA_PTR_GET_DEFAULT(nodeCapacity_, 0) };
    inline ModifyAppInstanceGroupAttributeRequestNodePool& setNodeCapacity(int32_t nodeCapacity) { DARABONBA_PTR_SET_VALUE(nodeCapacity_, nodeCapacity) };


    // nodePoolId Field Functions 
    bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
    void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
    inline string nodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
    inline ModifyAppInstanceGroupAttributeRequestNodePool& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


  protected:
    // The maximum number of sessions to which a resource can connect at the same time. If a resource connects to a large number of sessions at the same time, user experience can be compromised. The value range varies based on the resource type. The following items describe the value ranges of different resource types:
    // 
    // *   appstreaming.general.4c8g: 1 to 2
    // *   appstreaming.general.8c16g: 1 to 4
    // *   appstreaming.vgpu.8c16g.4g: 1 to 4
    // *   appstreaming.vgpu.8c31g.16g: 1 to 4
    // *   appstreaming.vgpu.14c93g.12g: 1 to 6
    std::shared_ptr<int32_t> nodeCapacity_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> nodePoolId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
