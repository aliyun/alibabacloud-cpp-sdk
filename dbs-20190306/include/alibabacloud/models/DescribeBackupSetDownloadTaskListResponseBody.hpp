// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETDOWNLOADTASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETDOWNLOADTASKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeBackupSetDownloadTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupSetDownloadTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalElements, totalElements_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupSetDownloadTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalElements, totalElements_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeBackupSetDownloadTaskListResponseBody() = default ;
    DescribeBackupSetDownloadTaskListResponseBody(const DescribeBackupSetDownloadTaskListResponseBody &) = default ;
    DescribeBackupSetDownloadTaskListResponseBody(DescribeBackupSetDownloadTaskListResponseBody &&) = default ;
    DescribeBackupSetDownloadTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupSetDownloadTaskListResponseBody() = default ;
    DescribeBackupSetDownloadTaskListResponseBody& operator=(const DescribeBackupSetDownloadTaskListResponseBody &) = default ;
    DescribeBackupSetDownloadTaskListResponseBody& operator=(DescribeBackupSetDownloadTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BackupSetDownloadTaskDetail, backupSetDownloadTaskDetail_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupSetDownloadTaskDetail, backupSetDownloadTaskDetail_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BackupSetDownloadTaskDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackupSetDownloadTaskDetail& obj) { 
          DARABONBA_PTR_TO_JSON(BackupGatewayId, backupGatewayId_);
          DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
          DARABONBA_PTR_TO_JSON(BackupSetCode, backupSetCode_);
          DARABONBA_PTR_TO_JSON(BackupSetDataFormat, backupSetDataFormat_);
          DARABONBA_PTR_TO_JSON(BackupSetDataSize, backupSetDataSize_);
          DARABONBA_PTR_TO_JSON(BackupSetDbType, backupSetDbType_);
          DARABONBA_PTR_TO_JSON(BackupSetDownloadCreateTime, backupSetDownloadCreateTime_);
          DARABONBA_PTR_TO_JSON(BackupSetDownloadDir, backupSetDownloadDir_);
          DARABONBA_PTR_TO_JSON(BackupSetDownloadFinishTime, backupSetDownloadFinishTime_);
          DARABONBA_PTR_TO_JSON(BackupSetDownloadInternetUrl, backupSetDownloadInternetUrl_);
          DARABONBA_PTR_TO_JSON(BackupSetDownloadIntranetUrl, backupSetDownloadIntranetUrl_);
          DARABONBA_PTR_TO_JSON(BackupSetDownloadStatus, backupSetDownloadStatus_);
          DARABONBA_PTR_TO_JSON(BackupSetDownloadTargetType, backupSetDownloadTargetType_);
          DARABONBA_PTR_TO_JSON(BackupSetDownloadTaskId, backupSetDownloadTaskId_);
          DARABONBA_PTR_TO_JSON(BackupSetDownloadTaskName, backupSetDownloadTaskName_);
          DARABONBA_PTR_TO_JSON(BackupSetDownloadWay, backupSetDownloadWay_);
          DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
          DARABONBA_PTR_TO_JSON(BackupSetJobType, backupSetJobType_);
          DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
        };
        friend void from_json(const Darabonba::Json& j, BackupSetDownloadTaskDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
          DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
          DARABONBA_PTR_FROM_JSON(BackupSetCode, backupSetCode_);
          DARABONBA_PTR_FROM_JSON(BackupSetDataFormat, backupSetDataFormat_);
          DARABONBA_PTR_FROM_JSON(BackupSetDataSize, backupSetDataSize_);
          DARABONBA_PTR_FROM_JSON(BackupSetDbType, backupSetDbType_);
          DARABONBA_PTR_FROM_JSON(BackupSetDownloadCreateTime, backupSetDownloadCreateTime_);
          DARABONBA_PTR_FROM_JSON(BackupSetDownloadDir, backupSetDownloadDir_);
          DARABONBA_PTR_FROM_JSON(BackupSetDownloadFinishTime, backupSetDownloadFinishTime_);
          DARABONBA_PTR_FROM_JSON(BackupSetDownloadInternetUrl, backupSetDownloadInternetUrl_);
          DARABONBA_PTR_FROM_JSON(BackupSetDownloadIntranetUrl, backupSetDownloadIntranetUrl_);
          DARABONBA_PTR_FROM_JSON(BackupSetDownloadStatus, backupSetDownloadStatus_);
          DARABONBA_PTR_FROM_JSON(BackupSetDownloadTargetType, backupSetDownloadTargetType_);
          DARABONBA_PTR_FROM_JSON(BackupSetDownloadTaskId, backupSetDownloadTaskId_);
          DARABONBA_PTR_FROM_JSON(BackupSetDownloadTaskName, backupSetDownloadTaskName_);
          DARABONBA_PTR_FROM_JSON(BackupSetDownloadWay, backupSetDownloadWay_);
          DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
          DARABONBA_PTR_FROM_JSON(BackupSetJobType, backupSetJobType_);
          DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
        };
        BackupSetDownloadTaskDetail() = default ;
        BackupSetDownloadTaskDetail(const BackupSetDownloadTaskDetail &) = default ;
        BackupSetDownloadTaskDetail(BackupSetDownloadTaskDetail &&) = default ;
        BackupSetDownloadTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackupSetDownloadTaskDetail() = default ;
        BackupSetDownloadTaskDetail& operator=(const BackupSetDownloadTaskDetail &) = default ;
        BackupSetDownloadTaskDetail& operator=(BackupSetDownloadTaskDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupGatewayId_ == nullptr
        && this->backupPlanId_ == nullptr && this->backupSetCode_ == nullptr && this->backupSetDataFormat_ == nullptr && this->backupSetDataSize_ == nullptr && this->backupSetDbType_ == nullptr
        && this->backupSetDownloadCreateTime_ == nullptr && this->backupSetDownloadDir_ == nullptr && this->backupSetDownloadFinishTime_ == nullptr && this->backupSetDownloadInternetUrl_ == nullptr && this->backupSetDownloadIntranetUrl_ == nullptr
        && this->backupSetDownloadStatus_ == nullptr && this->backupSetDownloadTargetType_ == nullptr && this->backupSetDownloadTaskId_ == nullptr && this->backupSetDownloadTaskName_ == nullptr && this->backupSetDownloadWay_ == nullptr
        && this->backupSetId_ == nullptr && this->backupSetJobType_ == nullptr && this->errMessage_ == nullptr; };
        // backupGatewayId Field Functions 
        bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
        void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
        inline int64_t getBackupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, 0L) };
        inline BackupSetDownloadTaskDetail& setBackupGatewayId(int64_t backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


        // backupPlanId Field Functions 
        bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
        void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
        inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
        inline BackupSetDownloadTaskDetail& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


        // backupSetCode Field Functions 
        bool hasBackupSetCode() const { return this->backupSetCode_ != nullptr;};
        void deleteBackupSetCode() { this->backupSetCode_ = nullptr;};
        inline string getBackupSetCode() const { DARABONBA_PTR_GET_DEFAULT(backupSetCode_, "") };
        inline BackupSetDownloadTaskDetail& setBackupSetCode(string backupSetCode) { DARABONBA_PTR_SET_VALUE(backupSetCode_, backupSetCode) };


        // backupSetDataFormat Field Functions 
        bool hasBackupSetDataFormat() const { return this->backupSetDataFormat_ != nullptr;};
        void deleteBackupSetDataFormat() { this->backupSetDataFormat_ = nullptr;};
        inline string getBackupSetDataFormat() const { DARABONBA_PTR_GET_DEFAULT(backupSetDataFormat_, "") };
        inline BackupSetDownloadTaskDetail& setBackupSetDataFormat(string backupSetDataFormat) { DARABONBA_PTR_SET_VALUE(backupSetDataFormat_, backupSetDataFormat) };


        // backupSetDataSize Field Functions 
        bool hasBackupSetDataSize() const { return this->backupSetDataSize_ != nullptr;};
        void deleteBackupSetDataSize() { this->backupSetDataSize_ = nullptr;};
        inline int64_t getBackupSetDataSize() const { DARABONBA_PTR_GET_DEFAULT(backupSetDataSize_, 0L) };
        inline BackupSetDownloadTaskDetail& setBackupSetDataSize(int64_t backupSetDataSize) { DARABONBA_PTR_SET_VALUE(backupSetDataSize_, backupSetDataSize) };


        // backupSetDbType Field Functions 
        bool hasBackupSetDbType() const { return this->backupSetDbType_ != nullptr;};
        void deleteBackupSetDbType() { this->backupSetDbType_ = nullptr;};
        inline string getBackupSetDbType() const { DARABONBA_PTR_GET_DEFAULT(backupSetDbType_, "") };
        inline BackupSetDownloadTaskDetail& setBackupSetDbType(string backupSetDbType) { DARABONBA_PTR_SET_VALUE(backupSetDbType_, backupSetDbType) };


        // backupSetDownloadCreateTime Field Functions 
        bool hasBackupSetDownloadCreateTime() const { return this->backupSetDownloadCreateTime_ != nullptr;};
        void deleteBackupSetDownloadCreateTime() { this->backupSetDownloadCreateTime_ = nullptr;};
        inline int64_t getBackupSetDownloadCreateTime() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadCreateTime_, 0L) };
        inline BackupSetDownloadTaskDetail& setBackupSetDownloadCreateTime(int64_t backupSetDownloadCreateTime) { DARABONBA_PTR_SET_VALUE(backupSetDownloadCreateTime_, backupSetDownloadCreateTime) };


        // backupSetDownloadDir Field Functions 
        bool hasBackupSetDownloadDir() const { return this->backupSetDownloadDir_ != nullptr;};
        void deleteBackupSetDownloadDir() { this->backupSetDownloadDir_ = nullptr;};
        inline string getBackupSetDownloadDir() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadDir_, "") };
        inline BackupSetDownloadTaskDetail& setBackupSetDownloadDir(string backupSetDownloadDir) { DARABONBA_PTR_SET_VALUE(backupSetDownloadDir_, backupSetDownloadDir) };


        // backupSetDownloadFinishTime Field Functions 
        bool hasBackupSetDownloadFinishTime() const { return this->backupSetDownloadFinishTime_ != nullptr;};
        void deleteBackupSetDownloadFinishTime() { this->backupSetDownloadFinishTime_ = nullptr;};
        inline int64_t getBackupSetDownloadFinishTime() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadFinishTime_, 0L) };
        inline BackupSetDownloadTaskDetail& setBackupSetDownloadFinishTime(int64_t backupSetDownloadFinishTime) { DARABONBA_PTR_SET_VALUE(backupSetDownloadFinishTime_, backupSetDownloadFinishTime) };


        // backupSetDownloadInternetUrl Field Functions 
        bool hasBackupSetDownloadInternetUrl() const { return this->backupSetDownloadInternetUrl_ != nullptr;};
        void deleteBackupSetDownloadInternetUrl() { this->backupSetDownloadInternetUrl_ = nullptr;};
        inline string getBackupSetDownloadInternetUrl() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadInternetUrl_, "") };
        inline BackupSetDownloadTaskDetail& setBackupSetDownloadInternetUrl(string backupSetDownloadInternetUrl) { DARABONBA_PTR_SET_VALUE(backupSetDownloadInternetUrl_, backupSetDownloadInternetUrl) };


        // backupSetDownloadIntranetUrl Field Functions 
        bool hasBackupSetDownloadIntranetUrl() const { return this->backupSetDownloadIntranetUrl_ != nullptr;};
        void deleteBackupSetDownloadIntranetUrl() { this->backupSetDownloadIntranetUrl_ = nullptr;};
        inline string getBackupSetDownloadIntranetUrl() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadIntranetUrl_, "") };
        inline BackupSetDownloadTaskDetail& setBackupSetDownloadIntranetUrl(string backupSetDownloadIntranetUrl) { DARABONBA_PTR_SET_VALUE(backupSetDownloadIntranetUrl_, backupSetDownloadIntranetUrl) };


        // backupSetDownloadStatus Field Functions 
        bool hasBackupSetDownloadStatus() const { return this->backupSetDownloadStatus_ != nullptr;};
        void deleteBackupSetDownloadStatus() { this->backupSetDownloadStatus_ = nullptr;};
        inline string getBackupSetDownloadStatus() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadStatus_, "") };
        inline BackupSetDownloadTaskDetail& setBackupSetDownloadStatus(string backupSetDownloadStatus) { DARABONBA_PTR_SET_VALUE(backupSetDownloadStatus_, backupSetDownloadStatus) };


        // backupSetDownloadTargetType Field Functions 
        bool hasBackupSetDownloadTargetType() const { return this->backupSetDownloadTargetType_ != nullptr;};
        void deleteBackupSetDownloadTargetType() { this->backupSetDownloadTargetType_ = nullptr;};
        inline string getBackupSetDownloadTargetType() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadTargetType_, "") };
        inline BackupSetDownloadTaskDetail& setBackupSetDownloadTargetType(string backupSetDownloadTargetType) { DARABONBA_PTR_SET_VALUE(backupSetDownloadTargetType_, backupSetDownloadTargetType) };


        // backupSetDownloadTaskId Field Functions 
        bool hasBackupSetDownloadTaskId() const { return this->backupSetDownloadTaskId_ != nullptr;};
        void deleteBackupSetDownloadTaskId() { this->backupSetDownloadTaskId_ = nullptr;};
        inline string getBackupSetDownloadTaskId() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadTaskId_, "") };
        inline BackupSetDownloadTaskDetail& setBackupSetDownloadTaskId(string backupSetDownloadTaskId) { DARABONBA_PTR_SET_VALUE(backupSetDownloadTaskId_, backupSetDownloadTaskId) };


        // backupSetDownloadTaskName Field Functions 
        bool hasBackupSetDownloadTaskName() const { return this->backupSetDownloadTaskName_ != nullptr;};
        void deleteBackupSetDownloadTaskName() { this->backupSetDownloadTaskName_ = nullptr;};
        inline string getBackupSetDownloadTaskName() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadTaskName_, "") };
        inline BackupSetDownloadTaskDetail& setBackupSetDownloadTaskName(string backupSetDownloadTaskName) { DARABONBA_PTR_SET_VALUE(backupSetDownloadTaskName_, backupSetDownloadTaskName) };


        // backupSetDownloadWay Field Functions 
        bool hasBackupSetDownloadWay() const { return this->backupSetDownloadWay_ != nullptr;};
        void deleteBackupSetDownloadWay() { this->backupSetDownloadWay_ = nullptr;};
        inline string getBackupSetDownloadWay() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadWay_, "") };
        inline BackupSetDownloadTaskDetail& setBackupSetDownloadWay(string backupSetDownloadWay) { DARABONBA_PTR_SET_VALUE(backupSetDownloadWay_, backupSetDownloadWay) };


        // backupSetId Field Functions 
        bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
        void deleteBackupSetId() { this->backupSetId_ = nullptr;};
        inline string getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
        inline BackupSetDownloadTaskDetail& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


        // backupSetJobType Field Functions 
        bool hasBackupSetJobType() const { return this->backupSetJobType_ != nullptr;};
        void deleteBackupSetJobType() { this->backupSetJobType_ = nullptr;};
        inline string getBackupSetJobType() const { DARABONBA_PTR_GET_DEFAULT(backupSetJobType_, "") };
        inline BackupSetDownloadTaskDetail& setBackupSetJobType(string backupSetJobType) { DARABONBA_PTR_SET_VALUE(backupSetJobType_, backupSetJobType) };


        // errMessage Field Functions 
        bool hasErrMessage() const { return this->errMessage_ != nullptr;};
        void deleteErrMessage() { this->errMessage_ = nullptr;};
        inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
        inline BackupSetDownloadTaskDetail& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


      protected:
        shared_ptr<int64_t> backupGatewayId_ {};
        shared_ptr<string> backupPlanId_ {};
        shared_ptr<string> backupSetCode_ {};
        shared_ptr<string> backupSetDataFormat_ {};
        shared_ptr<int64_t> backupSetDataSize_ {};
        shared_ptr<string> backupSetDbType_ {};
        shared_ptr<int64_t> backupSetDownloadCreateTime_ {};
        shared_ptr<string> backupSetDownloadDir_ {};
        shared_ptr<int64_t> backupSetDownloadFinishTime_ {};
        shared_ptr<string> backupSetDownloadInternetUrl_ {};
        shared_ptr<string> backupSetDownloadIntranetUrl_ {};
        shared_ptr<string> backupSetDownloadStatus_ {};
        shared_ptr<string> backupSetDownloadTargetType_ {};
        shared_ptr<string> backupSetDownloadTaskId_ {};
        shared_ptr<string> backupSetDownloadTaskName_ {};
        shared_ptr<string> backupSetDownloadWay_ {};
        shared_ptr<string> backupSetId_ {};
        shared_ptr<string> backupSetJobType_ {};
        shared_ptr<string> errMessage_ {};
      };

      virtual bool empty() const override { return this->backupSetDownloadTaskDetail_ == nullptr; };
      // backupSetDownloadTaskDetail Field Functions 
      bool hasBackupSetDownloadTaskDetail() const { return this->backupSetDownloadTaskDetail_ != nullptr;};
      void deleteBackupSetDownloadTaskDetail() { this->backupSetDownloadTaskDetail_ = nullptr;};
      inline const vector<Items::BackupSetDownloadTaskDetail> & getBackupSetDownloadTaskDetail() const { DARABONBA_PTR_GET_CONST(backupSetDownloadTaskDetail_, vector<Items::BackupSetDownloadTaskDetail>) };
      inline vector<Items::BackupSetDownloadTaskDetail> getBackupSetDownloadTaskDetail() { DARABONBA_PTR_GET(backupSetDownloadTaskDetail_, vector<Items::BackupSetDownloadTaskDetail>) };
      inline Items& setBackupSetDownloadTaskDetail(const vector<Items::BackupSetDownloadTaskDetail> & backupSetDownloadTaskDetail) { DARABONBA_PTR_SET_VALUE(backupSetDownloadTaskDetail_, backupSetDownloadTaskDetail) };
      inline Items& setBackupSetDownloadTaskDetail(vector<Items::BackupSetDownloadTaskDetail> && backupSetDownloadTaskDetail) { DARABONBA_PTR_SET_RVALUE(backupSetDownloadTaskDetail_, backupSetDownloadTaskDetail) };


    protected:
      shared_ptr<vector<Items::BackupSetDownloadTaskDetail>> backupSetDownloadTaskDetail_ {};
    };

    virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalElements_ == nullptr && this->totalPages_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeBackupSetDownloadTaskListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeBackupSetDownloadTaskListResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeBackupSetDownloadTaskListResponseBody::Items) };
    inline DescribeBackupSetDownloadTaskListResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeBackupSetDownloadTaskListResponseBody::Items) };
    inline DescribeBackupSetDownloadTaskListResponseBody& setItems(const DescribeBackupSetDownloadTaskListResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeBackupSetDownloadTaskListResponseBody& setItems(DescribeBackupSetDownloadTaskListResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeBackupSetDownloadTaskListResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupSetDownloadTaskListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupSetDownloadTaskListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalElements Field Functions 
    bool hasTotalElements() const { return this->totalElements_ != nullptr;};
    void deleteTotalElements() { this->totalElements_ = nullptr;};
    inline int32_t getTotalElements() const { DARABONBA_PTR_GET_DEFAULT(totalElements_, 0) };
    inline DescribeBackupSetDownloadTaskListResponseBody& setTotalElements(int32_t totalElements) { DARABONBA_PTR_SET_VALUE(totalElements_, totalElements) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeBackupSetDownloadTaskListResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The error code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<DescribeBackupSetDownloadTaskListResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // 
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of download records for backup sets.
    shared_ptr<int32_t> totalElements_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
