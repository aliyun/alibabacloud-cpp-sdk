// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeBackupSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeBackupSetResponseBody() = default ;
    DescribeBackupSetResponseBody(const DescribeBackupSetResponseBody &) = default ;
    DescribeBackupSetResponseBody(DescribeBackupSetResponseBody &&) = default ;
    DescribeBackupSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupSetResponseBody() = default ;
    DescribeBackupSetResponseBody& operator=(const DescribeBackupSetResponseBody &) = default ;
    DescribeBackupSetResponseBody& operator=(DescribeBackupSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BackupModel, backupModel_);
        DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
        DARABONBA_PTR_TO_JSON(BackupSetSize, backupSetSize_);
        DARABONBA_PTR_TO_JSON(BackupType, backupType_);
        DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(OSSList, OSSList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupModel, backupModel_);
        DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
        DARABONBA_PTR_FROM_JSON(BackupSetSize, backupSetSize_);
        DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
        DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(OSSList, OSSList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OSSList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OSSList& obj) { 
          DARABONBA_PTR_TO_JSON(BackupSetFile, backupSetFile_);
          DARABONBA_PTR_TO_JSON(DownloadLink, downloadLink_);
          DARABONBA_PTR_TO_JSON(IntranetDownloadLink, intranetDownloadLink_);
          DARABONBA_PTR_TO_JSON(LinkExpiredTime, linkExpiredTime_);
        };
        friend void from_json(const Darabonba::Json& j, OSSList& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupSetFile, backupSetFile_);
          DARABONBA_PTR_FROM_JSON(DownloadLink, downloadLink_);
          DARABONBA_PTR_FROM_JSON(IntranetDownloadLink, intranetDownloadLink_);
          DARABONBA_PTR_FROM_JSON(LinkExpiredTime, linkExpiredTime_);
        };
        OSSList() = default ;
        OSSList(const OSSList &) = default ;
        OSSList(OSSList &&) = default ;
        OSSList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OSSList() = default ;
        OSSList& operator=(const OSSList &) = default ;
        OSSList& operator=(OSSList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupSetFile_ == nullptr
        && this->downloadLink_ == nullptr && this->intranetDownloadLink_ == nullptr && this->linkExpiredTime_ == nullptr; };
        // backupSetFile Field Functions 
        bool hasBackupSetFile() const { return this->backupSetFile_ != nullptr;};
        void deleteBackupSetFile() { this->backupSetFile_ = nullptr;};
        inline string getBackupSetFile() const { DARABONBA_PTR_GET_DEFAULT(backupSetFile_, "") };
        inline OSSList& setBackupSetFile(string backupSetFile) { DARABONBA_PTR_SET_VALUE(backupSetFile_, backupSetFile) };


        // downloadLink Field Functions 
        bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
        void deleteDownloadLink() { this->downloadLink_ = nullptr;};
        inline string getDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
        inline OSSList& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


        // intranetDownloadLink Field Functions 
        bool hasIntranetDownloadLink() const { return this->intranetDownloadLink_ != nullptr;};
        void deleteIntranetDownloadLink() { this->intranetDownloadLink_ = nullptr;};
        inline string getIntranetDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(intranetDownloadLink_, "") };
        inline OSSList& setIntranetDownloadLink(string intranetDownloadLink) { DARABONBA_PTR_SET_VALUE(intranetDownloadLink_, intranetDownloadLink) };


        // linkExpiredTime Field Functions 
        bool hasLinkExpiredTime() const { return this->linkExpiredTime_ != nullptr;};
        void deleteLinkExpiredTime() { this->linkExpiredTime_ = nullptr;};
        inline string getLinkExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(linkExpiredTime_, "") };
        inline OSSList& setLinkExpiredTime(string linkExpiredTime) { DARABONBA_PTR_SET_VALUE(linkExpiredTime_, linkExpiredTime) };


      protected:
        shared_ptr<string> backupSetFile_ {};
        shared_ptr<string> downloadLink_ {};
        shared_ptr<string> intranetDownloadLink_ {};
        shared_ptr<string> linkExpiredTime_ {};
      };

      virtual bool empty() const override { return this->backupModel_ == nullptr
        && this->backupSetId_ == nullptr && this->backupSetSize_ == nullptr && this->backupType_ == nullptr && this->beginTime_ == nullptr && this->endTime_ == nullptr
        && this->OSSList_ == nullptr && this->status_ == nullptr; };
      // backupModel Field Functions 
      bool hasBackupModel() const { return this->backupModel_ != nullptr;};
      void deleteBackupModel() { this->backupModel_ = nullptr;};
      inline int32_t getBackupModel() const { DARABONBA_PTR_GET_DEFAULT(backupModel_, 0) };
      inline Data& setBackupModel(int32_t backupModel) { DARABONBA_PTR_SET_VALUE(backupModel_, backupModel) };


      // backupSetId Field Functions 
      bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
      void deleteBackupSetId() { this->backupSetId_ = nullptr;};
      inline int64_t getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, 0L) };
      inline Data& setBackupSetId(int64_t backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


      // backupSetSize Field Functions 
      bool hasBackupSetSize() const { return this->backupSetSize_ != nullptr;};
      void deleteBackupSetSize() { this->backupSetSize_ = nullptr;};
      inline int64_t getBackupSetSize() const { DARABONBA_PTR_GET_DEFAULT(backupSetSize_, 0L) };
      inline Data& setBackupSetSize(int64_t backupSetSize) { DARABONBA_PTR_SET_VALUE(backupSetSize_, backupSetSize) };


      // backupType Field Functions 
      bool hasBackupType() const { return this->backupType_ != nullptr;};
      void deleteBackupType() { this->backupType_ = nullptr;};
      inline int32_t getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, 0) };
      inline Data& setBackupType(int32_t backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
      inline Data& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // OSSList Field Functions 
      bool hasOSSList() const { return this->OSSList_ != nullptr;};
      void deleteOSSList() { this->OSSList_ = nullptr;};
      inline const vector<Data::OSSList> & getOSSList() const { DARABONBA_PTR_GET_CONST(OSSList_, vector<Data::OSSList>) };
      inline vector<Data::OSSList> getOSSList() { DARABONBA_PTR_GET(OSSList_, vector<Data::OSSList>) };
      inline Data& setOSSList(const vector<Data::OSSList> & oSSList) { DARABONBA_PTR_SET_VALUE(OSSList_, oSSList) };
      inline Data& setOSSList(vector<Data::OSSList> && oSSList) { DARABONBA_PTR_SET_RVALUE(OSSList_, oSSList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int32_t> backupModel_ {};
      shared_ptr<int64_t> backupSetId_ {};
      shared_ptr<int64_t> backupSetSize_ {};
      shared_ptr<int32_t> backupType_ {};
      shared_ptr<int64_t> beginTime_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<vector<Data::OSSList>> OSSList_ {};
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeBackupSetResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeBackupSetResponseBody::Data>) };
    inline vector<DescribeBackupSetResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeBackupSetResponseBody::Data>) };
    inline DescribeBackupSetResponseBody& setData(const vector<DescribeBackupSetResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeBackupSetResponseBody& setData(vector<DescribeBackupSetResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeBackupSetResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupSetResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<DescribeBackupSetResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
