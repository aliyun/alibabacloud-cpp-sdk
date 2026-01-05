// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSTEMPLATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSMSTEMPLATELISTRESPONSEBODY_HPP_
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
  class GetSmsTemplateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmsTemplateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsTemplateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSmsTemplateListResponseBody() = default ;
    GetSmsTemplateListResponseBody(const GetSmsTemplateListResponseBody &) = default ;
    GetSmsTemplateListResponseBody(GetSmsTemplateListResponseBody &&) = default ;
    GetSmsTemplateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmsTemplateListResponseBody() = default ;
    GetSmsTemplateListResponseBody& operator=(const GetSmsTemplateListResponseBody &) = default ;
    GetSmsTemplateListResponseBody& operator=(GetSmsTemplateListResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(SignName, signName_);
          DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
          DARABONBA_PTR_TO_JSON(TemplateTag, templateTag_);
          DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
          DARABONBA_PTR_TO_JSON(UsableStateList, usableStateList_);
          DARABONBA_PTR_TO_JSON(WorkOrderId, workOrderId_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(SignName, signName_);
          DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
          DARABONBA_PTR_FROM_JSON(TemplateTag, templateTag_);
          DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
          DARABONBA_PTR_FROM_JSON(UsableStateList, usableStateList_);
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
        class TemplateTag : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TemplateTag& obj) { 
            DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
            DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          };
          friend void from_json(const Darabonba::Json& j, TemplateTag& obj) { 
            DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
            DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
          };
          TemplateTag() = default ;
          TemplateTag(const TemplateTag &) = default ;
          TemplateTag(TemplateTag &&) = default ;
          TemplateTag(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TemplateTag() = default ;
          TemplateTag& operator=(const TemplateTag &) = default ;
          TemplateTag& operator=(TemplateTag &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
          // tagKey Field Functions 
          bool hasTagKey() const { return this->tagKey_ != nullptr;};
          void deleteTagKey() { this->tagKey_ = nullptr;};
          inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
          inline TemplateTag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


          // tagValue Field Functions 
          bool hasTagValue() const { return this->tagValue_ != nullptr;};
          void deleteTagValue() { this->tagValue_ = nullptr;};
          inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
          inline TemplateTag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        protected:
          shared_ptr<string> tagKey_ {};
          shared_ptr<string> tagValue_ {};
        };

        virtual bool empty() const override { return this->auditStatus_ == nullptr
        && this->gmtCreate_ == nullptr && this->signName_ == nullptr && this->templateCode_ == nullptr && this->templateName_ == nullptr && this->templateTag_ == nullptr
        && this->templateType_ == nullptr && this->usableStateList_ == nullptr && this->workOrderId_ == nullptr; };
        // auditStatus Field Functions 
        bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
        void deleteAuditStatus() { this->auditStatus_ = nullptr;};
        inline int64_t getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, 0L) };
        inline List& setAuditStatus(int64_t auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline List& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // signName Field Functions 
        bool hasSignName() const { return this->signName_ != nullptr;};
        void deleteSignName() { this->signName_ = nullptr;};
        inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
        inline List& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


        // templateCode Field Functions 
        bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
        void deleteTemplateCode() { this->templateCode_ = nullptr;};
        inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
        inline List& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline List& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        // templateTag Field Functions 
        bool hasTemplateTag() const { return this->templateTag_ != nullptr;};
        void deleteTemplateTag() { this->templateTag_ = nullptr;};
        inline const vector<List::TemplateTag> & getTemplateTag() const { DARABONBA_PTR_GET_CONST(templateTag_, vector<List::TemplateTag>) };
        inline vector<List::TemplateTag> getTemplateTag() { DARABONBA_PTR_GET(templateTag_, vector<List::TemplateTag>) };
        inline List& setTemplateTag(const vector<List::TemplateTag> & templateTag) { DARABONBA_PTR_SET_VALUE(templateTag_, templateTag) };
        inline List& setTemplateTag(vector<List::TemplateTag> && templateTag) { DARABONBA_PTR_SET_RVALUE(templateTag_, templateTag) };


        // templateType Field Functions 
        bool hasTemplateType() const { return this->templateType_ != nullptr;};
        void deleteTemplateType() { this->templateType_ = nullptr;};
        inline int64_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0L) };
        inline List& setTemplateType(int64_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


        // usableStateList Field Functions 
        bool hasUsableStateList() const { return this->usableStateList_ != nullptr;};
        void deleteUsableStateList() { this->usableStateList_ = nullptr;};
        inline const vector<string> & getUsableStateList() const { DARABONBA_PTR_GET_CONST(usableStateList_, vector<string>) };
        inline vector<string> getUsableStateList() { DARABONBA_PTR_GET(usableStateList_, vector<string>) };
        inline List& setUsableStateList(const vector<string> & usableStateList) { DARABONBA_PTR_SET_VALUE(usableStateList_, usableStateList) };
        inline List& setUsableStateList(vector<string> && usableStateList) { DARABONBA_PTR_SET_RVALUE(usableStateList_, usableStateList) };


        // workOrderId Field Functions 
        bool hasWorkOrderId() const { return this->workOrderId_ != nullptr;};
        void deleteWorkOrderId() { this->workOrderId_ = nullptr;};
        inline string getWorkOrderId() const { DARABONBA_PTR_GET_DEFAULT(workOrderId_, "") };
        inline List& setWorkOrderId(string workOrderId) { DARABONBA_PTR_SET_VALUE(workOrderId_, workOrderId) };


      protected:
        // 模板审核状态
        shared_ptr<int64_t> auditStatus_ {};
        // 创建时间
        shared_ptr<string> gmtCreate_ {};
        // 签名
        shared_ptr<string> signName_ {};
        // 模板code
        shared_ptr<string> templateCode_ {};
        // 模板名称
        shared_ptr<string> templateName_ {};
        // 模板标签
        shared_ptr<vector<List::TemplateTag>> templateTag_ {};
        // 模板类型
        shared_ptr<int64_t> templateType_ {};
        // 模板可用状态
        shared_ptr<vector<string>> usableStateList_ {};
        // 工单号
        shared_ptr<string> workOrderId_ {};
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
    inline GetSmsTemplateListResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSmsTemplateListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSmsTemplateListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSmsTemplateListResponseBody::Data) };
    inline GetSmsTemplateListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSmsTemplateListResponseBody::Data) };
    inline GetSmsTemplateListResponseBody& setData(const GetSmsTemplateListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSmsTemplateListResponseBody& setData(GetSmsTemplateListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSmsTemplateListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSmsTemplateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSmsTemplateListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<GetSmsTemplateListResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
