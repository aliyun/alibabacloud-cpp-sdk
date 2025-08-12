// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODYALARMHISTORYLISTALARMHISTORYCONTACTSMSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODYALARMHISTORYLISTALARMHISTORYCONTACTSMSES_HPP_
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
  class DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses& obj) { 
      DARABONBA_PTR_TO_JSON(ContactSms, contactSms_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactSms, contactSms_);
    };
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses() = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses(const DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses &) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses(DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses &&) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses() = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses& operator=(const DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses &) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses& operator=(DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactSms_ != nullptr; };
    // contactSms Field Functions 
    bool hasContactSms() const { return this->contactSms_ != nullptr;};
    void deleteContactSms() { this->contactSms_ = nullptr;};
    inline const vector<string> & contactSms() const { DARABONBA_PTR_GET_CONST(contactSms_, vector<string>) };
    inline vector<string> contactSms() { DARABONBA_PTR_GET(contactSms_, vector<string>) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses& setContactSms(const vector<string> & contactSms) { DARABONBA_PTR_SET_VALUE(contactSms_, contactSms) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactSmses& setContactSms(vector<string> && contactSms) { DARABONBA_PTR_SET_RVALUE(contactSms_, contactSms) };


  protected:
    std::shared_ptr<vector<string>> contactSms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
