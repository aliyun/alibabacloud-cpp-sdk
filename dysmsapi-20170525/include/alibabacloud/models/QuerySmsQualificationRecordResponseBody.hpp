// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSQUALIFICATIONRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSQUALIFICATIONRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsQualificationRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsQualificationRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsQualificationRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySmsQualificationRecordResponseBody() = default ;
    QuerySmsQualificationRecordResponseBody(const QuerySmsQualificationRecordResponseBody &) = default ;
    QuerySmsQualificationRecordResponseBody(QuerySmsQualificationRecordResponseBody &&) = default ;
    QuerySmsQualificationRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsQualificationRecordResponseBody() = default ;
    QuerySmsQualificationRecordResponseBody& operator=(const QuerySmsQualificationRecordResponseBody &) = default ;
    QuerySmsQualificationRecordResponseBody& operator=(QuerySmsQualificationRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
          DARABONBA_PTR_TO_JSON(AuditRemark, auditRemark_);
          DARABONBA_PTR_TO_JSON(AuditTime, auditTime_);
          DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
          DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(LegalPersonName, legalPersonName_);
          DARABONBA_PTR_TO_JSON(QualificationGroupName, qualificationGroupName_);
          DARABONBA_PTR_TO_JSON(StateName, stateName_);
          DARABONBA_PTR_TO_JSON(UseBySelf, useBySelf_);
          DARABONBA_PTR_TO_JSON(WorkOrderId, workOrderId_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AuditRemark, auditRemark_);
          DARABONBA_PTR_FROM_JSON(AuditTime, auditTime_);
          DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
          DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(LegalPersonName, legalPersonName_);
          DARABONBA_PTR_FROM_JSON(QualificationGroupName, qualificationGroupName_);
          DARABONBA_PTR_FROM_JSON(StateName, stateName_);
          DARABONBA_PTR_FROM_JSON(UseBySelf, useBySelf_);
          DARABONBA_PTR_FROM_JSON(WorkOrderId, workOrderId_);
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
        virtual bool empty() const override { return this->auditRemark_ == nullptr
        && this->auditTime_ == nullptr && this->companyName_ == nullptr && this->createDate_ == nullptr && this->groupId_ == nullptr && this->legalPersonName_ == nullptr
        && this->qualificationGroupName_ == nullptr && this->stateName_ == nullptr && this->useBySelf_ == nullptr && this->workOrderId_ == nullptr; };
        // auditRemark Field Functions 
        bool hasAuditRemark() const { return this->auditRemark_ != nullptr;};
        void deleteAuditRemark() { this->auditRemark_ = nullptr;};
        inline string getAuditRemark() const { DARABONBA_PTR_GET_DEFAULT(auditRemark_, "") };
        inline List& setAuditRemark(string auditRemark) { DARABONBA_PTR_SET_VALUE(auditRemark_, auditRemark) };


        // auditTime Field Functions 
        bool hasAuditTime() const { return this->auditTime_ != nullptr;};
        void deleteAuditTime() { this->auditTime_ = nullptr;};
        inline string getAuditTime() const { DARABONBA_PTR_GET_DEFAULT(auditTime_, "") };
        inline List& setAuditTime(string auditTime) { DARABONBA_PTR_SET_VALUE(auditTime_, auditTime) };


        // companyName Field Functions 
        bool hasCompanyName() const { return this->companyName_ != nullptr;};
        void deleteCompanyName() { this->companyName_ = nullptr;};
        inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
        inline List& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


        // createDate Field Functions 
        bool hasCreateDate() const { return this->createDate_ != nullptr;};
        void deleteCreateDate() { this->createDate_ = nullptr;};
        inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
        inline List& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
        inline List& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // legalPersonName Field Functions 
        bool hasLegalPersonName() const { return this->legalPersonName_ != nullptr;};
        void deleteLegalPersonName() { this->legalPersonName_ = nullptr;};
        inline string getLegalPersonName() const { DARABONBA_PTR_GET_DEFAULT(legalPersonName_, "") };
        inline List& setLegalPersonName(string legalPersonName) { DARABONBA_PTR_SET_VALUE(legalPersonName_, legalPersonName) };


        // qualificationGroupName Field Functions 
        bool hasQualificationGroupName() const { return this->qualificationGroupName_ != nullptr;};
        void deleteQualificationGroupName() { this->qualificationGroupName_ = nullptr;};
        inline string getQualificationGroupName() const { DARABONBA_PTR_GET_DEFAULT(qualificationGroupName_, "") };
        inline List& setQualificationGroupName(string qualificationGroupName) { DARABONBA_PTR_SET_VALUE(qualificationGroupName_, qualificationGroupName) };


        // stateName Field Functions 
        bool hasStateName() const { return this->stateName_ != nullptr;};
        void deleteStateName() { this->stateName_ = nullptr;};
        inline string getStateName() const { DARABONBA_PTR_GET_DEFAULT(stateName_, "") };
        inline List& setStateName(string stateName) { DARABONBA_PTR_SET_VALUE(stateName_, stateName) };


        // useBySelf Field Functions 
        bool hasUseBySelf() const { return this->useBySelf_ != nullptr;};
        void deleteUseBySelf() { this->useBySelf_ = nullptr;};
        inline string getUseBySelf() const { DARABONBA_PTR_GET_DEFAULT(useBySelf_, "") };
        inline List& setUseBySelf(string useBySelf) { DARABONBA_PTR_SET_VALUE(useBySelf_, useBySelf) };


        // workOrderId Field Functions 
        bool hasWorkOrderId() const { return this->workOrderId_ != nullptr;};
        void deleteWorkOrderId() { this->workOrderId_ = nullptr;};
        inline int64_t getWorkOrderId() const { DARABONBA_PTR_GET_DEFAULT(workOrderId_, 0L) };
        inline List& setWorkOrderId(int64_t workOrderId) { DARABONBA_PTR_SET_VALUE(workOrderId_, workOrderId) };


      protected:
        // 审核备注。
        shared_ptr<string> auditRemark_ {};
        // 审核时间。
        shared_ptr<string> auditTime_ {};
        // 企业名称。
        shared_ptr<string> companyName_ {};
        // 资质创建时间。
        shared_ptr<string> createDate_ {};
        // 资质ID。
        shared_ptr<int64_t> groupId_ {};
        // 法人姓名。
        shared_ptr<string> legalPersonName_ {};
        // 资质名称。
        shared_ptr<string> qualificationGroupName_ {};
        // 审核状态。取值：
        // 
        // - INIT：审核中。
        // - NOT_PASS：审核不通过。 
        // - PASS：审核通过。
        // - NOT_FINISH：资料待补充。
        // - CANCEL：已撤回。
        shared_ptr<string> stateName_ {};
        // 资质申请用途，取值：
        // 
        // - **true**：自用。
        // - **false**：他用。
        shared_ptr<string> useBySelf_ {};
        // 审核工单ID。
        shared_ptr<int64_t> workOrderId_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Data& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // 满足过滤条件的数据列表。
      shared_ptr<vector<Data::List>> list_ {};
      // 当前页码。
      shared_ptr<int64_t> pageNo_ {};
      // 每页数据条数。
      shared_ptr<int64_t> pageSize_ {};
      // 总条数。
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QuerySmsQualificationRecordResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySmsQualificationRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QuerySmsQualificationRecordResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QuerySmsQualificationRecordResponseBody::Data) };
    inline QuerySmsQualificationRecordResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QuerySmsQualificationRecordResponseBody::Data) };
    inline QuerySmsQualificationRecordResponseBody& setData(const QuerySmsQualificationRecordResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySmsQualificationRecordResponseBody& setData(QuerySmsQualificationRecordResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySmsQualificationRecordResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySmsQualificationRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySmsQualificationRecordResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // 访问被拒绝详细信息。
    shared_ptr<string> accessDeniedDetail_ {};
    // 请求状态码。
    // 
    // * 返回OK代表请求成功。
    // * 其他错误码，请参见本章节的错误码列表或产品[API错误码](https://help.aliyun.com/document_detail/101346.html)。
    shared_ptr<string> code_ {};
    // 资质审核列表
    shared_ptr<QuerySmsQualificationRecordResponseBody::Data> data_ {};
    // 状态码的描述。
    shared_ptr<string> message_ {};
    // 请求ID。
    shared_ptr<string> requestId_ {};
    // 调用接口是否成功。取值：
    // 
    // - **true**：调用成功。
    // - **false**：调用失败。
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
