// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALTIMECONCURRENCYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREALTIMECONCURRENCYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class GetRealTimeConcurrencyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealTimeConcurrencyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_TO_JSON(RealTimeConcurrency, realTimeConcurrency_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealTimeConcurrencyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_FROM_JSON(RealTimeConcurrency, realTimeConcurrency_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    GetRealTimeConcurrencyResponseBody() = default ;
    GetRealTimeConcurrencyResponseBody(const GetRealTimeConcurrencyResponseBody &) = default ;
    GetRealTimeConcurrencyResponseBody(GetRealTimeConcurrencyResponseBody &&) = default ;
    GetRealTimeConcurrencyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealTimeConcurrencyResponseBody() = default ;
    GetRealTimeConcurrencyResponseBody& operator=(const GetRealTimeConcurrencyResponseBody &) = default ;
    GetRealTimeConcurrencyResponseBody& operator=(GetRealTimeConcurrencyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxConcurrency_ == nullptr
        && this->realTimeConcurrency_ == nullptr && this->requestId_ == nullptr && this->timestamp_ == nullptr; };
    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int64_t getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0L) };
    inline GetRealTimeConcurrencyResponseBody& setMaxConcurrency(int64_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // realTimeConcurrency Field Functions 
    bool hasRealTimeConcurrency() const { return this->realTimeConcurrency_ != nullptr;};
    void deleteRealTimeConcurrency() { this->realTimeConcurrency_ = nullptr;};
    inline int64_t getRealTimeConcurrency() const { DARABONBA_PTR_GET_DEFAULT(realTimeConcurrency_, 0L) };
    inline GetRealTimeConcurrencyResponseBody& setRealTimeConcurrency(int64_t realTimeConcurrency) { DARABONBA_PTR_SET_VALUE(realTimeConcurrency_, realTimeConcurrency) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRealTimeConcurrencyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetRealTimeConcurrencyResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    shared_ptr<int64_t> maxConcurrency_ {};
    shared_ptr<int64_t> realTimeConcurrency_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
