// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupPlansResponseBodyBackupPlansBackupPlan.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupPlansResponseBodyBackupPlans : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlansResponseBodyBackupPlans& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlan, backupPlan_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlansResponseBodyBackupPlans& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlan, backupPlan_);
    };
    DescribeBackupPlansResponseBodyBackupPlans() = default ;
    DescribeBackupPlansResponseBodyBackupPlans(const DescribeBackupPlansResponseBodyBackupPlans &) = default ;
    DescribeBackupPlansResponseBodyBackupPlans(DescribeBackupPlansResponseBodyBackupPlans &&) = default ;
    DescribeBackupPlansResponseBodyBackupPlans(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlansResponseBodyBackupPlans() = default ;
    DescribeBackupPlansResponseBodyBackupPlans& operator=(const DescribeBackupPlansResponseBodyBackupPlans &) = default ;
    DescribeBackupPlansResponseBodyBackupPlans& operator=(DescribeBackupPlansResponseBodyBackupPlans &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupPlan_ != nullptr; };
    // backupPlan Field Functions 
    bool hasBackupPlan() const { return this->backupPlan_ != nullptr;};
    void deleteBackupPlan() { this->backupPlan_ = nullptr;};
    inline const vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlan> & backupPlan() const { DARABONBA_PTR_GET_CONST(backupPlan_, vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlan>) };
    inline vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlan> backupPlan() { DARABONBA_PTR_GET(backupPlan_, vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlan>) };
    inline DescribeBackupPlansResponseBodyBackupPlans& setBackupPlan(const vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlan> & backupPlan) { DARABONBA_PTR_SET_VALUE(backupPlan_, backupPlan) };
    inline DescribeBackupPlansResponseBodyBackupPlans& setBackupPlan(vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlan> && backupPlan) { DARABONBA_PTR_SET_RVALUE(backupPlan_, backupPlan) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlan>> backupPlan_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
