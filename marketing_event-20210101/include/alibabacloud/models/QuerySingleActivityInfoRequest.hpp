// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSINGLEACTIVITYINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSINGLEACTIVITYINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class QuerySingleActivityInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySingleActivityInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
      DARABONBA_PTR_TO_JSON(CustomerName, customerName_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(QRCode, QRCode_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySingleActivityInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
      DARABONBA_PTR_FROM_JSON(CustomerName, customerName_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(QRCode, QRCode_);
    };
    QuerySingleActivityInfoRequest() = default ;
    QuerySingleActivityInfoRequest(const QuerySingleActivityInfoRequest &) = default ;
    QuerySingleActivityInfoRequest(QuerySingleActivityInfoRequest &&) = default ;
    QuerySingleActivityInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySingleActivityInfoRequest() = default ;
    QuerySingleActivityInfoRequest& operator=(const QuerySingleActivityInfoRequest &) = default ;
    QuerySingleActivityInfoRequest& operator=(QuerySingleActivityInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityId_ != nullptr
        && this->companyName_ != nullptr && this->customerName_ != nullptr && this->mobile_ != nullptr && this->QRCode_ != nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline QuerySingleActivityInfoRequest& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string companyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline QuerySingleActivityInfoRequest& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // customerName Field Functions 
    bool hasCustomerName() const { return this->customerName_ != nullptr;};
    void deleteCustomerName() { this->customerName_ = nullptr;};
    inline string customerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
    inline QuerySingleActivityInfoRequest& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline QuerySingleActivityInfoRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // QRCode Field Functions 
    bool hasQRCode() const { return this->QRCode_ != nullptr;};
    void deleteQRCode() { this->QRCode_ = nullptr;};
    inline string QRCode() const { DARABONBA_PTR_GET_DEFAULT(QRCode_, "") };
    inline QuerySingleActivityInfoRequest& setQRCode(string QRCode) { DARABONBA_PTR_SET_VALUE(QRCode_, QRCode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> activityId_ = nullptr;
    std::shared_ptr<string> companyName_ = nullptr;
    std::shared_ptr<string> customerName_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<string> QRCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
