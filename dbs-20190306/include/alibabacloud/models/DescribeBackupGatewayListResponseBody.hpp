// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPGATEWAYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPGATEWAYLISTRESPONSEBODY_HPP_
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
  class DescribeBackupGatewayListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupGatewayListResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeBackupGatewayListResponseBody& obj) { 
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
    DescribeBackupGatewayListResponseBody() = default ;
    DescribeBackupGatewayListResponseBody(const DescribeBackupGatewayListResponseBody &) = default ;
    DescribeBackupGatewayListResponseBody(DescribeBackupGatewayListResponseBody &&) = default ;
    DescribeBackupGatewayListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupGatewayListResponseBody() = default ;
    DescribeBackupGatewayListResponseBody& operator=(const DescribeBackupGatewayListResponseBody &) = default ;
    DescribeBackupGatewayListResponseBody& operator=(DescribeBackupGatewayListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BackupGateway, backupGateway_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupGateway, backupGateway_);
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
      class BackupGateway : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackupGateway& obj) { 
          DARABONBA_PTR_TO_JSON(BackupGatewayCreateTime, backupGatewayCreateTime_);
          DARABONBA_PTR_TO_JSON(BackupGatewayId, backupGatewayId_);
          DARABONBA_PTR_TO_JSON(BackupGatewayStatus, backupGatewayStatus_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Identifier, identifier_);
          DARABONBA_PTR_TO_JSON(LastHeartbeatTime, lastHeartbeatTime_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(SourceEndpointHostname, sourceEndpointHostname_);
          DARABONBA_PTR_TO_JSON(SourceEndpointInternetIP, sourceEndpointInternetIP_);
          DARABONBA_PTR_TO_JSON(SourceEndpointIntranetIP, sourceEndpointIntranetIP_);
        };
        friend void from_json(const Darabonba::Json& j, BackupGateway& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupGatewayCreateTime, backupGatewayCreateTime_);
          DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
          DARABONBA_PTR_FROM_JSON(BackupGatewayStatus, backupGatewayStatus_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
          DARABONBA_PTR_FROM_JSON(LastHeartbeatTime, lastHeartbeatTime_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointHostname, sourceEndpointHostname_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointInternetIP, sourceEndpointInternetIP_);
          DARABONBA_PTR_FROM_JSON(SourceEndpointIntranetIP, sourceEndpointIntranetIP_);
        };
        BackupGateway() = default ;
        BackupGateway(const BackupGateway &) = default ;
        BackupGateway(BackupGateway &&) = default ;
        BackupGateway(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackupGateway() = default ;
        BackupGateway& operator=(const BackupGateway &) = default ;
        BackupGateway& operator=(BackupGateway &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupGatewayCreateTime_ == nullptr
        && this->backupGatewayId_ == nullptr && this->backupGatewayStatus_ == nullptr && this->displayName_ == nullptr && this->identifier_ == nullptr && this->lastHeartbeatTime_ == nullptr
        && this->region_ == nullptr && this->sourceEndpointHostname_ == nullptr && this->sourceEndpointInternetIP_ == nullptr && this->sourceEndpointIntranetIP_ == nullptr; };
        // backupGatewayCreateTime Field Functions 
        bool hasBackupGatewayCreateTime() const { return this->backupGatewayCreateTime_ != nullptr;};
        void deleteBackupGatewayCreateTime() { this->backupGatewayCreateTime_ = nullptr;};
        inline int64_t getBackupGatewayCreateTime() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayCreateTime_, 0L) };
        inline BackupGateway& setBackupGatewayCreateTime(int64_t backupGatewayCreateTime) { DARABONBA_PTR_SET_VALUE(backupGatewayCreateTime_, backupGatewayCreateTime) };


        // backupGatewayId Field Functions 
        bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
        void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
        inline string getBackupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, "") };
        inline BackupGateway& setBackupGatewayId(string backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


        // backupGatewayStatus Field Functions 
        bool hasBackupGatewayStatus() const { return this->backupGatewayStatus_ != nullptr;};
        void deleteBackupGatewayStatus() { this->backupGatewayStatus_ = nullptr;};
        inline string getBackupGatewayStatus() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayStatus_, "") };
        inline BackupGateway& setBackupGatewayStatus(string backupGatewayStatus) { DARABONBA_PTR_SET_VALUE(backupGatewayStatus_, backupGatewayStatus) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline BackupGateway& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // identifier Field Functions 
        bool hasIdentifier() const { return this->identifier_ != nullptr;};
        void deleteIdentifier() { this->identifier_ = nullptr;};
        inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
        inline BackupGateway& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


        // lastHeartbeatTime Field Functions 
        bool hasLastHeartbeatTime() const { return this->lastHeartbeatTime_ != nullptr;};
        void deleteLastHeartbeatTime() { this->lastHeartbeatTime_ = nullptr;};
        inline int64_t getLastHeartbeatTime() const { DARABONBA_PTR_GET_DEFAULT(lastHeartbeatTime_, 0L) };
        inline BackupGateway& setLastHeartbeatTime(int64_t lastHeartbeatTime) { DARABONBA_PTR_SET_VALUE(lastHeartbeatTime_, lastHeartbeatTime) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline BackupGateway& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // sourceEndpointHostname Field Functions 
        bool hasSourceEndpointHostname() const { return this->sourceEndpointHostname_ != nullptr;};
        void deleteSourceEndpointHostname() { this->sourceEndpointHostname_ = nullptr;};
        inline string getSourceEndpointHostname() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointHostname_, "") };
        inline BackupGateway& setSourceEndpointHostname(string sourceEndpointHostname) { DARABONBA_PTR_SET_VALUE(sourceEndpointHostname_, sourceEndpointHostname) };


        // sourceEndpointInternetIP Field Functions 
        bool hasSourceEndpointInternetIP() const { return this->sourceEndpointInternetIP_ != nullptr;};
        void deleteSourceEndpointInternetIP() { this->sourceEndpointInternetIP_ = nullptr;};
        inline string getSourceEndpointInternetIP() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInternetIP_, "") };
        inline BackupGateway& setSourceEndpointInternetIP(string sourceEndpointInternetIP) { DARABONBA_PTR_SET_VALUE(sourceEndpointInternetIP_, sourceEndpointInternetIP) };


        // sourceEndpointIntranetIP Field Functions 
        bool hasSourceEndpointIntranetIP() const { return this->sourceEndpointIntranetIP_ != nullptr;};
        void deleteSourceEndpointIntranetIP() { this->sourceEndpointIntranetIP_ = nullptr;};
        inline string getSourceEndpointIntranetIP() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIntranetIP_, "") };
        inline BackupGateway& setSourceEndpointIntranetIP(string sourceEndpointIntranetIP) { DARABONBA_PTR_SET_VALUE(sourceEndpointIntranetIP_, sourceEndpointIntranetIP) };


      protected:
        shared_ptr<int64_t> backupGatewayCreateTime_ {};
        shared_ptr<string> backupGatewayId_ {};
        shared_ptr<string> backupGatewayStatus_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> identifier_ {};
        shared_ptr<int64_t> lastHeartbeatTime_ {};
        shared_ptr<string> region_ {};
        shared_ptr<string> sourceEndpointHostname_ {};
        shared_ptr<string> sourceEndpointInternetIP_ {};
        shared_ptr<string> sourceEndpointIntranetIP_ {};
      };

      virtual bool empty() const override { return this->backupGateway_ == nullptr; };
      // backupGateway Field Functions 
      bool hasBackupGateway() const { return this->backupGateway_ != nullptr;};
      void deleteBackupGateway() { this->backupGateway_ = nullptr;};
      inline const vector<Items::BackupGateway> & getBackupGateway() const { DARABONBA_PTR_GET_CONST(backupGateway_, vector<Items::BackupGateway>) };
      inline vector<Items::BackupGateway> getBackupGateway() { DARABONBA_PTR_GET(backupGateway_, vector<Items::BackupGateway>) };
      inline Items& setBackupGateway(const vector<Items::BackupGateway> & backupGateway) { DARABONBA_PTR_SET_VALUE(backupGateway_, backupGateway) };
      inline Items& setBackupGateway(vector<Items::BackupGateway> && backupGateway) { DARABONBA_PTR_SET_RVALUE(backupGateway_, backupGateway) };


    protected:
      shared_ptr<vector<Items::BackupGateway>> backupGateway_ {};
    };

    virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalElements_ == nullptr && this->totalPages_ == nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeBackupGatewayListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeBackupGatewayListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeBackupGatewayListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeBackupGatewayListResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeBackupGatewayListResponseBody::Items) };
    inline DescribeBackupGatewayListResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeBackupGatewayListResponseBody::Items) };
    inline DescribeBackupGatewayListResponseBody& setItems(const DescribeBackupGatewayListResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeBackupGatewayListResponseBody& setItems(DescribeBackupGatewayListResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeBackupGatewayListResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupGatewayListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupGatewayListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupGatewayListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalElements Field Functions 
    bool hasTotalElements() const { return this->totalElements_ != nullptr;};
    void deleteTotalElements() { this->totalElements_ = nullptr;};
    inline int32_t getTotalElements() const { DARABONBA_PTR_GET_DEFAULT(totalElements_, 0) };
    inline DescribeBackupGatewayListResponseBody& setTotalElements(int32_t totalElements) { DARABONBA_PTR_SET_VALUE(totalElements_, totalElements) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeBackupGatewayListResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The error code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<DescribeBackupGatewayListResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of records on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of backup gateways.
    shared_ptr<int32_t> totalElements_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
