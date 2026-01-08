// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATAPPPHONENUMBERSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHATAPPPHONENUMBERSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetChatappPhoneNumberSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatappPhoneNumberSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatappPhoneNumberSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetChatappPhoneNumberSettingResponseBody() = default ;
    GetChatappPhoneNumberSettingResponseBody(const GetChatappPhoneNumberSettingResponseBody &) = default ;
    GetChatappPhoneNumberSettingResponseBody(GetChatappPhoneNumberSettingResponseBody &&) = default ;
    GetChatappPhoneNumberSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatappPhoneNumberSettingResponseBody() = default ;
    GetChatappPhoneNumberSettingResponseBody& operator=(const GetChatappPhoneNumberSettingResponseBody &) = default ;
    GetChatappPhoneNumberSettingResponseBody& operator=(GetChatappPhoneNumberSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(MarketingPaused, marketingPaused_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(MarketingPaused, marketingPaused_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->marketingPaused_ == nullptr
        && this->phoneNumber_ == nullptr; };
      // marketingPaused Field Functions 
      bool hasMarketingPaused() const { return this->marketingPaused_ != nullptr;};
      void deleteMarketingPaused() { this->marketingPaused_ = nullptr;};
      inline string getMarketingPaused() const { DARABONBA_PTR_GET_DEFAULT(marketingPaused_, "") };
      inline Model& setMarketingPaused(string marketingPaused) { DARABONBA_PTR_SET_VALUE(marketingPaused_, marketingPaused) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Model& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    protected:
      shared_ptr<string> marketingPaused_ {};
      shared_ptr<string> phoneNumber_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetChatappPhoneNumberSettingResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetChatappPhoneNumberSettingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetChatappPhoneNumberSettingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const GetChatappPhoneNumberSettingResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, GetChatappPhoneNumberSettingResponseBody::Model) };
    inline GetChatappPhoneNumberSettingResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, GetChatappPhoneNumberSettingResponseBody::Model) };
    inline GetChatappPhoneNumberSettingResponseBody& setModel(const GetChatappPhoneNumberSettingResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline GetChatappPhoneNumberSettingResponseBody& setModel(GetChatappPhoneNumberSettingResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChatappPhoneNumberSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetChatappPhoneNumberSettingResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetChatappPhoneNumberSettingResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
