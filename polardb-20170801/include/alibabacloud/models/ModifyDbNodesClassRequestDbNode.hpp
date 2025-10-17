// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBNODESCLASSREQUESTDBNODE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBNODESCLASSREQUESTDBNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBNodesClassRequestDBNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBNodesClassRequestDBNode& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(TargetClass, targetClass_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBNodesClassRequestDBNode& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(TargetClass, targetClass_);
    };
    ModifyDBNodesClassRequestDBNode() = default ;
    ModifyDBNodesClassRequestDBNode(const ModifyDBNodesClassRequestDBNode &) = default ;
    ModifyDBNodesClassRequestDBNode(ModifyDBNodesClassRequestDBNode &&) = default ;
    ModifyDBNodesClassRequestDBNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBNodesClassRequestDBNode() = default ;
    ModifyDBNodesClassRequestDBNode& operator=(const ModifyDBNodesClassRequestDBNode &) = default ;
    ModifyDBNodesClassRequestDBNode& operator=(ModifyDBNodesClassRequestDBNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBNodeId_ == nullptr
        && return this->targetClass_ == nullptr; };
    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline string DBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
    inline ModifyDBNodesClassRequestDBNode& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // targetClass Field Functions 
    bool hasTargetClass() const { return this->targetClass_ != nullptr;};
    void deleteTargetClass() { this->targetClass_ = nullptr;};
    inline string targetClass() const { DARABONBA_PTR_GET_DEFAULT(targetClass_, "") };
    inline ModifyDBNodesClassRequestDBNode& setTargetClass(string targetClass) { DARABONBA_PTR_SET_VALUE(targetClass_, targetClass) };


  protected:
    // The ID of the node.
    // 
    // >  If you specify this parameter, DBNode.N.TargetClass is required. N is an integer that starts from 1. The maximum value of N is calculated by using the following formula:16 - The number of current nodes.
    std::shared_ptr<string> DBNodeId_ = nullptr;
    // The specifications of the node that you want to change. For more information, see [Specifications of compute nodes](https://help.aliyun.com/document_detail/102542.html).
    // 
    // >  If you specify this parameter, DBNode.N.DBNodeId is required. N is an integer that starts from 1. The maximum value of N is calculated by using the following formula:16 - The number of current nodes.
    std::shared_ptr<string> targetClass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
