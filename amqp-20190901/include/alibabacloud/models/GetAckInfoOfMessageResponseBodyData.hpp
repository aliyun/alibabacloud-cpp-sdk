// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACKINFOOFMESSAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETACKINFOOFMESSAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetAckInfoOfMessageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAckInfoOfMessageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AckErrorInfo, ackErrorInfo_);
      DARABONBA_PTR_TO_JSON(AckResult, ackResult_);
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_ANY_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetAckInfoOfMessageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AckErrorInfo, ackErrorInfo_);
      DARABONBA_PTR_FROM_JSON(AckResult, ackResult_);
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_ANY_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    GetAckInfoOfMessageResponseBodyData() = default ;
    GetAckInfoOfMessageResponseBodyData(const GetAckInfoOfMessageResponseBodyData &) = default ;
    GetAckInfoOfMessageResponseBodyData(GetAckInfoOfMessageResponseBodyData &&) = default ;
    GetAckInfoOfMessageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAckInfoOfMessageResponseBodyData() = default ;
    GetAckInfoOfMessageResponseBodyData& operator=(const GetAckInfoOfMessageResponseBodyData &) = default ;
    GetAckInfoOfMessageResponseBodyData& operator=(GetAckInfoOfMessageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ackErrorInfo_ == nullptr
        && return this->ackResult_ == nullptr && return this->action_ == nullptr && return this->code_ == nullptr && return this->property_ == nullptr && return this->timeStamp_ == nullptr; };
    // ackErrorInfo Field Functions 
    bool hasAckErrorInfo() const { return this->ackErrorInfo_ != nullptr;};
    void deleteAckErrorInfo() { this->ackErrorInfo_ = nullptr;};
    inline string ackErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(ackErrorInfo_, "") };
    inline GetAckInfoOfMessageResponseBodyData& setAckErrorInfo(string ackErrorInfo) { DARABONBA_PTR_SET_VALUE(ackErrorInfo_, ackErrorInfo) };


    // ackResult Field Functions 
    bool hasAckResult() const { return this->ackResult_ != nullptr;};
    void deleteAckResult() { this->ackResult_ = nullptr;};
    inline string ackResult() const { DARABONBA_PTR_GET_DEFAULT(ackResult_, "") };
    inline GetAckInfoOfMessageResponseBodyData& setAckResult(string ackResult) { DARABONBA_PTR_SET_VALUE(ackResult_, ackResult) };


    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetAckInfoOfMessageResponseBodyData& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAckInfoOfMessageResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline     const Darabonba::Json & property() const { DARABONBA_GET(property_) };
    Darabonba::Json & property() { DARABONBA_GET(property_) };
    inline GetAckInfoOfMessageResponseBodyData& setProperty(const Darabonba::Json & property) { DARABONBA_SET_VALUE(property_, property) };
    inline GetAckInfoOfMessageResponseBodyData& setProperty(Darabonba::Json & property) { DARABONBA_SET_RVALUE(property_, property) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline GetAckInfoOfMessageResponseBodyData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    std::shared_ptr<string> ackErrorInfo_ = nullptr;
    std::shared_ptr<string> ackResult_ = nullptr;
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    Darabonba::Json property_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
