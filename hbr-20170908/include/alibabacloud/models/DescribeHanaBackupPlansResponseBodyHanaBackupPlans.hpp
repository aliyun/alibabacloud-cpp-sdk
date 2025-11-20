// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANABACKUPPLANSRESPONSEBODYHANABACKUPPLANS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANABACKUPPLANSRESPONSEBODYHANABACKUPPLANS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaBackupPlansResponseBodyHanaBackupPlans : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaBackupPlansResponseBodyHanaBackupPlans& obj) { 
      DARABONBA_PTR_TO_JSON(HanaBackupPlan, hanaBackupPlan_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaBackupPlansResponseBodyHanaBackupPlans& obj) { 
      DARABONBA_PTR_FROM_JSON(HanaBackupPlan, hanaBackupPlan_);
    };
    DescribeHanaBackupPlansResponseBodyHanaBackupPlans() = default ;
    DescribeHanaBackupPlansResponseBodyHanaBackupPlans(const DescribeHanaBackupPlansResponseBodyHanaBackupPlans &) = default ;
    DescribeHanaBackupPlansResponseBodyHanaBackupPlans(DescribeHanaBackupPlansResponseBodyHanaBackupPlans &&) = default ;
    DescribeHanaBackupPlansResponseBodyHanaBackupPlans(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaBackupPlansResponseBodyHanaBackupPlans() = default ;
    DescribeHanaBackupPlansResponseBodyHanaBackupPlans& operator=(const DescribeHanaBackupPlansResponseBodyHanaBackupPlans &) = default ;
    DescribeHanaBackupPlansResponseBodyHanaBackupPlans& operator=(DescribeHanaBackupPlansResponseBodyHanaBackupPlans &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hanaBackupPlan_ == nullptr; };
    // hanaBackupPlan Field Functions 
    bool hasHanaBackupPlan() const { return this->hanaBackupPlan_ != nullptr;};
    void deleteHanaBackupPlan() { this->hanaBackupPlan_ = nullptr;};
    inline const vector<Models::DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan> & hanaBackupPlan() const { DARABONBA_PTR_GET_CONST(hanaBackupPlan_, vector<Models::DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan>) };
    inline vector<Models::DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan> hanaBackupPlan() { DARABONBA_PTR_GET(hanaBackupPlan_, vector<Models::DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan>) };
    inline DescribeHanaBackupPlansResponseBodyHanaBackupPlans& setHanaBackupPlan(const vector<Models::DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan> & hanaBackupPlan) { DARABONBA_PTR_SET_VALUE(hanaBackupPlan_, hanaBackupPlan) };
    inline DescribeHanaBackupPlansResponseBodyHanaBackupPlans& setHanaBackupPlan(vector<Models::DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan> && hanaBackupPlan) { DARABONBA_PTR_SET_RVALUE(hanaBackupPlan_, hanaBackupPlan) };


  protected:
    std::shared_ptr<vector<Models::DescribeHanaBackupPlansResponseBodyHanaBackupPlansHanaBackupPlan>> hanaBackupPlan_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
