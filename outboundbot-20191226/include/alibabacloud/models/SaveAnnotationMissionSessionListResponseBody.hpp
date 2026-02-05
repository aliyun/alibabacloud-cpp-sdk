// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONSESSIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONSESSIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SaveAnnotationMissionSessionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAnnotationMissionSessionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAnnotationMissionSessionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SaveAnnotationMissionSessionListResponseBody() = default ;
    SaveAnnotationMissionSessionListResponseBody(const SaveAnnotationMissionSessionListResponseBody &) = default ;
    SaveAnnotationMissionSessionListResponseBody(SaveAnnotationMissionSessionListResponseBody &&) = default ;
    SaveAnnotationMissionSessionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAnnotationMissionSessionListResponseBody() = default ;
    SaveAnnotationMissionSessionListResponseBody& operator=(const SaveAnnotationMissionSessionListResponseBody &) = default ;
    SaveAnnotationMissionSessionListResponseBody& operator=(SaveAnnotationMissionSessionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(MessageList, messageList_);
        DARABONBA_PTR_TO_JSON(SaveAnnotationMissionSessionListRequest, saveAnnotationMissionSessionListRequest_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(MessageList, messageList_);
        DARABONBA_PTR_FROM_JSON(SaveAnnotationMissionSessionListRequest, saveAnnotationMissionSessionListRequest_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SaveAnnotationMissionSessionListRequest : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SaveAnnotationMissionSessionListRequest& obj) { 
          DARABONBA_PTR_TO_JSON(AnnotationMissionSessionListJsonString, annotationMissionSessionListJsonString_);
        };
        friend void from_json(const Darabonba::Json& j, SaveAnnotationMissionSessionListRequest& obj) { 
          DARABONBA_PTR_FROM_JSON(AnnotationMissionSessionListJsonString, annotationMissionSessionListJsonString_);
        };
        SaveAnnotationMissionSessionListRequest() = default ;
        SaveAnnotationMissionSessionListRequest(const SaveAnnotationMissionSessionListRequest &) = default ;
        SaveAnnotationMissionSessionListRequest(SaveAnnotationMissionSessionListRequest &&) = default ;
        SaveAnnotationMissionSessionListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SaveAnnotationMissionSessionListRequest() = default ;
        SaveAnnotationMissionSessionListRequest& operator=(const SaveAnnotationMissionSessionListRequest &) = default ;
        SaveAnnotationMissionSessionListRequest& operator=(SaveAnnotationMissionSessionListRequest &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->annotationMissionSessionListJsonString_ == nullptr; };
        // annotationMissionSessionListJsonString Field Functions 
        bool hasAnnotationMissionSessionListJsonString() const { return this->annotationMissionSessionListJsonString_ != nullptr;};
        void deleteAnnotationMissionSessionListJsonString() { this->annotationMissionSessionListJsonString_ = nullptr;};
        inline string getAnnotationMissionSessionListJsonString() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionListJsonString_, "") };
        inline SaveAnnotationMissionSessionListRequest& setAnnotationMissionSessionListJsonString(string annotationMissionSessionListJsonString) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionListJsonString_, annotationMissionSessionListJsonString) };


      protected:
        shared_ptr<string> annotationMissionSessionListJsonString_ {};
      };

      virtual bool empty() const override { return this->message_ == nullptr
        && this->messageList_ == nullptr && this->saveAnnotationMissionSessionListRequest_ == nullptr && this->success_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // messageList Field Functions 
      bool hasMessageList() const { return this->messageList_ != nullptr;};
      void deleteMessageList() { this->messageList_ = nullptr;};
      inline const vector<string> & getMessageList() const { DARABONBA_PTR_GET_CONST(messageList_, vector<string>) };
      inline vector<string> getMessageList() { DARABONBA_PTR_GET(messageList_, vector<string>) };
      inline Data& setMessageList(const vector<string> & messageList) { DARABONBA_PTR_SET_VALUE(messageList_, messageList) };
      inline Data& setMessageList(vector<string> && messageList) { DARABONBA_PTR_SET_RVALUE(messageList_, messageList) };


      // saveAnnotationMissionSessionListRequest Field Functions 
      bool hasSaveAnnotationMissionSessionListRequest() const { return this->saveAnnotationMissionSessionListRequest_ != nullptr;};
      void deleteSaveAnnotationMissionSessionListRequest() { this->saveAnnotationMissionSessionListRequest_ = nullptr;};
      inline const Data::SaveAnnotationMissionSessionListRequest & getSaveAnnotationMissionSessionListRequest() const { DARABONBA_PTR_GET_CONST(saveAnnotationMissionSessionListRequest_, Data::SaveAnnotationMissionSessionListRequest) };
      inline Data::SaveAnnotationMissionSessionListRequest getSaveAnnotationMissionSessionListRequest() { DARABONBA_PTR_GET(saveAnnotationMissionSessionListRequest_, Data::SaveAnnotationMissionSessionListRequest) };
      inline Data& setSaveAnnotationMissionSessionListRequest(const Data::SaveAnnotationMissionSessionListRequest & saveAnnotationMissionSessionListRequest) { DARABONBA_PTR_SET_VALUE(saveAnnotationMissionSessionListRequest_, saveAnnotationMissionSessionListRequest) };
      inline Data& setSaveAnnotationMissionSessionListRequest(Data::SaveAnnotationMissionSessionListRequest && saveAnnotationMissionSessionListRequest) { DARABONBA_PTR_SET_RVALUE(saveAnnotationMissionSessionListRequest_, saveAnnotationMissionSessionListRequest) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> message_ {};
      shared_ptr<vector<string>> messageList_ {};
      shared_ptr<Data::SaveAnnotationMissionSessionListRequest> saveAnnotationMissionSessionListRequest_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SaveAnnotationMissionSessionListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SaveAnnotationMissionSessionListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SaveAnnotationMissionSessionListResponseBody::Data) };
    inline SaveAnnotationMissionSessionListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SaveAnnotationMissionSessionListResponseBody::Data) };
    inline SaveAnnotationMissionSessionListResponseBody& setData(const SaveAnnotationMissionSessionListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SaveAnnotationMissionSessionListResponseBody& setData(SaveAnnotationMissionSessionListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SaveAnnotationMissionSessionListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SaveAnnotationMissionSessionListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveAnnotationMissionSessionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SaveAnnotationMissionSessionListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<SaveAnnotationMissionSessionListResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
