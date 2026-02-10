// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPORTRECIPIENTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPORTRECIPIENTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeReportRecipientStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReportRecipientStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Recipients, recipients_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReportRecipientStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Recipients, recipients_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeReportRecipientStatusRequest() = default ;
    DescribeReportRecipientStatusRequest(const DescribeReportRecipientStatusRequest &) = default ;
    DescribeReportRecipientStatusRequest(DescribeReportRecipientStatusRequest &&) = default ;
    DescribeReportRecipientStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReportRecipientStatusRequest() = default ;
    DescribeReportRecipientStatusRequest& operator=(const DescribeReportRecipientStatusRequest &) = default ;
    DescribeReportRecipientStatusRequest& operator=(DescribeReportRecipientStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->recipients_ == nullptr && this->sourceIp_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeReportRecipientStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // recipients Field Functions 
    bool hasRecipients() const { return this->recipients_ != nullptr;};
    void deleteRecipients() { this->recipients_ = nullptr;};
    inline string getRecipients() const { DARABONBA_PTR_GET_DEFAULT(recipients_, "") };
    inline DescribeReportRecipientStatusRequest& setRecipients(string recipients) { DARABONBA_PTR_SET_VALUE(recipients_, recipients) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeReportRecipientStatusRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The email address of the recipient. Separate multiple email addresses with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> recipients_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
