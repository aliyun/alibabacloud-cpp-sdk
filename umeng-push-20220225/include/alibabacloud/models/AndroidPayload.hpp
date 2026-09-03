// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANDROIDPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_ANDROIDPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Body.hpp>
#include <alibabacloud/models/Message2ThirdChannel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class AndroidPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AndroidPayload& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(displayType, displayType_);
      DARABONBA_ANY_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(message2ThirdChannel, message2ThirdChannel_);
    };
    friend void from_json(const Darabonba::Json& j, AndroidPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(displayType, displayType_);
      DARABONBA_ANY_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(message2ThirdChannel, message2ThirdChannel_);
    };
    AndroidPayload() = default ;
    AndroidPayload(const AndroidPayload &) = default ;
    AndroidPayload(AndroidPayload &&) = default ;
    AndroidPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AndroidPayload() = default ;
    AndroidPayload& operator=(const AndroidPayload &) = default ;
    AndroidPayload& operator=(AndroidPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->displayType_ == nullptr && this->extra_ == nullptr && this->message2ThirdChannel_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, Body) };
    inline Body getBody() { DARABONBA_PTR_GET(body_, Body) };
    inline AndroidPayload& setBody(const Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AndroidPayload& setBody(Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // displayType Field Functions 
    bool hasDisplayType() const { return this->displayType_ != nullptr;};
    void deleteDisplayType() { this->displayType_ = nullptr;};
    inline string getDisplayType() const { DARABONBA_PTR_GET_DEFAULT(displayType_, "") };
    inline AndroidPayload& setDisplayType(string displayType) { DARABONBA_PTR_SET_VALUE(displayType_, displayType) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline     const Darabonba::Json & getExtra() const { DARABONBA_GET(extra_) };
    Darabonba::Json & getExtra() { DARABONBA_GET(extra_) };
    inline AndroidPayload& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
    inline AndroidPayload& setExtra(Darabonba::Json && extra) { DARABONBA_SET_RVALUE(extra_, extra) };


    // message2ThirdChannel Field Functions 
    bool hasMessage2ThirdChannel() const { return this->message2ThirdChannel_ != nullptr;};
    void deleteMessage2ThirdChannel() { this->message2ThirdChannel_ = nullptr;};
    inline const Message2ThirdChannel & getMessage2ThirdChannel() const { DARABONBA_PTR_GET_CONST(message2ThirdChannel_, Message2ThirdChannel) };
    inline Message2ThirdChannel getMessage2ThirdChannel() { DARABONBA_PTR_GET(message2ThirdChannel_, Message2ThirdChannel) };
    inline AndroidPayload& setMessage2ThirdChannel(const Message2ThirdChannel & message2ThirdChannel) { DARABONBA_PTR_SET_VALUE(message2ThirdChannel_, message2ThirdChannel) };
    inline AndroidPayload& setMessage2ThirdChannel(Message2ThirdChannel && message2ThirdChannel) { DARABONBA_PTR_SET_RVALUE(message2ThirdChannel_, message2ThirdChannel) };


  protected:
    shared_ptr<Body> body_ {};
    shared_ptr<string> displayType_ {};
    Darabonba::Json extra_ {};
    shared_ptr<Message2ThirdChannel> message2ThirdChannel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
