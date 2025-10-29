// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUBLISHERRORCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUBLISHERRORCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainPublishErrorCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainPublishErrorCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RealTimeCodeData, realTimeCodeData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainPublishErrorCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RealTimeCodeData, realTimeCodeData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainPublishErrorCodeResponseBody() = default ;
    DescribeLiveDomainPublishErrorCodeResponseBody(const DescribeLiveDomainPublishErrorCodeResponseBody &) = default ;
    DescribeLiveDomainPublishErrorCodeResponseBody(DescribeLiveDomainPublishErrorCodeResponseBody &&) = default ;
    DescribeLiveDomainPublishErrorCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainPublishErrorCodeResponseBody() = default ;
    DescribeLiveDomainPublishErrorCodeResponseBody& operator=(const DescribeLiveDomainPublishErrorCodeResponseBody &) = default ;
    DescribeLiveDomainPublishErrorCodeResponseBody& operator=(DescribeLiveDomainPublishErrorCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && return this->domainName_ == nullptr && return this->endTime_ == nullptr && return this->realTimeCodeData_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeLiveDomainPublishErrorCodeResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainPublishErrorCodeResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainPublishErrorCodeResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // realTimeCodeData Field Functions 
    bool hasRealTimeCodeData() const { return this->realTimeCodeData_ != nullptr;};
    void deleteRealTimeCodeData() { this->realTimeCodeData_ = nullptr;};
    inline const vector<DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData> & realTimeCodeData() const { DARABONBA_PTR_GET_CONST(realTimeCodeData_, vector<DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData>) };
    inline vector<DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData> realTimeCodeData() { DARABONBA_PTR_GET(realTimeCodeData_, vector<DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData>) };
    inline DescribeLiveDomainPublishErrorCodeResponseBody& setRealTimeCodeData(const vector<DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData> & realTimeCodeData) { DARABONBA_PTR_SET_VALUE(realTimeCodeData_, realTimeCodeData) };
    inline DescribeLiveDomainPublishErrorCodeResponseBody& setRealTimeCodeData(vector<DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData> && realTimeCodeData) { DARABONBA_PTR_SET_RVALUE(realTimeCodeData_, realTimeCodeData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainPublishErrorCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainPublishErrorCodeResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time granularity of the query. Unit: seconds. Default value: 60.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The ingest domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range during which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The proportions of error codes at each time interval.
    std::shared_ptr<vector<DescribeLiveDomainPublishErrorCodeResponseBodyRealTimeCodeData>> realTimeCodeData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range during which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
