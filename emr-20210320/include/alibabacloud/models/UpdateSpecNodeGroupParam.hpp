// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESPECNODEGROUPPARAM_HPP_
#define ALIBABACLOUD_MODELS_UPDATESPECNODEGROUPPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class UpdateSpecNodeGroupParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSpecNodeGroupParam& obj) { 
      DARABONBA_PTR_TO_JSON(NewInstanceType, newInstanceType_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSpecNodeGroupParam& obj) { 
      DARABONBA_PTR_FROM_JSON(NewInstanceType, newInstanceType_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
    };
    UpdateSpecNodeGroupParam() = default ;
    UpdateSpecNodeGroupParam(const UpdateSpecNodeGroupParam &) = default ;
    UpdateSpecNodeGroupParam(UpdateSpecNodeGroupParam &&) = default ;
    UpdateSpecNodeGroupParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSpecNodeGroupParam() = default ;
    UpdateSpecNodeGroupParam& operator=(const UpdateSpecNodeGroupParam &) = default ;
    UpdateSpecNodeGroupParam& operator=(UpdateSpecNodeGroupParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->newInstanceType_ != nullptr
        && this->nodeGroupId_ != nullptr; };
    // newInstanceType Field Functions 
    bool hasNewInstanceType() const { return this->newInstanceType_ != nullptr;};
    void deleteNewInstanceType() { this->newInstanceType_ = nullptr;};
    inline string newInstanceType() const { DARABONBA_PTR_GET_DEFAULT(newInstanceType_, "") };
    inline UpdateSpecNodeGroupParam& setNewInstanceType(string newInstanceType) { DARABONBA_PTR_SET_VALUE(newInstanceType_, newInstanceType) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline UpdateSpecNodeGroupParam& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


  protected:
    std::shared_ptr<string> newInstanceType_ = nullptr;
    std::shared_ptr<string> nodeGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
