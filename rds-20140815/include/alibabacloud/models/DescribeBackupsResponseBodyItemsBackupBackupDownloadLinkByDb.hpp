// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYITEMSBACKUPBACKUPDOWNLOADLINKBYDB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYITEMSBACKUPBACKUPDOWNLOADLINKBYDB_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB& obj) { 
      DARABONBA_PTR_TO_JSON(BackupDownloadLinkByDB, backupDownloadLinkByDB_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupDownloadLinkByDB, backupDownloadLinkByDB_);
    };
    DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB() = default ;
    DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB(const DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB &) = default ;
    DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB(DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB &&) = default ;
    DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB() = default ;
    DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB& operator=(const DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB &) = default ;
    DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB& operator=(DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupDownloadLinkByDB_ == nullptr; };
    // backupDownloadLinkByDB Field Functions 
    bool hasBackupDownloadLinkByDB() const { return this->backupDownloadLinkByDB_ != nullptr;};
    void deleteBackupDownloadLinkByDB() { this->backupDownloadLinkByDB_ = nullptr;};
    inline const vector<Models::DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB> & backupDownloadLinkByDB() const { DARABONBA_PTR_GET_CONST(backupDownloadLinkByDB_, vector<Models::DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB>) };
    inline vector<Models::DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB> backupDownloadLinkByDB() { DARABONBA_PTR_GET(backupDownloadLinkByDB_, vector<Models::DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB>) };
    inline DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB& setBackupDownloadLinkByDB(const vector<Models::DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB> & backupDownloadLinkByDB) { DARABONBA_PTR_SET_VALUE(backupDownloadLinkByDB_, backupDownloadLinkByDB) };
    inline DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDB& setBackupDownloadLinkByDB(vector<Models::DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB> && backupDownloadLinkByDB) { DARABONBA_PTR_SET_RVALUE(backupDownloadLinkByDB_, backupDownloadLinkByDB) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB>> backupDownloadLinkByDB_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
