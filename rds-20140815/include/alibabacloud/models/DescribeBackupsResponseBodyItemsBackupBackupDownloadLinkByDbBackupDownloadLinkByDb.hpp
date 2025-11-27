// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYITEMSBACKUPBACKUPDOWNLOADLINKBYDBBACKUPDOWNLOADLINKBYDB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODYITEMSBACKUPBACKUPDOWNLOADLINKBYDBBACKUPDOWNLOADLINKBYDB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB& obj) { 
      DARABONBA_PTR_TO_JSON(DataBase, dataBase_);
      DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_TO_JSON(IntranetDownloadLink, intranetDownloadLink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB& obj) { 
      DARABONBA_PTR_FROM_JSON(DataBase, dataBase_);
      DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_FROM_JSON(IntranetDownloadLink, intranetDownloadLink_);
    };
    DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB() = default ;
    DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB(const DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB &) = default ;
    DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB(DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB &&) = default ;
    DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB() = default ;
    DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB& operator=(const DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB &) = default ;
    DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB& operator=(DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataBase_ == nullptr
        && return this->downloadLink_ == nullptr && return this->intranetDownloadLink_ == nullptr; };
    // dataBase Field Functions 
    bool hasDataBase() const { return this->dataBase_ != nullptr;};
    void deleteDataBase() { this->dataBase_ = nullptr;};
    inline string dataBase() const { DARABONBA_PTR_GET_DEFAULT(dataBase_, "") };
    inline DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB& setDataBase(string dataBase) { DARABONBA_PTR_SET_VALUE(dataBase_, dataBase) };


    // downloadLink Field Functions 
    bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
    void deleteDownloadLink() { this->downloadLink_ = nullptr;};
    inline string downloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
    inline DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


    // intranetDownloadLink Field Functions 
    bool hasIntranetDownloadLink() const { return this->intranetDownloadLink_ != nullptr;};
    void deleteIntranetDownloadLink() { this->intranetDownloadLink_ = nullptr;};
    inline string intranetDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(intranetDownloadLink_, "") };
    inline DescribeBackupsResponseBodyItemsBackupBackupDownloadLinkByDBBackupDownloadLinkByDB& setIntranetDownloadLink(string intranetDownloadLink) { DARABONBA_PTR_SET_VALUE(intranetDownloadLink_, intranetDownloadLink) };


  protected:
    // The name of the database.
    std::shared_ptr<string> dataBase_ = nullptr;
    // The public URL from which you can download the backup set.
    std::shared_ptr<string> downloadLink_ = nullptr;
    // The internal URL from which you can download the backup set.
    std::shared_ptr<string> intranetDownloadLink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
