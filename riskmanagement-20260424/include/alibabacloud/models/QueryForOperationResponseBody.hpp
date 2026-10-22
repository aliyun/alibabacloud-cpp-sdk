// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFOROPERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFOROPERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class QueryForOperationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryForOperationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryForOperationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryForOperationResponseBody() = default ;
    QueryForOperationResponseBody(const QueryForOperationResponseBody &) = default ;
    QueryForOperationResponseBody(QueryForOperationResponseBody &&) = default ;
    QueryForOperationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryForOperationResponseBody() = default ;
    QueryForOperationResponseBody& operator=(const QueryForOperationResponseBody &) = default ;
    QueryForOperationResponseBody& operator=(QueryForOperationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
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
      class PageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(Total, total_);
        };
        friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
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
        && this->pageSize_ == nullptr && this->total_ == nullptr; };
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


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
        inline PageInfo& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        shared_ptr<int32_t> currentPage_ {};
        shared_ptr<int32_t> pageSize_ {};
        shared_ptr<int32_t> total_ {};
      };

      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(ApplyTime, applyTime_);
          DARABONBA_PTR_TO_JSON(AssetType, assetType_);
          DARABONBA_PTR_TO_JSON(AuditMemo, auditMemo_);
          DARABONBA_PTR_TO_JSON(AuditTime, auditTime_);
          DARABONBA_PTR_TO_JSON(Auditor, auditor_);
          DARABONBA_PTR_TO_JSON(CustomerUid, customerUid_);
          DARABONBA_PTR_TO_JSON(EmailType, emailType_);
          DARABONBA_PTR_TO_JSON(HasUnsubscribe, hasUnsubscribe_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(SendCount, sendCount_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UseDesc, useDesc_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplyTime, applyTime_);
          DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
          DARABONBA_PTR_FROM_JSON(AuditMemo, auditMemo_);
          DARABONBA_PTR_FROM_JSON(AuditTime, auditTime_);
          DARABONBA_PTR_FROM_JSON(Auditor, auditor_);
          DARABONBA_PTR_FROM_JSON(CustomerUid, customerUid_);
          DARABONBA_PTR_FROM_JSON(EmailType, emailType_);
          DARABONBA_PTR_FROM_JSON(HasUnsubscribe, hasUnsubscribe_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(SendCount, sendCount_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UseDesc, useDesc_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applyTime_ == nullptr
        && this->assetType_ == nullptr && this->auditMemo_ == nullptr && this->auditTime_ == nullptr && this->auditor_ == nullptr && this->customerUid_ == nullptr
        && this->emailType_ == nullptr && this->hasUnsubscribe_ == nullptr && this->id_ == nullptr && this->ip_ == nullptr && this->sendCount_ == nullptr
        && this->status_ == nullptr && this->useDesc_ == nullptr; };
        // applyTime Field Functions 
        bool hasApplyTime() const { return this->applyTime_ != nullptr;};
        void deleteApplyTime() { this->applyTime_ = nullptr;};
        inline int64_t getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, 0L) };
        inline List& setApplyTime(int64_t applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


        // assetType Field Functions 
        bool hasAssetType() const { return this->assetType_ != nullptr;};
        void deleteAssetType() { this->assetType_ = nullptr;};
        inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
        inline List& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


        // auditMemo Field Functions 
        bool hasAuditMemo() const { return this->auditMemo_ != nullptr;};
        void deleteAuditMemo() { this->auditMemo_ = nullptr;};
        inline string getAuditMemo() const { DARABONBA_PTR_GET_DEFAULT(auditMemo_, "") };
        inline List& setAuditMemo(string auditMemo) { DARABONBA_PTR_SET_VALUE(auditMemo_, auditMemo) };


        // auditTime Field Functions 
        bool hasAuditTime() const { return this->auditTime_ != nullptr;};
        void deleteAuditTime() { this->auditTime_ = nullptr;};
        inline int64_t getAuditTime() const { DARABONBA_PTR_GET_DEFAULT(auditTime_, 0L) };
        inline List& setAuditTime(int64_t auditTime) { DARABONBA_PTR_SET_VALUE(auditTime_, auditTime) };


        // auditor Field Functions 
        bool hasAuditor() const { return this->auditor_ != nullptr;};
        void deleteAuditor() { this->auditor_ = nullptr;};
        inline string getAuditor() const { DARABONBA_PTR_GET_DEFAULT(auditor_, "") };
        inline List& setAuditor(string auditor) { DARABONBA_PTR_SET_VALUE(auditor_, auditor) };


        // customerUid Field Functions 
        bool hasCustomerUid() const { return this->customerUid_ != nullptr;};
        void deleteCustomerUid() { this->customerUid_ = nullptr;};
        inline string getCustomerUid() const { DARABONBA_PTR_GET_DEFAULT(customerUid_, "") };
        inline List& setCustomerUid(string customerUid) { DARABONBA_PTR_SET_VALUE(customerUid_, customerUid) };


        // emailType Field Functions 
        bool hasEmailType() const { return this->emailType_ != nullptr;};
        void deleteEmailType() { this->emailType_ = nullptr;};
        inline string getEmailType() const { DARABONBA_PTR_GET_DEFAULT(emailType_, "") };
        inline List& setEmailType(string emailType) { DARABONBA_PTR_SET_VALUE(emailType_, emailType) };


        // hasUnsubscribe Field Functions 
        bool hasHasUnsubscribe() const { return this->hasUnsubscribe_ != nullptr;};
        void deleteHasUnsubscribe() { this->hasUnsubscribe_ = nullptr;};
        inline bool getHasUnsubscribe() const { DARABONBA_PTR_GET_DEFAULT(hasUnsubscribe_, false) };
        inline List& setHasUnsubscribe(bool hasUnsubscribe) { DARABONBA_PTR_SET_VALUE(hasUnsubscribe_, hasUnsubscribe) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline List& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // sendCount Field Functions 
        bool hasSendCount() const { return this->sendCount_ != nullptr;};
        void deleteSendCount() { this->sendCount_ = nullptr;};
        inline string getSendCount() const { DARABONBA_PTR_GET_DEFAULT(sendCount_, "") };
        inline List& setSendCount(string sendCount) { DARABONBA_PTR_SET_VALUE(sendCount_, sendCount) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // useDesc Field Functions 
        bool hasUseDesc() const { return this->useDesc_ != nullptr;};
        void deleteUseDesc() { this->useDesc_ = nullptr;};
        inline string getUseDesc() const { DARABONBA_PTR_GET_DEFAULT(useDesc_, "") };
        inline List& setUseDesc(string useDesc) { DARABONBA_PTR_SET_VALUE(useDesc_, useDesc) };


      protected:
        shared_ptr<int64_t> applyTime_ {};
        shared_ptr<string> assetType_ {};
        shared_ptr<string> auditMemo_ {};
        shared_ptr<int64_t> auditTime_ {};
        shared_ptr<string> auditor_ {};
        shared_ptr<string> customerUid_ {};
        shared_ptr<string> emailType_ {};
        shared_ptr<bool> hasUnsubscribe_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> ip_ {};
        shared_ptr<string> sendCount_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> useDesc_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageInfo_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline const Data::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Data::PageInfo) };
      inline Data::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, Data::PageInfo) };
      inline Data& setPageInfo(const Data::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
      inline Data& setPageInfo(Data::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<Data::PageInfo> pageInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryForOperationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryForOperationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryForOperationResponseBody::Data) };
    inline QueryForOperationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryForOperationResponseBody::Data) };
    inline QueryForOperationResponseBody& setData(const QueryForOperationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryForOperationResponseBody& setData(QueryForOperationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryForOperationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryForOperationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryForOperationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryForOperationResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
