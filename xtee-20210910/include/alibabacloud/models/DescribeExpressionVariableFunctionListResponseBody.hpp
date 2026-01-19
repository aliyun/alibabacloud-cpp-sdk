// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSIONVARIABLEFUNCTIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSIONVARIABLEFUNCTIONLISTRESPONSEBODY_HPP_
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
  class DescribeExpressionVariableFunctionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressionVariableFunctionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressionVariableFunctionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeExpressionVariableFunctionListResponseBody() = default ;
    DescribeExpressionVariableFunctionListResponseBody(const DescribeExpressionVariableFunctionListResponseBody &) = default ;
    DescribeExpressionVariableFunctionListResponseBody(DescribeExpressionVariableFunctionListResponseBody &&) = default ;
    DescribeExpressionVariableFunctionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressionVariableFunctionListResponseBody() = default ;
    DescribeExpressionVariableFunctionListResponseBody& operator=(const DescribeExpressionVariableFunctionListResponseBody &) = default ;
    DescribeExpressionVariableFunctionListResponseBody& operator=(DescribeExpressionVariableFunctionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(maxParamSize, maxParamSize_);
        DARABONBA_PTR_TO_JSON(minParamSize, minParamSize_);
        DARABONBA_PTR_TO_JSON(paramTypes, paramTypes_);
        DARABONBA_PTR_TO_JSON(redirect, redirect_);
        DARABONBA_PTR_TO_JSON(returnTypes, returnTypes_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(maxParamSize, maxParamSize_);
        DARABONBA_PTR_FROM_JSON(minParamSize, minParamSize_);
        DARABONBA_PTR_FROM_JSON(paramTypes, paramTypes_);
        DARABONBA_PTR_FROM_JSON(redirect, redirect_);
        DARABONBA_PTR_FROM_JSON(returnTypes, returnTypes_);
        DARABONBA_PTR_FROM_JSON(value, value_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->key_ == nullptr && this->maxParamSize_ == nullptr && this->minParamSize_ == nullptr && this->paramTypes_ == nullptr && this->redirect_ == nullptr
        && this->returnTypes_ == nullptr && this->value_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline ResultObject& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // maxParamSize Field Functions 
      bool hasMaxParamSize() const { return this->maxParamSize_ != nullptr;};
      void deleteMaxParamSize() { this->maxParamSize_ = nullptr;};
      inline int64_t getMaxParamSize() const { DARABONBA_PTR_GET_DEFAULT(maxParamSize_, 0L) };
      inline ResultObject& setMaxParamSize(int64_t maxParamSize) { DARABONBA_PTR_SET_VALUE(maxParamSize_, maxParamSize) };


      // minParamSize Field Functions 
      bool hasMinParamSize() const { return this->minParamSize_ != nullptr;};
      void deleteMinParamSize() { this->minParamSize_ = nullptr;};
      inline int64_t getMinParamSize() const { DARABONBA_PTR_GET_DEFAULT(minParamSize_, 0L) };
      inline ResultObject& setMinParamSize(int64_t minParamSize) { DARABONBA_PTR_SET_VALUE(minParamSize_, minParamSize) };


      // paramTypes Field Functions 
      bool hasParamTypes() const { return this->paramTypes_ != nullptr;};
      void deleteParamTypes() { this->paramTypes_ = nullptr;};
      inline string getParamTypes() const { DARABONBA_PTR_GET_DEFAULT(paramTypes_, "") };
      inline ResultObject& setParamTypes(string paramTypes) { DARABONBA_PTR_SET_VALUE(paramTypes_, paramTypes) };


      // redirect Field Functions 
      bool hasRedirect() const { return this->redirect_ != nullptr;};
      void deleteRedirect() { this->redirect_ = nullptr;};
      inline bool getRedirect() const { DARABONBA_PTR_GET_DEFAULT(redirect_, false) };
      inline ResultObject& setRedirect(bool redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };


      // returnTypes Field Functions 
      bool hasReturnTypes() const { return this->returnTypes_ != nullptr;};
      void deleteReturnTypes() { this->returnTypes_ = nullptr;};
      inline string getReturnTypes() const { DARABONBA_PTR_GET_DEFAULT(returnTypes_, "") };
      inline ResultObject& setReturnTypes(string returnTypes) { DARABONBA_PTR_SET_VALUE(returnTypes_, returnTypes) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ResultObject& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Description information.
      shared_ptr<string> description_ {};
      // Function name
      shared_ptr<string> key_ {};
      // Maximum number of parameters
      shared_ptr<int64_t> maxParamSize_ {};
      // Minimum number of parameters
      shared_ptr<int64_t> minParamSize_ {};
      // Parameter types
      shared_ptr<string> paramTypes_ {};
      // Whether it is directly invoked
      shared_ptr<bool> redirect_ {};
      // Method return types
      shared_ptr<string> returnTypes_ {};
      // Function value
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExpressionVariableFunctionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeExpressionVariableFunctionListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeExpressionVariableFunctionListResponseBody::ResultObject>) };
    inline vector<DescribeExpressionVariableFunctionListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeExpressionVariableFunctionListResponseBody::ResultObject>) };
    inline DescribeExpressionVariableFunctionListResponseBody& setResultObject(const vector<DescribeExpressionVariableFunctionListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeExpressionVariableFunctionListResponseBody& setResultObject(vector<DescribeExpressionVariableFunctionListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<vector<DescribeExpressionVariableFunctionListResponseBody::ResultObject>> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
