// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYATTACKCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYATTACKCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryAttackCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAttackCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAttackCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAttackCountResponseBody() = default ;
    QueryAttackCountResponseBody(const QueryAttackCountResponseBody &) = default ;
    QueryAttackCountResponseBody(QueryAttackCountResponseBody &&) = default ;
    QueryAttackCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAttackCountResponseBody() = default ;
    QueryAttackCountResponseBody& operator=(const QueryAttackCountResponseBody &) = default ;
    QueryAttackCountResponseBody& operator=(QueryAttackCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
        DARABONBA_PTR_TO_JSON(TacticId, tacticId_);
        DARABONBA_PTR_TO_JSON(TacticType, tacticType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
        DARABONBA_PTR_FROM_JSON(TacticId, tacticId_);
        DARABONBA_PTR_FROM_JSON(TacticType, tacticType_);
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
      virtual bool empty() const override { return this->eventCount_ == nullptr
        && this->tacticId_ == nullptr && this->tacticType_ == nullptr; };
      // eventCount Field Functions 
      bool hasEventCount() const { return this->eventCount_ != nullptr;};
      void deleteEventCount() { this->eventCount_ = nullptr;};
      inline int32_t getEventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0) };
      inline Data& setEventCount(int32_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


      // tacticId Field Functions 
      bool hasTacticId() const { return this->tacticId_ != nullptr;};
      void deleteTacticId() { this->tacticId_ = nullptr;};
      inline string getTacticId() const { DARABONBA_PTR_GET_DEFAULT(tacticId_, "") };
      inline Data& setTacticId(string tacticId) { DARABONBA_PTR_SET_VALUE(tacticId_, tacticId) };


      // tacticType Field Functions 
      bool hasTacticType() const { return this->tacticType_ != nullptr;};
      void deleteTacticType() { this->tacticType_ = nullptr;};
      inline string getTacticType() const { DARABONBA_PTR_GET_DEFAULT(tacticType_, "") };
      inline Data& setTacticType(string tacticType) { DARABONBA_PTR_SET_VALUE(tacticType_, tacticType) };


    protected:
      // The number of times that the alert is triggered.
      shared_ptr<int32_t> eventCount_ {};
      // The stage ID of the ATT\\&CK attack.
      shared_ptr<string> tacticId_ {};
      // The type of stage of the ATT\\&CK attack.
      shared_ptr<string> tacticType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAttackCountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline QueryAttackCountResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryAttackCountResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryAttackCountResponseBody::Data>) };
    inline vector<QueryAttackCountResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryAttackCountResponseBody::Data>) };
    inline QueryAttackCountResponseBody& setData(const vector<QueryAttackCountResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAttackCountResponseBody& setData(vector<QueryAttackCountResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAttackCountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAttackCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAttackCountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // An array that consists of the numbers of alert events in different attack phases.
    shared_ptr<vector<QueryAttackCountResponseBody::Data>> data_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether exceptions are handled. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
