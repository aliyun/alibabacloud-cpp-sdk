// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTEMPLATEBYPARAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTEMPLATEBYPARAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryTemplateByParamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTemplateByParamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTemplateByParamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    QueryTemplateByParamResponseBody() = default ;
    QueryTemplateByParamResponseBody(const QueryTemplateByParamResponseBody &) = default ;
    QueryTemplateByParamResponseBody(QueryTemplateByParamResponseBody &&) = default ;
    QueryTemplateByParamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTemplateByParamResponseBody() = default ;
    QueryTemplateByParamResponseBody& operator=(const QueryTemplateByParamResponseBody &) = default ;
    QueryTemplateByParamResponseBody& operator=(QueryTemplateByParamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(template, template_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(template, template_);
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
      class Template : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Template& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(SmsStatus, smsStatus_);
          DARABONBA_PTR_TO_JSON(SmsTemplateCode, smsTemplateCode_);
          DARABONBA_PTR_TO_JSON(Smsrejectinfo, smsrejectinfo_);
          DARABONBA_PTR_TO_JSON(TemplateComment, templateComment_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
          DARABONBA_PTR_TO_JSON(TemplateStatus, templateStatus_);
          DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
          DARABONBA_PTR_TO_JSON(UtcCreatetime, utcCreatetime_);
        };
        friend void from_json(const Darabonba::Json& j, Template& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(SmsStatus, smsStatus_);
          DARABONBA_PTR_FROM_JSON(SmsTemplateCode, smsTemplateCode_);
          DARABONBA_PTR_FROM_JSON(Smsrejectinfo, smsrejectinfo_);
          DARABONBA_PTR_FROM_JSON(TemplateComment, templateComment_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
          DARABONBA_PTR_FROM_JSON(TemplateStatus, templateStatus_);
          DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
          DARABONBA_PTR_FROM_JSON(UtcCreatetime, utcCreatetime_);
        };
        Template() = default ;
        Template(const Template &) = default ;
        Template(Template &&) = default ;
        Template(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Template() = default ;
        Template& operator=(const Template &) = default ;
        Template& operator=(Template &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->smsStatus_ == nullptr && this->smsTemplateCode_ == nullptr && this->smsrejectinfo_ == nullptr && this->templateComment_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->templateStatus_ == nullptr && this->templateType_ == nullptr && this->utcCreatetime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Template& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // smsStatus Field Functions 
        bool hasSmsStatus() const { return this->smsStatus_ != nullptr;};
        void deleteSmsStatus() { this->smsStatus_ = nullptr;};
        inline int32_t getSmsStatus() const { DARABONBA_PTR_GET_DEFAULT(smsStatus_, 0) };
        inline Template& setSmsStatus(int32_t smsStatus) { DARABONBA_PTR_SET_VALUE(smsStatus_, smsStatus) };


        // smsTemplateCode Field Functions 
        bool hasSmsTemplateCode() const { return this->smsTemplateCode_ != nullptr;};
        void deleteSmsTemplateCode() { this->smsTemplateCode_ = nullptr;};
        inline int32_t getSmsTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateCode_, 0) };
        inline Template& setSmsTemplateCode(int32_t smsTemplateCode) { DARABONBA_PTR_SET_VALUE(smsTemplateCode_, smsTemplateCode) };


        // smsrejectinfo Field Functions 
        bool hasSmsrejectinfo() const { return this->smsrejectinfo_ != nullptr;};
        void deleteSmsrejectinfo() { this->smsrejectinfo_ = nullptr;};
        inline int32_t getSmsrejectinfo() const { DARABONBA_PTR_GET_DEFAULT(smsrejectinfo_, 0) };
        inline Template& setSmsrejectinfo(int32_t smsrejectinfo) { DARABONBA_PTR_SET_VALUE(smsrejectinfo_, smsrejectinfo) };


        // templateComment Field Functions 
        bool hasTemplateComment() const { return this->templateComment_ != nullptr;};
        void deleteTemplateComment() { this->templateComment_ = nullptr;};
        inline string getTemplateComment() const { DARABONBA_PTR_GET_DEFAULT(templateComment_, "") };
        inline Template& setTemplateComment(string templateComment) { DARABONBA_PTR_SET_VALUE(templateComment_, templateComment) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline Template& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline Template& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        // templateStatus Field Functions 
        bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
        void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
        inline string getTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, "") };
        inline Template& setTemplateStatus(string templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


        // templateType Field Functions 
        bool hasTemplateType() const { return this->templateType_ != nullptr;};
        void deleteTemplateType() { this->templateType_ = nullptr;};
        inline int32_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
        inline Template& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


        // utcCreatetime Field Functions 
        bool hasUtcCreatetime() const { return this->utcCreatetime_ != nullptr;};
        void deleteUtcCreatetime() { this->utcCreatetime_ = nullptr;};
        inline int64_t getUtcCreatetime() const { DARABONBA_PTR_GET_DEFAULT(utcCreatetime_, 0L) };
        inline Template& setUtcCreatetime(int64_t utcCreatetime) { DARABONBA_PTR_SET_VALUE(utcCreatetime_, utcCreatetime) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<int32_t> smsStatus_ {};
        shared_ptr<int32_t> smsTemplateCode_ {};
        shared_ptr<int32_t> smsrejectinfo_ {};
        shared_ptr<string> templateComment_ {};
        shared_ptr<string> templateId_ {};
        shared_ptr<string> templateName_ {};
        shared_ptr<string> templateStatus_ {};
        shared_ptr<int32_t> templateType_ {};
        shared_ptr<int64_t> utcCreatetime_ {};
      };

      virtual bool empty() const override { return this->template_ == nullptr; };
      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline const vector<Data::Template> & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, vector<Data::Template>) };
      inline vector<Data::Template> getTemplate() { DARABONBA_PTR_GET(template_, vector<Data::Template>) };
      inline Data& setTemplate(const vector<Data::Template> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
      inline Data& setTemplate(vector<Data::Template> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    protected:
      shared_ptr<vector<Data::Template>> template_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->data_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryTemplateByParamResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTemplateByParamResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTemplateByParamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryTemplateByParamResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryTemplateByParamResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryTemplateByParamResponseBody::Data) };
    inline QueryTemplateByParamResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryTemplateByParamResponseBody::Data) };
    inline QueryTemplateByParamResponseBody& setData(const QueryTemplateByParamResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTemplateByParamResponseBody& setData(QueryTemplateByParamResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<QueryTemplateByParamResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
