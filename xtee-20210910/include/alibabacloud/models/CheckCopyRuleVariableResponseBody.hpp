// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCOPYRULEVARIABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKCOPYRULEVARIABLERESPONSEBODY_HPP_
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
  class CheckCopyRuleVariableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCopyRuleVariableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCopyRuleVariableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    CheckCopyRuleVariableResponseBody() = default ;
    CheckCopyRuleVariableResponseBody(const CheckCopyRuleVariableResponseBody &) = default ;
    CheckCopyRuleVariableResponseBody(CheckCopyRuleVariableResponseBody &&) = default ;
    CheckCopyRuleVariableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCopyRuleVariableResponseBody() = default ;
    CheckCopyRuleVariableResponseBody& operator=(const CheckCopyRuleVariableResponseBody &) = default ;
    CheckCopyRuleVariableResponseBody& operator=(CheckCopyRuleVariableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
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
      class Message : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Message& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Message& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Message() = default ;
        Message(const Message &) = default ;
        Message(Message &&) = default ;
        Message(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Message() = default ;
        Message& operator=(const Message &) = default ;
        Message& operator=(Message &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Message& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Message& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Message& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Message& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Primary key ID of the variable
        shared_ptr<int64_t> id_ {};
        // Name of the variable
        shared_ptr<string> name_ {};
        // Title of the variable
        shared_ptr<string> title_ {};
        // Type of the variable
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->message_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline const vector<ResultObject::Message> & getMessage() const { DARABONBA_PTR_GET_CONST(message_, vector<ResultObject::Message>) };
      inline vector<ResultObject::Message> getMessage() { DARABONBA_PTR_GET(message_, vector<ResultObject::Message>) };
      inline ResultObject& setMessage(const vector<ResultObject::Message> & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
      inline ResultObject& setMessage(vector<ResultObject::Message> && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


    protected:
      // Information.
      shared_ptr<vector<ResultObject::Message>> message_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckCopyRuleVariableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const CheckCopyRuleVariableResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, CheckCopyRuleVariableResponseBody::ResultObject) };
    inline CheckCopyRuleVariableResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, CheckCopyRuleVariableResponseBody::ResultObject) };
    inline CheckCopyRuleVariableResponseBody& setResultObject(const CheckCopyRuleVariableResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline CheckCopyRuleVariableResponseBody& setResultObject(CheckCopyRuleVariableResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Returned result information
    shared_ptr<CheckCopyRuleVariableResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
