// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLISTNODETASKCONFIGALERTCONFIGESCALATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLISTNODETASKCONFIGALERTCONFIGESCALATIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationListEscalationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList& obj) { 
      DARABONBA_PTR_TO_JSON(escalationList, escalationList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList& obj) { 
      DARABONBA_PTR_FROM_JSON(escalationList, escalationList_);
    };
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList() = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList(const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList(DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList &&) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList() = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList& operator=(const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList& operator=(DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->escalationList_ == nullptr; };
    // escalationList Field Functions 
    bool hasEscalationList() const { return this->escalationList_ != nullptr;};
    void deleteEscalationList() { this->escalationList_ = nullptr;};
    inline const vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationListEscalationList> & escalationList() const { DARABONBA_PTR_GET_CONST(escalationList_, vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationListEscalationList>) };
    inline vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationListEscalationList> escalationList() { DARABONBA_PTR_GET(escalationList_, vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationListEscalationList>) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList& setEscalationList(const vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationListEscalationList> & escalationList) { DARABONBA_PTR_SET_VALUE(escalationList_, escalationList) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationList& setEscalationList(vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationListEscalationList> && escalationList) { DARABONBA_PTR_SET_RVALUE(escalationList_, escalationList) };


  protected:
    std::shared_ptr<vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigEscalationListEscalationList>> escalationList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
