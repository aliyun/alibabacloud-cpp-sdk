// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODYALARMHISTORYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODYALARMHISTORYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertHistoryListResponseBodyAlarmHistoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertHistoryListResponseBodyAlarmHistoryList& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmHistory, alarmHistory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertHistoryListResponseBodyAlarmHistoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmHistory, alarmHistory_);
    };
    DescribeAlertHistoryListResponseBodyAlarmHistoryList() = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryList(const DescribeAlertHistoryListResponseBodyAlarmHistoryList &) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryList(DescribeAlertHistoryListResponseBodyAlarmHistoryList &&) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertHistoryListResponseBodyAlarmHistoryList() = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryList& operator=(const DescribeAlertHistoryListResponseBodyAlarmHistoryList &) = default ;
    DescribeAlertHistoryListResponseBodyAlarmHistoryList& operator=(DescribeAlertHistoryListResponseBodyAlarmHistoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmHistory_ == nullptr; };
    // alarmHistory Field Functions 
    bool hasAlarmHistory() const { return this->alarmHistory_ != nullptr;};
    void deleteAlarmHistory() { this->alarmHistory_ = nullptr;};
    inline const vector<Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory> & alarmHistory() const { DARABONBA_PTR_GET_CONST(alarmHistory_, vector<Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory>) };
    inline vector<Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory> alarmHistory() { DARABONBA_PTR_GET(alarmHistory_, vector<Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory>) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryList& setAlarmHistory(const vector<Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory> & alarmHistory) { DARABONBA_PTR_SET_VALUE(alarmHistory_, alarmHistory) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryList& setAlarmHistory(vector<Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory> && alarmHistory) { DARABONBA_PTR_SET_RVALUE(alarmHistory_, alarmHistory) };


  protected:
    std::shared_ptr<vector<Models::DescribeAlertHistoryListResponseBodyAlarmHistoryListAlarmHistory>> alarmHistory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
