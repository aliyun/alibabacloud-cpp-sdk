// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODYALARMHISTORYLISTALARMHISTORYCONTACTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODYALARMHISTORYLISTALARMHISTORYCONTACTS_HPP_
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
  class DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts& obj) { 
      DARABONBA_PTR_TO_JSON(Contact, contact_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(Contact, contact_);
    };
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts() = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts(const DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts &) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts(DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts &&) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts() = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts& operator=(const DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts &) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts& operator=(DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contact_ != nullptr; };
    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const vector<string> & contact() const { DARABONBA_PTR_GET_CONST(contact_, vector<string>) };
    inline vector<string> contact() { DARABONBA_PTR_GET(contact_, vector<string>) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts& setContact(const vector<string> & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContacts& setContact(vector<string> && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


  protected:
    std::shared_ptr<vector<string>> contact_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
