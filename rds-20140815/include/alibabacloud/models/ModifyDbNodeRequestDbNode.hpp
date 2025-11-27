// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBNODEREQUESTDBNODE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBNODEREQUESTDBNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBNodeRequestDBNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBNodeRequestDBNode& obj) { 
      DARABONBA_PTR_TO_JSON(classCode, classCode_);
      DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBNodeRequestDBNode& obj) { 
      DARABONBA_PTR_FROM_JSON(classCode, classCode_);
      DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
    };
    ModifyDBNodeRequestDBNode() = default ;
    ModifyDBNodeRequestDBNode(const ModifyDBNodeRequestDBNode &) = default ;
    ModifyDBNodeRequestDBNode(ModifyDBNodeRequestDBNode &&) = default ;
    ModifyDBNodeRequestDBNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBNodeRequestDBNode() = default ;
    ModifyDBNodeRequestDBNode& operator=(const ModifyDBNodeRequestDBNode &) = default ;
    ModifyDBNodeRequestDBNode& operator=(ModifyDBNodeRequestDBNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classCode_ == nullptr
        && return this->nodeId_ == nullptr; };
    // classCode Field Functions 
    bool hasClassCode() const { return this->classCode_ != nullptr;};
    void deleteClassCode() { this->classCode_ = nullptr;};
    inline string classCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
    inline ModifyDBNodeRequestDBNode& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ModifyDBNodeRequestDBNode& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The specification information about the node.
    std::shared_ptr<string> classCode_ = nullptr;
    // The node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
