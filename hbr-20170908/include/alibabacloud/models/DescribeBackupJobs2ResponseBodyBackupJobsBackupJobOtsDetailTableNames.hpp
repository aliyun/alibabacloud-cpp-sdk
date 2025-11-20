// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODYBACKUPJOBSBACKUPJOBOTSDETAILTABLENAMES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODYBACKUPJOBSBACKUPJOBOTSDETAILTABLENAMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames& obj) { 
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames& obj) { 
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames() = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames(const DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames &) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames(DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames &&) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames() = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames& operator=(const DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames &) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames& operator=(DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tableName_ == nullptr; };
    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline const vector<string> & tableName() const { DARABONBA_PTR_GET_CONST(tableName_, vector<string>) };
    inline vector<string> tableName() { DARABONBA_PTR_GET(tableName_, vector<string>) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames& setTableName(const vector<string> & tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetailTableNames& setTableName(vector<string> && tableName) { DARABONBA_PTR_SET_RVALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<vector<string>> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
