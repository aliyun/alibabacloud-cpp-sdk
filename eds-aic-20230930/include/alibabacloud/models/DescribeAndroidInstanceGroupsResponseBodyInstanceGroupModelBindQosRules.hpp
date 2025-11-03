// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCEGROUPSRESPONSEBODYINSTANCEGROUPMODELBINDQOSRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCEGROUPSRESPONSEBODYINSTANCEGROUPMODELBINDQOSRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceQosRule, instanceQosRule_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceQosRule, instanceQosRule_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules() = default ;
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules(const DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules &) = default ;
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules(DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules &&) = default ;
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules() = default ;
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules& operator=(const DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules &) = default ;
    DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules& operator=(DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceQosRule_ == nullptr
        && return this->totalCount_ == nullptr; };
    // instanceQosRule Field Functions 
    bool hasInstanceQosRule() const { return this->instanceQosRule_ != nullptr;};
    void deleteInstanceQosRule() { this->instanceQosRule_ = nullptr;};
    inline const vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule> & instanceQosRule() const { DARABONBA_PTR_GET_CONST(instanceQosRule_, vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule>) };
    inline vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule> instanceQosRule() { DARABONBA_PTR_GET(instanceQosRule_, vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule>) };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules& setInstanceQosRule(const vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule> & instanceQosRule) { DARABONBA_PTR_SET_VALUE(instanceQosRule_, instanceQosRule) };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules& setInstanceQosRule(vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule> && instanceQosRule) { DARABONBA_PTR_SET_RVALUE(instanceQosRule_, instanceQosRule) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRules& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::DescribeAndroidInstanceGroupsResponseBodyInstanceGroupModelBindQosRulesInstanceQosRule>> instanceQosRule_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
