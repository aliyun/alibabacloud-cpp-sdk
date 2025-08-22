// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNOTIFICATIONPOLICIESRESPONSEBODYPAGEBEANNOTIFICATIONPOLICIESGROUPRULE_HPP_
#define ALIBABACLOUD_MODELS_LISTNOTIFICATIONPOLICIESRESPONSEBODYPAGEBEANNOTIFICATIONPOLICIESGROUPRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule& obj) { 
      DARABONBA_PTR_TO_JSON(GroupInterval, groupInterval_);
      DARABONBA_PTR_TO_JSON(GroupWait, groupWait_);
      DARABONBA_PTR_TO_JSON(GroupingFields, groupingFields_);
    };
    friend void from_json(const Darabonba::Json& j, ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupInterval, groupInterval_);
      DARABONBA_PTR_FROM_JSON(GroupWait, groupWait_);
      DARABONBA_PTR_FROM_JSON(GroupingFields, groupingFields_);
    };
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule() = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule(const ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule &) = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule(ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule &&) = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule() = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule& operator=(const ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule &) = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule& operator=(ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupInterval_ != nullptr
        && this->groupWait_ != nullptr && this->groupingFields_ != nullptr; };
    // groupInterval Field Functions 
    bool hasGroupInterval() const { return this->groupInterval_ != nullptr;};
    void deleteGroupInterval() { this->groupInterval_ = nullptr;};
    inline int64_t groupInterval() const { DARABONBA_PTR_GET_DEFAULT(groupInterval_, 0L) };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule& setGroupInterval(int64_t groupInterval) { DARABONBA_PTR_SET_VALUE(groupInterval_, groupInterval) };


    // groupWait Field Functions 
    bool hasGroupWait() const { return this->groupWait_ != nullptr;};
    void deleteGroupWait() { this->groupWait_ = nullptr;};
    inline int64_t groupWait() const { DARABONBA_PTR_GET_DEFAULT(groupWait_, 0L) };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule& setGroupWait(int64_t groupWait) { DARABONBA_PTR_SET_VALUE(groupWait_, groupWait) };


    // groupingFields Field Functions 
    bool hasGroupingFields() const { return this->groupingFields_ != nullptr;};
    void deleteGroupingFields() { this->groupingFields_ = nullptr;};
    inline const vector<string> & groupingFields() const { DARABONBA_PTR_GET_CONST(groupingFields_, vector<string>) };
    inline vector<string> groupingFields() { DARABONBA_PTR_GET(groupingFields_, vector<string>) };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule& setGroupingFields(const vector<string> & groupingFields) { DARABONBA_PTR_SET_VALUE(groupingFields_, groupingFields) };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesGroupRule& setGroupingFields(vector<string> && groupingFields) { DARABONBA_PTR_SET_RVALUE(groupingFields_, groupingFields) };


  protected:
    // The time interval of grouping. Unit: seconds. Default value: 30.
    std::shared_ptr<int64_t> groupInterval_ = nullptr;
    // The waiting time for grouping. Unit: seconds. Default value: 5.
    std::shared_ptr<int64_t> groupWait_ = nullptr;
    // An array of alert event group objects.
    // 
    // *   If you do not specify the groupingFields field, all alerts will be sent to contacts based on `alertname`.
    // *   If you specify the groupingFields field, alerts with the same field will be sent to contacts in one notification.
    std::shared_ptr<vector<string>> groupingFields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
