// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPVUVDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPVUVDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainPvUvDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainPvUvDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PvUvDataInfos, pvUvDataInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainPvUvDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PvUvDataInfos, pvUvDataInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainPvUvDataResponseBody() = default ;
    DescribeLiveDomainPvUvDataResponseBody(const DescribeLiveDomainPvUvDataResponseBody &) = default ;
    DescribeLiveDomainPvUvDataResponseBody(DescribeLiveDomainPvUvDataResponseBody &&) = default ;
    DescribeLiveDomainPvUvDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainPvUvDataResponseBody() = default ;
    DescribeLiveDomainPvUvDataResponseBody& operator=(const DescribeLiveDomainPvUvDataResponseBody &) = default ;
    DescribeLiveDomainPvUvDataResponseBody& operator=(DescribeLiveDomainPvUvDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->pvUvDataInfos_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeLiveDomainPvUvDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainPvUvDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainPvUvDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pvUvDataInfos Field Functions 
    bool hasPvUvDataInfos() const { return this->pvUvDataInfos_ != nullptr;};
    void deletePvUvDataInfos() { this->pvUvDataInfos_ = nullptr;};
    inline const DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos & pvUvDataInfos() const { DARABONBA_PTR_GET_CONST(pvUvDataInfos_, DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos) };
    inline DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos pvUvDataInfos() { DARABONBA_PTR_GET(pvUvDataInfos_, DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos) };
    inline DescribeLiveDomainPvUvDataResponseBody& setPvUvDataInfos(const DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos & pvUvDataInfos) { DARABONBA_PTR_SET_VALUE(pvUvDataInfos_, pvUvDataInfos) };
    inline DescribeLiveDomainPvUvDataResponseBody& setPvUvDataInfos(DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos && pvUvDataInfos) { DARABONBA_PTR_SET_RVALUE(pvUvDataInfos_, pvUvDataInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainPvUvDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainPvUvDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the entries returned. Unit: seconds. Default value: 3600.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range during which the data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ssZ* format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The data of PVs and UVs.
    std::shared_ptr<DescribeLiveDomainPvUvDataResponseBodyPvUvDataInfos> pvUvDataInfos_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range during which the data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ssZ* format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
