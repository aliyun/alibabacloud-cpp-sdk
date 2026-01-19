// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENEALLEVENTNAMECODELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENEALLEVENTNAMECODELISTRESPONSEBODY_HPP_
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
  class DescribeSceneAllEventNameCodeListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSceneAllEventNameCodeListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSceneAllEventNameCodeListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DescribeSceneAllEventNameCodeListResponseBody() = default ;
    DescribeSceneAllEventNameCodeListResponseBody(const DescribeSceneAllEventNameCodeListResponseBody &) = default ;
    DescribeSceneAllEventNameCodeListResponseBody(DescribeSceneAllEventNameCodeListResponseBody &&) = default ;
    DescribeSceneAllEventNameCodeListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSceneAllEventNameCodeListResponseBody() = default ;
    DescribeSceneAllEventNameCodeListResponseBody& operator=(const DescribeSceneAllEventNameCodeListResponseBody &) = default ;
    DescribeSceneAllEventNameCodeListResponseBody& operator=(DescribeSceneAllEventNameCodeListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(children, children_);
        DARABONBA_PTR_TO_JSON(createType, createType_);
        DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(eventName, eventName_);
        DARABONBA_PTR_TO_JSON(eventType, eventType_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(children, children_);
        DARABONBA_PTR_FROM_JSON(createType, createType_);
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(eventName, eventName_);
        DARABONBA_PTR_FROM_JSON(eventType, eventType_);
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
      class Children : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Children& obj) { 
          DARABONBA_PTR_TO_JSON(createType, createType_);
          DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
          DARABONBA_PTR_TO_JSON(eventName, eventName_);
          DARABONBA_PTR_TO_JSON(eventType, eventType_);
        };
        friend void from_json(const Darabonba::Json& j, Children& obj) { 
          DARABONBA_PTR_FROM_JSON(createType, createType_);
          DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
          DARABONBA_PTR_FROM_JSON(eventName, eventName_);
          DARABONBA_PTR_FROM_JSON(eventType, eventType_);
        };
        Children() = default ;
        Children(const Children &) = default ;
        Children(Children &&) = default ;
        Children(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Children() = default ;
        Children& operator=(const Children &) = default ;
        Children& operator=(Children &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createType_ == nullptr
        && this->eventCode_ == nullptr && this->eventName_ == nullptr && this->eventType_ == nullptr; };
        // createType Field Functions 
        bool hasCreateType() const { return this->createType_ != nullptr;};
        void deleteCreateType() { this->createType_ = nullptr;};
        inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
        inline Children& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


        // eventCode Field Functions 
        bool hasEventCode() const { return this->eventCode_ != nullptr;};
        void deleteEventCode() { this->eventCode_ = nullptr;};
        inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
        inline Children& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


        // eventName Field Functions 
        bool hasEventName() const { return this->eventName_ != nullptr;};
        void deleteEventName() { this->eventName_ = nullptr;};
        inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
        inline Children& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
        inline Children& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      protected:
        // Creation type
        shared_ptr<string> createType_ {};
        // Event code
        shared_ptr<string> eventCode_ {};
        // Event name.
        shared_ptr<string> eventName_ {};
        // Event type
        shared_ptr<string> eventType_ {};
      };

      virtual bool empty() const override { return this->children_ == nullptr
        && this->createType_ == nullptr && this->eventCode_ == nullptr && this->eventName_ == nullptr && this->eventType_ == nullptr; };
      // children Field Functions 
      bool hasChildren() const { return this->children_ != nullptr;};
      void deleteChildren() { this->children_ = nullptr;};
      inline const vector<ResultObject::Children> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<ResultObject::Children>) };
      inline vector<ResultObject::Children> getChildren() { DARABONBA_PTR_GET(children_, vector<ResultObject::Children>) };
      inline ResultObject& setChildren(const vector<ResultObject::Children> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
      inline ResultObject& setChildren(vector<ResultObject::Children> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


      // createType Field Functions 
      bool hasCreateType() const { return this->createType_ != nullptr;};
      void deleteCreateType() { this->createType_ = nullptr;};
      inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
      inline ResultObject& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


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


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline ResultObject& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    protected:
      // Child objects
      shared_ptr<vector<ResultObject::Children>> children_ {};
      // Creation type
      shared_ptr<string> createType_ {};
      // Event code
      shared_ptr<string> eventCode_ {};
      // Event name.
      shared_ptr<string> eventName_ {};
      // Event type
      shared_ptr<string> eventType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSceneAllEventNameCodeListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribeSceneAllEventNameCodeListResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSceneAllEventNameCodeListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSceneAllEventNameCodeListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeSceneAllEventNameCodeListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeSceneAllEventNameCodeListResponseBody::ResultObject>) };
    inline vector<DescribeSceneAllEventNameCodeListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeSceneAllEventNameCodeListResponseBody::ResultObject>) };
    inline DescribeSceneAllEventNameCodeListResponseBody& setResultObject(const vector<DescribeSceneAllEventNameCodeListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeSceneAllEventNameCodeListResponseBody& setResultObject(vector<DescribeSceneAllEventNameCodeListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSceneAllEventNameCodeListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Status code
    shared_ptr<string> code_ {};
    // HTTP status code
    shared_ptr<string> httpStatusCode_ {};
    // Error details
    shared_ptr<string> message_ {};
    // Request ID, which is unique for each request, facilitating subsequent troubleshooting
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<vector<DescribeSceneAllEventNameCodeListResponseBody::ResultObject>> resultObject_ {};
    // Indicates whether the operation was successful, where true means success.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
