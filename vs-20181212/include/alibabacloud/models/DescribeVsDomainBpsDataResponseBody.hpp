// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINBPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BpsDataPerInterval, bpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsDataPerInterval, bpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeVsDomainBpsDataResponseBody() = default ;
    DescribeVsDomainBpsDataResponseBody(const DescribeVsDomainBpsDataResponseBody &) = default ;
    DescribeVsDomainBpsDataResponseBody(DescribeVsDomainBpsDataResponseBody &&) = default ;
    DescribeVsDomainBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainBpsDataResponseBody() = default ;
    DescribeVsDomainBpsDataResponseBody& operator=(const DescribeVsDomainBpsDataResponseBody &) = default ;
    DescribeVsDomainBpsDataResponseBody& operator=(DescribeVsDomainBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bpsDataPerInterval_ != nullptr
        && this->dataInterval_ != nullptr && this->domainName_ != nullptr && this->endTime_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // bpsDataPerInterval Field Functions 
    bool hasBpsDataPerInterval() const { return this->bpsDataPerInterval_ != nullptr;};
    void deleteBpsDataPerInterval() { this->bpsDataPerInterval_ = nullptr;};
    inline const DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval & bpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(bpsDataPerInterval_, DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval) };
    inline DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval bpsDataPerInterval() { DARABONBA_PTR_GET(bpsDataPerInterval_, DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval) };
    inline DescribeVsDomainBpsDataResponseBody& setBpsDataPerInterval(const DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval & bpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(bpsDataPerInterval_, bpsDataPerInterval) };
    inline DescribeVsDomainBpsDataResponseBody& setBpsDataPerInterval(DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval && bpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(bpsDataPerInterval_, bpsDataPerInterval) };


    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVsDomainBpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVsDomainBpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVsDomainBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDomainBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVsDomainBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<DescribeVsDomainBpsDataResponseBodyBpsDataPerInterval> bpsDataPerInterval_ = nullptr;
    std::shared_ptr<string> dataInterval_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
