// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryTaskDetailResponseBody() = default ;
    QueryTaskDetailResponseBody(const QueryTaskDetailResponseBody &) = default ;
    QueryTaskDetailResponseBody(QueryTaskDetailResponseBody &&) = default ;
    QueryTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskDetailResponseBody() = default ;
    QueryTaskDetailResponseBody& operator=(const QueryTaskDetailResponseBody &) = default ;
    QueryTaskDetailResponseBody& operator=(QueryTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalResults, totalResults_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalResults, totalResults_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Ani, ani_);
          DARABONBA_PTR_TO_JSON(BuId, buId_);
          DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
          DARABONBA_PTR_TO_JSON(Dnis, dnis_);
          DARABONBA_PTR_TO_JSON(EndReason, endReason_);
          DARABONBA_PTR_TO_JSON(ExtAttrs, extAttrs_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(MemberId, memberId_);
          DARABONBA_PTR_TO_JSON(MemberName, memberName_);
          DARABONBA_PTR_TO_JSON(OutboundNum, outboundNum_);
          DARABONBA_PTR_TO_JSON(OutboundTaskId, outboundTaskId_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(RetryTime, retryTime_);
          DARABONBA_PTR_TO_JSON(ServicerId, servicerId_);
          DARABONBA_PTR_TO_JSON(ServicerName, servicerName_);
          DARABONBA_PTR_TO_JSON(SkillGroup, skillGroup_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Ani, ani_);
          DARABONBA_PTR_FROM_JSON(BuId, buId_);
          DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
          DARABONBA_PTR_FROM_JSON(Dnis, dnis_);
          DARABONBA_PTR_FROM_JSON(EndReason, endReason_);
          DARABONBA_PTR_FROM_JSON(ExtAttrs, extAttrs_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
          DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
          DARABONBA_PTR_FROM_JSON(OutboundNum, outboundNum_);
          DARABONBA_PTR_FROM_JSON(OutboundTaskId, outboundTaskId_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(RetryTime, retryTime_);
          DARABONBA_PTR_FROM_JSON(ServicerId, servicerId_);
          DARABONBA_PTR_FROM_JSON(ServicerName, servicerName_);
          DARABONBA_PTR_FROM_JSON(SkillGroup, skillGroup_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
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
        virtual bool empty() const override { return this->ani_ == nullptr
        && this->buId_ == nullptr && this->departmentId_ == nullptr && this->dnis_ == nullptr && this->endReason_ == nullptr && this->extAttrs_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->memberId_ == nullptr && this->memberName_ == nullptr
        && this->outboundNum_ == nullptr && this->outboundTaskId_ == nullptr && this->priority_ == nullptr && this->retryTime_ == nullptr && this->servicerId_ == nullptr
        && this->servicerName_ == nullptr && this->skillGroup_ == nullptr && this->status_ == nullptr; };
        // ani Field Functions 
        bool hasAni() const { return this->ani_ != nullptr;};
        void deleteAni() { this->ani_ = nullptr;};
        inline string getAni() const { DARABONBA_PTR_GET_DEFAULT(ani_, "") };
        inline List& setAni(string ani) { DARABONBA_PTR_SET_VALUE(ani_, ani) };


        // buId Field Functions 
        bool hasBuId() const { return this->buId_ != nullptr;};
        void deleteBuId() { this->buId_ = nullptr;};
        inline int64_t getBuId() const { DARABONBA_PTR_GET_DEFAULT(buId_, 0L) };
        inline List& setBuId(int64_t buId) { DARABONBA_PTR_SET_VALUE(buId_, buId) };


        // departmentId Field Functions 
        bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
        void deleteDepartmentId() { this->departmentId_ = nullptr;};
        inline int64_t getDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, 0L) };
        inline List& setDepartmentId(int64_t departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


        // dnis Field Functions 
        bool hasDnis() const { return this->dnis_ != nullptr;};
        void deleteDnis() { this->dnis_ = nullptr;};
        inline string getDnis() const { DARABONBA_PTR_GET_DEFAULT(dnis_, "") };
        inline List& setDnis(string dnis) { DARABONBA_PTR_SET_VALUE(dnis_, dnis) };


        // endReason Field Functions 
        bool hasEndReason() const { return this->endReason_ != nullptr;};
        void deleteEndReason() { this->endReason_ = nullptr;};
        inline int32_t getEndReason() const { DARABONBA_PTR_GET_DEFAULT(endReason_, 0) };
        inline List& setEndReason(int32_t endReason) { DARABONBA_PTR_SET_VALUE(endReason_, endReason) };


        // extAttrs Field Functions 
        bool hasExtAttrs() const { return this->extAttrs_ != nullptr;};
        void deleteExtAttrs() { this->extAttrs_ = nullptr;};
        inline string getExtAttrs() const { DARABONBA_PTR_GET_DEFAULT(extAttrs_, "") };
        inline List& setExtAttrs(string extAttrs) { DARABONBA_PTR_SET_VALUE(extAttrs_, extAttrs) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline List& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline List& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline List& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // memberId Field Functions 
        bool hasMemberId() const { return this->memberId_ != nullptr;};
        void deleteMemberId() { this->memberId_ = nullptr;};
        inline int64_t getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, 0L) };
        inline List& setMemberId(int64_t memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


        // memberName Field Functions 
        bool hasMemberName() const { return this->memberName_ != nullptr;};
        void deleteMemberName() { this->memberName_ = nullptr;};
        inline string getMemberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
        inline List& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


        // outboundNum Field Functions 
        bool hasOutboundNum() const { return this->outboundNum_ != nullptr;};
        void deleteOutboundNum() { this->outboundNum_ = nullptr;};
        inline int32_t getOutboundNum() const { DARABONBA_PTR_GET_DEFAULT(outboundNum_, 0) };
        inline List& setOutboundNum(int32_t outboundNum) { DARABONBA_PTR_SET_VALUE(outboundNum_, outboundNum) };


        // outboundTaskId Field Functions 
        bool hasOutboundTaskId() const { return this->outboundTaskId_ != nullptr;};
        void deleteOutboundTaskId() { this->outboundTaskId_ = nullptr;};
        inline int64_t getOutboundTaskId() const { DARABONBA_PTR_GET_DEFAULT(outboundTaskId_, 0L) };
        inline List& setOutboundTaskId(int64_t outboundTaskId) { DARABONBA_PTR_SET_VALUE(outboundTaskId_, outboundTaskId) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline List& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // retryTime Field Functions 
        bool hasRetryTime() const { return this->retryTime_ != nullptr;};
        void deleteRetryTime() { this->retryTime_ = nullptr;};
        inline string getRetryTime() const { DARABONBA_PTR_GET_DEFAULT(retryTime_, "") };
        inline List& setRetryTime(string retryTime) { DARABONBA_PTR_SET_VALUE(retryTime_, retryTime) };


        // servicerId Field Functions 
        bool hasServicerId() const { return this->servicerId_ != nullptr;};
        void deleteServicerId() { this->servicerId_ = nullptr;};
        inline int64_t getServicerId() const { DARABONBA_PTR_GET_DEFAULT(servicerId_, 0L) };
        inline List& setServicerId(int64_t servicerId) { DARABONBA_PTR_SET_VALUE(servicerId_, servicerId) };


        // servicerName Field Functions 
        bool hasServicerName() const { return this->servicerName_ != nullptr;};
        void deleteServicerName() { this->servicerName_ = nullptr;};
        inline string getServicerName() const { DARABONBA_PTR_GET_DEFAULT(servicerName_, "") };
        inline List& setServicerName(string servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };


        // skillGroup Field Functions 
        bool hasSkillGroup() const { return this->skillGroup_ != nullptr;};
        void deleteSkillGroup() { this->skillGroup_ = nullptr;};
        inline int32_t getSkillGroup() const { DARABONBA_PTR_GET_DEFAULT(skillGroup_, 0) };
        inline List& setSkillGroup(int32_t skillGroup) { DARABONBA_PTR_SET_VALUE(skillGroup_, skillGroup) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline List& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> ani_ {};
        shared_ptr<int64_t> buId_ {};
        shared_ptr<int64_t> departmentId_ {};
        shared_ptr<string> dnis_ {};
        shared_ptr<int32_t> endReason_ {};
        shared_ptr<string> extAttrs_ {};
        shared_ptr<int64_t> gmtCreate_ {};
        shared_ptr<int64_t> gmtModified_ {};
        shared_ptr<int32_t> id_ {};
        shared_ptr<int64_t> memberId_ {};
        shared_ptr<string> memberName_ {};
        shared_ptr<int32_t> outboundNum_ {};
        shared_ptr<int64_t> outboundTaskId_ {};
        shared_ptr<int32_t> priority_ {};
        shared_ptr<string> retryTime_ {};
        shared_ptr<int64_t> servicerId_ {};
        shared_ptr<string> servicerName_ {};
        shared_ptr<int32_t> skillGroup_ {};
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->list_ == nullptr && this->pageSize_ == nullptr && this->totalResults_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
      inline Data& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline Data& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalResults Field Functions 
      bool hasTotalResults() const { return this->totalResults_ != nullptr;};
      void deleteTotalResults() { this->totalResults_ = nullptr;};
      inline string getTotalResults() const { DARABONBA_PTR_GET_DEFAULT(totalResults_, "") };
      inline Data& setTotalResults(string totalResults) { DARABONBA_PTR_SET_VALUE(totalResults_, totalResults) };


    protected:
      shared_ptr<string> currentPage_ {};
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<string> pageSize_ {};
      shared_ptr<string> totalResults_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryTaskDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryTaskDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryTaskDetailResponseBody::Data) };
    inline QueryTaskDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryTaskDetailResponseBody::Data) };
    inline QueryTaskDetailResponseBody& setData(const QueryTaskDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTaskDetailResponseBody& setData(QueryTaskDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline QueryTaskDetailResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryTaskDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline QueryTaskDetailResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryTaskDetailResponseBody::Data> data_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
