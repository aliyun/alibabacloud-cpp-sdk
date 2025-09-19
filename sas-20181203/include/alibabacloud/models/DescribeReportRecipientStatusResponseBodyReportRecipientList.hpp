// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPORTRECIPIENTSTATUSRESPONSEBODYREPORTRECIPIENTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPORTRECIPIENTSTATUSRESPONSEBODYREPORTRECIPIENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeReportRecipientStatusResponseBodyReportRecipientList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReportRecipientStatusResponseBodyReportRecipientList& obj) { 
      DARABONBA_PTR_TO_JSON(IsVerify, isVerify_);
      DARABONBA_PTR_TO_JSON(Recipient, recipient_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReportRecipientStatusResponseBodyReportRecipientList& obj) { 
      DARABONBA_PTR_FROM_JSON(IsVerify, isVerify_);
      DARABONBA_PTR_FROM_JSON(Recipient, recipient_);
    };
    DescribeReportRecipientStatusResponseBodyReportRecipientList() = default ;
    DescribeReportRecipientStatusResponseBodyReportRecipientList(const DescribeReportRecipientStatusResponseBodyReportRecipientList &) = default ;
    DescribeReportRecipientStatusResponseBodyReportRecipientList(DescribeReportRecipientStatusResponseBodyReportRecipientList &&) = default ;
    DescribeReportRecipientStatusResponseBodyReportRecipientList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReportRecipientStatusResponseBodyReportRecipientList() = default ;
    DescribeReportRecipientStatusResponseBodyReportRecipientList& operator=(const DescribeReportRecipientStatusResponseBodyReportRecipientList &) = default ;
    DescribeReportRecipientStatusResponseBodyReportRecipientList& operator=(DescribeReportRecipientStatusResponseBodyReportRecipientList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isVerify_ != nullptr
        && this->recipient_ != nullptr; };
    // isVerify Field Functions 
    bool hasIsVerify() const { return this->isVerify_ != nullptr;};
    void deleteIsVerify() { this->isVerify_ = nullptr;};
    inline int32_t isVerify() const { DARABONBA_PTR_GET_DEFAULT(isVerify_, 0) };
    inline DescribeReportRecipientStatusResponseBodyReportRecipientList& setIsVerify(int32_t isVerify) { DARABONBA_PTR_SET_VALUE(isVerify_, isVerify) };


    // recipient Field Functions 
    bool hasRecipient() const { return this->recipient_ != nullptr;};
    void deleteRecipient() { this->recipient_ = nullptr;};
    inline string recipient() const { DARABONBA_PTR_GET_DEFAULT(recipient_, "") };
    inline DescribeReportRecipientStatusResponseBodyReportRecipientList& setRecipient(string recipient) { DARABONBA_PTR_SET_VALUE(recipient_, recipient) };


  protected:
    // Indicates whether the email address is verified. Valid values:
    // 
    // *   0: no
    // *   1: yes
    // 
    // >  If no email is specified when you create a report, the value of this parameter is empty.
    std::shared_ptr<int32_t> isVerify_ = nullptr;
    // The email address of the report recipient.
    // 
    // >  If no email is specified when you create a report, the value of this parameter is empty.
    std::shared_ptr<string> recipient_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
