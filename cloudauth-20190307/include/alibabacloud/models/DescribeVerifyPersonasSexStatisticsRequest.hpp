// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASSEXSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASSEXSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyPersonasSexStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyPersonasSexStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyPersonasSexStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
    };
    DescribeVerifyPersonasSexStatisticsRequest() = default ;
    DescribeVerifyPersonasSexStatisticsRequest(const DescribeVerifyPersonasSexStatisticsRequest &) = default ;
    DescribeVerifyPersonasSexStatisticsRequest(DescribeVerifyPersonasSexStatisticsRequest &&) = default ;
    DescribeVerifyPersonasSexStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyPersonasSexStatisticsRequest() = default ;
    DescribeVerifyPersonasSexStatisticsRequest& operator=(const DescribeVerifyPersonasSexStatisticsRequest &) = default ;
    DescribeVerifyPersonasSexStatisticsRequest& operator=(DescribeVerifyPersonasSexStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productCode_ == nullptr
        && this->sceneId_ == nullptr && this->serviceCode_ == nullptr && this->timeRange_ == nullptr; };
    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeVerifyPersonasSexStatisticsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DescribeVerifyPersonasSexStatisticsRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeVerifyPersonasSexStatisticsRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline string getTimeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
    inline DescribeVerifyPersonasSexStatisticsRequest& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


  protected:
    // Product Code.
    shared_ptr<string> productCode_ {};
    // Scene ID.
    shared_ptr<int64_t> sceneId_ {};
    // Service type:
    // - **antcloudauth**: Financial-grade real-person authentication.
    // - **cloudauthst** (discontinued): Enhanced real-person authentication.
    // 
    // This parameter is required.
    shared_ptr<string> serviceCode_ {};
    // Time range, the search range is for the previous N days, TimeRange of 1 indicates the previous 1 day.
    // 
    // This parameter is required.
    shared_ptr<string> timeRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
