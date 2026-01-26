// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENVSERVICEMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENVSERVICEMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateEnvServiceMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEnvServiceMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEnvServiceMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateEnvServiceMonitorResponseBody() = default ;
    UpdateEnvServiceMonitorResponseBody(const UpdateEnvServiceMonitorResponseBody &) = default ;
    UpdateEnvServiceMonitorResponseBody(UpdateEnvServiceMonitorResponseBody &&) = default ;
    UpdateEnvServiceMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEnvServiceMonitorResponseBody() = default ;
    UpdateEnvServiceMonitorResponseBody& operator=(const UpdateEnvServiceMonitorResponseBody &) = default ;
    UpdateEnvServiceMonitorResponseBody& operator=(UpdateEnvServiceMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MatchedMsg, matchedMsg_);
        DARABONBA_PTR_TO_JSON(MatchedTargetCount, matchedTargetCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MatchedMsg, matchedMsg_);
        DARABONBA_PTR_FROM_JSON(MatchedTargetCount, matchedTargetCount_);
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
      virtual bool empty() const override { return this->matchedMsg_ == nullptr
        && this->matchedTargetCount_ == nullptr; };
      // matchedMsg Field Functions 
      bool hasMatchedMsg() const { return this->matchedMsg_ != nullptr;};
      void deleteMatchedMsg() { this->matchedMsg_ = nullptr;};
      inline string getMatchedMsg() const { DARABONBA_PTR_GET_DEFAULT(matchedMsg_, "") };
      inline Data& setMatchedMsg(string matchedMsg) { DARABONBA_PTR_SET_VALUE(matchedMsg_, matchedMsg) };


      // matchedTargetCount Field Functions 
      bool hasMatchedTargetCount() const { return this->matchedTargetCount_ != nullptr;};
      void deleteMatchedTargetCount() { this->matchedTargetCount_ = nullptr;};
      inline string getMatchedTargetCount() const { DARABONBA_PTR_GET_DEFAULT(matchedTargetCount_, "") };
      inline Data& setMatchedTargetCount(string matchedTargetCount) { DARABONBA_PTR_SET_VALUE(matchedTargetCount_, matchedTargetCount) };


    protected:
      // Indicates whether targets are matched.
      shared_ptr<string> matchedMsg_ {};
      // The number of matched targets.
      shared_ptr<string> matchedTargetCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdateEnvServiceMonitorResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateEnvServiceMonitorResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateEnvServiceMonitorResponseBody::Data) };
    inline UpdateEnvServiceMonitorResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateEnvServiceMonitorResponseBody::Data) };
    inline UpdateEnvServiceMonitorResponseBody& setData(const UpdateEnvServiceMonitorResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateEnvServiceMonitorResponseBody& setData(UpdateEnvServiceMonitorResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateEnvServiceMonitorResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateEnvServiceMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The returned struct.
    shared_ptr<UpdateEnvServiceMonitorResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
