// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATAPPPHONENUMBERMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHATAPPPHONENUMBERMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetChatappPhoneNumberMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatappPhoneNumberMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatappPhoneNumberMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetChatappPhoneNumberMetricResponseBody() = default ;
    GetChatappPhoneNumberMetricResponseBody(const GetChatappPhoneNumberMetricResponseBody &) = default ;
    GetChatappPhoneNumberMetricResponseBody(GetChatappPhoneNumberMetricResponseBody &&) = default ;
    GetChatappPhoneNumberMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatappPhoneNumberMetricResponseBody() = default ;
    GetChatappPhoneNumberMetricResponseBody& operator=(const GetChatappPhoneNumberMetricResponseBody &) = default ;
    GetChatappPhoneNumberMetricResponseBody& operator=(GetChatappPhoneNumberMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeliveredCount, deliveredCount_);
        DARABONBA_PTR_TO_JSON(End, end_);
        DARABONBA_PTR_TO_JSON(Granularity, granularity_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(SentCount, sentCount_);
        DARABONBA_PTR_TO_JSON(Start, start_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeliveredCount, deliveredCount_);
        DARABONBA_PTR_FROM_JSON(End, end_);
        DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(SentCount, sentCount_);
        DARABONBA_PTR_FROM_JSON(Start, start_);
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
      virtual bool empty() const override { return this->deliveredCount_ == nullptr
        && this->end_ == nullptr && this->granularity_ == nullptr && this->phoneNumber_ == nullptr && this->sentCount_ == nullptr && this->start_ == nullptr; };
      // deliveredCount Field Functions 
      bool hasDeliveredCount() const { return this->deliveredCount_ != nullptr;};
      void deleteDeliveredCount() { this->deliveredCount_ = nullptr;};
      inline int32_t getDeliveredCount() const { DARABONBA_PTR_GET_DEFAULT(deliveredCount_, 0) };
      inline Data& setDeliveredCount(int32_t deliveredCount) { DARABONBA_PTR_SET_VALUE(deliveredCount_, deliveredCount) };


      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
      inline Data& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      // granularity Field Functions 
      bool hasGranularity() const { return this->granularity_ != nullptr;};
      void deleteGranularity() { this->granularity_ = nullptr;};
      inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
      inline Data& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Data& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // sentCount Field Functions 
      bool hasSentCount() const { return this->sentCount_ != nullptr;};
      void deleteSentCount() { this->sentCount_ = nullptr;};
      inline int32_t getSentCount() const { DARABONBA_PTR_GET_DEFAULT(sentCount_, 0) };
      inline Data& setSentCount(int32_t sentCount) { DARABONBA_PTR_SET_VALUE(sentCount_, sentCount) };


      // start Field Functions 
      bool hasStart() const { return this->start_ != nullptr;};
      void deleteStart() { this->start_ = nullptr;};
      inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
      inline Data& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    protected:
      // The number of delivered messages.
      shared_ptr<int32_t> deliveredCount_ {};
      // The end of the time range that you queried.
      shared_ptr<int64_t> end_ {};
      // The granularity of the metric.
      // 
      // Valid values:
      // 
      // *   DAILY
      // *   HALF_HOUR
      shared_ptr<string> granularity_ {};
      // The business phone number.
      shared_ptr<string> phoneNumber_ {};
      // The number of sent messages.
      shared_ptr<int32_t> sentCount_ {};
      // The beginning of the time range that you queried.
      shared_ptr<int64_t> start_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetChatappPhoneNumberMetricResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetChatappPhoneNumberMetricResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetChatappPhoneNumberMetricResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetChatappPhoneNumberMetricResponseBody::Data>) };
    inline vector<GetChatappPhoneNumberMetricResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetChatappPhoneNumberMetricResponseBody::Data>) };
    inline GetChatappPhoneNumberMetricResponseBody& setData(const vector<GetChatappPhoneNumberMetricResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetChatappPhoneNumberMetricResponseBody& setData(vector<GetChatappPhoneNumberMetricResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetChatappPhoneNumberMetricResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChatappPhoneNumberMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The value OK indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<vector<GetChatappPhoneNumberMetricResponseBody::Data>> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
