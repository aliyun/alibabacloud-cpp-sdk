// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESPECNODEGROUP_HPP_
#define ALIBABACLOUD_MODELS_UPDATESPECNODEGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class UpdateSpecNodeGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSpecNodeGroup& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(NewInstanceType, newInstanceType_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSpecNodeGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(NewInstanceType, newInstanceType_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
    };
    UpdateSpecNodeGroup() = default ;
    UpdateSpecNodeGroup(const UpdateSpecNodeGroup &) = default ;
    UpdateSpecNodeGroup(UpdateSpecNodeGroup &&) = default ;
    UpdateSpecNodeGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSpecNodeGroup() = default ;
    UpdateSpecNodeGroup& operator=(const UpdateSpecNodeGroup &) = default ;
    UpdateSpecNodeGroup& operator=(UpdateSpecNodeGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modifyType_ == nullptr
        && return this->newInstanceType_ == nullptr && return this->nodeGroupId_ == nullptr; };
    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string modifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline UpdateSpecNodeGroup& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // newInstanceType Field Functions 
    bool hasNewInstanceType() const { return this->newInstanceType_ != nullptr;};
    void deleteNewInstanceType() { this->newInstanceType_ = nullptr;};
    inline string newInstanceType() const { DARABONBA_PTR_GET_DEFAULT(newInstanceType_, "") };
    inline UpdateSpecNodeGroup& setNewInstanceType(string newInstanceType) { DARABONBA_PTR_SET_VALUE(newInstanceType_, newInstanceType) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline UpdateSpecNodeGroup& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


  protected:
    std::shared_ptr<string> modifyType_ = nullptr;
    // 新实例类型。
    // 
    // This parameter is required.
    std::shared_ptr<string> newInstanceType_ = nullptr;
    // 节点组ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
