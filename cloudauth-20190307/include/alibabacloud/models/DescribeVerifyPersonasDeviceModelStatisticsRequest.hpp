// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASDEVICEMODELSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASDEVICEMODELSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyPersonasDeviceModelStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyPersonasDeviceModelStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyPersonasDeviceModelStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
    };
    DescribeVerifyPersonasDeviceModelStatisticsRequest() = default ;
    DescribeVerifyPersonasDeviceModelStatisticsRequest(const DescribeVerifyPersonasDeviceModelStatisticsRequest &) = default ;
    DescribeVerifyPersonasDeviceModelStatisticsRequest(DescribeVerifyPersonasDeviceModelStatisticsRequest &&) = default ;
    DescribeVerifyPersonasDeviceModelStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyPersonasDeviceModelStatisticsRequest() = default ;
    DescribeVerifyPersonasDeviceModelStatisticsRequest& operator=(const DescribeVerifyPersonasDeviceModelStatisticsRequest &) = default ;
    DescribeVerifyPersonasDeviceModelStatisticsRequest& operator=(DescribeVerifyPersonasDeviceModelStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productCode_ == nullptr
        && return this->sceneId_ == nullptr && return this->serviceCode_ == nullptr && return this->timeRange_ == nullptr; };
    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeVerifyPersonasDeviceModelStatisticsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DescribeVerifyPersonasDeviceModelStatisticsRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeVerifyPersonasDeviceModelStatisticsRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline string timeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
    inline DescribeVerifyPersonasDeviceModelStatisticsRequest& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


  protected:
    // Product Code.
    std::shared_ptr<string> productCode_ = nullptr;
    // Scene ID.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
    // Service type:
    // - **antcloudauth**: Financial-grade real-person authentication.
    // - **cloudauthst** (discontinued): Enhanced real-person authentication.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // Time range for the query, indicating how many days back.
    // 
    // This parameter is required.
    std::shared_ptr<string> timeRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
