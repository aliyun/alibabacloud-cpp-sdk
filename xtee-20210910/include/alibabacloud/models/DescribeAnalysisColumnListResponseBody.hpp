// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANALYSISCOLUMNLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANALYSISCOLUMNLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAnalysisColumnListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnalysisColumnListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnalysisColumnListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeAnalysisColumnListResponseBody() = default ;
    DescribeAnalysisColumnListResponseBody(const DescribeAnalysisColumnListResponseBody &) = default ;
    DescribeAnalysisColumnListResponseBody(DescribeAnalysisColumnListResponseBody &&) = default ;
    DescribeAnalysisColumnListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnalysisColumnListResponseBody() = default ;
    DescribeAnalysisColumnListResponseBody& operator=(const DescribeAnalysisColumnListResponseBody &) = default ;
    DescribeAnalysisColumnListResponseBody& operator=(DescribeAnalysisColumnListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(eventName, eventName_);
        DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(variableName, variableName_);
        DARABONBA_PTR_TO_JSON(variableTitle, variableTitle_);
        DARABONBA_PTR_TO_JSON(variableType, variableType_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(eventName, eventName_);
        DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(variableName, variableName_);
        DARABONBA_PTR_FROM_JSON(variableTitle, variableTitle_);
        DARABONBA_PTR_FROM_JSON(variableType, variableType_);
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
      virtual bool empty() const override { return this->eventCode_ == nullptr
        && this->eventName_ == nullptr && this->isDefault_ == nullptr && this->variableName_ == nullptr && this->variableTitle_ == nullptr && this->variableType_ == nullptr; };
      // eventCode Field Functions 
      bool hasEventCode() const { return this->eventCode_ != nullptr;};
      void deleteEventCode() { this->eventCode_ = nullptr;};
      inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
      inline ResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline ResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline ResultObject& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // variableName Field Functions 
      bool hasVariableName() const { return this->variableName_ != nullptr;};
      void deleteVariableName() { this->variableName_ = nullptr;};
      inline string getVariableName() const { DARABONBA_PTR_GET_DEFAULT(variableName_, "") };
      inline ResultObject& setVariableName(string variableName) { DARABONBA_PTR_SET_VALUE(variableName_, variableName) };


      // variableTitle Field Functions 
      bool hasVariableTitle() const { return this->variableTitle_ != nullptr;};
      void deleteVariableTitle() { this->variableTitle_ = nullptr;};
      inline string getVariableTitle() const { DARABONBA_PTR_GET_DEFAULT(variableTitle_, "") };
      inline ResultObject& setVariableTitle(string variableTitle) { DARABONBA_PTR_SET_VALUE(variableTitle_, variableTitle) };


      // variableType Field Functions 
      bool hasVariableType() const { return this->variableType_ != nullptr;};
      void deleteVariableType() { this->variableType_ = nullptr;};
      inline string getVariableType() const { DARABONBA_PTR_GET_DEFAULT(variableType_, "") };
      inline ResultObject& setVariableType(string variableType) { DARABONBA_PTR_SET_VALUE(variableType_, variableType) };


    protected:
      // Event code
      shared_ptr<string> eventCode_ {};
      // Event name.
      shared_ptr<string> eventName_ {};
      // Whether it is a default column.
      shared_ptr<bool> isDefault_ {};
      // Variable name.
      shared_ptr<string> variableName_ {};
      // Variable title.
      shared_ptr<string> variableTitle_ {};
      // Variable type.
      shared_ptr<string> variableType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAnalysisColumnListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeAnalysisColumnListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeAnalysisColumnListResponseBody::ResultObject>) };
    inline vector<DescribeAnalysisColumnListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeAnalysisColumnListResponseBody::ResultObject>) };
    inline DescribeAnalysisColumnListResponseBody& setResultObject(const vector<DescribeAnalysisColumnListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeAnalysisColumnListResponseBody& setResultObject(vector<DescribeAnalysisColumnListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<vector<DescribeAnalysisColumnListResponseBody::ResultObject>> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
