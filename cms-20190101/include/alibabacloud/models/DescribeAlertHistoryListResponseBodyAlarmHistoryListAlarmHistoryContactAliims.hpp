// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODYALARMHISTORYLISTALARMHISTORYCONTACTALIIMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODYALARMHISTORYLISTALARMHISTORYCONTACTALIIMS_HPP_
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
  class DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs& obj) { 
      DARABONBA_PTR_TO_JSON(ContactALIIM, contactALIIM_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactALIIM, contactALIIM_);
    };
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs() = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs(const DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs &) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs(DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs &&) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs() = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs& operator=(const DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs &) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs& operator=(DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactALIIM_ != nullptr; };
    // contactALIIM Field Functions 
    bool hasContactALIIM() const { return this->contactALIIM_ != nullptr;};
    void deleteContactALIIM() { this->contactALIIM_ = nullptr;};
    inline const vector<string> & contactALIIM() const { DARABONBA_PTR_GET_CONST(contactALIIM_, vector<string>) };
    inline vector<string> contactALIIM() { DARABONBA_PTR_GET(contactALIIM_, vector<string>) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs& setContactALIIM(const vector<string> & contactALIIM) { DARABONBA_PTR_SET_VALUE(contactALIIM_, contactALIIM) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistoryContactALIIMs& setContactALIIM(vector<string> && contactALIIM) { DARABONBA_PTR_SET_RVALUE(contactALIIM_, contactALIIM) };


  protected:
    std::shared_ptr<vector<string>> contactALIIM_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
