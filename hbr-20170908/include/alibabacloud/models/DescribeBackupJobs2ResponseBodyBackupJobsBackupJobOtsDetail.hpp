// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODYBACKUPJOBSBACKUPJOBOTSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODYBACKUPJOBSBACKUPJOBOTSDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail& obj) { 
      DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
    };
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail() = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail(const DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail &) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail(DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail &&) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail() = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail& operator=(const DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail &) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail& operator=(DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tableNames_ == nullptr; };
    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline const Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames & tableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames) };
    inline Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames tableNames() { DARABONBA_PTR_GET(tableNames_, Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail& setTableNames(const Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail& setTableNames(Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


  protected:
    // The names of the destination tables in the Tablestore instance.
    std::shared_ptr<Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames> tableNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
