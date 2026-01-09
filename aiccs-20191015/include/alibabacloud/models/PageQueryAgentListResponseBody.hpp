// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGEQUERYAGENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PAGEQUERYAGENTLISTRESPONSEBODY_HPP_
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
  class PageQueryAgentListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageQueryAgentListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PageQueryAgentListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PageQueryAgentListResponseBody() = default ;
    PageQueryAgentListResponseBody(const PageQueryAgentListResponseBody &) = default ;
    PageQueryAgentListResponseBody(PageQueryAgentListResponseBody &&) = default ;
    PageQueryAgentListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageQueryAgentListResponseBody() = default ;
    PageQueryAgentListResponseBody& operator=(const PageQueryAgentListResponseBody &) = default ;
    PageQueryAgentListResponseBody& operator=(PageQueryAgentListResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AgentId, agentId_);
          DARABONBA_PTR_TO_JSON(AgentName, agentName_);
          DARABONBA_PTR_TO_JSON(ApplicationCode, applicationCode_);
          DARABONBA_PTR_TO_JSON(AuditReason, auditReason_);
          DARABONBA_PTR_TO_JSON(BuildFailReason, buildFailReason_);
          DARABONBA_PTR_TO_JSON(BusinessTypeName, businessTypeName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(LastOnlineTime, lastOnlineTime_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(WithActivePrompt, withActivePrompt_);
          DARABONBA_PTR_TO_JSON(WithConfig, withConfig_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
          DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
          DARABONBA_PTR_FROM_JSON(ApplicationCode, applicationCode_);
          DARABONBA_PTR_FROM_JSON(AuditReason, auditReason_);
          DARABONBA_PTR_FROM_JSON(BuildFailReason, buildFailReason_);
          DARABONBA_PTR_FROM_JSON(BusinessTypeName, businessTypeName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(LastOnlineTime, lastOnlineTime_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(WithActivePrompt, withActivePrompt_);
          DARABONBA_PTR_FROM_JSON(WithConfig, withConfig_);
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
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->applicationCode_ == nullptr && this->auditReason_ == nullptr && this->buildFailReason_ == nullptr && this->businessTypeName_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->lastOnlineTime_ == nullptr && this->modifyTime_ == nullptr && this->status_ == nullptr
        && this->withActivePrompt_ == nullptr && this->withConfig_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline List& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // agentName Field Functions 
        bool hasAgentName() const { return this->agentName_ != nullptr;};
        void deleteAgentName() { this->agentName_ = nullptr;};
        inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
        inline List& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


        // applicationCode Field Functions 
        bool hasApplicationCode() const { return this->applicationCode_ != nullptr;};
        void deleteApplicationCode() { this->applicationCode_ = nullptr;};
        inline string getApplicationCode() const { DARABONBA_PTR_GET_DEFAULT(applicationCode_, "") };
        inline List& setApplicationCode(string applicationCode) { DARABONBA_PTR_SET_VALUE(applicationCode_, applicationCode) };


        // auditReason Field Functions 
        bool hasAuditReason() const { return this->auditReason_ != nullptr;};
        void deleteAuditReason() { this->auditReason_ = nullptr;};
        inline string getAuditReason() const { DARABONBA_PTR_GET_DEFAULT(auditReason_, "") };
        inline List& setAuditReason(string auditReason) { DARABONBA_PTR_SET_VALUE(auditReason_, auditReason) };


        // buildFailReason Field Functions 
        bool hasBuildFailReason() const { return this->buildFailReason_ != nullptr;};
        void deleteBuildFailReason() { this->buildFailReason_ = nullptr;};
        inline string getBuildFailReason() const { DARABONBA_PTR_GET_DEFAULT(buildFailReason_, "") };
        inline List& setBuildFailReason(string buildFailReason) { DARABONBA_PTR_SET_VALUE(buildFailReason_, buildFailReason) };


        // businessTypeName Field Functions 
        bool hasBusinessTypeName() const { return this->businessTypeName_ != nullptr;};
        void deleteBusinessTypeName() { this->businessTypeName_ = nullptr;};
        inline string getBusinessTypeName() const { DARABONBA_PTR_GET_DEFAULT(businessTypeName_, "") };
        inline List& setBusinessTypeName(string businessTypeName) { DARABONBA_PTR_SET_VALUE(businessTypeName_, businessTypeName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // lastOnlineTime Field Functions 
        bool hasLastOnlineTime() const { return this->lastOnlineTime_ != nullptr;};
        void deleteLastOnlineTime() { this->lastOnlineTime_ = nullptr;};
        inline string getLastOnlineTime() const { DARABONBA_PTR_GET_DEFAULT(lastOnlineTime_, "") };
        inline List& setLastOnlineTime(string lastOnlineTime) { DARABONBA_PTR_SET_VALUE(lastOnlineTime_, lastOnlineTime) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline List& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline List& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // withActivePrompt Field Functions 
        bool hasWithActivePrompt() const { return this->withActivePrompt_ != nullptr;};
        void deleteWithActivePrompt() { this->withActivePrompt_ = nullptr;};
        inline bool getWithActivePrompt() const { DARABONBA_PTR_GET_DEFAULT(withActivePrompt_, false) };
        inline List& setWithActivePrompt(bool withActivePrompt) { DARABONBA_PTR_SET_VALUE(withActivePrompt_, withActivePrompt) };


        // withConfig Field Functions 
        bool hasWithConfig() const { return this->withConfig_ != nullptr;};
        void deleteWithConfig() { this->withConfig_ = nullptr;};
        inline bool getWithConfig() const { DARABONBA_PTR_GET_DEFAULT(withConfig_, false) };
        inline List& setWithConfig(bool withConfig) { DARABONBA_PTR_SET_VALUE(withConfig_, withConfig) };


      protected:
        shared_ptr<string> agentId_ {};
        shared_ptr<string> agentName_ {};
        shared_ptr<string> applicationCode_ {};
        shared_ptr<string> auditReason_ {};
        shared_ptr<string> buildFailReason_ {};
        shared_ptr<string> businessTypeName_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> lastOnlineTime_ {};
        shared_ptr<string> modifyTime_ {};
        shared_ptr<int64_t> status_ {};
        shared_ptr<bool> withActivePrompt_ {};
        shared_ptr<bool> withConfig_ {};
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
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int64_t> pageNo_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline PageQueryAgentListResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PageQueryAgentListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PageQueryAgentListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PageQueryAgentListResponseBody::Data) };
    inline PageQueryAgentListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PageQueryAgentListResponseBody::Data) };
    inline PageQueryAgentListResponseBody& setData(const PageQueryAgentListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PageQueryAgentListResponseBody& setData(PageQueryAgentListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PageQueryAgentListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PageQueryAgentListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PageQueryAgentListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<PageQueryAgentListResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
