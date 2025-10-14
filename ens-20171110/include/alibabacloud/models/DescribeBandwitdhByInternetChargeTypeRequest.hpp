// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBANDWITDHBYINTERNETCHARGETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBANDWITDHBYINTERNETCHARGETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeBandwitdhByInternetChargeTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBandwitdhByInternetChargeTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBandwitdhByInternetChargeTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeBandwitdhByInternetChargeTypeRequest() = default ;
    DescribeBandwitdhByInternetChargeTypeRequest(const DescribeBandwitdhByInternetChargeTypeRequest &) = default ;
    DescribeBandwitdhByInternetChargeTypeRequest(DescribeBandwitdhByInternetChargeTypeRequest &&) = default ;
    DescribeBandwitdhByInternetChargeTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBandwitdhByInternetChargeTypeRequest() = default ;
    DescribeBandwitdhByInternetChargeTypeRequest& operator=(const DescribeBandwitdhByInternetChargeTypeRequest &) = default ;
    DescribeBandwitdhByInternetChargeTypeRequest& operator=(DescribeBandwitdhByInternetChargeTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->ensRegionId_ == nullptr && return this->isp_ == nullptr && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeBandwitdhByInternetChargeTypeRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeBandwitdhByInternetChargeTypeRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeBandwitdhByInternetChargeTypeRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeBandwitdhByInternetChargeTypeRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query.
    // 
    // *   Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // *   If the value of the seconds place is not 00, the start time is automatically set to the next minute.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The Internet service provider (ISP). Valid values:
    // 
    // *   cmcc: China Mobile
    // *   telecom: China Telecom
    // *   unicom: China Unicom
    // *   multiCarrier: multi-line ISP
    std::shared_ptr<string> isp_ = nullptr;
    // The beginning of the time range to query.
    // 
    // *   Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // *   If the value of the seconds place is not 00, the start time is automatically set to the next minute.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
