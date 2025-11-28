// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDASHBOARDMEMBERDEVICEINFORESPONSEBODYDATAMEMBERINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDASHBOARDMEMBERDEVICEINFORESPONSEBODYDATAMEMBERINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceCount, deviceCount_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceCount, deviceCount_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList() = default ;
    DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList(const DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList &) = default ;
    DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList(DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList &&) = default ;
    DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList() = default ;
    DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList& operator=(const DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList &) = default ;
    DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList& operator=(DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceCount_ == nullptr
        && return this->time_ == nullptr; };
    // deviceCount Field Functions 
    bool hasDeviceCount() const { return this->deviceCount_ != nullptr;};
    void deleteDeviceCount() { this->deviceCount_ = nullptr;};
    inline int32_t deviceCount() const { DARABONBA_PTR_GET_DEFAULT(deviceCount_, 0) };
    inline DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList& setDeviceCount(int32_t deviceCount) { DARABONBA_PTR_SET_VALUE(deviceCount_, deviceCount) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeDashboardMemberDeviceInfoResponseBodyDataMemberInfoList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<int32_t> deviceCount_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
