// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDIJobEventsResponseBody() = default ;
    ListDIJobEventsResponseBody(const ListDIJobEventsResponseBody &) = default ;
    ListDIJobEventsResponseBody(ListDIJobEventsResponseBody &&) = default ;
    ListDIJobEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobEventsResponseBody() = default ;
    ListDIJobEventsResponseBody& operator=(const ListDIJobEventsResponseBody &) = default ;
    ListDIJobEventsResponseBody& operator=(ListDIJobEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DIJobEvent, DIJobEvent_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DIJobEvent, DIJobEvent_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DIJobEvent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DIJobEvent& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Channels, channels_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(DstSql, dstSql_);
          DARABONBA_PTR_TO_JSON(DstTable, dstTable_);
          DARABONBA_PTR_TO_JSON(FailoverMessage, failoverMessage_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Severity, severity_);
          DARABONBA_PTR_TO_JSON(SrcSql, srcSql_);
          DARABONBA_PTR_TO_JSON(SrcTable, srcTable_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DIJobEvent& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Channels, channels_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
          DARABONBA_PTR_FROM_JSON(DstSql, dstSql_);
          DARABONBA_PTR_FROM_JSON(DstTable, dstTable_);
          DARABONBA_PTR_FROM_JSON(FailoverMessage, failoverMessage_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Severity, severity_);
          DARABONBA_PTR_FROM_JSON(SrcSql, srcSql_);
          DARABONBA_PTR_FROM_JSON(SrcTable, srcTable_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        DIJobEvent() = default ;
        DIJobEvent(const DIJobEvent &) = default ;
        DIJobEvent(DIJobEvent &&) = default ;
        DIJobEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DIJobEvent() = default ;
        DIJobEvent& operator=(const DIJobEvent &) = default ;
        DIJobEvent& operator=(DIJobEvent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->channels_ == nullptr && this->createTime_ == nullptr && this->detail_ == nullptr && this->dstSql_ == nullptr && this->dstTable_ == nullptr
        && this->failoverMessage_ == nullptr && this->id_ == nullptr && this->severity_ == nullptr && this->srcSql_ == nullptr && this->srcTable_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline DIJobEvent& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // channels Field Functions 
        bool hasChannels() const { return this->channels_ != nullptr;};
        void deleteChannels() { this->channels_ = nullptr;};
        inline string getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
        inline DIJobEvent& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DIJobEvent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
        inline DIJobEvent& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


        // dstSql Field Functions 
        bool hasDstSql() const { return this->dstSql_ != nullptr;};
        void deleteDstSql() { this->dstSql_ = nullptr;};
        inline string getDstSql() const { DARABONBA_PTR_GET_DEFAULT(dstSql_, "") };
        inline DIJobEvent& setDstSql(string dstSql) { DARABONBA_PTR_SET_VALUE(dstSql_, dstSql) };


        // dstTable Field Functions 
        bool hasDstTable() const { return this->dstTable_ != nullptr;};
        void deleteDstTable() { this->dstTable_ = nullptr;};
        inline string getDstTable() const { DARABONBA_PTR_GET_DEFAULT(dstTable_, "") };
        inline DIJobEvent& setDstTable(string dstTable) { DARABONBA_PTR_SET_VALUE(dstTable_, dstTable) };


        // failoverMessage Field Functions 
        bool hasFailoverMessage() const { return this->failoverMessage_ != nullptr;};
        void deleteFailoverMessage() { this->failoverMessage_ = nullptr;};
        inline string getFailoverMessage() const { DARABONBA_PTR_GET_DEFAULT(failoverMessage_, "") };
        inline DIJobEvent& setFailoverMessage(string failoverMessage) { DARABONBA_PTR_SET_VALUE(failoverMessage_, failoverMessage) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DIJobEvent& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // severity Field Functions 
        bool hasSeverity() const { return this->severity_ != nullptr;};
        void deleteSeverity() { this->severity_ = nullptr;};
        inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
        inline DIJobEvent& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


        // srcSql Field Functions 
        bool hasSrcSql() const { return this->srcSql_ != nullptr;};
        void deleteSrcSql() { this->srcSql_ = nullptr;};
        inline string getSrcSql() const { DARABONBA_PTR_GET_DEFAULT(srcSql_, "") };
        inline DIJobEvent& setSrcSql(string srcSql) { DARABONBA_PTR_SET_VALUE(srcSql_, srcSql) };


        // srcTable Field Functions 
        bool hasSrcTable() const { return this->srcTable_ != nullptr;};
        void deleteSrcTable() { this->srcTable_ = nullptr;};
        inline string getSrcTable() const { DARABONBA_PTR_GET_DEFAULT(srcTable_, "") };
        inline DIJobEvent& setSrcTable(string srcTable) { DARABONBA_PTR_SET_VALUE(srcTable_, srcTable) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DIJobEvent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DIJobEvent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The processing result of the DDL event. Valid values: Critical, Ignore, Normal, and Warning.
        shared_ptr<string> action_ {};
        // The alert notification method. Valid values: Phone, Mail, Sms, Ding, and Webhook.
        shared_ptr<string> channels_ {};
        // The time when the event was created.
        shared_ptr<string> createTime_ {};
        // The alert details.
        shared_ptr<string> detail_ {};
        // The DDL statement of the destination table.
        shared_ptr<string> dstSql_ {};
        // The name of the destination table.
        shared_ptr<string> dstTable_ {};
        // The error logs for failovers.
        shared_ptr<string> failoverMessage_ {};
        // The event ID.
        shared_ptr<string> id_ {};
        // The severity level of the alert. Valid values: Warning and Critical.
        shared_ptr<string> severity_ {};
        // The DDL statement of the source table.
        shared_ptr<string> srcSql_ {};
        // The name of the source table.
        shared_ptr<string> srcTable_ {};
        // The sending status of an alert notification. Valid values: Success, Fail, and Silence.
        shared_ptr<string> status_ {};
        // The type of the alert event.
        // 
        // *   Heartbeat
        // *   Delay
        // *   FailoverCount
        // *   DdlReport
        // *   ResourceUtilization
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->DIJobEvent_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // DIJobEvent Field Functions 
      bool hasDIJobEvent() const { return this->DIJobEvent_ != nullptr;};
      void deleteDIJobEvent() { this->DIJobEvent_ = nullptr;};
      inline const vector<PagingInfo::DIJobEvent> & getDIJobEvent() const { DARABONBA_PTR_GET_CONST(DIJobEvent_, vector<PagingInfo::DIJobEvent>) };
      inline vector<PagingInfo::DIJobEvent> getDIJobEvent() { DARABONBA_PTR_GET(DIJobEvent_, vector<PagingInfo::DIJobEvent>) };
      inline PagingInfo& setDIJobEvent(const vector<PagingInfo::DIJobEvent> & dIJobEvent) { DARABONBA_PTR_SET_VALUE(DIJobEvent_, dIJobEvent) };
      inline PagingInfo& setDIJobEvent(vector<PagingInfo::DIJobEvent> && dIJobEvent) { DARABONBA_PTR_SET_RVALUE(DIJobEvent_, dIJobEvent) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline PagingInfo& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline PagingInfo& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The events returned. The value of this parameter is an array.
      shared_ptr<vector<PagingInfo::DIJobEvent>> DIJobEvent_ {};
      // The page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListDIJobEventsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListDIJobEventsResponseBody::PagingInfo) };
    inline ListDIJobEventsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListDIJobEventsResponseBody::PagingInfo) };
    inline ListDIJobEventsResponseBody& setPagingInfo(const ListDIJobEventsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListDIJobEventsResponseBody& setPagingInfo(ListDIJobEventsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDIJobEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListDIJobEventsResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
