// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIJOBREQUESTTABLEMAPPINGSSOURCEOBJECTSELECTIONRULES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIJOBREQUESTTABLEMAPPINGSSOURCEOBJECTSELECTIONRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDIJobRequestTableMappingsSourceObjectSelectionRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIJobRequestTableMappingsSourceObjectSelectionRules& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(ExpressionType, expressionType_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIJobRequestTableMappingsSourceObjectSelectionRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(ExpressionType, expressionType_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
    };
    UpdateDIJobRequestTableMappingsSourceObjectSelectionRules() = default ;
    UpdateDIJobRequestTableMappingsSourceObjectSelectionRules(const UpdateDIJobRequestTableMappingsSourceObjectSelectionRules &) = default ;
    UpdateDIJobRequestTableMappingsSourceObjectSelectionRules(UpdateDIJobRequestTableMappingsSourceObjectSelectionRules &&) = default ;
    UpdateDIJobRequestTableMappingsSourceObjectSelectionRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIJobRequestTableMappingsSourceObjectSelectionRules() = default ;
    UpdateDIJobRequestTableMappingsSourceObjectSelectionRules& operator=(const UpdateDIJobRequestTableMappingsSourceObjectSelectionRules &) = default ;
    UpdateDIJobRequestTableMappingsSourceObjectSelectionRules& operator=(UpdateDIJobRequestTableMappingsSourceObjectSelectionRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->expression_ != nullptr && this->expressionType_ != nullptr && this->objectType_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline UpdateDIJobRequestTableMappingsSourceObjectSelectionRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline UpdateDIJobRequestTableMappingsSourceObjectSelectionRules& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // expressionType Field Functions 
    bool hasExpressionType() const { return this->expressionType_ != nullptr;};
    void deleteExpressionType() { this->expressionType_ = nullptr;};
    inline string expressionType() const { DARABONBA_PTR_GET_DEFAULT(expressionType_, "") };
    inline UpdateDIJobRequestTableMappingsSourceObjectSelectionRules& setExpressionType(string expressionType) { DARABONBA_PTR_SET_VALUE(expressionType_, expressionType) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline UpdateDIJobRequestTableMappingsSourceObjectSelectionRules& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> expression_ = nullptr;
    std::shared_ptr<string> expressionType_ = nullptr;
    std::shared_ptr<string> objectType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
