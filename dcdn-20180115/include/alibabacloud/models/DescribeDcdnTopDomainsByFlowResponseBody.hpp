// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNTOPDOMAINSBYFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNTOPDOMAINSBYFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnTopDomainsByFlowResponseBodyTopDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnTopDomainsByFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnTopDomainsByFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_TO_JSON(DomainOnlineCount, domainOnlineCount_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TopDomains, topDomains_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnTopDomainsByFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_FROM_JSON(DomainOnlineCount, domainOnlineCount_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TopDomains, topDomains_);
    };
    DescribeDcdnTopDomainsByFlowResponseBody() = default ;
    DescribeDcdnTopDomainsByFlowResponseBody(const DescribeDcdnTopDomainsByFlowResponseBody &) = default ;
    DescribeDcdnTopDomainsByFlowResponseBody(DescribeDcdnTopDomainsByFlowResponseBody &&) = default ;
    DescribeDcdnTopDomainsByFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnTopDomainsByFlowResponseBody() = default ;
    DescribeDcdnTopDomainsByFlowResponseBody& operator=(const DescribeDcdnTopDomainsByFlowResponseBody &) = default ;
    DescribeDcdnTopDomainsByFlowResponseBody& operator=(DescribeDcdnTopDomainsByFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainCount_ != nullptr
        && this->domainOnlineCount_ != nullptr && this->endTime_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr && this->topDomains_ != nullptr; };
    // domainCount Field Functions 
    bool hasDomainCount() const { return this->domainCount_ != nullptr;};
    void deleteDomainCount() { this->domainCount_ = nullptr;};
    inline int64_t domainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0L) };
    inline DescribeDcdnTopDomainsByFlowResponseBody& setDomainCount(int64_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


    // domainOnlineCount Field Functions 
    bool hasDomainOnlineCount() const { return this->domainOnlineCount_ != nullptr;};
    void deleteDomainOnlineCount() { this->domainOnlineCount_ = nullptr;};
    inline int64_t domainOnlineCount() const { DARABONBA_PTR_GET_DEFAULT(domainOnlineCount_, 0L) };
    inline DescribeDcdnTopDomainsByFlowResponseBody& setDomainOnlineCount(int64_t domainOnlineCount) { DARABONBA_PTR_SET_VALUE(domainOnlineCount_, domainOnlineCount) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnTopDomainsByFlowResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnTopDomainsByFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnTopDomainsByFlowResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // topDomains Field Functions 
    bool hasTopDomains() const { return this->topDomains_ != nullptr;};
    void deleteTopDomains() { this->topDomains_ = nullptr;};
    inline const DescribeDcdnTopDomainsByFlowResponseBodyTopDomains & topDomains() const { DARABONBA_PTR_GET_CONST(topDomains_, DescribeDcdnTopDomainsByFlowResponseBodyTopDomains) };
    inline DescribeDcdnTopDomainsByFlowResponseBodyTopDomains topDomains() { DARABONBA_PTR_GET(topDomains_, DescribeDcdnTopDomainsByFlowResponseBodyTopDomains) };
    inline DescribeDcdnTopDomainsByFlowResponseBody& setTopDomains(const DescribeDcdnTopDomainsByFlowResponseBodyTopDomains & topDomains) { DARABONBA_PTR_SET_VALUE(topDomains_, topDomains) };
    inline DescribeDcdnTopDomainsByFlowResponseBody& setTopDomains(DescribeDcdnTopDomainsByFlowResponseBodyTopDomains && topDomains) { DARABONBA_PTR_SET_RVALUE(topDomains_, topDomains) };


  protected:
    // The total number of accelerated domains under your account.
    std::shared_ptr<int64_t> domainCount_ = nullptr;
    // The total number of accelerated domains that are in the **Enabled** state under your account.
    std::shared_ptr<int64_t> domainOnlineCount_ = nullptr;
    // The end of the reporting period.
    std::shared_ptr<string> endTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the reporting period.
    std::shared_ptr<string> startTime_ = nullptr;
    // The top N domain names ranked by network traffic.
    std::shared_ptr<DescribeDcdnTopDomainsByFlowResponseBodyTopDomains> topDomains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
