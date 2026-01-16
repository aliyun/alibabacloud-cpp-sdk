// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPENSTOREUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPENSTOREUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetOpenStoreUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpenStoreUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpenStoreUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetOpenStoreUsageResponseBody() = default ;
    GetOpenStoreUsageResponseBody(const GetOpenStoreUsageResponseBody &) = default ;
    GetOpenStoreUsageResponseBody(GetOpenStoreUsageResponseBody &&) = default ;
    GetOpenStoreUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpenStoreUsageResponseBody() = default ;
    GetOpenStoreUsageResponseBody& operator=(const GetOpenStoreUsageResponseBody &) = default ;
    GetOpenStoreUsageResponseBody& operator=(GetOpenStoreUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(currentUsage, currentUsage_);
        DARABONBA_PTR_TO_JSON(lastDayUsage, lastDayUsage_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(currentUsage, currentUsage_);
        DARABONBA_PTR_FROM_JSON(lastDayUsage, lastDayUsage_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentUsage_ == nullptr
        && this->lastDayUsage_ == nullptr; };
      // currentUsage Field Functions 
      bool hasCurrentUsage() const { return this->currentUsage_ != nullptr;};
      void deleteCurrentUsage() { this->currentUsage_ = nullptr;};
      inline int64_t getCurrentUsage() const { DARABONBA_PTR_GET_DEFAULT(currentUsage_, 0L) };
      inline Result& setCurrentUsage(int64_t currentUsage) { DARABONBA_PTR_SET_VALUE(currentUsage_, currentUsage) };


      // lastDayUsage Field Functions 
      bool hasLastDayUsage() const { return this->lastDayUsage_ != nullptr;};
      void deleteLastDayUsage() { this->lastDayUsage_ = nullptr;};
      inline int64_t getLastDayUsage() const { DARABONBA_PTR_GET_DEFAULT(lastDayUsage_, 0L) };
      inline Result& setLastDayUsage(int64_t lastDayUsage) { DARABONBA_PTR_SET_VALUE(lastDayUsage_, lastDayUsage) };


    protected:
      // The current OpenStore storage capacity (estimated value based on actual indexes). Unit: Byte.
      shared_ptr<int64_t> currentUsage_ {};
      // The storage capacity of OpenStore yesterday. Unit: bytes.
      shared_ptr<int64_t> lastDayUsage_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOpenStoreUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetOpenStoreUsageResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetOpenStoreUsageResponseBody::Result) };
    inline GetOpenStoreUsageResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetOpenStoreUsageResponseBody::Result) };
    inline GetOpenStoreUsageResponseBody& setResult(const GetOpenStoreUsageResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetOpenStoreUsageResponseBody& setResult(GetOpenStoreUsageResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The current request result.
    shared_ptr<GetOpenStoreUsageResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
