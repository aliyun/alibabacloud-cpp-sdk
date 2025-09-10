// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETRESPONSEBODYDATAOSSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETRESPONSEBODYDATAOSSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeBackupSetResponseBodyDataOSSList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupSetResponseBodyDataOSSList& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetFile, backupSetFile_);
      DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_TO_JSON(IntranetDownloadLink, intranetDownloadLink_);
      DARABONBA_PTR_TO_JSON(LinkExpiredTime, linkExpiredTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupSetResponseBodyDataOSSList& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetFile, backupSetFile_);
      DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
      DARABONBA_PTR_FROM_JSON(IntranetDownloadLink, intranetDownloadLink_);
      DARABONBA_PTR_FROM_JSON(LinkExpiredTime, linkExpiredTime_);
    };
    DescribeBackupSetResponseBodyDataOSSList() = default ;
    DescribeBackupSetResponseBodyDataOSSList(const DescribeBackupSetResponseBodyDataOSSList &) = default ;
    DescribeBackupSetResponseBodyDataOSSList(DescribeBackupSetResponseBodyDataOSSList &&) = default ;
    DescribeBackupSetResponseBodyDataOSSList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupSetResponseBodyDataOSSList() = default ;
    DescribeBackupSetResponseBodyDataOSSList& operator=(const DescribeBackupSetResponseBodyDataOSSList &) = default ;
    DescribeBackupSetResponseBodyDataOSSList& operator=(DescribeBackupSetResponseBodyDataOSSList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupSetFile_ != nullptr
        && this->downloadLink_ != nullptr && this->intranetDownloadLink_ != nullptr && this->linkExpiredTime_ != nullptr; };
    // backupSetFile Field Functions 
    bool hasBackupSetFile() const { return this->backupSetFile_ != nullptr;};
    void deleteBackupSetFile() { this->backupSetFile_ = nullptr;};
    inline string backupSetFile() const { DARABONBA_PTR_GET_DEFAULT(backupSetFile_, "") };
    inline DescribeBackupSetResponseBodyDataOSSList& setBackupSetFile(string backupSetFile) { DARABONBA_PTR_SET_VALUE(backupSetFile_, backupSetFile) };


    // downloadLink Field Functions 
    bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
    void deleteDownloadLink() { this->downloadLink_ = nullptr;};
    inline string downloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
    inline DescribeBackupSetResponseBodyDataOSSList& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


    // intranetDownloadLink Field Functions 
    bool hasIntranetDownloadLink() const { return this->intranetDownloadLink_ != nullptr;};
    void deleteIntranetDownloadLink() { this->intranetDownloadLink_ = nullptr;};
    inline string intranetDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(intranetDownloadLink_, "") };
    inline DescribeBackupSetResponseBodyDataOSSList& setIntranetDownloadLink(string intranetDownloadLink) { DARABONBA_PTR_SET_VALUE(intranetDownloadLink_, intranetDownloadLink) };


    // linkExpiredTime Field Functions 
    bool hasLinkExpiredTime() const { return this->linkExpiredTime_ != nullptr;};
    void deleteLinkExpiredTime() { this->linkExpiredTime_ = nullptr;};
    inline string linkExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(linkExpiredTime_, "") };
    inline DescribeBackupSetResponseBodyDataOSSList& setLinkExpiredTime(string linkExpiredTime) { DARABONBA_PTR_SET_VALUE(linkExpiredTime_, linkExpiredTime) };


  protected:
    std::shared_ptr<string> backupSetFile_ = nullptr;
    std::shared_ptr<string> downloadLink_ = nullptr;
    std::shared_ptr<string> intranetDownloadLink_ = nullptr;
    std::shared_ptr<string> linkExpiredTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
