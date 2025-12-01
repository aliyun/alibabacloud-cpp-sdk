// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETDOWNLOADTASKLISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETDOWNLOADTASKLISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeBackupSetDownloadTaskListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupSetDownloadTaskListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetDownloadTaskDetail, backupSetDownloadTaskDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupSetDownloadTaskListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadTaskDetail, backupSetDownloadTaskDetail_);
    };
    DescribeBackupSetDownloadTaskListResponseBodyItems() = default ;
    DescribeBackupSetDownloadTaskListResponseBodyItems(const DescribeBackupSetDownloadTaskListResponseBodyItems &) = default ;
    DescribeBackupSetDownloadTaskListResponseBodyItems(DescribeBackupSetDownloadTaskListResponseBodyItems &&) = default ;
    DescribeBackupSetDownloadTaskListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupSetDownloadTaskListResponseBodyItems() = default ;
    DescribeBackupSetDownloadTaskListResponseBodyItems& operator=(const DescribeBackupSetDownloadTaskListResponseBodyItems &) = default ;
    DescribeBackupSetDownloadTaskListResponseBodyItems& operator=(DescribeBackupSetDownloadTaskListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupSetDownloadTaskDetail_ == nullptr; };
    // backupSetDownloadTaskDetail Field Functions 
    bool hasBackupSetDownloadTaskDetail() const { return this->backupSetDownloadTaskDetail_ != nullptr;};
    void deleteBackupSetDownloadTaskDetail() { this->backupSetDownloadTaskDetail_ = nullptr;};
    inline const vector<Models::DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail> & backupSetDownloadTaskDetail() const { DARABONBA_PTR_GET_CONST(backupSetDownloadTaskDetail_, vector<Models::DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail>) };
    inline vector<Models::DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail> backupSetDownloadTaskDetail() { DARABONBA_PTR_GET(backupSetDownloadTaskDetail_, vector<Models::DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail>) };
    inline DescribeBackupSetDownloadTaskListResponseBodyItems& setBackupSetDownloadTaskDetail(const vector<Models::DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail> & backupSetDownloadTaskDetail) { DARABONBA_PTR_SET_VALUE(backupSetDownloadTaskDetail_, backupSetDownloadTaskDetail) };
    inline DescribeBackupSetDownloadTaskListResponseBodyItems& setBackupSetDownloadTaskDetail(vector<Models::DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail> && backupSetDownloadTaskDetail) { DARABONBA_PTR_SET_RVALUE(backupSetDownloadTaskDetail_, backupSetDownloadTaskDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail>> backupSetDownloadTaskDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
