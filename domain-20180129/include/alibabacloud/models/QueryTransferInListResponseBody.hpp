// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRANSFERINLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRANSFERINLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTransferInListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTransferInListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTransferInListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryTransferInListResponseBody() = default ;
    QueryTransferInListResponseBody(const QueryTransferInListResponseBody &) = default ;
    QueryTransferInListResponseBody(QueryTransferInListResponseBody &&) = default ;
    QueryTransferInListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTransferInListResponseBody() = default ;
    QueryTransferInListResponseBody& operator=(const QueryTransferInListResponseBody &) = default ;
    QueryTransferInListResponseBody& operator=(QueryTransferInListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TransferInInfo, transferInInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TransferInInfo, transferInInfo_);
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
      class TransferInInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TransferInInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
          DARABONBA_PTR_TO_JSON(ExpirationDateLong, expirationDateLong_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(ModificationDate, modificationDate_);
          DARABONBA_PTR_TO_JSON(ModificationDateLong, modificationDateLong_);
          DARABONBA_PTR_TO_JSON(NeedMailCheck, needMailCheck_);
          DARABONBA_PTR_TO_JSON(ProgressBarType, progressBarType_);
          DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
          DARABONBA_PTR_TO_JSON(ResultDate, resultDate_);
          DARABONBA_PTR_TO_JSON(ResultDateLong, resultDateLong_);
          DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
          DARABONBA_PTR_TO_JSON(SimpleTransferInStatus, simpleTransferInStatus_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubmissionDate, submissionDate_);
          DARABONBA_PTR_TO_JSON(SubmissionDateLong, submissionDateLong_);
          DARABONBA_PTR_TO_JSON(TransferAuthorizationCodeSubmissionDate, transferAuthorizationCodeSubmissionDate_);
          DARABONBA_PTR_TO_JSON(TransferAuthorizationCodeSubmissionDateLong, transferAuthorizationCodeSubmissionDateLong_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(WhoisMailStatus, whoisMailStatus_);
        };
        friend void from_json(const Darabonba::Json& j, TransferInInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
          DARABONBA_PTR_FROM_JSON(ExpirationDateLong, expirationDateLong_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(ModificationDate, modificationDate_);
          DARABONBA_PTR_FROM_JSON(ModificationDateLong, modificationDateLong_);
          DARABONBA_PTR_FROM_JSON(NeedMailCheck, needMailCheck_);
          DARABONBA_PTR_FROM_JSON(ProgressBarType, progressBarType_);
          DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
          DARABONBA_PTR_FROM_JSON(ResultDate, resultDate_);
          DARABONBA_PTR_FROM_JSON(ResultDateLong, resultDateLong_);
          DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
          DARABONBA_PTR_FROM_JSON(SimpleTransferInStatus, simpleTransferInStatus_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubmissionDate, submissionDate_);
          DARABONBA_PTR_FROM_JSON(SubmissionDateLong, submissionDateLong_);
          DARABONBA_PTR_FROM_JSON(TransferAuthorizationCodeSubmissionDate, transferAuthorizationCodeSubmissionDate_);
          DARABONBA_PTR_FROM_JSON(TransferAuthorizationCodeSubmissionDateLong, transferAuthorizationCodeSubmissionDateLong_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(WhoisMailStatus, whoisMailStatus_);
        };
        TransferInInfo() = default ;
        TransferInInfo(const TransferInInfo &) = default ;
        TransferInInfo(TransferInInfo &&) = default ;
        TransferInInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TransferInInfo() = default ;
        TransferInInfo& operator=(const TransferInInfo &) = default ;
        TransferInInfo& operator=(TransferInInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainName_ == nullptr
        && this->email_ == nullptr && this->expirationDate_ == nullptr && this->expirationDateLong_ == nullptr && this->instanceId_ == nullptr && this->modificationDate_ == nullptr
        && this->modificationDateLong_ == nullptr && this->needMailCheck_ == nullptr && this->progressBarType_ == nullptr && this->resultCode_ == nullptr && this->resultDate_ == nullptr
        && this->resultDateLong_ == nullptr && this->resultMsg_ == nullptr && this->simpleTransferInStatus_ == nullptr && this->status_ == nullptr && this->submissionDate_ == nullptr
        && this->submissionDateLong_ == nullptr && this->transferAuthorizationCodeSubmissionDate_ == nullptr && this->transferAuthorizationCodeSubmissionDateLong_ == nullptr && this->userId_ == nullptr && this->whoisMailStatus_ == nullptr; };
        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline TransferInInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline TransferInInfo& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // expirationDate Field Functions 
        bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
        void deleteExpirationDate() { this->expirationDate_ = nullptr;};
        inline string getExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
        inline TransferInInfo& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


        // expirationDateLong Field Functions 
        bool hasExpirationDateLong() const { return this->expirationDateLong_ != nullptr;};
        void deleteExpirationDateLong() { this->expirationDateLong_ = nullptr;};
        inline int64_t getExpirationDateLong() const { DARABONBA_PTR_GET_DEFAULT(expirationDateLong_, 0L) };
        inline TransferInInfo& setExpirationDateLong(int64_t expirationDateLong) { DARABONBA_PTR_SET_VALUE(expirationDateLong_, expirationDateLong) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline TransferInInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // modificationDate Field Functions 
        bool hasModificationDate() const { return this->modificationDate_ != nullptr;};
        void deleteModificationDate() { this->modificationDate_ = nullptr;};
        inline string getModificationDate() const { DARABONBA_PTR_GET_DEFAULT(modificationDate_, "") };
        inline TransferInInfo& setModificationDate(string modificationDate) { DARABONBA_PTR_SET_VALUE(modificationDate_, modificationDate) };


        // modificationDateLong Field Functions 
        bool hasModificationDateLong() const { return this->modificationDateLong_ != nullptr;};
        void deleteModificationDateLong() { this->modificationDateLong_ = nullptr;};
        inline int64_t getModificationDateLong() const { DARABONBA_PTR_GET_DEFAULT(modificationDateLong_, 0L) };
        inline TransferInInfo& setModificationDateLong(int64_t modificationDateLong) { DARABONBA_PTR_SET_VALUE(modificationDateLong_, modificationDateLong) };


        // needMailCheck Field Functions 
        bool hasNeedMailCheck() const { return this->needMailCheck_ != nullptr;};
        void deleteNeedMailCheck() { this->needMailCheck_ = nullptr;};
        inline bool getNeedMailCheck() const { DARABONBA_PTR_GET_DEFAULT(needMailCheck_, false) };
        inline TransferInInfo& setNeedMailCheck(bool needMailCheck) { DARABONBA_PTR_SET_VALUE(needMailCheck_, needMailCheck) };


        // progressBarType Field Functions 
        bool hasProgressBarType() const { return this->progressBarType_ != nullptr;};
        void deleteProgressBarType() { this->progressBarType_ = nullptr;};
        inline int32_t getProgressBarType() const { DARABONBA_PTR_GET_DEFAULT(progressBarType_, 0) };
        inline TransferInInfo& setProgressBarType(int32_t progressBarType) { DARABONBA_PTR_SET_VALUE(progressBarType_, progressBarType) };


        // resultCode Field Functions 
        bool hasResultCode() const { return this->resultCode_ != nullptr;};
        void deleteResultCode() { this->resultCode_ = nullptr;};
        inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
        inline TransferInInfo& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


        // resultDate Field Functions 
        bool hasResultDate() const { return this->resultDate_ != nullptr;};
        void deleteResultDate() { this->resultDate_ = nullptr;};
        inline string getResultDate() const { DARABONBA_PTR_GET_DEFAULT(resultDate_, "") };
        inline TransferInInfo& setResultDate(string resultDate) { DARABONBA_PTR_SET_VALUE(resultDate_, resultDate) };


        // resultDateLong Field Functions 
        bool hasResultDateLong() const { return this->resultDateLong_ != nullptr;};
        void deleteResultDateLong() { this->resultDateLong_ = nullptr;};
        inline int64_t getResultDateLong() const { DARABONBA_PTR_GET_DEFAULT(resultDateLong_, 0L) };
        inline TransferInInfo& setResultDateLong(int64_t resultDateLong) { DARABONBA_PTR_SET_VALUE(resultDateLong_, resultDateLong) };


        // resultMsg Field Functions 
        bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
        void deleteResultMsg() { this->resultMsg_ = nullptr;};
        inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
        inline TransferInInfo& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


        // simpleTransferInStatus Field Functions 
        bool hasSimpleTransferInStatus() const { return this->simpleTransferInStatus_ != nullptr;};
        void deleteSimpleTransferInStatus() { this->simpleTransferInStatus_ = nullptr;};
        inline string getSimpleTransferInStatus() const { DARABONBA_PTR_GET_DEFAULT(simpleTransferInStatus_, "") };
        inline TransferInInfo& setSimpleTransferInStatus(string simpleTransferInStatus) { DARABONBA_PTR_SET_VALUE(simpleTransferInStatus_, simpleTransferInStatus) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline TransferInInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // submissionDate Field Functions 
        bool hasSubmissionDate() const { return this->submissionDate_ != nullptr;};
        void deleteSubmissionDate() { this->submissionDate_ = nullptr;};
        inline string getSubmissionDate() const { DARABONBA_PTR_GET_DEFAULT(submissionDate_, "") };
        inline TransferInInfo& setSubmissionDate(string submissionDate) { DARABONBA_PTR_SET_VALUE(submissionDate_, submissionDate) };


        // submissionDateLong Field Functions 
        bool hasSubmissionDateLong() const { return this->submissionDateLong_ != nullptr;};
        void deleteSubmissionDateLong() { this->submissionDateLong_ = nullptr;};
        inline int64_t getSubmissionDateLong() const { DARABONBA_PTR_GET_DEFAULT(submissionDateLong_, 0L) };
        inline TransferInInfo& setSubmissionDateLong(int64_t submissionDateLong) { DARABONBA_PTR_SET_VALUE(submissionDateLong_, submissionDateLong) };


        // transferAuthorizationCodeSubmissionDate Field Functions 
        bool hasTransferAuthorizationCodeSubmissionDate() const { return this->transferAuthorizationCodeSubmissionDate_ != nullptr;};
        void deleteTransferAuthorizationCodeSubmissionDate() { this->transferAuthorizationCodeSubmissionDate_ = nullptr;};
        inline string getTransferAuthorizationCodeSubmissionDate() const { DARABONBA_PTR_GET_DEFAULT(transferAuthorizationCodeSubmissionDate_, "") };
        inline TransferInInfo& setTransferAuthorizationCodeSubmissionDate(string transferAuthorizationCodeSubmissionDate) { DARABONBA_PTR_SET_VALUE(transferAuthorizationCodeSubmissionDate_, transferAuthorizationCodeSubmissionDate) };


        // transferAuthorizationCodeSubmissionDateLong Field Functions 
        bool hasTransferAuthorizationCodeSubmissionDateLong() const { return this->transferAuthorizationCodeSubmissionDateLong_ != nullptr;};
        void deleteTransferAuthorizationCodeSubmissionDateLong() { this->transferAuthorizationCodeSubmissionDateLong_ = nullptr;};
        inline int64_t getTransferAuthorizationCodeSubmissionDateLong() const { DARABONBA_PTR_GET_DEFAULT(transferAuthorizationCodeSubmissionDateLong_, 0L) };
        inline TransferInInfo& setTransferAuthorizationCodeSubmissionDateLong(int64_t transferAuthorizationCodeSubmissionDateLong) { DARABONBA_PTR_SET_VALUE(transferAuthorizationCodeSubmissionDateLong_, transferAuthorizationCodeSubmissionDateLong) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline TransferInInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // whoisMailStatus Field Functions 
        bool hasWhoisMailStatus() const { return this->whoisMailStatus_ != nullptr;};
        void deleteWhoisMailStatus() { this->whoisMailStatus_ = nullptr;};
        inline bool getWhoisMailStatus() const { DARABONBA_PTR_GET_DEFAULT(whoisMailStatus_, false) };
        inline TransferInInfo& setWhoisMailStatus(bool whoisMailStatus) { DARABONBA_PTR_SET_VALUE(whoisMailStatus_, whoisMailStatus) };


      protected:
        shared_ptr<string> domainName_ {};
        shared_ptr<string> email_ {};
        shared_ptr<string> expirationDate_ {};
        shared_ptr<int64_t> expirationDateLong_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> modificationDate_ {};
        shared_ptr<int64_t> modificationDateLong_ {};
        shared_ptr<bool> needMailCheck_ {};
        shared_ptr<int32_t> progressBarType_ {};
        shared_ptr<string> resultCode_ {};
        shared_ptr<string> resultDate_ {};
        shared_ptr<int64_t> resultDateLong_ {};
        shared_ptr<string> resultMsg_ {};
        shared_ptr<string> simpleTransferInStatus_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> submissionDate_ {};
        shared_ptr<int64_t> submissionDateLong_ {};
        shared_ptr<string> transferAuthorizationCodeSubmissionDate_ {};
        shared_ptr<int64_t> transferAuthorizationCodeSubmissionDateLong_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<bool> whoisMailStatus_ {};
      };

      virtual bool empty() const override { return this->transferInInfo_ == nullptr; };
      // transferInInfo Field Functions 
      bool hasTransferInInfo() const { return this->transferInInfo_ != nullptr;};
      void deleteTransferInInfo() { this->transferInInfo_ = nullptr;};
      inline const vector<Data::TransferInInfo> & getTransferInInfo() const { DARABONBA_PTR_GET_CONST(transferInInfo_, vector<Data::TransferInInfo>) };
      inline vector<Data::TransferInInfo> getTransferInInfo() { DARABONBA_PTR_GET(transferInInfo_, vector<Data::TransferInInfo>) };
      inline Data& setTransferInInfo(const vector<Data::TransferInInfo> & transferInInfo) { DARABONBA_PTR_SET_VALUE(transferInInfo_, transferInInfo) };
      inline Data& setTransferInInfo(vector<Data::TransferInInfo> && transferInInfo) { DARABONBA_PTR_SET_RVALUE(transferInInfo_, transferInInfo) };


    protected:
      shared_ptr<vector<Data::TransferInInfo>> transferInInfo_ {};
    };

    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->nextPage_ == nullptr && this->pageSize_ == nullptr && this->prePage_ == nullptr && this->requestId_ == nullptr
        && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline QueryTransferInListResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryTransferInListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryTransferInListResponseBody::Data) };
    inline QueryTransferInListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryTransferInListResponseBody::Data) };
    inline QueryTransferInListResponseBody& setData(const QueryTransferInListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTransferInListResponseBody& setData(QueryTransferInListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline bool getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
    inline QueryTransferInListResponseBody& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTransferInListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline bool getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
    inline QueryTransferInListResponseBody& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTransferInListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline QueryTransferInListResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline QueryTransferInListResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<QueryTransferInListResponseBody::Data> data_ {};
    shared_ptr<bool> nextPage_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<bool> prePage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItemNum_ {};
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
