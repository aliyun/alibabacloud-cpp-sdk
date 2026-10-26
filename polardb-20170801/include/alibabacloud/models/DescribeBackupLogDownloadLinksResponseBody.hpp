// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPLOGDOWNLOADLINKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPLOGDOWNLOADLINKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBackupLogDownloadLinksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupLogDownloadLinksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupLogDownloadLinkItem, backupLogDownloadLinkItem_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupLogDownloadLinksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupLogDownloadLinkItem, backupLogDownloadLinkItem_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupLogDownloadLinksResponseBody() = default ;
    DescribeBackupLogDownloadLinksResponseBody(const DescribeBackupLogDownloadLinksResponseBody &) = default ;
    DescribeBackupLogDownloadLinksResponseBody(DescribeBackupLogDownloadLinksResponseBody &&) = default ;
    DescribeBackupLogDownloadLinksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupLogDownloadLinksResponseBody() = default ;
    DescribeBackupLogDownloadLinksResponseBody& operator=(const DescribeBackupLogDownloadLinksResponseBody &) = default ;
    DescribeBackupLogDownloadLinksResponseBody& operator=(DescribeBackupLogDownloadLinksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackupLogDownloadLinkItem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupLogDownloadLinkItem& obj) { 
        DARABONBA_PTR_TO_JSON(BackupLogId, backupLogId_);
        DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(IntranetDownloadLink, intranetDownloadLink_);
        DARABONBA_PTR_TO_JSON(LinkExpiredTime, linkExpiredTime_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, BackupLogDownloadLinkItem& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupLogId, backupLogId_);
        DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(IntranetDownloadLink, intranetDownloadLink_);
        DARABONBA_PTR_FROM_JSON(LinkExpiredTime, linkExpiredTime_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      BackupLogDownloadLinkItem() = default ;
      BackupLogDownloadLinkItem(const BackupLogDownloadLinkItem &) = default ;
      BackupLogDownloadLinkItem(BackupLogDownloadLinkItem &&) = default ;
      BackupLogDownloadLinkItem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupLogDownloadLinkItem() = default ;
      BackupLogDownloadLinkItem& operator=(const BackupLogDownloadLinkItem &) = default ;
      BackupLogDownloadLinkItem& operator=(BackupLogDownloadLinkItem &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupLogId_ == nullptr
        && this->downloadLink_ == nullptr && this->errorCode_ == nullptr && this->intranetDownloadLink_ == nullptr && this->linkExpiredTime_ == nullptr && this->message_ == nullptr; };
      // backupLogId Field Functions 
      bool hasBackupLogId() const { return this->backupLogId_ != nullptr;};
      void deleteBackupLogId() { this->backupLogId_ = nullptr;};
      inline string getBackupLogId() const { DARABONBA_PTR_GET_DEFAULT(backupLogId_, "") };
      inline BackupLogDownloadLinkItem& setBackupLogId(string backupLogId) { DARABONBA_PTR_SET_VALUE(backupLogId_, backupLogId) };


      // downloadLink Field Functions 
      bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
      void deleteDownloadLink() { this->downloadLink_ = nullptr;};
      inline string getDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
      inline BackupLogDownloadLinkItem& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline BackupLogDownloadLinkItem& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // intranetDownloadLink Field Functions 
      bool hasIntranetDownloadLink() const { return this->intranetDownloadLink_ != nullptr;};
      void deleteIntranetDownloadLink() { this->intranetDownloadLink_ = nullptr;};
      inline string getIntranetDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(intranetDownloadLink_, "") };
      inline BackupLogDownloadLinkItem& setIntranetDownloadLink(string intranetDownloadLink) { DARABONBA_PTR_SET_VALUE(intranetDownloadLink_, intranetDownloadLink) };


      // linkExpiredTime Field Functions 
      bool hasLinkExpiredTime() const { return this->linkExpiredTime_ != nullptr;};
      void deleteLinkExpiredTime() { this->linkExpiredTime_ = nullptr;};
      inline string getLinkExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(linkExpiredTime_, "") };
      inline BackupLogDownloadLinkItem& setLinkExpiredTime(string linkExpiredTime) { DARABONBA_PTR_SET_VALUE(linkExpiredTime_, linkExpiredTime) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline BackupLogDownloadLinkItem& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The ID of the redo log backup.
      shared_ptr<string> backupLogId_ {};
      // The public download link for the redo log backup.
      shared_ptr<string> downloadLink_ {};
      // The error code for the individual record. Empty if the request is successful.
      shared_ptr<string> errorCode_ {};
      // The internal network download link for the redo log backup.
      shared_ptr<string> intranetDownloadLink_ {};
      // The expiration time of the download link in UTC.
      shared_ptr<string> linkExpiredTime_ {};
      // The error message for the individual record. Empty if the request is successful.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->backupLogDownloadLinkItem_ == nullptr
        && this->requestId_ == nullptr; };
    // backupLogDownloadLinkItem Field Functions 
    bool hasBackupLogDownloadLinkItem() const { return this->backupLogDownloadLinkItem_ != nullptr;};
    void deleteBackupLogDownloadLinkItem() { this->backupLogDownloadLinkItem_ = nullptr;};
    inline const vector<DescribeBackupLogDownloadLinksResponseBody::BackupLogDownloadLinkItem> & getBackupLogDownloadLinkItem() const { DARABONBA_PTR_GET_CONST(backupLogDownloadLinkItem_, vector<DescribeBackupLogDownloadLinksResponseBody::BackupLogDownloadLinkItem>) };
    inline vector<DescribeBackupLogDownloadLinksResponseBody::BackupLogDownloadLinkItem> getBackupLogDownloadLinkItem() { DARABONBA_PTR_GET(backupLogDownloadLinkItem_, vector<DescribeBackupLogDownloadLinksResponseBody::BackupLogDownloadLinkItem>) };
    inline DescribeBackupLogDownloadLinksResponseBody& setBackupLogDownloadLinkItem(const vector<DescribeBackupLogDownloadLinksResponseBody::BackupLogDownloadLinkItem> & backupLogDownloadLinkItem) { DARABONBA_PTR_SET_VALUE(backupLogDownloadLinkItem_, backupLogDownloadLinkItem) };
    inline DescribeBackupLogDownloadLinksResponseBody& setBackupLogDownloadLinkItem(vector<DescribeBackupLogDownloadLinksResponseBody::BackupLogDownloadLinkItem> && backupLogDownloadLinkItem) { DARABONBA_PTR_SET_RVALUE(backupLogDownloadLinkItem_, backupLogDownloadLinkItem) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupLogDownloadLinksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the redo log backups.
    shared_ptr<vector<DescribeBackupLogDownloadLinksResponseBody::BackupLogDownloadLinkItem>> backupLogDownloadLinkItem_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
