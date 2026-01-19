// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUERYVARIABLEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUERYVARIABLEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeQueryVariableDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQueryVariableDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQueryVariableDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeQueryVariableDetailResponseBody() = default ;
    DescribeQueryVariableDetailResponseBody(const DescribeQueryVariableDetailResponseBody &) = default ;
    DescribeQueryVariableDetailResponseBody(DescribeQueryVariableDetailResponseBody &&) = default ;
    DescribeQueryVariableDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQueryVariableDetailResponseBody() = default ;
    DescribeQueryVariableDetailResponseBody& operator=(const DescribeQueryVariableDetailResponseBody &) = default ;
    DescribeQueryVariableDetailResponseBody& operator=(DescribeQueryVariableDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(dataSourceCode, dataSourceCode_);
        DARABONBA_PTR_TO_JSON(dataSourceName, dataSourceName_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(expression, expression_);
        DARABONBA_PTR_TO_JSON(expressionTitle, expressionTitle_);
        DARABONBA_PTR_TO_JSON(expressionVariable, expressionVariable_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(outlier, outlier_);
        DARABONBA_PTR_TO_JSON(outputs, outputs_);
        DARABONBA_PTR_TO_JSON(title, title_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(dataSourceCode, dataSourceCode_);
        DARABONBA_PTR_FROM_JSON(dataSourceName, dataSourceName_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(expression, expression_);
        DARABONBA_PTR_FROM_JSON(expressionTitle, expressionTitle_);
        DARABONBA_PTR_FROM_JSON(expressionVariable, expressionVariable_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(outlier, outlier_);
        DARABONBA_PTR_FROM_JSON(outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(title, title_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataSourceCode_ == nullptr
        && this->dataSourceName_ == nullptr && this->description_ == nullptr && this->eventCode_ == nullptr && this->expression_ == nullptr && this->expressionTitle_ == nullptr
        && this->expressionVariable_ == nullptr && this->id_ == nullptr && this->outlier_ == nullptr && this->outputs_ == nullptr && this->title_ == nullptr; };
      // dataSourceCode Field Functions 
      bool hasDataSourceCode() const { return this->dataSourceCode_ != nullptr;};
      void deleteDataSourceCode() { this->dataSourceCode_ = nullptr;};
      inline int64_t getDataSourceCode() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCode_, 0L) };
      inline ResultObject& setDataSourceCode(int64_t dataSourceCode) { DARABONBA_PTR_SET_VALUE(dataSourceCode_, dataSourceCode) };


      // dataSourceName Field Functions 
      bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
      void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
      inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
      inline ResultObject& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // eventCode Field Functions 
      bool hasEventCode() const { return this->eventCode_ != nullptr;};
      void deleteEventCode() { this->eventCode_ = nullptr;};
      inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
      inline ResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


      // expression Field Functions 
      bool hasExpression() const { return this->expression_ != nullptr;};
      void deleteExpression() { this->expression_ = nullptr;};
      inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
      inline ResultObject& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


      // expressionTitle Field Functions 
      bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
      void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
      inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
      inline ResultObject& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


      // expressionVariable Field Functions 
      bool hasExpressionVariable() const { return this->expressionVariable_ != nullptr;};
      void deleteExpressionVariable() { this->expressionVariable_ = nullptr;};
      inline string getExpressionVariable() const { DARABONBA_PTR_GET_DEFAULT(expressionVariable_, "") };
      inline ResultObject& setExpressionVariable(string expressionVariable) { DARABONBA_PTR_SET_VALUE(expressionVariable_, expressionVariable) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // outlier Field Functions 
      bool hasOutlier() const { return this->outlier_ != nullptr;};
      void deleteOutlier() { this->outlier_ = nullptr;};
      inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
      inline ResultObject& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
      inline ResultObject& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // Data source code.
      shared_ptr<int64_t> dataSourceCode_ {};
      // Data source name
      shared_ptr<string> dataSourceName_ {};
      // Description.
      shared_ptr<string> description_ {};
      // Event code
      shared_ptr<string> eventCode_ {};
      // Expression.
      shared_ptr<string> expression_ {};
      // Expression title.
      shared_ptr<string> expressionTitle_ {};
      // Expression variable.
      shared_ptr<string> expressionVariable_ {};
      // Variable ID
      shared_ptr<int64_t> id_ {};
      // Outlier
      shared_ptr<string> outlier_ {};
      // Output results.
      shared_ptr<string> outputs_ {};
      // Title.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQueryVariableDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeQueryVariableDetailResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeQueryVariableDetailResponseBody::ResultObject) };
    inline DescribeQueryVariableDetailResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeQueryVariableDetailResponseBody::ResultObject) };
    inline DescribeQueryVariableDetailResponseBody& setResultObject(const DescribeQueryVariableDetailResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeQueryVariableDetailResponseBody& setResultObject(DescribeQueryVariableDetailResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<DescribeQueryVariableDetailResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
