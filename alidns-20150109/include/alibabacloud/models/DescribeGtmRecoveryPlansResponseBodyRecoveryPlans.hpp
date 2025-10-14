// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANSRESPONSEBODYRECOVERYPLANS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANSRESPONSEBODYRECOVERYPLANS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmRecoveryPlansResponseBodyRecoveryPlans : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmRecoveryPlansResponseBodyRecoveryPlans& obj) { 
      DARABONBA_PTR_TO_JSON(RecoveryPlan, recoveryPlan_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmRecoveryPlansResponseBodyRecoveryPlans& obj) { 
      DARABONBA_PTR_FROM_JSON(RecoveryPlan, recoveryPlan_);
    };
    DescribeGtmRecoveryPlansResponseBodyRecoveryPlans() = default ;
    DescribeGtmRecoveryPlansResponseBodyRecoveryPlans(const DescribeGtmRecoveryPlansResponseBodyRecoveryPlans &) = default ;
    DescribeGtmRecoveryPlansResponseBodyRecoveryPlans(DescribeGtmRecoveryPlansResponseBodyRecoveryPlans &&) = default ;
    DescribeGtmRecoveryPlansResponseBodyRecoveryPlans(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmRecoveryPlansResponseBodyRecoveryPlans() = default ;
    DescribeGtmRecoveryPlansResponseBodyRecoveryPlans& operator=(const DescribeGtmRecoveryPlansResponseBodyRecoveryPlans &) = default ;
    DescribeGtmRecoveryPlansResponseBodyRecoveryPlans& operator=(DescribeGtmRecoveryPlansResponseBodyRecoveryPlans &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recoveryPlan_ == nullptr; };
    // recoveryPlan Field Functions 
    bool hasRecoveryPlan() const { return this->recoveryPlan_ != nullptr;};
    void deleteRecoveryPlan() { this->recoveryPlan_ = nullptr;};
    inline const vector<Models::DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan> & recoveryPlan() const { DARABONBA_PTR_GET_CONST(recoveryPlan_, vector<Models::DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan>) };
    inline vector<Models::DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan> recoveryPlan() { DARABONBA_PTR_GET(recoveryPlan_, vector<Models::DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan>) };
    inline DescribeGtmRecoveryPlansResponseBodyRecoveryPlans& setRecoveryPlan(const vector<Models::DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan> & recoveryPlan) { DARABONBA_PTR_SET_VALUE(recoveryPlan_, recoveryPlan) };
    inline DescribeGtmRecoveryPlansResponseBodyRecoveryPlans& setRecoveryPlan(vector<Models::DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan> && recoveryPlan) { DARABONBA_PTR_SET_RVALUE(recoveryPlan_, recoveryPlan) };


  protected:
    std::shared_ptr<vector<Models::DescribeGtmRecoveryPlansResponseBodyRecoveryPlansRecoveryPlan>> recoveryPlan_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
