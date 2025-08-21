// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATABYTIMESTAMPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATABYTIMESTAMPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainBpsDataByTimeStampResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainBpsDataByTimeStampResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BpsDataList, bpsDataList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainBpsDataByTimeStampResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsDataList, bpsDataList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDomainBpsDataByTimeStampResponseBody() = default ;
    DescribeDomainBpsDataByTimeStampResponseBody(const DescribeDomainBpsDataByTimeStampResponseBody &) = default ;
    DescribeDomainBpsDataByTimeStampResponseBody(DescribeDomainBpsDataByTimeStampResponseBody &&) = default ;
    DescribeDomainBpsDataByTimeStampResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainBpsDataByTimeStampResponseBody() = default ;
    DescribeDomainBpsDataByTimeStampResponseBody& operator=(const DescribeDomainBpsDataByTimeStampResponseBody &) = default ;
    DescribeDomainBpsDataByTimeStampResponseBody& operator=(DescribeDomainBpsDataByTimeStampResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bpsDataList_ != nullptr
        && this->domainName_ != nullptr && this->requestId_ != nullptr && this->timeStamp_ != nullptr; };
    // bpsDataList Field Functions 
    bool hasBpsDataList() const { return this->bpsDataList_ != nullptr;};
    void deleteBpsDataList() { this->bpsDataList_ = nullptr;};
    inline const DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList & bpsDataList() const { DARABONBA_PTR_GET_CONST(bpsDataList_, DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList) };
    inline DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList bpsDataList() { DARABONBA_PTR_GET(bpsDataList_, DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList) };
    inline DescribeDomainBpsDataByTimeStampResponseBody& setBpsDataList(const DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList & bpsDataList) { DARABONBA_PTR_SET_VALUE(bpsDataList_, bpsDataList) };
    inline DescribeDomainBpsDataByTimeStampResponseBody& setBpsDataList(DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList && bpsDataList) { DARABONBA_PTR_SET_RVALUE(bpsDataList_, bpsDataList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainBpsDataByTimeStampResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainBpsDataByTimeStampResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainBpsDataByTimeStampResponseBody& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // A list of bandwidth values by ISP and region.
    std::shared_ptr<DescribeDomainBpsDataByTimeStampResponseBodyBpsDataList> bpsDataList_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The point in time.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
