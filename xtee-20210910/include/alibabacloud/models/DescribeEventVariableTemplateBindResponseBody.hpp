// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLETEMPLATEBINDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLETEMPLATEBINDRESPONSEBODY_HPP_
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
  class DescribeEventVariableTemplateBindResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventVariableTemplateBindResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventVariableTemplateBindResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeEventVariableTemplateBindResponseBody() = default ;
    DescribeEventVariableTemplateBindResponseBody(const DescribeEventVariableTemplateBindResponseBody &) = default ;
    DescribeEventVariableTemplateBindResponseBody(DescribeEventVariableTemplateBindResponseBody &&) = default ;
    DescribeEventVariableTemplateBindResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventVariableTemplateBindResponseBody() = default ;
    DescribeEventVariableTemplateBindResponseBody& operator=(const DescribeEventVariableTemplateBindResponseBody &) = default ;
    DescribeEventVariableTemplateBindResponseBody& operator=(DescribeEventVariableTemplateBindResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(chargeVariables, chargeVariables_);
        DARABONBA_PTR_TO_JSON(freeVariables, freeVariables_);
        DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(chargeVariables, chargeVariables_);
        DARABONBA_PTR_FROM_JSON(freeVariables, freeVariables_);
        DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
      class FreeVariables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FreeVariables& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(fieldType, fieldType_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, FreeVariables& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(fieldType, fieldType_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        FreeVariables() = default ;
        FreeVariables(const FreeVariables &) = default ;
        FreeVariables(FreeVariables &&) = default ;
        FreeVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FreeVariables() = default ;
        FreeVariables& operator=(const FreeVariables &) = default ;
        FreeVariables& operator=(FreeVariables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->fieldType_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline FreeVariables& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline FreeVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline FreeVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline FreeVariables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FreeVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline FreeVariables& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline FreeVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Variable code
        shared_ptr<string> code_ {};
        // Variable description.
        shared_ptr<string> description_ {};
        // Field type.
        shared_ptr<string> fieldType_ {};
        // Primary key ID
        shared_ptr<int64_t> id_ {};
        // Variable name
        shared_ptr<string> name_ {};
        // Title.
        shared_ptr<string> title_ {};
        // Variable type.
        shared_ptr<string> type_ {};
      };

      class ChargeVariables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChargeVariables& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(fieldType, fieldType_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ChargeVariables& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(fieldType, fieldType_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        ChargeVariables() = default ;
        ChargeVariables(const ChargeVariables &) = default ;
        ChargeVariables(ChargeVariables &&) = default ;
        ChargeVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChargeVariables() = default ;
        ChargeVariables& operator=(const ChargeVariables &) = default ;
        ChargeVariables& operator=(ChargeVariables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->fieldType_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline ChargeVariables& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ChargeVariables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline ChargeVariables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ChargeVariables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ChargeVariables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline ChargeVariables& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ChargeVariables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Variable code
        shared_ptr<string> code_ {};
        // Description of the variable.
        shared_ptr<string> description_ {};
        // Field type.
        shared_ptr<string> fieldType_ {};
        // Primary key ID
        shared_ptr<int64_t> id_ {};
        // Variable name
        shared_ptr<string> name_ {};
        // Title.
        shared_ptr<string> title_ {};
        // Variable type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->chargeVariables_ == nullptr
        && this->freeVariables_ == nullptr && this->templateCode_ == nullptr && this->totalCount_ == nullptr; };
      // chargeVariables Field Functions 
      bool hasChargeVariables() const { return this->chargeVariables_ != nullptr;};
      void deleteChargeVariables() { this->chargeVariables_ = nullptr;};
      inline const vector<ResultObject::ChargeVariables> & getChargeVariables() const { DARABONBA_PTR_GET_CONST(chargeVariables_, vector<ResultObject::ChargeVariables>) };
      inline vector<ResultObject::ChargeVariables> getChargeVariables() { DARABONBA_PTR_GET(chargeVariables_, vector<ResultObject::ChargeVariables>) };
      inline ResultObject& setChargeVariables(const vector<ResultObject::ChargeVariables> & chargeVariables) { DARABONBA_PTR_SET_VALUE(chargeVariables_, chargeVariables) };
      inline ResultObject& setChargeVariables(vector<ResultObject::ChargeVariables> && chargeVariables) { DARABONBA_PTR_SET_RVALUE(chargeVariables_, chargeVariables) };


      // freeVariables Field Functions 
      bool hasFreeVariables() const { return this->freeVariables_ != nullptr;};
      void deleteFreeVariables() { this->freeVariables_ = nullptr;};
      inline const vector<ResultObject::FreeVariables> & getFreeVariables() const { DARABONBA_PTR_GET_CONST(freeVariables_, vector<ResultObject::FreeVariables>) };
      inline vector<ResultObject::FreeVariables> getFreeVariables() { DARABONBA_PTR_GET(freeVariables_, vector<ResultObject::FreeVariables>) };
      inline ResultObject& setFreeVariables(const vector<ResultObject::FreeVariables> & freeVariables) { DARABONBA_PTR_SET_VALUE(freeVariables_, freeVariables) };
      inline ResultObject& setFreeVariables(vector<ResultObject::FreeVariables> && freeVariables) { DARABONBA_PTR_SET_RVALUE(freeVariables_, freeVariables) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline ResultObject& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
      inline ResultObject& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // List of chargeable variables
      shared_ptr<vector<ResultObject::ChargeVariables>> chargeVariables_ {};
      // List of free variables
      shared_ptr<vector<ResultObject::FreeVariables>> freeVariables_ {};
      // Template code
      shared_ptr<string> templateCode_ {};
      // Total count
      shared_ptr<string> totalCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventVariableTemplateBindResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeEventVariableTemplateBindResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeEventVariableTemplateBindResponseBody::ResultObject) };
    inline DescribeEventVariableTemplateBindResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeEventVariableTemplateBindResponseBody::ResultObject) };
    inline DescribeEventVariableTemplateBindResponseBody& setResultObject(const DescribeEventVariableTemplateBindResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeEventVariableTemplateBindResponseBody& setResultObject(DescribeEventVariableTemplateBindResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<DescribeEventVariableTemplateBindResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
