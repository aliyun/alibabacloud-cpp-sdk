// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTBYTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTBYTYPERESPONSEBODY_HPP_
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
  class DescribeOperatorListByTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOperatorListByTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOperatorListByTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeOperatorListByTypeResponseBody() = default ;
    DescribeOperatorListByTypeResponseBody(const DescribeOperatorListByTypeResponseBody &) = default ;
    DescribeOperatorListByTypeResponseBody(DescribeOperatorListByTypeResponseBody &&) = default ;
    DescribeOperatorListByTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOperatorListByTypeResponseBody() = default ;
    DescribeOperatorListByTypeResponseBody& operator=(const DescribeOperatorListByTypeResponseBody &) = default ;
    DescribeOperatorListByTypeResponseBody& operator=(DescribeOperatorListByTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(fieldType, fieldType_);
        DARABONBA_PTR_TO_JSON(operators, operators_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(fieldType, fieldType_);
        DARABONBA_PTR_FROM_JSON(operators, operators_);
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
      class Operators : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Operators& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(hasRightVariable, hasRightVariable_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Operators& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(hasRightVariable, hasRightVariable_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        Operators() = default ;
        Operators(const Operators &) = default ;
        Operators(Operators &&) = default ;
        Operators(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Operators() = default ;
        Operators& operator=(const Operators &) = default ;
        Operators& operator=(Operators &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->hasRightVariable_ == nullptr && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Operators& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // hasRightVariable Field Functions 
        bool hasHasRightVariable() const { return this->hasRightVariable_ != nullptr;};
        void deleteHasRightVariable() { this->hasRightVariable_ = nullptr;};
        inline bool getHasRightVariable() const { DARABONBA_PTR_GET_DEFAULT(hasRightVariable_, false) };
        inline Operators& setHasRightVariable(bool hasRightVariable) { DARABONBA_PTR_SET_VALUE(hasRightVariable_, hasRightVariable) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Operators& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // Operator code
        shared_ptr<string> code_ {};
        // Whether it contains a right variable
        shared_ptr<bool> hasRightVariable_ {};
        // Operator name
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->fieldType_ == nullptr
        && this->operators_ == nullptr; };
      // fieldType Field Functions 
      bool hasFieldType() const { return this->fieldType_ != nullptr;};
      void deleteFieldType() { this->fieldType_ = nullptr;};
      inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
      inline ResultObject& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


      // operators Field Functions 
      bool hasOperators() const { return this->operators_ != nullptr;};
      void deleteOperators() { this->operators_ = nullptr;};
      inline const vector<ResultObject::Operators> & getOperators() const { DARABONBA_PTR_GET_CONST(operators_, vector<ResultObject::Operators>) };
      inline vector<ResultObject::Operators> getOperators() { DARABONBA_PTR_GET(operators_, vector<ResultObject::Operators>) };
      inline ResultObject& setOperators(const vector<ResultObject::Operators> & operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };
      inline ResultObject& setOperators(vector<ResultObject::Operators> && operators) { DARABONBA_PTR_SET_RVALUE(operators_, operators) };


    protected:
      // Return value type
      shared_ptr<string> fieldType_ {};
      // Operator list
      shared_ptr<vector<ResultObject::Operators>> operators_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOperatorListByTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeOperatorListByTypeResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeOperatorListByTypeResponseBody::ResultObject>) };
    inline vector<DescribeOperatorListByTypeResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeOperatorListByTypeResponseBody::ResultObject>) };
    inline DescribeOperatorListByTypeResponseBody& setResultObject(const vector<DescribeOperatorListByTypeResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeOperatorListByTypeResponseBody& setResultObject(vector<DescribeOperatorListByTypeResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<vector<DescribeOperatorListByTypeResponseBody::ResultObject>> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
