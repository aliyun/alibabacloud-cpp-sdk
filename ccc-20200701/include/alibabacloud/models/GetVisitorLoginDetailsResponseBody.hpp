// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVISITORLOGINDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVISITORLOGINDETAILSRESPONSEBODY_HPP_
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
  class GetVisitorLoginDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVisitorLoginDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVisitorLoginDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVisitorLoginDetailsResponseBody() = default ;
    GetVisitorLoginDetailsResponseBody(const GetVisitorLoginDetailsResponseBody &) = default ;
    GetVisitorLoginDetailsResponseBody(GetVisitorLoginDetailsResponseBody &&) = default ;
    GetVisitorLoginDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVisitorLoginDetailsResponseBody() = default ;
    GetVisitorLoginDetailsResponseBody& operator=(const GetVisitorLoginDetailsResponseBody &) = default ;
    GetVisitorLoginDetailsResponseBody& operator=(GetVisitorLoginDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ChatAppId, chatAppId_);
        DARABONBA_PTR_TO_JSON(ChatAppKey, chatAppKey_);
        DARABONBA_PTR_TO_JSON(ChatDeviceId, chatDeviceId_);
        DARABONBA_PTR_TO_JSON(ChatLoginToken, chatLoginToken_);
        DARABONBA_PTR_TO_JSON(ChatServerUrl, chatServerUrl_);
        DARABONBA_PTR_TO_JSON(ChatUserId, chatUserId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ChatAppId, chatAppId_);
        DARABONBA_PTR_FROM_JSON(ChatAppKey, chatAppKey_);
        DARABONBA_PTR_FROM_JSON(ChatDeviceId, chatDeviceId_);
        DARABONBA_PTR_FROM_JSON(ChatLoginToken, chatLoginToken_);
        DARABONBA_PTR_FROM_JSON(ChatServerUrl, chatServerUrl_);
        DARABONBA_PTR_FROM_JSON(ChatUserId, chatUserId_);
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
      virtual bool empty() const override { return this->chatAppId_ == nullptr
        && this->chatAppKey_ == nullptr && this->chatDeviceId_ == nullptr && this->chatLoginToken_ == nullptr && this->chatServerUrl_ == nullptr && this->chatUserId_ == nullptr; };
      // chatAppId Field Functions 
      bool hasChatAppId() const { return this->chatAppId_ != nullptr;};
      void deleteChatAppId() { this->chatAppId_ = nullptr;};
      inline string getChatAppId() const { DARABONBA_PTR_GET_DEFAULT(chatAppId_, "") };
      inline Data& setChatAppId(string chatAppId) { DARABONBA_PTR_SET_VALUE(chatAppId_, chatAppId) };


      // chatAppKey Field Functions 
      bool hasChatAppKey() const { return this->chatAppKey_ != nullptr;};
      void deleteChatAppKey() { this->chatAppKey_ = nullptr;};
      inline string getChatAppKey() const { DARABONBA_PTR_GET_DEFAULT(chatAppKey_, "") };
      inline Data& setChatAppKey(string chatAppKey) { DARABONBA_PTR_SET_VALUE(chatAppKey_, chatAppKey) };


      // chatDeviceId Field Functions 
      bool hasChatDeviceId() const { return this->chatDeviceId_ != nullptr;};
      void deleteChatDeviceId() { this->chatDeviceId_ = nullptr;};
      inline string getChatDeviceId() const { DARABONBA_PTR_GET_DEFAULT(chatDeviceId_, "") };
      inline Data& setChatDeviceId(string chatDeviceId) { DARABONBA_PTR_SET_VALUE(chatDeviceId_, chatDeviceId) };


      // chatLoginToken Field Functions 
      bool hasChatLoginToken() const { return this->chatLoginToken_ != nullptr;};
      void deleteChatLoginToken() { this->chatLoginToken_ = nullptr;};
      inline string getChatLoginToken() const { DARABONBA_PTR_GET_DEFAULT(chatLoginToken_, "") };
      inline Data& setChatLoginToken(string chatLoginToken) { DARABONBA_PTR_SET_VALUE(chatLoginToken_, chatLoginToken) };


      // chatServerUrl Field Functions 
      bool hasChatServerUrl() const { return this->chatServerUrl_ != nullptr;};
      void deleteChatServerUrl() { this->chatServerUrl_ = nullptr;};
      inline string getChatServerUrl() const { DARABONBA_PTR_GET_DEFAULT(chatServerUrl_, "") };
      inline Data& setChatServerUrl(string chatServerUrl) { DARABONBA_PTR_SET_VALUE(chatServerUrl_, chatServerUrl) };


      // chatUserId Field Functions 
      bool hasChatUserId() const { return this->chatUserId_ != nullptr;};
      void deleteChatUserId() { this->chatUserId_ = nullptr;};
      inline string getChatUserId() const { DARABONBA_PTR_GET_DEFAULT(chatUserId_, "") };
      inline Data& setChatUserId(string chatUserId) { DARABONBA_PTR_SET_VALUE(chatUserId_, chatUserId) };


    protected:
      shared_ptr<string> chatAppId_ {};
      shared_ptr<string> chatAppKey_ {};
      shared_ptr<string> chatDeviceId_ {};
      shared_ptr<string> chatLoginToken_ {};
      shared_ptr<string> chatServerUrl_ {};
      shared_ptr<string> chatUserId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetVisitorLoginDetailsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetVisitorLoginDetailsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetVisitorLoginDetailsResponseBody::Data) };
    inline GetVisitorLoginDetailsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetVisitorLoginDetailsResponseBody::Data) };
    inline GetVisitorLoginDetailsResponseBody& setData(const GetVisitorLoginDetailsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetVisitorLoginDetailsResponseBody& setData(GetVisitorLoginDetailsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetVisitorLoginDetailsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVisitorLoginDetailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline GetVisitorLoginDetailsResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline GetVisitorLoginDetailsResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVisitorLoginDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetVisitorLoginDetailsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
