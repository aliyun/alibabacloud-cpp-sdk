// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMSTEMPLATEPAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SMSTEMPLATEPAGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class SmsTemplatePageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmsTemplatePageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, SmsTemplatePageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    SmsTemplatePageListResponseBody() = default ;
    SmsTemplatePageListResponseBody(const SmsTemplatePageListResponseBody &) = default ;
    SmsTemplatePageListResponseBody(SmsTemplatePageListResponseBody &&) = default ;
    SmsTemplatePageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmsTemplatePageListResponseBody() = default ;
    SmsTemplatePageListResponseBody& operator=(const SmsTemplatePageListResponseBody &) = default ;
    SmsTemplatePageListResponseBody& operator=(SmsTemplatePageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Properties, properties_);
          DARABONBA_PTR_TO_JSON(ShortUrlTaskId, shortUrlTaskId_);
          DARABONBA_PTR_TO_JSON(Sign, sign_);
          DARABONBA_PTR_TO_JSON(SmsType, smsType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
          DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Properties, properties_);
          DARABONBA_PTR_FROM_JSON(ShortUrlTaskId, shortUrlTaskId_);
          DARABONBA_PTR_FROM_JSON(Sign, sign_);
          DARABONBA_PTR_FROM_JSON(SmsType, smsType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
          DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
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
        virtual bool empty() const override { return this->content_ == nullptr
        && this->createTime_ == nullptr && this->properties_ == nullptr && this->shortUrlTaskId_ == nullptr && this->sign_ == nullptr && this->smsType_ == nullptr
        && this->status_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->templateType_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline List& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline string getProperties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
        inline List& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


        // shortUrlTaskId Field Functions 
        bool hasShortUrlTaskId() const { return this->shortUrlTaskId_ != nullptr;};
        void deleteShortUrlTaskId() { this->shortUrlTaskId_ = nullptr;};
        inline int64_t getShortUrlTaskId() const { DARABONBA_PTR_GET_DEFAULT(shortUrlTaskId_, 0L) };
        inline List& setShortUrlTaskId(int64_t shortUrlTaskId) { DARABONBA_PTR_SET_VALUE(shortUrlTaskId_, shortUrlTaskId) };


        // sign Field Functions 
        bool hasSign() const { return this->sign_ != nullptr;};
        void deleteSign() { this->sign_ = nullptr;};
        inline string getSign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
        inline List& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


        // smsType Field Functions 
        bool hasSmsType() const { return this->smsType_ != nullptr;};
        void deleteSmsType() { this->smsType_ = nullptr;};
        inline string getSmsType() const { DARABONBA_PTR_GET_DEFAULT(smsType_, "") };
        inline List& setSmsType(string smsType) { DARABONBA_PTR_SET_VALUE(smsType_, smsType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline List& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
        inline List& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline List& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        // templateType Field Functions 
        bool hasTemplateType() const { return this->templateType_ != nullptr;};
        void deleteTemplateType() { this->templateType_ = nullptr;};
        inline int64_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0L) };
        inline List& setTemplateType(int64_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      protected:
        // 短信内容
        shared_ptr<string> content_ {};
        // 创建时间
        shared_ptr<string> createTime_ {};
        // 模板所需参数
        shared_ptr<string> properties_ {};
        // 智能短链ID
        shared_ptr<int64_t> shortUrlTaskId_ {};
        // 短信签名
        shared_ptr<string> sign_ {};
        // 短信类型
        shared_ptr<string> smsType_ {};
        // 模板状态
        shared_ptr<int64_t> status_ {};
        // 模板ID
        shared_ptr<int64_t> templateId_ {};
        // 模板名称
        shared_ptr<string> templateName_ {};
        // 模板类型
        shared_ptr<int64_t> templateType_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Model::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Model::List>) };
      inline vector<Model::List> getList() { DARABONBA_PTR_GET(list_, vector<Model::List>) };
      inline Model& setList(const vector<Model::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Model& setList(vector<Model::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Model& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Model& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Model& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
      inline Model& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    protected:
      shared_ptr<vector<Model::List>> list_ {};
      shared_ptr<int64_t> pageNo_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<int64_t> totalPage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->timestamp_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline SmsTemplatePageListResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SmsTemplatePageListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const SmsTemplatePageListResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, SmsTemplatePageListResponseBody::Model) };
    inline SmsTemplatePageListResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, SmsTemplatePageListResponseBody::Model) };
    inline SmsTemplatePageListResponseBody& setModel(const SmsTemplatePageListResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline SmsTemplatePageListResponseBody& setModel(SmsTemplatePageListResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SmsTemplatePageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SmsTemplatePageListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline SmsTemplatePageListResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<SmsTemplatePageListResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
