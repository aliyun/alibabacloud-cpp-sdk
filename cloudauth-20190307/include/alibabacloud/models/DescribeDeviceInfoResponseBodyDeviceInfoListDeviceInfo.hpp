// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICEINFORESPONSEBODYDEVICEINFOLISTDEVICEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICEINFORESPONSEBODYDEVICEINFOLISTDEVICEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BeginDay, beginDay_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(ExpiredDay, expiredDay_);
      DARABONBA_PTR_TO_JSON(UserDeviceId, userDeviceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginDay, beginDay_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(ExpiredDay, expiredDay_);
      DARABONBA_PTR_FROM_JSON(UserDeviceId, userDeviceId_);
    };
    DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo() = default ;
    DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo(const DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo &) = default ;
    DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo(DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo &&) = default ;
    DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo() = default ;
    DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo& operator=(const DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo &) = default ;
    DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo& operator=(DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginDay_ != nullptr
        && this->bizType_ != nullptr && this->deviceId_ != nullptr && this->expiredDay_ != nullptr && this->userDeviceId_ != nullptr; };
    // beginDay Field Functions 
    bool hasBeginDay() const { return this->beginDay_ != nullptr;};
    void deleteBeginDay() { this->beginDay_ = nullptr;};
    inline string beginDay() const { DARABONBA_PTR_GET_DEFAULT(beginDay_, "") };
    inline DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo& setBeginDay(string beginDay) { DARABONBA_PTR_SET_VALUE(beginDay_, beginDay) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // expiredDay Field Functions 
    bool hasExpiredDay() const { return this->expiredDay_ != nullptr;};
    void deleteExpiredDay() { this->expiredDay_ = nullptr;};
    inline string expiredDay() const { DARABONBA_PTR_GET_DEFAULT(expiredDay_, "") };
    inline DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo& setExpiredDay(string expiredDay) { DARABONBA_PTR_SET_VALUE(expiredDay_, expiredDay) };


    // userDeviceId Field Functions 
    bool hasUserDeviceId() const { return this->userDeviceId_ != nullptr;};
    void deleteUserDeviceId() { this->userDeviceId_ = nullptr;};
    inline string userDeviceId() const { DARABONBA_PTR_GET_DEFAULT(userDeviceId_, "") };
    inline DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo& setUserDeviceId(string userDeviceId) { DARABONBA_PTR_SET_VALUE(userDeviceId_, userDeviceId) };


  protected:
    std::shared_ptr<string> beginDay_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> expiredDay_ = nullptr;
    std::shared_ptr<string> userDeviceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
