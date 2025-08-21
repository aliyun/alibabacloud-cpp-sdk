// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDEVICESDATARESPONSEBODYDEVICESDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDEVICESDATARESPONSEBODYDEVICESDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(DevicesDataValue, devicesDataValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(DevicesDataValue, devicesDataValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule() = default ;
    DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule(const DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule &) = default ;
    DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule(DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule &&) = default ;
    DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule() = default ;
    DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule& operator=(const DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule &) = default ;
    DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule& operator=(DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->devicesDataValue_ != nullptr
        && this->timeStamp_ != nullptr; };
    // devicesDataValue Field Functions 
    bool hasDevicesDataValue() const { return this->devicesDataValue_ != nullptr;};
    void deleteDevicesDataValue() { this->devicesDataValue_ = nullptr;};
    inline string devicesDataValue() const { DARABONBA_PTR_GET_DEFAULT(devicesDataValue_, "") };
    inline DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule& setDevicesDataValue(string devicesDataValue) { DARABONBA_PTR_SET_VALUE(devicesDataValue_, devicesDataValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVsDevicesDataResponseBodyDevicesDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    std::shared_ptr<string> devicesDataValue_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
