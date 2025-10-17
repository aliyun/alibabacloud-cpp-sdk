// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPTASKSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPTASKSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupTasksResponseBodyItemsBackupJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBackupTasksResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupTasksResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(BackupJob, backupJob_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupTasksResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupJob, backupJob_);
    };
    DescribeBackupTasksResponseBodyItems() = default ;
    DescribeBackupTasksResponseBodyItems(const DescribeBackupTasksResponseBodyItems &) = default ;
    DescribeBackupTasksResponseBodyItems(DescribeBackupTasksResponseBodyItems &&) = default ;
    DescribeBackupTasksResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupTasksResponseBodyItems() = default ;
    DescribeBackupTasksResponseBodyItems& operator=(const DescribeBackupTasksResponseBodyItems &) = default ;
    DescribeBackupTasksResponseBodyItems& operator=(DescribeBackupTasksResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupJob_ == nullptr; };
    // backupJob Field Functions 
    bool hasBackupJob() const { return this->backupJob_ != nullptr;};
    void deleteBackupJob() { this->backupJob_ = nullptr;};
    inline const vector<Models::DescribeBackupTasksResponseBodyItemsBackupJob> & backupJob() const { DARABONBA_PTR_GET_CONST(backupJob_, vector<Models::DescribeBackupTasksResponseBodyItemsBackupJob>) };
    inline vector<Models::DescribeBackupTasksResponseBodyItemsBackupJob> backupJob() { DARABONBA_PTR_GET(backupJob_, vector<Models::DescribeBackupTasksResponseBodyItemsBackupJob>) };
    inline DescribeBackupTasksResponseBodyItems& setBackupJob(const vector<Models::DescribeBackupTasksResponseBodyItemsBackupJob> & backupJob) { DARABONBA_PTR_SET_VALUE(backupJob_, backupJob) };
    inline DescribeBackupTasksResponseBodyItems& setBackupJob(vector<Models::DescribeBackupTasksResponseBodyItemsBackupJob> && backupJob) { DARABONBA_PTR_SET_RVALUE(backupJob_, backupJob) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackupTasksResponseBodyItemsBackupJob>> backupJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
