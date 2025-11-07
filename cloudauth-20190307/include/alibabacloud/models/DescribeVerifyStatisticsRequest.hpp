// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgeGt, ageGt_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgeGt, ageGt_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribeVerifyStatisticsRequest() = default ;
    DescribeVerifyStatisticsRequest(const DescribeVerifyStatisticsRequest &) = default ;
    DescribeVerifyStatisticsRequest(DescribeVerifyStatisticsRequest &&) = default ;
    DescribeVerifyStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyStatisticsRequest() = default ;
    DescribeVerifyStatisticsRequest& operator=(const DescribeVerifyStatisticsRequest &) = default ;
    DescribeVerifyStatisticsRequest& operator=(DescribeVerifyStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ageGt_ == nullptr
        && return this->endDate_ == nullptr && return this->productCode_ == nullptr && return this->serviceCode_ == nullptr && return this->startDate_ == nullptr; };
    // ageGt Field Functions 
    bool hasAgeGt() const { return this->ageGt_ != nullptr;};
    void deleteAgeGt() { this->ageGt_ = nullptr;};
    inline string ageGt() const { DARABONBA_PTR_GET_DEFAULT(ageGt_, "") };
    inline DescribeVerifyStatisticsRequest& setAgeGt(string ageGt) { DARABONBA_PTR_SET_VALUE(ageGt_, ageGt) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline DescribeVerifyStatisticsRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeVerifyStatisticsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeVerifyStatisticsRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline DescribeVerifyStatisticsRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // Whether the age is over 14 years old:
    // - **T**: Over
    // - **F**: Under
    std::shared_ptr<string> ageGt_ = nullptr;
    // End date of the query.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endDate_ = nullptr;
    // Product Code.
    std::shared_ptr<string> productCode_ = nullptr;
    // Service type:
    // - **antcloudauth**: Financial-grade real-person authentication.
    // - **cloudauthst** (discontinued): Enhanced real-person authentication.
    // - **cloudauth** (discontinued): Real-person authentication.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // Start date of the query.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
