// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionResponseBodyDataMetricsDailyReadRequest.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionResponseBodyDataMetricsDailyWriteRequest.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionResponseBodyDataMetricsStoreFileCount.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionResponseBodyDataMetricsTotalReadRequest.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionResponseBodyDataMetricsTotalWriteRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseRegionResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseRegionResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(DailyReadRequest, dailyReadRequest_);
      DARABONBA_PTR_TO_JSON(DailyWriteRequest, dailyWriteRequest_);
      DARABONBA_PTR_TO_JSON(StoreFileCount, storeFileCount_);
      DARABONBA_PTR_TO_JSON(TotalReadRequest, totalReadRequest_);
      DARABONBA_PTR_TO_JSON(TotalWriteRequest, totalWriteRequest_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseRegionResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(DailyReadRequest, dailyReadRequest_);
      DARABONBA_PTR_FROM_JSON(DailyWriteRequest, dailyWriteRequest_);
      DARABONBA_PTR_FROM_JSON(StoreFileCount, storeFileCount_);
      DARABONBA_PTR_FROM_JSON(TotalReadRequest, totalReadRequest_);
      DARABONBA_PTR_FROM_JSON(TotalWriteRequest, totalWriteRequest_);
    };
    GetDoctorHBaseRegionResponseBodyDataMetrics() = default ;
    GetDoctorHBaseRegionResponseBodyDataMetrics(const GetDoctorHBaseRegionResponseBodyDataMetrics &) = default ;
    GetDoctorHBaseRegionResponseBodyDataMetrics(GetDoctorHBaseRegionResponseBodyDataMetrics &&) = default ;
    GetDoctorHBaseRegionResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseRegionResponseBodyDataMetrics() = default ;
    GetDoctorHBaseRegionResponseBodyDataMetrics& operator=(const GetDoctorHBaseRegionResponseBodyDataMetrics &) = default ;
    GetDoctorHBaseRegionResponseBodyDataMetrics& operator=(GetDoctorHBaseRegionResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dailyReadRequest_ == nullptr
        && return this->dailyWriteRequest_ == nullptr && return this->storeFileCount_ == nullptr && return this->totalReadRequest_ == nullptr && return this->totalWriteRequest_ == nullptr; };
    // dailyReadRequest Field Functions 
    bool hasDailyReadRequest() const { return this->dailyReadRequest_ != nullptr;};
    void deleteDailyReadRequest() { this->dailyReadRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionResponseBodyDataMetricsDailyReadRequest & dailyReadRequest() const { DARABONBA_PTR_GET_CONST(dailyReadRequest_, Models::GetDoctorHBaseRegionResponseBodyDataMetricsDailyReadRequest) };
    inline Models::GetDoctorHBaseRegionResponseBodyDataMetricsDailyReadRequest dailyReadRequest() { DARABONBA_PTR_GET(dailyReadRequest_, Models::GetDoctorHBaseRegionResponseBodyDataMetricsDailyReadRequest) };
    inline GetDoctorHBaseRegionResponseBodyDataMetrics& setDailyReadRequest(const Models::GetDoctorHBaseRegionResponseBodyDataMetricsDailyReadRequest & dailyReadRequest) { DARABONBA_PTR_SET_VALUE(dailyReadRequest_, dailyReadRequest) };
    inline GetDoctorHBaseRegionResponseBodyDataMetrics& setDailyReadRequest(Models::GetDoctorHBaseRegionResponseBodyDataMetricsDailyReadRequest && dailyReadRequest) { DARABONBA_PTR_SET_RVALUE(dailyReadRequest_, dailyReadRequest) };


    // dailyWriteRequest Field Functions 
    bool hasDailyWriteRequest() const { return this->dailyWriteRequest_ != nullptr;};
    void deleteDailyWriteRequest() { this->dailyWriteRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionResponseBodyDataMetricsDailyWriteRequest & dailyWriteRequest() const { DARABONBA_PTR_GET_CONST(dailyWriteRequest_, Models::GetDoctorHBaseRegionResponseBodyDataMetricsDailyWriteRequest) };
    inline Models::GetDoctorHBaseRegionResponseBodyDataMetricsDailyWriteRequest dailyWriteRequest() { DARABONBA_PTR_GET(dailyWriteRequest_, Models::GetDoctorHBaseRegionResponseBodyDataMetricsDailyWriteRequest) };
    inline GetDoctorHBaseRegionResponseBodyDataMetrics& setDailyWriteRequest(const Models::GetDoctorHBaseRegionResponseBodyDataMetricsDailyWriteRequest & dailyWriteRequest) { DARABONBA_PTR_SET_VALUE(dailyWriteRequest_, dailyWriteRequest) };
    inline GetDoctorHBaseRegionResponseBodyDataMetrics& setDailyWriteRequest(Models::GetDoctorHBaseRegionResponseBodyDataMetricsDailyWriteRequest && dailyWriteRequest) { DARABONBA_PTR_SET_RVALUE(dailyWriteRequest_, dailyWriteRequest) };


    // storeFileCount Field Functions 
    bool hasStoreFileCount() const { return this->storeFileCount_ != nullptr;};
    void deleteStoreFileCount() { this->storeFileCount_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionResponseBodyDataMetricsStoreFileCount & storeFileCount() const { DARABONBA_PTR_GET_CONST(storeFileCount_, Models::GetDoctorHBaseRegionResponseBodyDataMetricsStoreFileCount) };
    inline Models::GetDoctorHBaseRegionResponseBodyDataMetricsStoreFileCount storeFileCount() { DARABONBA_PTR_GET(storeFileCount_, Models::GetDoctorHBaseRegionResponseBodyDataMetricsStoreFileCount) };
    inline GetDoctorHBaseRegionResponseBodyDataMetrics& setStoreFileCount(const Models::GetDoctorHBaseRegionResponseBodyDataMetricsStoreFileCount & storeFileCount) { DARABONBA_PTR_SET_VALUE(storeFileCount_, storeFileCount) };
    inline GetDoctorHBaseRegionResponseBodyDataMetrics& setStoreFileCount(Models::GetDoctorHBaseRegionResponseBodyDataMetricsStoreFileCount && storeFileCount) { DARABONBA_PTR_SET_RVALUE(storeFileCount_, storeFileCount) };


    // totalReadRequest Field Functions 
    bool hasTotalReadRequest() const { return this->totalReadRequest_ != nullptr;};
    void deleteTotalReadRequest() { this->totalReadRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionResponseBodyDataMetricsTotalReadRequest & totalReadRequest() const { DARABONBA_PTR_GET_CONST(totalReadRequest_, Models::GetDoctorHBaseRegionResponseBodyDataMetricsTotalReadRequest) };
    inline Models::GetDoctorHBaseRegionResponseBodyDataMetricsTotalReadRequest totalReadRequest() { DARABONBA_PTR_GET(totalReadRequest_, Models::GetDoctorHBaseRegionResponseBodyDataMetricsTotalReadRequest) };
    inline GetDoctorHBaseRegionResponseBodyDataMetrics& setTotalReadRequest(const Models::GetDoctorHBaseRegionResponseBodyDataMetricsTotalReadRequest & totalReadRequest) { DARABONBA_PTR_SET_VALUE(totalReadRequest_, totalReadRequest) };
    inline GetDoctorHBaseRegionResponseBodyDataMetrics& setTotalReadRequest(Models::GetDoctorHBaseRegionResponseBodyDataMetricsTotalReadRequest && totalReadRequest) { DARABONBA_PTR_SET_RVALUE(totalReadRequest_, totalReadRequest) };


    // totalWriteRequest Field Functions 
    bool hasTotalWriteRequest() const { return this->totalWriteRequest_ != nullptr;};
    void deleteTotalWriteRequest() { this->totalWriteRequest_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionResponseBodyDataMetricsTotalWriteRequest & totalWriteRequest() const { DARABONBA_PTR_GET_CONST(totalWriteRequest_, Models::GetDoctorHBaseRegionResponseBodyDataMetricsTotalWriteRequest) };
    inline Models::GetDoctorHBaseRegionResponseBodyDataMetricsTotalWriteRequest totalWriteRequest() { DARABONBA_PTR_GET(totalWriteRequest_, Models::GetDoctorHBaseRegionResponseBodyDataMetricsTotalWriteRequest) };
    inline GetDoctorHBaseRegionResponseBodyDataMetrics& setTotalWriteRequest(const Models::GetDoctorHBaseRegionResponseBodyDataMetricsTotalWriteRequest & totalWriteRequest) { DARABONBA_PTR_SET_VALUE(totalWriteRequest_, totalWriteRequest) };
    inline GetDoctorHBaseRegionResponseBodyDataMetrics& setTotalWriteRequest(Models::GetDoctorHBaseRegionResponseBodyDataMetricsTotalWriteRequest && totalWriteRequest) { DARABONBA_PTR_SET_RVALUE(totalWriteRequest_, totalWriteRequest) };


  protected:
    // Number of read requests in a single day.
    std::shared_ptr<Models::GetDoctorHBaseRegionResponseBodyDataMetricsDailyReadRequest> dailyReadRequest_ = nullptr;
    // Number of write requests in a single day.
    std::shared_ptr<Models::GetDoctorHBaseRegionResponseBodyDataMetricsDailyWriteRequest> dailyWriteRequest_ = nullptr;
    // Store file count.
    std::shared_ptr<Models::GetDoctorHBaseRegionResponseBodyDataMetricsStoreFileCount> storeFileCount_ = nullptr;
    // Total read request count
    std::shared_ptr<Models::GetDoctorHBaseRegionResponseBodyDataMetricsTotalReadRequest> totalReadRequest_ = nullptr;
    // Total write request count
    std::shared_ptr<Models::GetDoctorHBaseRegionResponseBodyDataMetricsTotalWriteRequest> totalWriteRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
