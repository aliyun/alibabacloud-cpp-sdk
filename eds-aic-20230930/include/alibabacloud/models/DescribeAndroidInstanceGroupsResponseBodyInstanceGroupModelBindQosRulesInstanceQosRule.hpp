// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCEGROUPSRESPONSEBODYINSTANCEGROUPMODELBINDQOSRULESINSTANCEQOSRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCEGROUPSRESPONSEBODYINSTANCEGROUPMODELBINDQOSRULESINSTANCEQOSRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(QosRuleId, qosRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(QosRuleId, qosRuleId_);
    };
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule() = default ;
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule(const DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule &) = default ;
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule(DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule &&) = default ;
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule() = default ;
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule& operator=(const DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule &) = default ;
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule& operator=(DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->qosRuleId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // qosRuleId Field Functions 
    bool hasQosRuleId() const { return this->qosRuleId_ != nullptr;};
    void deleteQosRuleId() { this->qosRuleId_ = nullptr;};
    inline string qosRuleId() const { DARABONBA_PTR_GET_DEFAULT(qosRuleId_, "") };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule& setQosRuleId(string qosRuleId) { DARABONBA_PTR_SET_VALUE(qosRuleId_, qosRuleId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> qosRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
