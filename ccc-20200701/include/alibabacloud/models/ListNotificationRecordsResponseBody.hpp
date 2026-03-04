// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNOTIFICATIONRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNOTIFICATIONRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListNotificationRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNotificationRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNotificationRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListNotificationRecordsResponseBody() = default ;
    ListNotificationRecordsResponseBody(const ListNotificationRecordsResponseBody &) = default ;
    ListNotificationRecordsResponseBody(ListNotificationRecordsResponseBody &&) = default ;
    ListNotificationRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNotificationRecordsResponseBody() = default ;
    ListNotificationRecordsResponseBody& operator=(const ListNotificationRecordsResponseBody &) = default ;
    ListNotificationRecordsResponseBody& operator=(ListNotificationRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(NotificationKey, notificationKey_);
        DARABONBA_PTR_TO_JSON(NotificationType, notificationType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NotificationKey, notificationKey_);
        DARABONBA_PTR_FROM_JSON(NotificationType, notificationType_);
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
      virtual bool empty() const override { return this->content_ == nullptr
        && this->instanceId_ == nullptr && this->notificationKey_ == nullptr && this->notificationType_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // notificationKey Field Functions 
      bool hasNotificationKey() const { return this->notificationKey_ != nullptr;};
      void deleteNotificationKey() { this->notificationKey_ = nullptr;};
      inline string getNotificationKey() const { DARABONBA_PTR_GET_DEFAULT(notificationKey_, "") };
      inline Data& setNotificationKey(string notificationKey) { DARABONBA_PTR_SET_VALUE(notificationKey_, notificationKey) };


      // notificationType Field Functions 
      bool hasNotificationType() const { return this->notificationType_ != nullptr;};
      void deleteNotificationType() { this->notificationType_ = nullptr;};
      inline string getNotificationType() const { DARABONBA_PTR_GET_DEFAULT(notificationType_, "") };
      inline Data& setNotificationType(string notificationType) { DARABONBA_PTR_SET_VALUE(notificationType_, notificationType) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> notificationKey_ {};
      shared_ptr<string> notificationType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListNotificationRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListNotificationRecordsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListNotificationRecordsResponseBody::Data>) };
    inline vector<ListNotificationRecordsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListNotificationRecordsResponseBody::Data>) };
    inline ListNotificationRecordsResponseBody& setData(const vector<ListNotificationRecordsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListNotificationRecordsResponseBody& setData(vector<ListNotificationRecordsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListNotificationRecordsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNotificationRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListNotificationRecordsResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListNotificationRecordsResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNotificationRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListNotificationRecordsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
