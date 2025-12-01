// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANLISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANLISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupPlanListResponseBodyItemsBackupPlanDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeBackupPlanListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlanListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanDetail, backupPlanDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlanListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanDetail, backupPlanDetail_);
    };
    DescribeBackupPlanListResponseBodyItems() = default ;
    DescribeBackupPlanListResponseBodyItems(const DescribeBackupPlanListResponseBodyItems &) = default ;
    DescribeBackupPlanListResponseBodyItems(DescribeBackupPlanListResponseBodyItems &&) = default ;
    DescribeBackupPlanListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlanListResponseBodyItems() = default ;
    DescribeBackupPlanListResponseBodyItems& operator=(const DescribeBackupPlanListResponseBodyItems &) = default ;
    DescribeBackupPlanListResponseBodyItems& operator=(DescribeBackupPlanListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanDetail_ == nullptr; };
    // backupPlanDetail Field Functions 
    bool hasBackupPlanDetail() const { return this->backupPlanDetail_ != nullptr;};
    void deleteBackupPlanDetail() { this->backupPlanDetail_ = nullptr;};
    inline const vector<Models::DescribeBackupPlanListResponseBodyItemsBackupPlanDetail> & backupPlanDetail() const { DARABONBA_PTR_GET_CONST(backupPlanDetail_, vector<Models::DescribeBackupPlanListResponseBodyItemsBackupPlanDetail>) };
    inline vector<Models::DescribeBackupPlanListResponseBodyItemsBackupPlanDetail> backupPlanDetail() { DARABONBA_PTR_GET(backupPlanDetail_, vector<Models::DescribeBackupPlanListResponseBodyItemsBackupPlanDetail>) };
    inline DescribeBackupPlanListResponseBodyItems& setBackupPlanDetail(const vector<Models::DescribeBackupPlanListResponseBodyItemsBackupPlanDetail> & backupPlanDetail) { DARABONBA_PTR_SET_VALUE(backupPlanDetail_, backupPlanDetail) };
    inline DescribeBackupPlanListResponseBodyItems& setBackupPlanDetail(vector<Models::DescribeBackupPlanListResponseBodyItemsBackupPlanDetail> && backupPlanDetail) { DARABONBA_PTR_SET_RVALUE(backupPlanDetail_, backupPlanDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackupPlanListResponseBodyItemsBackupPlanDetail>> backupPlanDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
