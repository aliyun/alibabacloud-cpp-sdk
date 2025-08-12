// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODYALARMHISTORYLISTALARMHISTORYCONTACTMAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODYALARMHISTORYLISTALARMHISTORYCONTACTMAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails& obj) { 
      DARABONBA_PTR_TO_JSON(ContactMail, contactMail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactMail, contactMail_);
    };
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails() = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails(const DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails &) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails(DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails &&) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails() = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails& operator=(const DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails &) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails& operator=(DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactMail_ != nullptr; };
    // contactMail Field Functions 
    bool hasContactMail() const { return this->contactMail_ != nullptr;};
    void deleteContactMail() { this->contactMail_ = nullptr;};
    inline const vector<string> & contactMail() const { DARABONBA_PTR_GET_CONST(contactMail_, vector<string>) };
    inline vector<string> contactMail() { DARABONBA_PTR_GET(contactMail_, vector<string>) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails& setContactMail(const vector<string> & contactMail) { DARABONBA_PTR_SET_VALUE(contactMail_, contactMail) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactMails& setContactMail(vector<string> && contactMail) { DARABONBA_PTR_SET_RVALUE(contactMail_, contactMail) };


  protected:
    std::shared_ptr<vector<string>> contactMail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
