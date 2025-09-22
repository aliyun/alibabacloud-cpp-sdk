// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALLACTIVITYINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYALLACTIVITYINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class QueryAllActivityInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAllActivityInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
      DARABONBA_PTR_TO_JSON(CustomerName, customerName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsVipCustomer, isVipCustomer_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(QRCode, QRCode_);
      DARABONBA_PTR_TO_JSON(ReportFields, reportFields_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAllActivityInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
      DARABONBA_PTR_FROM_JSON(CustomerName, customerName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsVipCustomer, isVipCustomer_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(QRCode, QRCode_);
      DARABONBA_PTR_FROM_JSON(ReportFields, reportFields_);
    };
    QueryAllActivityInfoResponseBodyData() = default ;
    QueryAllActivityInfoResponseBodyData(const QueryAllActivityInfoResponseBodyData &) = default ;
    QueryAllActivityInfoResponseBodyData(QueryAllActivityInfoResponseBodyData &&) = default ;
    QueryAllActivityInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAllActivityInfoResponseBodyData() = default ;
    QueryAllActivityInfoResponseBodyData& operator=(const QueryAllActivityInfoResponseBodyData &) = default ;
    QueryAllActivityInfoResponseBodyData& operator=(QueryAllActivityInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityId_ != nullptr
        && this->channelName_ != nullptr && this->companyName_ != nullptr && this->customerName_ != nullptr && this->email_ != nullptr && this->id_ != nullptr
        && this->isVipCustomer_ != nullptr && this->mobile_ != nullptr && this->QRCode_ != nullptr && this->reportFields_ != nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline int64_t activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, 0L) };
    inline QueryAllActivityInfoResponseBodyData& setActivityId(int64_t activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline QueryAllActivityInfoResponseBodyData& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string companyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline QueryAllActivityInfoResponseBodyData& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // customerName Field Functions 
    bool hasCustomerName() const { return this->customerName_ != nullptr;};
    void deleteCustomerName() { this->customerName_ = nullptr;};
    inline string customerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
    inline QueryAllActivityInfoResponseBodyData& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryAllActivityInfoResponseBodyData& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryAllActivityInfoResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isVipCustomer Field Functions 
    bool hasIsVipCustomer() const { return this->isVipCustomer_ != nullptr;};
    void deleteIsVipCustomer() { this->isVipCustomer_ = nullptr;};
    inline string isVipCustomer() const { DARABONBA_PTR_GET_DEFAULT(isVipCustomer_, "") };
    inline QueryAllActivityInfoResponseBodyData& setIsVipCustomer(string isVipCustomer) { DARABONBA_PTR_SET_VALUE(isVipCustomer_, isVipCustomer) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline QueryAllActivityInfoResponseBodyData& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // QRCode Field Functions 
    bool hasQRCode() const { return this->QRCode_ != nullptr;};
    void deleteQRCode() { this->QRCode_ = nullptr;};
    inline string QRCode() const { DARABONBA_PTR_GET_DEFAULT(QRCode_, "") };
    inline QueryAllActivityInfoResponseBodyData& setQRCode(string QRCode) { DARABONBA_PTR_SET_VALUE(QRCode_, QRCode) };


    // reportFields Field Functions 
    bool hasReportFields() const { return this->reportFields_ != nullptr;};
    void deleteReportFields() { this->reportFields_ = nullptr;};
    inline string reportFields() const { DARABONBA_PTR_GET_DEFAULT(reportFields_, "") };
    inline QueryAllActivityInfoResponseBodyData& setReportFields(string reportFields) { DARABONBA_PTR_SET_VALUE(reportFields_, reportFields) };


  protected:
    std::shared_ptr<int64_t> activityId_ = nullptr;
    std::shared_ptr<string> channelName_ = nullptr;
    std::shared_ptr<string> companyName_ = nullptr;
    std::shared_ptr<string> customerName_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> isVipCustomer_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<string> QRCode_ = nullptr;
    std::shared_ptr<string> reportFields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
