// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYFAILSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYFAILSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyFailStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyFailStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgeGt, ageGt_);
      DARABONBA_PTR_TO_JSON(Api, api_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyFailStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgeGt, ageGt_);
      DARABONBA_PTR_FROM_JSON(Api, api_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribeVerifyFailStatisticsRequest() = default ;
    DescribeVerifyFailStatisticsRequest(const DescribeVerifyFailStatisticsRequest &) = default ;
    DescribeVerifyFailStatisticsRequest(DescribeVerifyFailStatisticsRequest &&) = default ;
    DescribeVerifyFailStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyFailStatisticsRequest() = default ;
    DescribeVerifyFailStatisticsRequest& operator=(const DescribeVerifyFailStatisticsRequest &) = default ;
    DescribeVerifyFailStatisticsRequest& operator=(DescribeVerifyFailStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ageGt_ == nullptr
        && this->api_ == nullptr && this->deviceType_ == nullptr && this->endDate_ == nullptr && this->productCode_ == nullptr && this->serviceCode_ == nullptr
        && this->startDate_ == nullptr; };
    // ageGt Field Functions 
    bool hasAgeGt() const { return this->ageGt_ != nullptr;};
    void deleteAgeGt() { this->ageGt_ = nullptr;};
    inline string getAgeGt() const { DARABONBA_PTR_GET_DEFAULT(ageGt_, "") };
    inline DescribeVerifyFailStatisticsRequest& setAgeGt(string ageGt) { DARABONBA_PTR_SET_VALUE(ageGt_, ageGt) };


    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline string getApi() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
    inline DescribeVerifyFailStatisticsRequest& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline DescribeVerifyFailStatisticsRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline DescribeVerifyFailStatisticsRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeVerifyFailStatisticsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeVerifyFailStatisticsRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline DescribeVerifyFailStatisticsRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // Age greater than 14 years old:
    // - **T**: Greater than
    // - **F**: Less than
    shared_ptr<string> ageGt_ {};
    // API code:
    // - **INIT_SERVICE**: Server-side initialization failure
    // - **INIT_DEVICE**: Client-side failure
    // - **VERIFY_DEVICE**: Authentication failed
    // 
    // This parameter is required.
    shared_ptr<string> api_ {};
    // Device type.
    // - ios
    // - android
    // - websdk
    shared_ptr<string> deviceType_ {};
    // End time of the query.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endDate_ {};
    // Product code.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // Service type:
    // - **antcloudauth**: Financial-grade real-person authentication.
    // - **cloudauthst** (discontinued): Enhanced real-person authentication.
    // - **cloudauth** (discontinued): Real-person authentication.
    // 
    // This parameter is required.
    shared_ptr<string> serviceCode_ {};
    // Start time of the query.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
