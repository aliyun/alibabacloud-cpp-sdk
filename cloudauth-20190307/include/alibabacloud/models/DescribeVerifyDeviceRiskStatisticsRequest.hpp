// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYDEVICERISKSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYDEVICERISKSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyDeviceRiskStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyDeviceRiskStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyDeviceRiskStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribeVerifyDeviceRiskStatisticsRequest() = default ;
    DescribeVerifyDeviceRiskStatisticsRequest(const DescribeVerifyDeviceRiskStatisticsRequest &) = default ;
    DescribeVerifyDeviceRiskStatisticsRequest(DescribeVerifyDeviceRiskStatisticsRequest &&) = default ;
    DescribeVerifyDeviceRiskStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyDeviceRiskStatisticsRequest() = default ;
    DescribeVerifyDeviceRiskStatisticsRequest& operator=(const DescribeVerifyDeviceRiskStatisticsRequest &) = default ;
    DescribeVerifyDeviceRiskStatisticsRequest& operator=(DescribeVerifyDeviceRiskStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->productCode_ == nullptr && this->sceneId_ == nullptr && this->serviceCode_ == nullptr && this->startDate_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline DescribeVerifyDeviceRiskStatisticsRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeVerifyDeviceRiskStatisticsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline DescribeVerifyDeviceRiskStatisticsRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeVerifyDeviceRiskStatisticsRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline DescribeVerifyDeviceRiskStatisticsRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // End time.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endDate_ {};
    // Cloud product code.
    shared_ptr<string> productCode_ {};
    // Scene ID.
    shared_ptr<string> sceneId_ {};
    // Service type:
    // - **antcloudauth**: Financial-grade real-person authentication.
    // - **cloudauthst** (discontinued): Enhanced real-person authentication.
    // - **cloudauth** (discontinued): Real-person authentication.
    // 
    // This parameter is required.
    shared_ptr<string> serviceCode_ {};
    // Start time of the query, in Unix timestamp format, in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
