// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYGROUPINGSETTING_HPP_
#define ALIBABACLOUD_MODELS_NOTIFICATIONSTRATEGYGROUPINGSETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NotificationStrategyGroupingSettingGroupingItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class NotificationStrategyGroupingSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotificationStrategyGroupingSetting& obj) { 
      DARABONBA_PTR_TO_JSON(EnableRawAlertDispatching, enableRawAlertDispatching_);
      DARABONBA_PTR_TO_JSON(GroupingItems, groupingItems_);
      DARABONBA_PTR_TO_JSON(PeriodMin, periodMin_);
      DARABONBA_PTR_TO_JSON(SilenceSec, silenceSec_);
      DARABONBA_PTR_TO_JSON(Times, times_);
    };
    friend void from_json(const Darabonba::Json& j, NotificationStrategyGroupingSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableRawAlertDispatching, enableRawAlertDispatching_);
      DARABONBA_PTR_FROM_JSON(GroupingItems, groupingItems_);
      DARABONBA_PTR_FROM_JSON(PeriodMin, periodMin_);
      DARABONBA_PTR_FROM_JSON(SilenceSec, silenceSec_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
    };
    NotificationStrategyGroupingSetting() = default ;
    NotificationStrategyGroupingSetting(const NotificationStrategyGroupingSetting &) = default ;
    NotificationStrategyGroupingSetting(NotificationStrategyGroupingSetting &&) = default ;
    NotificationStrategyGroupingSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotificationStrategyGroupingSetting() = default ;
    NotificationStrategyGroupingSetting& operator=(const NotificationStrategyGroupingSetting &) = default ;
    NotificationStrategyGroupingSetting& operator=(NotificationStrategyGroupingSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableRawAlertDispatching_ != nullptr
        && this->groupingItems_ != nullptr && this->periodMin_ != nullptr && this->silenceSec_ != nullptr && this->times_ != nullptr; };
    // enableRawAlertDispatching Field Functions 
    bool hasEnableRawAlertDispatching() const { return this->enableRawAlertDispatching_ != nullptr;};
    void deleteEnableRawAlertDispatching() { this->enableRawAlertDispatching_ = nullptr;};
    inline bool enableRawAlertDispatching() const { DARABONBA_PTR_GET_DEFAULT(enableRawAlertDispatching_, false) };
    inline NotificationStrategyGroupingSetting& setEnableRawAlertDispatching(bool enableRawAlertDispatching) { DARABONBA_PTR_SET_VALUE(enableRawAlertDispatching_, enableRawAlertDispatching) };


    // groupingItems Field Functions 
    bool hasGroupingItems() const { return this->groupingItems_ != nullptr;};
    void deleteGroupingItems() { this->groupingItems_ = nullptr;};
    inline const vector<Models::NotificationStrategyGroupingSettingGroupingItems> & groupingItems() const { DARABONBA_PTR_GET_CONST(groupingItems_, vector<Models::NotificationStrategyGroupingSettingGroupingItems>) };
    inline vector<Models::NotificationStrategyGroupingSettingGroupingItems> groupingItems() { DARABONBA_PTR_GET(groupingItems_, vector<Models::NotificationStrategyGroupingSettingGroupingItems>) };
    inline NotificationStrategyGroupingSetting& setGroupingItems(const vector<Models::NotificationStrategyGroupingSettingGroupingItems> & groupingItems) { DARABONBA_PTR_SET_VALUE(groupingItems_, groupingItems) };
    inline NotificationStrategyGroupingSetting& setGroupingItems(vector<Models::NotificationStrategyGroupingSettingGroupingItems> && groupingItems) { DARABONBA_PTR_SET_RVALUE(groupingItems_, groupingItems) };


    // periodMin Field Functions 
    bool hasPeriodMin() const { return this->periodMin_ != nullptr;};
    void deletePeriodMin() { this->periodMin_ = nullptr;};
    inline int32_t periodMin() const { DARABONBA_PTR_GET_DEFAULT(periodMin_, 0) };
    inline NotificationStrategyGroupingSetting& setPeriodMin(int32_t periodMin) { DARABONBA_PTR_SET_VALUE(periodMin_, periodMin) };


    // silenceSec Field Functions 
    bool hasSilenceSec() const { return this->silenceSec_ != nullptr;};
    void deleteSilenceSec() { this->silenceSec_ = nullptr;};
    inline int32_t silenceSec() const { DARABONBA_PTR_GET_DEFAULT(silenceSec_, 0) };
    inline NotificationStrategyGroupingSetting& setSilenceSec(int32_t silenceSec) { DARABONBA_PTR_SET_VALUE(silenceSec_, silenceSec) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline NotificationStrategyGroupingSetting& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    std::shared_ptr<bool> enableRawAlertDispatching_ = nullptr;
    std::shared_ptr<vector<Models::NotificationStrategyGroupingSettingGroupingItems>> groupingItems_ = nullptr;
    std::shared_ptr<int32_t> periodMin_ = nullptr;
    std::shared_ptr<int32_t> silenceSec_ = nullptr;
    std::shared_ptr<int32_t> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
