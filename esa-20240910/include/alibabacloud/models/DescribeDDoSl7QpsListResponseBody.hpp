// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSL7QPSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSL7QPSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDDoSL7QpsListResponseBodyDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeDDoSL7QpsListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSL7QpsListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSL7QpsListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDDoSL7QpsListResponseBody() = default ;
    DescribeDDoSL7QpsListResponseBody(const DescribeDDoSL7QpsListResponseBody &) = default ;
    DescribeDDoSL7QpsListResponseBody(DescribeDDoSL7QpsListResponseBody &&) = default ;
    DescribeDDoSL7QpsListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSL7QpsListResponseBody() = default ;
    DescribeDDoSL7QpsListResponseBody& operator=(const DescribeDDoSL7QpsListResponseBody &) = default ;
    DescribeDDoSL7QpsListResponseBody& operator=(DescribeDDoSL7QpsListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && return this->dataModule_ == nullptr && return this->endTime_ == nullptr && return this->recordId_ == nullptr && return this->requestId_ == nullptr && return this->siteId_ == nullptr
        && return this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline int32_t dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, 0) };
    inline DescribeDDoSL7QpsListResponseBody& setDataInterval(int32_t dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<DescribeDDoSL7QpsListResponseBodyDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<DescribeDDoSL7QpsListResponseBodyDataModule>) };
    inline vector<DescribeDDoSL7QpsListResponseBodyDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<DescribeDDoSL7QpsListResponseBodyDataModule>) };
    inline DescribeDDoSL7QpsListResponseBody& setDataModule(const vector<DescribeDDoSL7QpsListResponseBodyDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDDoSL7QpsListResponseBody& setDataModule(vector<DescribeDDoSL7QpsListResponseBodyDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDDoSL7QpsListResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline DescribeDDoSL7QpsListResponseBody& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDoSL7QpsListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DescribeDDoSL7QpsListResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDDoSL7QpsListResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time granularity of the queried data, in seconds.
    std::shared_ptr<int32_t> dataInterval_ = nullptr;
    // Application layer time trend data list.
    std::shared_ptr<vector<DescribeDDoSL7QpsListResponseBodyDataModule>> dataModule_ = nullptr;
    // The end time of the query.
    // 
    // The date format follows ISO8601 notation and uses UTC+0, formatted as yyyy-MM-ddTHH:mm:ssZ.
    std::shared_ptr<string> endTime_ = nullptr;
    // Record ID.
    std::shared_ptr<int64_t> recordId_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Site ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The start time of the query.
    // 
    // The date format follows ISO8601 notation and uses UTC+0, formatted as yyyy-MM-ddTHH:mm:ssZ.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
