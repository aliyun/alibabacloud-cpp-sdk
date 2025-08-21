// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINMAX95BPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINMAX95BPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainMax95BpsDataResponseBodyDetailData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainMax95BpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainMax95BpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DetailData, detailData_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomesticMax95Bps, domesticMax95Bps_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Max95Bps, max95Bps_);
      DARABONBA_PTR_TO_JSON(OverseasMax95Bps, overseasMax95Bps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainMax95BpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailData, detailData_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomesticMax95Bps, domesticMax95Bps_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Max95Bps, max95Bps_);
      DARABONBA_PTR_FROM_JSON(OverseasMax95Bps, overseasMax95Bps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainMax95BpsDataResponseBody() = default ;
    DescribeDomainMax95BpsDataResponseBody(const DescribeDomainMax95BpsDataResponseBody &) = default ;
    DescribeDomainMax95BpsDataResponseBody(DescribeDomainMax95BpsDataResponseBody &&) = default ;
    DescribeDomainMax95BpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainMax95BpsDataResponseBody() = default ;
    DescribeDomainMax95BpsDataResponseBody& operator=(const DescribeDomainMax95BpsDataResponseBody &) = default ;
    DescribeDomainMax95BpsDataResponseBody& operator=(DescribeDomainMax95BpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detailData_ != nullptr
        && this->domainName_ != nullptr && this->domesticMax95Bps_ != nullptr && this->endTime_ != nullptr && this->max95Bps_ != nullptr && this->overseasMax95Bps_ != nullptr
        && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // detailData Field Functions 
    bool hasDetailData() const { return this->detailData_ != nullptr;};
    void deleteDetailData() { this->detailData_ = nullptr;};
    inline const DescribeDomainMax95BpsDataResponseBodyDetailData & detailData() const { DARABONBA_PTR_GET_CONST(detailData_, DescribeDomainMax95BpsDataResponseBodyDetailData) };
    inline DescribeDomainMax95BpsDataResponseBodyDetailData detailData() { DARABONBA_PTR_GET(detailData_, DescribeDomainMax95BpsDataResponseBodyDetailData) };
    inline DescribeDomainMax95BpsDataResponseBody& setDetailData(const DescribeDomainMax95BpsDataResponseBodyDetailData & detailData) { DARABONBA_PTR_SET_VALUE(detailData_, detailData) };
    inline DescribeDomainMax95BpsDataResponseBody& setDetailData(DescribeDomainMax95BpsDataResponseBodyDetailData && detailData) { DARABONBA_PTR_SET_RVALUE(detailData_, detailData) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainMax95BpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domesticMax95Bps Field Functions 
    bool hasDomesticMax95Bps() const { return this->domesticMax95Bps_ != nullptr;};
    void deleteDomesticMax95Bps() { this->domesticMax95Bps_ = nullptr;};
    inline string domesticMax95Bps() const { DARABONBA_PTR_GET_DEFAULT(domesticMax95Bps_, "") };
    inline DescribeDomainMax95BpsDataResponseBody& setDomesticMax95Bps(string domesticMax95Bps) { DARABONBA_PTR_SET_VALUE(domesticMax95Bps_, domesticMax95Bps) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainMax95BpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // max95Bps Field Functions 
    bool hasMax95Bps() const { return this->max95Bps_ != nullptr;};
    void deleteMax95Bps() { this->max95Bps_ = nullptr;};
    inline string max95Bps() const { DARABONBA_PTR_GET_DEFAULT(max95Bps_, "") };
    inline DescribeDomainMax95BpsDataResponseBody& setMax95Bps(string max95Bps) { DARABONBA_PTR_SET_VALUE(max95Bps_, max95Bps) };


    // overseasMax95Bps Field Functions 
    bool hasOverseasMax95Bps() const { return this->overseasMax95Bps_ != nullptr;};
    void deleteOverseasMax95Bps() { this->overseasMax95Bps_ = nullptr;};
    inline string overseasMax95Bps() const { DARABONBA_PTR_GET_DEFAULT(overseasMax95Bps_, "") };
    inline DescribeDomainMax95BpsDataResponseBody& setOverseasMax95Bps(string overseasMax95Bps) { DARABONBA_PTR_SET_VALUE(overseasMax95Bps_, overseasMax95Bps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainMax95BpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainMax95BpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Details of the 95th percentile bandwidth.
    std::shared_ptr<DescribeDomainMax95BpsDataResponseBodyDetailData> detailData_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The 95th percentile bandwidth in the Chinese mainland.
    std::shared_ptr<string> domesticMax95Bps_ = nullptr;
    // The end of the time range for which the data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The 95th percentile bandwidth.
    std::shared_ptr<string> max95Bps_ = nullptr;
    // The 95th percentile bandwidth outside the Chinese mainland.
    std::shared_ptr<string> overseasMax95Bps_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range for which the data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
