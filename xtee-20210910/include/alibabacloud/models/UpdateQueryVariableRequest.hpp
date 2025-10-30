// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEQUERYVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEQUERYVARIABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class UpdateQueryVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateQueryVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(dataSourceCode, dataSourceCode_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(expression, expression_);
      DARABONBA_PTR_TO_JSON(expressionTitle, expressionTitle_);
      DARABONBA_PTR_TO_JSON(expressionVariable, expressionVariable_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(outlier, outlier_);
      DARABONBA_PTR_TO_JSON(outputs, outputs_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateQueryVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(dataSourceCode, dataSourceCode_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(expression, expression_);
      DARABONBA_PTR_FROM_JSON(expressionTitle, expressionTitle_);
      DARABONBA_PTR_FROM_JSON(expressionVariable, expressionVariable_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(outlier, outlier_);
      DARABONBA_PTR_FROM_JSON(outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    UpdateQueryVariableRequest() = default ;
    UpdateQueryVariableRequest(const UpdateQueryVariableRequest &) = default ;
    UpdateQueryVariableRequest(UpdateQueryVariableRequest &&) = default ;
    UpdateQueryVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateQueryVariableRequest() = default ;
    UpdateQueryVariableRequest& operator=(const UpdateQueryVariableRequest &) = default ;
    UpdateQueryVariableRequest& operator=(UpdateQueryVariableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->dataSourceCode_ == nullptr && return this->description_ == nullptr && return this->eventCode_ == nullptr && return this->expression_ == nullptr && return this->expressionTitle_ == nullptr
        && return this->expressionVariable_ == nullptr && return this->id_ == nullptr && return this->outlier_ == nullptr && return this->outputs_ == nullptr && return this->regId_ == nullptr
        && return this->title_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateQueryVariableRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // dataSourceCode Field Functions 
    bool hasDataSourceCode() const { return this->dataSourceCode_ != nullptr;};
    void deleteDataSourceCode() { this->dataSourceCode_ = nullptr;};
    inline string dataSourceCode() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCode_, "") };
    inline UpdateQueryVariableRequest& setDataSourceCode(string dataSourceCode) { DARABONBA_PTR_SET_VALUE(dataSourceCode_, dataSourceCode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateQueryVariableRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline UpdateQueryVariableRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline UpdateQueryVariableRequest& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // expressionTitle Field Functions 
    bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
    void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
    inline string expressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
    inline UpdateQueryVariableRequest& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


    // expressionVariable Field Functions 
    bool hasExpressionVariable() const { return this->expressionVariable_ != nullptr;};
    void deleteExpressionVariable() { this->expressionVariable_ = nullptr;};
    inline string expressionVariable() const { DARABONBA_PTR_GET_DEFAULT(expressionVariable_, "") };
    inline UpdateQueryVariableRequest& setExpressionVariable(string expressionVariable) { DARABONBA_PTR_SET_VALUE(expressionVariable_, expressionVariable) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateQueryVariableRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // outlier Field Functions 
    bool hasOutlier() const { return this->outlier_ != nullptr;};
    void deleteOutlier() { this->outlier_ = nullptr;};
    inline string outlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
    inline UpdateQueryVariableRequest& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string outputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline UpdateQueryVariableRequest& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline UpdateQueryVariableRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateQueryVariableRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Data source code
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceCode_ = nullptr;
    // Description.
    std::shared_ptr<string> description_ = nullptr;
    // Event code
    // 
    // This parameter is required.
    std::shared_ptr<string> eventCode_ = nullptr;
    // Expression.
    // 
    // This parameter is required.
    std::shared_ptr<string> expression_ = nullptr;
    // Display expression
    // 
    // This parameter is required.
    std::shared_ptr<string> expressionTitle_ = nullptr;
    // Expression associated variable
    // 
    // This parameter is required.
    std::shared_ptr<string> expressionVariable_ = nullptr;
    // Primary key ID
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Outlier
    // 
    // This parameter is required.
    std::shared_ptr<string> outlier_ = nullptr;
    // Variable return type
    // 
    // This parameter is required.
    std::shared_ptr<string> outputs_ = nullptr;
    // Region code
    // 
    // This parameter is required.
    std::shared_ptr<string> regId_ = nullptr;
    // Title.
    // 
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
