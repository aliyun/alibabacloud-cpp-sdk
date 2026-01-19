// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLETEMPLATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLETEMPLATELISTRESPONSEBODY_HPP_
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
  class DescribeEventVariableTemplateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventVariableTemplateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventVariableTemplateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeEventVariableTemplateListResponseBody() = default ;
    DescribeEventVariableTemplateListResponseBody(const DescribeEventVariableTemplateListResponseBody &) = default ;
    DescribeEventVariableTemplateListResponseBody(DescribeEventVariableTemplateListResponseBody &&) = default ;
    DescribeEventVariableTemplateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventVariableTemplateListResponseBody() = default ;
    DescribeEventVariableTemplateListResponseBody& operator=(const DescribeEventVariableTemplateListResponseBody &) = default ;
    DescribeEventVariableTemplateListResponseBody& operator=(DescribeEventVariableTemplateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
        DARABONBA_PTR_TO_JSON(templateName, templateName_);
        DARABONBA_PTR_TO_JSON(variables, variables_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
        DARABONBA_PTR_FROM_JSON(templateName, templateName_);
        DARABONBA_PTR_FROM_JSON(variables, variables_);
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
      class Variables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Variables& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(fieldType, fieldType_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Variables& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(fieldType, fieldType_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Variables() = default ;
        Variables(const Variables &) = default ;
        Variables(Variables &&) = default ;
        Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Variables() = default ;
        Variables& operator=(const Variables &) = default ;
        Variables& operator=(Variables &&) = default ;
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
        inline Variables& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Variables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // fieldType Field Functions 
        bool hasFieldType() const { return this->fieldType_ != nullptr;};
        void deleteFieldType() { this->fieldType_ = nullptr;};
        inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
        inline Variables& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Variables& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Variables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Variables& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Variables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Variable code
        shared_ptr<string> code_ {};
        // Description information.
        shared_ptr<string> description_ {};
        // Variable input type
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

      virtual bool empty() const override { return this->templateCode_ == nullptr
        && this->templateName_ == nullptr && this->variables_ == nullptr; };
      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline ResultObject& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline ResultObject& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // variables Field Functions 
      bool hasVariables() const { return this->variables_ != nullptr;};
      void deleteVariables() { this->variables_ = nullptr;};
      inline const vector<ResultObject::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<ResultObject::Variables>) };
      inline vector<ResultObject::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<ResultObject::Variables>) };
      inline ResultObject& setVariables(const vector<ResultObject::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
      inline ResultObject& setVariables(vector<ResultObject::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    protected:
      // Template code.
      shared_ptr<string> templateCode_ {};
      // Template name.
      shared_ptr<string> templateName_ {};
      // Variable list.
      shared_ptr<vector<ResultObject::Variables>> variables_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventVariableTemplateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeEventVariableTemplateListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeEventVariableTemplateListResponseBody::ResultObject>) };
    inline vector<DescribeEventVariableTemplateListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeEventVariableTemplateListResponseBody::ResultObject>) };
    inline DescribeEventVariableTemplateListResponseBody& setResultObject(const vector<DescribeEventVariableTemplateListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeEventVariableTemplateListResponseBody& setResultObject(vector<DescribeEventVariableTemplateListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<vector<DescribeEventVariableTemplateListResponseBody::ResultObject>> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
