// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPRESSIONTESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPRESSIONTESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ExpressionTestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExpressionTestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(expression, expression_);
      DARABONBA_PTR_TO_JSON(expressionVariable, expressionVariable_);
      DARABONBA_PTR_TO_JSON(expressionVariableIds, expressionVariableIds_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, ExpressionTestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(expression, expression_);
      DARABONBA_PTR_FROM_JSON(expressionVariable, expressionVariable_);
      DARABONBA_PTR_FROM_JSON(expressionVariableIds, expressionVariableIds_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
    };
    ExpressionTestRequest() = default ;
    ExpressionTestRequest(const ExpressionTestRequest &) = default ;
    ExpressionTestRequest(ExpressionTestRequest &&) = default ;
    ExpressionTestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExpressionTestRequest() = default ;
    ExpressionTestRequest& operator=(const ExpressionTestRequest &) = default ;
    ExpressionTestRequest& operator=(ExpressionTestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->expression_ != nullptr && this->expressionVariable_ != nullptr && this->expressionVariableIds_ != nullptr && this->id_ != nullptr && this->regId_ != nullptr
        && this->scene_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ExpressionTestRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline ExpressionTestRequest& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // expressionVariable Field Functions 
    bool hasExpressionVariable() const { return this->expressionVariable_ != nullptr;};
    void deleteExpressionVariable() { this->expressionVariable_ = nullptr;};
    inline string expressionVariable() const { DARABONBA_PTR_GET_DEFAULT(expressionVariable_, "") };
    inline ExpressionTestRequest& setExpressionVariable(string expressionVariable) { DARABONBA_PTR_SET_VALUE(expressionVariable_, expressionVariable) };


    // expressionVariableIds Field Functions 
    bool hasExpressionVariableIds() const { return this->expressionVariableIds_ != nullptr;};
    void deleteExpressionVariableIds() { this->expressionVariableIds_ = nullptr;};
    inline string expressionVariableIds() const { DARABONBA_PTR_GET_DEFAULT(expressionVariableIds_, "") };
    inline ExpressionTestRequest& setExpressionVariableIds(string expressionVariableIds) { DARABONBA_PTR_SET_VALUE(expressionVariableIds_, expressionVariableIds) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ExpressionTestRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline ExpressionTestRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline ExpressionTestRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Test expression.
    // 
    // This parameter is required.
    std::shared_ptr<string> expression_ = nullptr;
    // Calculation expression variable
    // 
    // This parameter is required.
    std::shared_ptr<string> expressionVariable_ = nullptr;
    // Associated variable ID
    std::shared_ptr<string> expressionVariableIds_ = nullptr;
    // Variable ID
    std::shared_ptr<int64_t> id_ = nullptr;
    // Region code
    // 
    // This parameter is required.
    std::shared_ptr<string> regId_ = nullptr;
    // Scene
    // 
    // This parameter is required.
    std::shared_ptr<string> scene_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
