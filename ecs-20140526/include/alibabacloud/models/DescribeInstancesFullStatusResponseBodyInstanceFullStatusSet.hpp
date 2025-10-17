// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESFULLSTATUSRESPONSEBODYINSTANCEFULLSTATUSSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESFULLSTATUSRESPONSEBODYINSTANCEFULLSTATUSSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceFullStatusType, instanceFullStatusType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceFullStatusType, instanceFullStatusType_);
    };
    DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet() = default ;
    DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet(const DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet &) = default ;
    DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet(DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet &&) = default ;
    DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet() = default ;
    DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet& operator=(const DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet &) = default ;
    DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet& operator=(DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceFullStatusType_ == nullptr; };
    // instanceFullStatusType Field Functions 
    bool hasInstanceFullStatusType() const { return this->instanceFullStatusType_ != nullptr;};
    void deleteInstanceFullStatusType() { this->instanceFullStatusType_ = nullptr;};
    inline const vector<Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType> & instanceFullStatusType() const { DARABONBA_PTR_GET_CONST(instanceFullStatusType_, vector<Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType>) };
    inline vector<Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType> instanceFullStatusType() { DARABONBA_PTR_GET(instanceFullStatusType_, vector<Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType>) };
    inline DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet& setInstanceFullStatusType(const vector<Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType> & instanceFullStatusType) { DARABONBA_PTR_SET_VALUE(instanceFullStatusType_, instanceFullStatusType) };
    inline DescribeInstancesFullStatusResponseBodyInstanceFullStatusSet& setInstanceFullStatusType(vector<Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType> && instanceFullStatusType) { DARABONBA_PTR_SET_RVALUE(instanceFullStatusType_, instanceFullStatusType) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstancesFullStatusResponseBodyInstanceFullStatusSetInstanceFullStatusType>> instanceFullStatusType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
