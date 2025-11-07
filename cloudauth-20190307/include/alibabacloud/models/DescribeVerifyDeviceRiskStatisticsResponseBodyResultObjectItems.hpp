// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYDEVICERISKSTATISTICSRESPONSEBODYRESULTOBJECTITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYDEVICERISKSTATISTICSRESPONSEBODYRESULTOBJECTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems& obj) { 
      DARABONBA_PTR_TO_JSON(DailyCallCount, dailyCallCount_);
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(DeviceRiskRate, deviceRiskRate_);
      DARABONBA_PTR_TO_JSON(IdentityRiskRate, identityRiskRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DailyCallCount, dailyCallCount_);
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(DeviceRiskRate, deviceRiskRate_);
      DARABONBA_PTR_FROM_JSON(IdentityRiskRate, identityRiskRate_);
    };
    DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems() = default ;
    DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems(const DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems &) = default ;
    DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems(DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems &&) = default ;
    DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems() = default ;
    DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems& operator=(const DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems &) = default ;
    DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems& operator=(DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dailyCallCount_ == nullptr
        && return this->date_ == nullptr && return this->deviceRiskRate_ == nullptr && return this->identityRiskRate_ == nullptr; };
    // dailyCallCount Field Functions 
    bool hasDailyCallCount() const { return this->dailyCallCount_ != nullptr;};
    void deleteDailyCallCount() { this->dailyCallCount_ = nullptr;};
    inline int64_t dailyCallCount() const { DARABONBA_PTR_GET_DEFAULT(dailyCallCount_, 0L) };
    inline DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems& setDailyCallCount(int64_t dailyCallCount) { DARABONBA_PTR_SET_VALUE(dailyCallCount_, dailyCallCount) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // deviceRiskRate Field Functions 
    bool hasDeviceRiskRate() const { return this->deviceRiskRate_ != nullptr;};
    void deleteDeviceRiskRate() { this->deviceRiskRate_ = nullptr;};
    inline string deviceRiskRate() const { DARABONBA_PTR_GET_DEFAULT(deviceRiskRate_, "") };
    inline DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems& setDeviceRiskRate(string deviceRiskRate) { DARABONBA_PTR_SET_VALUE(deviceRiskRate_, deviceRiskRate) };


    // identityRiskRate Field Functions 
    bool hasIdentityRiskRate() const { return this->identityRiskRate_ != nullptr;};
    void deleteIdentityRiskRate() { this->identityRiskRate_ = nullptr;};
    inline string identityRiskRate() const { DARABONBA_PTR_GET_DEFAULT(identityRiskRate_, "") };
    inline DescribeVerifyDeviceRiskStatisticsResponseBodyResultObjectItems& setIdentityRiskRate(string identityRiskRate) { DARABONBA_PTR_SET_VALUE(identityRiskRate_, identityRiskRate) };


  protected:
    // Daily call count.
    std::shared_ptr<int64_t> dailyCallCount_ = nullptr;
    // Date.
    std::shared_ptr<string> date_ = nullptr;
    // Abnormal device risk ratio.
    std::shared_ptr<string> deviceRiskRate_ = nullptr;
    // Abnormal identity risk ratio.
    std::shared_ptr<string> identityRiskRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
