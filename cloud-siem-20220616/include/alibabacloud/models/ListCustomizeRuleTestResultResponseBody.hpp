// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMIZERULETESTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMIZERULETESTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListCustomizeRuleTestResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomizeRuleTestResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomizeRuleTestResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCustomizeRuleTestResultResponseBody() = default ;
    ListCustomizeRuleTestResultResponseBody(const ListCustomizeRuleTestResultResponseBody &) = default ;
    ListCustomizeRuleTestResultResponseBody(ListCustomizeRuleTestResultResponseBody &&) = default ;
    ListCustomizeRuleTestResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomizeRuleTestResultResponseBody() = default ;
    ListCustomizeRuleTestResultResponseBody& operator=(const ListCustomizeRuleTestResultResponseBody &) = default ;
    ListCustomizeRuleTestResultResponseBody& operator=(ListCustomizeRuleTestResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
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
      class ResponseData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResponseData& obj) { 
          DARABONBA_PTR_TO_JSON(AlertDesc, alertDesc_);
          DARABONBA_PTR_TO_JSON(AlertDetail, alertDetail_);
          DARABONBA_PTR_TO_JSON(AlertSrcProd, alertSrcProd_);
          DARABONBA_PTR_TO_JSON(AlertSrcProdModule, alertSrcProdModule_);
          DARABONBA_PTR_TO_JSON(AttCk, attCk_);
          DARABONBA_PTR_TO_JSON(EventName, eventName_);
          DARABONBA_PTR_TO_JSON(EventType, eventType_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(LogSource, logSource_);
          DARABONBA_PTR_TO_JSON(LogTime, logTime_);
          DARABONBA_PTR_TO_JSON(LogType, logType_);
          DARABONBA_PTR_TO_JSON(MainUserId, mainUserId_);
          DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
          DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
          DARABONBA_PTR_TO_JSON(VerifyType, verifyType_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseData& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertDesc, alertDesc_);
          DARABONBA_PTR_FROM_JSON(AlertDetail, alertDetail_);
          DARABONBA_PTR_FROM_JSON(AlertSrcProd, alertSrcProd_);
          DARABONBA_PTR_FROM_JSON(AlertSrcProdModule, alertSrcProdModule_);
          DARABONBA_PTR_FROM_JSON(AttCk, attCk_);
          DARABONBA_PTR_FROM_JSON(EventName, eventName_);
          DARABONBA_PTR_FROM_JSON(EventType, eventType_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(LogSource, logSource_);
          DARABONBA_PTR_FROM_JSON(LogTime, logTime_);
          DARABONBA_PTR_FROM_JSON(LogType, logType_);
          DARABONBA_PTR_FROM_JSON(MainUserId, mainUserId_);
          DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
          DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
          DARABONBA_PTR_FROM_JSON(VerifyType, verifyType_);
        };
        ResponseData() = default ;
        ResponseData(const ResponseData &) = default ;
        ResponseData(ResponseData &&) = default ;
        ResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResponseData() = default ;
        ResponseData& operator=(const ResponseData &) = default ;
        ResponseData& operator=(ResponseData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alertDesc_ == nullptr
        && this->alertDetail_ == nullptr && this->alertSrcProd_ == nullptr && this->alertSrcProdModule_ == nullptr && this->attCk_ == nullptr && this->eventName_ == nullptr
        && this->eventType_ == nullptr && this->level_ == nullptr && this->logSource_ == nullptr && this->logTime_ == nullptr && this->logType_ == nullptr
        && this->mainUserId_ == nullptr && this->onlineStatus_ == nullptr && this->subUserId_ == nullptr && this->uuid_ == nullptr && this->verifyType_ == nullptr; };
        // alertDesc Field Functions 
        bool hasAlertDesc() const { return this->alertDesc_ != nullptr;};
        void deleteAlertDesc() { this->alertDesc_ = nullptr;};
        inline string getAlertDesc() const { DARABONBA_PTR_GET_DEFAULT(alertDesc_, "") };
        inline ResponseData& setAlertDesc(string alertDesc) { DARABONBA_PTR_SET_VALUE(alertDesc_, alertDesc) };


        // alertDetail Field Functions 
        bool hasAlertDetail() const { return this->alertDetail_ != nullptr;};
        void deleteAlertDetail() { this->alertDetail_ = nullptr;};
        inline string getAlertDetail() const { DARABONBA_PTR_GET_DEFAULT(alertDetail_, "") };
        inline ResponseData& setAlertDetail(string alertDetail) { DARABONBA_PTR_SET_VALUE(alertDetail_, alertDetail) };


        // alertSrcProd Field Functions 
        bool hasAlertSrcProd() const { return this->alertSrcProd_ != nullptr;};
        void deleteAlertSrcProd() { this->alertSrcProd_ = nullptr;};
        inline string getAlertSrcProd() const { DARABONBA_PTR_GET_DEFAULT(alertSrcProd_, "") };
        inline ResponseData& setAlertSrcProd(string alertSrcProd) { DARABONBA_PTR_SET_VALUE(alertSrcProd_, alertSrcProd) };


        // alertSrcProdModule Field Functions 
        bool hasAlertSrcProdModule() const { return this->alertSrcProdModule_ != nullptr;};
        void deleteAlertSrcProdModule() { this->alertSrcProdModule_ = nullptr;};
        inline string getAlertSrcProdModule() const { DARABONBA_PTR_GET_DEFAULT(alertSrcProdModule_, "") };
        inline ResponseData& setAlertSrcProdModule(string alertSrcProdModule) { DARABONBA_PTR_SET_VALUE(alertSrcProdModule_, alertSrcProdModule) };


        // attCk Field Functions 
        bool hasAttCk() const { return this->attCk_ != nullptr;};
        void deleteAttCk() { this->attCk_ = nullptr;};
        inline string getAttCk() const { DARABONBA_PTR_GET_DEFAULT(attCk_, "") };
        inline ResponseData& setAttCk(string attCk) { DARABONBA_PTR_SET_VALUE(attCk_, attCk) };


        // eventName Field Functions 
        bool hasEventName() const { return this->eventName_ != nullptr;};
        void deleteEventName() { this->eventName_ = nullptr;};
        inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
        inline ResponseData& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
        inline ResponseData& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline ResponseData& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // logSource Field Functions 
        bool hasLogSource() const { return this->logSource_ != nullptr;};
        void deleteLogSource() { this->logSource_ = nullptr;};
        inline string getLogSource() const { DARABONBA_PTR_GET_DEFAULT(logSource_, "") };
        inline ResponseData& setLogSource(string logSource) { DARABONBA_PTR_SET_VALUE(logSource_, logSource) };


        // logTime Field Functions 
        bool hasLogTime() const { return this->logTime_ != nullptr;};
        void deleteLogTime() { this->logTime_ = nullptr;};
        inline string getLogTime() const { DARABONBA_PTR_GET_DEFAULT(logTime_, "") };
        inline ResponseData& setLogTime(string logTime) { DARABONBA_PTR_SET_VALUE(logTime_, logTime) };


        // logType Field Functions 
        bool hasLogType() const { return this->logType_ != nullptr;};
        void deleteLogType() { this->logType_ = nullptr;};
        inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
        inline ResponseData& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


        // mainUserId Field Functions 
        bool hasMainUserId() const { return this->mainUserId_ != nullptr;};
        void deleteMainUserId() { this->mainUserId_ = nullptr;};
        inline string getMainUserId() const { DARABONBA_PTR_GET_DEFAULT(mainUserId_, "") };
        inline ResponseData& setMainUserId(string mainUserId) { DARABONBA_PTR_SET_VALUE(mainUserId_, mainUserId) };


        // onlineStatus Field Functions 
        bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
        void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
        inline string getOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, "") };
        inline ResponseData& setOnlineStatus(string onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


        // subUserId Field Functions 
        bool hasSubUserId() const { return this->subUserId_ != nullptr;};
        void deleteSubUserId() { this->subUserId_ = nullptr;};
        inline string getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, "") };
        inline ResponseData& setSubUserId(string subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline ResponseData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


        // verifyType Field Functions 
        bool hasVerifyType() const { return this->verifyType_ != nullptr;};
        void deleteVerifyType() { this->verifyType_ = nullptr;};
        inline string getVerifyType() const { DARABONBA_PTR_GET_DEFAULT(verifyType_, "") };
        inline ResponseData& setVerifyType(string verifyType) { DARABONBA_PTR_SET_VALUE(verifyType_, verifyType) };


      protected:
        // The description of the alert.
        shared_ptr<string> alertDesc_ {};
        // The alert details in the JSON format.
        shared_ptr<string> alertDetail_ {};
        // The source of the alert.
        shared_ptr<string> alertSrcProd_ {};
        // The sub-module of the source.
        shared_ptr<string> alertSrcProdModule_ {};
        // The tag of the ATT\\&CK attack.
        shared_ptr<string> attCk_ {};
        // The name of the alert, which corresponds to the name of the custom rule.
        shared_ptr<string> eventName_ {};
        // The threat type, which indicates the alert type.
        shared_ptr<string> eventType_ {};
        // The threat level. Valid values:
        // 
        // *   serious: high.
        // *   suspicious: medium.
        // *   remind: low.
        shared_ptr<string> level_ {};
        // The log source of the rule.
        shared_ptr<string> logSource_ {};
        // The time when the alert was recorded.
        shared_ptr<string> logTime_ {};
        // The log type of the rule.
        shared_ptr<string> logType_ {};
        // The ID of the Alibaba Cloud account that is associated with the alert in SIEM.
        shared_ptr<string> mainUserId_ {};
        // The status of the alert data. Valid values:
        // 
        // *   test: business test data.
        // *   online: online data.
        shared_ptr<string> onlineStatus_ {};
        // The ID of the Alibaba Cloud account within which the alert is generated.
        shared_ptr<string> subUserId_ {};
        // The UUID of the alert.
        shared_ptr<string> uuid_ {};
        shared_ptr<string> verifyType_ {};
      };

      class PageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_TO_JSON(VerifiedCount, verifiedCount_);
        };
        friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_FROM_JSON(VerifiedCount, verifiedCount_);
        };
        PageInfo() = default ;
        PageInfo(const PageInfo &) = default ;
        PageInfo(PageInfo &&) = default ;
        PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageInfo() = default ;
        PageInfo& operator=(const PageInfo &) = default ;
        PageInfo& operator=(PageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->verifiedCount_ == nullptr; };
        // currentPage Field Functions 
        bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
        void deleteCurrentPage() { this->currentPage_ = nullptr;};
        inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
        inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline PageInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        // verifiedCount Field Functions 
        bool hasVerifiedCount() const { return this->verifiedCount_ != nullptr;};
        void deleteVerifiedCount() { this->verifiedCount_ = nullptr;};
        inline int64_t getVerifiedCount() const { DARABONBA_PTR_GET_DEFAULT(verifiedCount_, 0L) };
        inline PageInfo& setVerifiedCount(int64_t verifiedCount) { DARABONBA_PTR_SET_VALUE(verifiedCount_, verifiedCount) };


      protected:
        // The current page number.
        shared_ptr<int32_t> currentPage_ {};
        // The number of entries per page.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of entries returned.
        shared_ptr<int64_t> totalCount_ {};
        shared_ptr<int64_t> verifiedCount_ {};
      };

      virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->responseData_ == nullptr; };
      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline const Data::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Data::PageInfo) };
      inline Data::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, Data::PageInfo) };
      inline Data& setPageInfo(const Data::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
      inline Data& setPageInfo(Data::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


      // responseData Field Functions 
      bool hasResponseData() const { return this->responseData_ != nullptr;};
      void deleteResponseData() { this->responseData_ = nullptr;};
      inline const vector<Data::ResponseData> & getResponseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Data::ResponseData>) };
      inline vector<Data::ResponseData> getResponseData() { DARABONBA_PTR_GET(responseData_, vector<Data::ResponseData>) };
      inline Data& setResponseData(const vector<Data::ResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
      inline Data& setResponseData(vector<Data::ResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


    protected:
      // The pagination information.
      shared_ptr<Data::PageInfo> pageInfo_ {};
      // The detailed data.
      shared_ptr<vector<Data::ResponseData>> responseData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListCustomizeRuleTestResultResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCustomizeRuleTestResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCustomizeRuleTestResultResponseBody::Data) };
    inline ListCustomizeRuleTestResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCustomizeRuleTestResultResponseBody::Data) };
    inline ListCustomizeRuleTestResultResponseBody& setData(const ListCustomizeRuleTestResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCustomizeRuleTestResultResponseBody& setData(ListCustomizeRuleTestResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCustomizeRuleTestResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomizeRuleTestResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCustomizeRuleTestResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<ListCustomizeRuleTestResultResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
