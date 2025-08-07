// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEREQUESTLOGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEREQUESTLOGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveRequestLogResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveRequestLogResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveRequestLogResponseBodyData& obj) { 
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
    DescribeSensitiveRequestLogResponseBodyData() = default ;
    DescribeSensitiveRequestLogResponseBodyData(const DescribeSensitiveRequestLogResponseBodyData &) = default ;
    DescribeSensitiveRequestLogResponseBodyData(DescribeSensitiveRequestLogResponseBodyData &&) = default ;
    DescribeSensitiveRequestLogResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveRequestLogResponseBodyData() = default ;
    DescribeSensitiveRequestLogResponseBodyData& operator=(const DescribeSensitiveRequestLogResponseBodyData &) = default ;
    DescribeSensitiveRequestLogResponseBodyData& operator=(DescribeSensitiveRequestLogResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiFormat_ != nullptr
        && this->apiId_ != nullptr && this->clientIP_ != nullptr && this->count_ != nullptr && this->matchedHost_ != nullptr && this->remoteCountryId_ != nullptr
        && this->requestTime_ != nullptr && this->sensitiveList_ != nullptr && this->traceId_ != nullptr; };
    // apiFormat Field Functions 
    bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
    void deleteApiFormat() { this->apiFormat_ = nullptr;};
    inline string apiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
    inline DescribeSensitiveRequestLogResponseBodyData& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeSensitiveRequestLogResponseBodyData& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // clientIP Field Functions 
    bool hasClientIP() const { return this->clientIP_ != nullptr;};
    void deleteClientIP() { this->clientIP_ = nullptr;};
    inline string clientIP() const { DARABONBA_PTR_GET_DEFAULT(clientIP_, "") };
    inline DescribeSensitiveRequestLogResponseBodyData& setClientIP(string clientIP) { DARABONBA_PTR_SET_VALUE(clientIP_, clientIP) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeSensitiveRequestLogResponseBodyData& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // matchedHost Field Functions 
    bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
    void deleteMatchedHost() { this->matchedHost_ = nullptr;};
    inline string matchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
    inline DescribeSensitiveRequestLogResponseBodyData& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


    // remoteCountryId Field Functions 
    bool hasRemoteCountryId() const { return this->remoteCountryId_ != nullptr;};
    void deleteRemoteCountryId() { this->remoteCountryId_ = nullptr;};
    inline string remoteCountryId() const { DARABONBA_PTR_GET_DEFAULT(remoteCountryId_, "") };
    inline DescribeSensitiveRequestLogResponseBodyData& setRemoteCountryId(string remoteCountryId) { DARABONBA_PTR_SET_VALUE(remoteCountryId_, remoteCountryId) };


    // requestTime Field Functions 
    bool hasRequestTime() const { return this->requestTime_ != nullptr;};
    void deleteRequestTime() { this->requestTime_ = nullptr;};
    inline int64_t requestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, 0L) };
    inline DescribeSensitiveRequestLogResponseBodyData& setRequestTime(int64_t requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


    // sensitiveList Field Functions 
    bool hasSensitiveList() const { return this->sensitiveList_ != nullptr;};
    void deleteSensitiveList() { this->sensitiveList_ = nullptr;};
    inline string sensitiveList() const { DARABONBA_PTR_GET_DEFAULT(sensitiveList_, "") };
    inline DescribeSensitiveRequestLogResponseBodyData& setSensitiveList(string sensitiveList) { DARABONBA_PTR_SET_VALUE(sensitiveList_, sensitiveList) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeSensitiveRequestLogResponseBodyData& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The API.
    std::shared_ptr<string> apiFormat_ = nullptr;
    // The ID of the API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The IP address.
    std::shared_ptr<string> clientIP_ = nullptr;
    // The number of sensitive data records involved in cross-border data transfer.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The domain name of the API.
    std::shared_ptr<string> matchedHost_ = nullptr;
    // IP region, formatted as a region code.
    std::shared_ptr<string> remoteCountryId_ = nullptr;
    // The time when the request was initiated. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> requestTime_ = nullptr;
    // The details of sensitive data. The value is a string that consists of a JSON struct. The JSON struct contains key-value pairs. In a key-value pair, a key indicates the identifier of a sensitive data type, including built-in and custom types, and a value indicates specific sensitive data.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported sensitive data types.
    std::shared_ptr<string> sensitiveList_ = nullptr;
    // The trace ID.
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
