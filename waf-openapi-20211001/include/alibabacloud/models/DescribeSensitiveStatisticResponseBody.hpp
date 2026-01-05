// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVESTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVESTATISTICRESPONSEBODY_HPP_
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
  class DescribeSensitiveStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSensitiveStatisticResponseBody() = default ;
    DescribeSensitiveStatisticResponseBody(const DescribeSensitiveStatisticResponseBody &) = default ;
    DescribeSensitiveStatisticResponseBody(DescribeSensitiveStatisticResponseBody &&) = default ;
    DescribeSensitiveStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveStatisticResponseBody() = default ;
    DescribeSensitiveStatisticResponseBody& operator=(const DescribeSensitiveStatisticResponseBody &) = default ;
    DescribeSensitiveStatisticResponseBody& operator=(DescribeSensitiveStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
        DARABONBA_PTR_TO_JSON(ClientIP, clientIP_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
        DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
        DARABONBA_PTR_FROM_JSON(ClientIP, clientIP_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
        DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
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
      virtual bool empty() const override { return this->apiFormat_ == nullptr
        && this->clientIP_ == nullptr && this->count_ == nullptr && this->matchedHost_ == nullptr && this->sensitiveCode_ == nullptr; };
      // apiFormat Field Functions 
      bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
      void deleteApiFormat() { this->apiFormat_ = nullptr;};
      inline string getApiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
      inline Data& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


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


      // sensitiveCode Field Functions 
      bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
      void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
      inline string getSensitiveCode() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCode_, "") };
      inline Data& setSensitiveCode(string sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };


    protected:
      // The API.
      shared_ptr<string> apiFormat_ {};
      // The IP address.
      shared_ptr<string> clientIP_ {};
      // The number of entries returned.
      shared_ptr<int64_t> count_ {};
      // The domain name.
      shared_ptr<string> matchedHost_ {};
      // The type of the sensitive data.
      // 
      // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported types of sensitive data.
      shared_ptr<string> sensitiveCode_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeSensitiveStatisticResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeSensitiveStatisticResponseBody::Data>) };
    inline vector<DescribeSensitiveStatisticResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeSensitiveStatisticResponseBody::Data>) };
    inline DescribeSensitiveStatisticResponseBody& setData(const vector<DescribeSensitiveStatisticResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSensitiveStatisticResponseBody& setData(vector<DescribeSensitiveStatisticResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSensitiveStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSensitiveStatisticResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The statistics of the sensitive data.
    shared_ptr<vector<DescribeSensitiveStatisticResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
