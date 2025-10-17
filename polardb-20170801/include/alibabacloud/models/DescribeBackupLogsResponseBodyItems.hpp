// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPLOGSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPLOGSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupLogsResponseBodyItemsBackupLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBackupLogsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupLogsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(BackupLog, backupLog_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupLogsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupLog, backupLog_);
    };
    DescribeBackupLogsResponseBodyItems() = default ;
    DescribeBackupLogsResponseBodyItems(const DescribeBackupLogsResponseBodyItems &) = default ;
    DescribeBackupLogsResponseBodyItems(DescribeBackupLogsResponseBodyItems &&) = default ;
    DescribeBackupLogsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupLogsResponseBodyItems() = default ;
    DescribeBackupLogsResponseBodyItems& operator=(const DescribeBackupLogsResponseBodyItems &) = default ;
    DescribeBackupLogsResponseBodyItems& operator=(DescribeBackupLogsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupLog_ == nullptr; };
    // backupLog Field Functions 
    bool hasBackupLog() const { return this->backupLog_ != nullptr;};
    void deleteBackupLog() { this->backupLog_ = nullptr;};
    inline const vector<Models::DescribeBackupLogsResponseBodyItemsBackupLog> & backupLog() const { DARABONBA_PTR_GET_CONST(backupLog_, vector<Models::DescribeBackupLogsResponseBodyItemsBackupLog>) };
    inline vector<Models::DescribeBackupLogsResponseBodyItemsBackupLog> backupLog() { DARABONBA_PTR_GET(backupLog_, vector<Models::DescribeBackupLogsResponseBodyItemsBackupLog>) };
    inline DescribeBackupLogsResponseBodyItems& setBackupLog(const vector<Models::DescribeBackupLogsResponseBodyItemsBackupLog> & backupLog) { DARABONBA_PTR_SET_VALUE(backupLog_, backupLog) };
    inline DescribeBackupLogsResponseBodyItems& setBackupLog(vector<Models::DescribeBackupLogsResponseBodyItemsBackupLog> && backupLog) { DARABONBA_PTR_SET_RVALUE(backupLog_, backupLog) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackupLogsResponseBodyItemsBackupLog>> backupLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
