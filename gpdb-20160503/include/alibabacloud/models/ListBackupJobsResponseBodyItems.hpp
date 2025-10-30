// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPJOBSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPJOBSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBackupJobsResponseBodyItemsBackupJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListBackupJobsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupJobsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(BackupJob, backupJob_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupJobsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupJob, backupJob_);
    };
    ListBackupJobsResponseBodyItems() = default ;
    ListBackupJobsResponseBodyItems(const ListBackupJobsResponseBodyItems &) = default ;
    ListBackupJobsResponseBodyItems(ListBackupJobsResponseBodyItems &&) = default ;
    ListBackupJobsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupJobsResponseBodyItems() = default ;
    ListBackupJobsResponseBodyItems& operator=(const ListBackupJobsResponseBodyItems &) = default ;
    ListBackupJobsResponseBodyItems& operator=(ListBackupJobsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupJob_ == nullptr; };
    // backupJob Field Functions 
    bool hasBackupJob() const { return this->backupJob_ != nullptr;};
    void deleteBackupJob() { this->backupJob_ = nullptr;};
    inline const vector<Models::ListBackupJobsResponseBodyItemsBackupJob> & backupJob() const { DARABONBA_PTR_GET_CONST(backupJob_, vector<Models::ListBackupJobsResponseBodyItemsBackupJob>) };
    inline vector<Models::ListBackupJobsResponseBodyItemsBackupJob> backupJob() { DARABONBA_PTR_GET(backupJob_, vector<Models::ListBackupJobsResponseBodyItemsBackupJob>) };
    inline ListBackupJobsResponseBodyItems& setBackupJob(const vector<Models::ListBackupJobsResponseBodyItemsBackupJob> & backupJob) { DARABONBA_PTR_SET_VALUE(backupJob_, backupJob) };
    inline ListBackupJobsResponseBodyItems& setBackupJob(vector<Models::ListBackupJobsResponseBodyItemsBackupJob> && backupJob) { DARABONBA_PTR_SET_RVALUE(backupJob_, backupJob) };


  protected:
    std::shared_ptr<vector<Models::ListBackupJobsResponseBodyItemsBackupJob>> backupJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
