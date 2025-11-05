// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLPREDICTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLPREDICTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserBillPredictionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserBillPredictionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserBillPredictionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeCdnUserBillPredictionRequest() = default ;
    DescribeCdnUserBillPredictionRequest(const DescribeCdnUserBillPredictionRequest &) = default ;
    DescribeCdnUserBillPredictionRequest(DescribeCdnUserBillPredictionRequest &&) = default ;
    DescribeCdnUserBillPredictionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserBillPredictionRequest() = default ;
    DescribeCdnUserBillPredictionRequest& operator=(const DescribeCdnUserBillPredictionRequest &) = default ;
    DescribeCdnUserBillPredictionRequest& operator=(DescribeCdnUserBillPredictionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->area_ == nullptr
        && return this->dimension_ == nullptr && return this->endTime_ == nullptr && return this->startTime_ == nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeCdnUserBillPredictionRequest& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline DescribeCdnUserBillPredictionRequest& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCdnUserBillPredictionRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCdnUserBillPredictionRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The billable region. Valid values:
    // 
    // *   **CN**: the Chinese mainland
    // *   **OverSeas**: outside the Chinese mainland
    // *   **AP1**: Asia Pacific 1
    // *   **AP2**: Asia Pacific 2
    // *   **AP3**: Asia Pacific 3
    // *   **NA**: North America
    // *   **SA**: South America
    // *   **EU**: Europe
    // *   **MEAA**: Middle East and Africa
    // 
    // By default, the value of this parameter is determined by the metering method that is currently used. Regions inside and outside the Chinese mainland are classified into the **CN** and **OverSeas** billable regions. Billable regions inside the Chinese mainland include **CN**. Billable regions outside the Chinese mainland include **AP1**, **AP2**, **AP3**, **NA**, **SA**, **EU**, and **MEAA**.
    // 
    // > For more information about billable regions, see [Billable regions](https://help.aliyun.com/document_detail/142221.html).
    std::shared_ptr<string> area_ = nullptr;
    // The billable item. A value of flow specifies bandwidth.
    std::shared_ptr<string> dimension_ = nullptr;
    // The end time of the estimation. The default value is the current time. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > The end time must be later than the start time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The start time of the estimation. The default value is 00:00 on the first day of the current month. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
