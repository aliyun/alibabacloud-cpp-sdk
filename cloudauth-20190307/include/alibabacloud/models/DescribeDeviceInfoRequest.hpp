// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeDeviceInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(ExpiredEndDay, expiredEndDay_);
      DARABONBA_PTR_TO_JSON(ExpiredStartDay, expiredStartDay_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(UserDeviceId, userDeviceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(ExpiredEndDay, expiredEndDay_);
      DARABONBA_PTR_FROM_JSON(ExpiredStartDay, expiredStartDay_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(UserDeviceId, userDeviceId_);
    };
    DescribeDeviceInfoRequest() = default ;
    DescribeDeviceInfoRequest(const DescribeDeviceInfoRequest &) = default ;
    DescribeDeviceInfoRequest(DescribeDeviceInfoRequest &&) = default ;
    DescribeDeviceInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceInfoRequest() = default ;
    DescribeDeviceInfoRequest& operator=(const DescribeDeviceInfoRequest &) = default ;
    DescribeDeviceInfoRequest& operator=(DescribeDeviceInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->currentPage_ == nullptr && this->deviceId_ == nullptr && this->expiredEndDay_ == nullptr && this->expiredStartDay_ == nullptr && this->pageSize_ == nullptr
        && this->userDeviceId_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeDeviceInfoRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDeviceInfoRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline DescribeDeviceInfoRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // expiredEndDay Field Functions 
    bool hasExpiredEndDay() const { return this->expiredEndDay_ != nullptr;};
    void deleteExpiredEndDay() { this->expiredEndDay_ = nullptr;};
    inline string getExpiredEndDay() const { DARABONBA_PTR_GET_DEFAULT(expiredEndDay_, "") };
    inline DescribeDeviceInfoRequest& setExpiredEndDay(string expiredEndDay) { DARABONBA_PTR_SET_VALUE(expiredEndDay_, expiredEndDay) };


    // expiredStartDay Field Functions 
    bool hasExpiredStartDay() const { return this->expiredStartDay_ != nullptr;};
    void deleteExpiredStartDay() { this->expiredStartDay_ = nullptr;};
    inline string getExpiredStartDay() const { DARABONBA_PTR_GET_DEFAULT(expiredStartDay_, "") };
    inline DescribeDeviceInfoRequest& setExpiredStartDay(string expiredStartDay) { DARABONBA_PTR_SET_VALUE(expiredStartDay_, expiredStartDay) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDeviceInfoRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // userDeviceId Field Functions 
    bool hasUserDeviceId() const { return this->userDeviceId_ != nullptr;};
    void deleteUserDeviceId() { this->userDeviceId_ = nullptr;};
    inline string getUserDeviceId() const { DARABONBA_PTR_GET_DEFAULT(userDeviceId_, "") };
    inline DescribeDeviceInfoRequest& setUserDeviceId(string userDeviceId) { DARABONBA_PTR_SET_VALUE(userDeviceId_, userDeviceId) };


  protected:
    // Business type. No more than 64 characters.
    shared_ptr<string> bizType_ {};
    // The current page number being queried.
    shared_ptr<int32_t> currentPage_ {};
    // A unique ID generated by the real-person authentication server for the access party\\"s device. This ID is only generated after the device has been successfully activated and can be obtained through the getLicenseExtraInfo function in the offline facial recognition SDK.
    shared_ptr<string> deviceId_ {};
    // The end time of the query, i.e., querying authorizations that will expire between ExpiredStartDay and ExpiredEndDay.
    shared_ptr<string> expiredEndDay_ {};
    // The start time of the query, i.e., querying authorizations that will expire between ExpiredStartDay and ExpiredEndDay.
    shared_ptr<string> expiredStartDay_ {};
    // Number of items per page in the query.
    shared_ptr<int32_t> pageSize_ {};
    // No more than 64 characters, defined by the access party, which can be used to identify a specific device.
    shared_ptr<string> userDeviceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
