// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEREQUESTLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEREQUESTLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveRequestLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveRequestLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveRequestLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSensitiveRequestLogResponseBody() = default ;
    DescribeSensitiveRequestLogResponseBody(const DescribeSensitiveRequestLogResponseBody &) = default ;
    DescribeSensitiveRequestLogResponseBody(DescribeSensitiveRequestLogResponseBody &&) = default ;
    DescribeSensitiveRequestLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveRequestLogResponseBody() = default ;
    DescribeSensitiveRequestLogResponseBody& operator=(const DescribeSensitiveRequestLogResponseBody &) = default ;
    DescribeSensitiveRequestLogResponseBody& operator=(DescribeSensitiveRequestLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Account, account_);
        DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
        DARABONBA_PTR_TO_JSON(ApiId, apiId_);
        DARABONBA_PTR_TO_JSON(ClientIP, clientIP_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
        DARABONBA_PTR_TO_JSON(RemoteCountryId, remoteCountryId_);
        DARABONBA_PTR_TO_JSON(RequestTime, requestTime_);
        DARABONBA_PTR_TO_JSON(SensitiveList, sensitiveList_);
        DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
        DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
        DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
        DARABONBA_PTR_FROM_JSON(ClientIP, clientIP_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
        DARABONBA_PTR_FROM_JSON(RemoteCountryId, remoteCountryId_);
        DARABONBA_PTR_FROM_JSON(RequestTime, requestTime_);
        DARABONBA_PTR_FROM_JSON(SensitiveList, sensitiveList_);
        DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
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
      virtual bool empty() const override { return this->account_ == nullptr
        && this->apiFormat_ == nullptr && this->apiId_ == nullptr && this->clientIP_ == nullptr && this->count_ == nullptr && this->matchedHost_ == nullptr
        && this->remoteCountryId_ == nullptr && this->requestTime_ == nullptr && this->sensitiveList_ == nullptr && this->traceId_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
      inline Data& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


      // apiFormat Field Functions 
      bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
      void deleteApiFormat() { this->apiFormat_ = nullptr;};
      inline string getApiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
      inline Data& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


      // apiId Field Functions 
      bool hasApiId() const { return this->apiId_ != nullptr;};
      void deleteApiId() { this->apiId_ = nullptr;};
      inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
      inline Data& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


      // clientIP Field Functions 
      bool hasClientIP() const { return this->clientIP_ != nullptr;};
      void deleteClientIP() { this->clientIP_ = nullptr;};
      inline string getClientIP() const { DARABONBA_PTR_GET_DEFAULT(clientIP_, "") };
      inline Data& setClientIP(string clientIP) { DARABONBA_PTR_SET_VALUE(clientIP_, clientIP) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Data& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // matchedHost Field Functions 
      bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
      void deleteMatchedHost() { this->matchedHost_ = nullptr;};
      inline string getMatchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
      inline Data& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


      // remoteCountryId Field Functions 
      bool hasRemoteCountryId() const { return this->remoteCountryId_ != nullptr;};
      void deleteRemoteCountryId() { this->remoteCountryId_ = nullptr;};
      inline string getRemoteCountryId() const { DARABONBA_PTR_GET_DEFAULT(remoteCountryId_, "") };
      inline Data& setRemoteCountryId(string remoteCountryId) { DARABONBA_PTR_SET_VALUE(remoteCountryId_, remoteCountryId) };


      // requestTime Field Functions 
      bool hasRequestTime() const { return this->requestTime_ != nullptr;};
      void deleteRequestTime() { this->requestTime_ = nullptr;};
      inline int64_t getRequestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, 0L) };
      inline Data& setRequestTime(int64_t requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


      // sensitiveList Field Functions 
      bool hasSensitiveList() const { return this->sensitiveList_ != nullptr;};
      void deleteSensitiveList() { this->sensitiveList_ = nullptr;};
      inline string getSensitiveList() const { DARABONBA_PTR_GET_DEFAULT(sensitiveList_, "") };
      inline Data& setSensitiveList(string sensitiveList) { DARABONBA_PTR_SET_VALUE(sensitiveList_, sensitiveList) };


      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline Data& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    protected:
      shared_ptr<string> account_ {};
      // The API.
      shared_ptr<string> apiFormat_ {};
      // The ID of the API.
      shared_ptr<string> apiId_ {};
      // The IP address.
      shared_ptr<string> clientIP_ {};
      // The number of sensitive data records involved in cross-border data transfer.
      shared_ptr<int64_t> count_ {};
      // The domain name of the API.
      shared_ptr<string> matchedHost_ {};
      // IP region, formatted as a region code.
      shared_ptr<string> remoteCountryId_ {};
      // The time when the request was initiated. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      shared_ptr<int64_t> requestTime_ {};
      // The details of sensitive data. The value is a string that consists of a JSON struct. The JSON struct contains key-value pairs. In a key-value pair, a key indicates the identifier of a sensitive data type, including built-in and custom types, and a value indicates specific sensitive data.
      // 
      // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported sensitive data types.
      shared_ptr<string> sensitiveList_ {};
      // The trace ID.
      shared_ptr<string> traceId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeSensitiveRequestLogResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeSensitiveRequestLogResponseBody::Data>) };
    inline vector<DescribeSensitiveRequestLogResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeSensitiveRequestLogResponseBody::Data>) };
    inline DescribeSensitiveRequestLogResponseBody& setData(const vector<DescribeSensitiveRequestLogResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSensitiveRequestLogResponseBody& setData(vector<DescribeSensitiveRequestLogResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSensitiveRequestLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSensitiveRequestLogResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The access logs.
    shared_ptr<vector<DescribeSensitiveRequestLogResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
