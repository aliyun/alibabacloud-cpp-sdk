// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLISTNODETASKCONFIGALERTCONFIGTARGETLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODYTASKLISTNODETASKCONFIGALERTCONFIGTARGETLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList& obj) { 
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList& obj) { 
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList() = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList(const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList(DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList &&) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList() = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList& operator=(const DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList &) = default ;
    DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList& operator=(DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->target_ != nullptr; };
    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget> & target() const { DARABONBA_PTR_GET_CONST(target_, vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget>) };
    inline vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget> target() { DARABONBA_PTR_GET(target_, vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget>) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList& setTarget(const vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget> & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetList& setTarget(vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget> && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    std::shared_ptr<vector<Models::DescribeHostAvailabilityListResponseBodyTaskListNodeTaskConfigAlertConfigTargetListTarget>> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
