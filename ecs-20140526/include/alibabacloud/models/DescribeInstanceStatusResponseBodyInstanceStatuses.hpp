// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATUSRESPONSEBODYINSTANCESTATUSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATUSRESPONSEBODYINSTANCESTATUSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceStatusResponseBodyInstanceStatuses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceStatusResponseBodyInstanceStatuses& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceStatusResponseBodyInstanceStatuses& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
    };
    DescribeInstanceStatusResponseBodyInstanceStatuses() = default ;
    DescribeInstanceStatusResponseBodyInstanceStatuses(const DescribeInstanceStatusResponseBodyInstanceStatuses &) = default ;
    DescribeInstanceStatusResponseBodyInstanceStatuses(DescribeInstanceStatusResponseBodyInstanceStatuses &&) = default ;
    DescribeInstanceStatusResponseBodyInstanceStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceStatusResponseBodyInstanceStatuses() = default ;
    DescribeInstanceStatusResponseBodyInstanceStatuses& operator=(const DescribeInstanceStatusResponseBodyInstanceStatuses &) = default ;
    DescribeInstanceStatusResponseBodyInstanceStatuses& operator=(DescribeInstanceStatusResponseBodyInstanceStatuses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceStatus_ != nullptr; };
    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline const vector<Models::DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus> & instanceStatus() const { DARABONBA_PTR_GET_CONST(instanceStatus_, vector<Models::DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus>) };
    inline vector<Models::DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus> instanceStatus() { DARABONBA_PTR_GET(instanceStatus_, vector<Models::DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus>) };
    inline DescribeInstanceStatusResponseBodyInstanceStatuses& setInstanceStatus(const vector<Models::DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus> & instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };
    inline DescribeInstanceStatusResponseBodyInstanceStatuses& setInstanceStatus(vector<Models::DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus> && instanceStatus) { DARABONBA_PTR_SET_RVALUE(instanceStatus_, instanceStatus) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceStatusResponseBodyInstanceStatusesInstanceStatus>> instanceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
