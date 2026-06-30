// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MULTIMODALGUARDWS_MODELS_ACKMESSAGEEVENT_HPP_
#define ALIBABACLOUD_MULTIMODALGUARDWS_MODELS_ACKMESSAGEEVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace MultiModalGuardWs
{
namespace Models
{
  class AckMessageEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AckMessageEvent& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, AckMessageEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    AckMessageEvent() = default ;
    AckMessageEvent(const AckMessageEvent &) = default ;
    AckMessageEvent(AckMessageEvent &&) = default ;
    AckMessageEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AckMessageEvent() = default ;
    AckMessageEvent& operator=(const AckMessageEvent &) = default ;
    AckMessageEvent& operator=(AckMessageEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Triggered, triggered_);
        DARABONBA_PTR_TO_JSON(MsgId, msgId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Triggered, triggered_);
        DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
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
      virtual bool empty() const override { return this->triggered_ == nullptr
        && this->msgId_ == nullptr; };
      // triggered Field Functions 
      bool hasTriggered() const { return this->triggered_ != nullptr;};
      void deleteTriggered() { this->triggered_ = nullptr;};
      inline bool getTriggered() const { DARABONBA_PTR_GET_DEFAULT(triggered_, false) };
      inline Data& setTriggered(bool triggered) { DARABONBA_PTR_SET_VALUE(triggered_, triggered) };


      // msgId Field Functions 
      bool hasMsgId() const { return this->msgId_ != nullptr;};
      void deleteMsgId() { this->msgId_ = nullptr;};
      inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
      inline Data& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


    protected:
      shared_ptr<bool> triggered_ {};
      shared_ptr<string> msgId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->data_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline AckMessageEvent& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AckMessageEvent& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AckMessageEvent::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AckMessageEvent::Data) };
    inline AckMessageEvent::Data getData() { DARABONBA_PTR_GET(data_, AckMessageEvent::Data) };
    inline AckMessageEvent& setData(const AckMessageEvent::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AckMessageEvent& setData(AckMessageEvent::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<AckMessageEvent::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
} // namespace MultiModalGuardWs
#endif
