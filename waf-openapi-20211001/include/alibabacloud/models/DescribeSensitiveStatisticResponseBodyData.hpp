// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVESTATISTICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVESTATISTICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveStatisticResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_TO_JSON(ClientIP, clientIP_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_FROM_JSON(ClientIP, clientIP_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
    };
    DescribeSensitiveStatisticResponseBodyData() = default ;
    DescribeSensitiveStatisticResponseBodyData(const DescribeSensitiveStatisticResponseBodyData &) = default ;
    DescribeSensitiveStatisticResponseBodyData(DescribeSensitiveStatisticResponseBodyData &&) = default ;
    DescribeSensitiveStatisticResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveStatisticResponseBodyData() = default ;
    DescribeSensitiveStatisticResponseBodyData& operator=(const DescribeSensitiveStatisticResponseBodyData &) = default ;
    DescribeSensitiveStatisticResponseBodyData& operator=(DescribeSensitiveStatisticResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiFormat_ == nullptr
        && return this->clientIP_ == nullptr && return this->count_ == nullptr && return this->matchedHost_ == nullptr && return this->sensitiveCode_ == nullptr; };
    // apiFormat Field Functions 
    bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
    void deleteApiFormat() { this->apiFormat_ = nullptr;};
    inline string apiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
    inline DescribeSensitiveStatisticResponseBodyData& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


    // clientIP Field Functions 
    bool hasClientIP() const { return this->clientIP_ != nullptr;};
    void deleteClientIP() { this->clientIP_ = nullptr;};
    inline string clientIP() const { DARABONBA_PTR_GET_DEFAULT(clientIP_, "") };
    inline DescribeSensitiveStatisticResponseBodyData& setClientIP(string clientIP) { DARABONBA_PTR_SET_VALUE(clientIP_, clientIP) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeSensitiveStatisticResponseBodyData& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // matchedHost Field Functions 
    bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
    void deleteMatchedHost() { this->matchedHost_ = nullptr;};
    inline string matchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
    inline DescribeSensitiveStatisticResponseBodyData& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


    // sensitiveCode Field Functions 
    bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
    void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
    inline string sensitiveCode() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCode_, "") };
    inline DescribeSensitiveStatisticResponseBodyData& setSensitiveCode(string sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };


  protected:
    // The API.
    std::shared_ptr<string> apiFormat_ = nullptr;
    // The IP address.
    std::shared_ptr<string> clientIP_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The domain name.
    std::shared_ptr<string> matchedHost_ = nullptr;
    // The type of the sensitive data.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported types of sensitive data.
    std::shared_ptr<string> sensitiveCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
