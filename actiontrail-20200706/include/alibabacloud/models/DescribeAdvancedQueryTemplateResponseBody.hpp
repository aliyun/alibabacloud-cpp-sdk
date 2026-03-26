// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVANCEDQUERYTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVANCEDQUERYTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeAdvancedQueryTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvancedQueryTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplatePage, templatePage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvancedQueryTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplatePage, templatePage_);
    };
    DescribeAdvancedQueryTemplateResponseBody() = default ;
    DescribeAdvancedQueryTemplateResponseBody(const DescribeAdvancedQueryTemplateResponseBody &) = default ;
    DescribeAdvancedQueryTemplateResponseBody(DescribeAdvancedQueryTemplateResponseBody &&) = default ;
    DescribeAdvancedQueryTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvancedQueryTemplateResponseBody() = default ;
    DescribeAdvancedQueryTemplateResponseBody& operator=(const DescribeAdvancedQueryTemplateResponseBody &) = default ;
    DescribeAdvancedQueryTemplateResponseBody& operator=(DescribeAdvancedQueryTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplatePage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplatePage& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TemplateList, templateList_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, TemplatePage& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TemplateList, templateList_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      TemplatePage() = default ;
      TemplatePage(const TemplatePage &) = default ;
      TemplatePage(TemplatePage &&) = default ;
      TemplatePage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplatePage() = default ;
      TemplatePage& operator=(const TemplatePage &) = default ;
      TemplatePage& operator=(TemplatePage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TemplateList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TemplateList& obj) { 
          DARABONBA_PTR_TO_JSON(SimpleQuery, simpleQuery_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
          DARABONBA_PTR_TO_JSON(TemplateSql, templateSql_);
        };
        friend void from_json(const Darabonba::Json& j, TemplateList& obj) { 
          DARABONBA_PTR_FROM_JSON(SimpleQuery, simpleQuery_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
          DARABONBA_PTR_FROM_JSON(TemplateSql, templateSql_);
        };
        TemplateList() = default ;
        TemplateList(const TemplateList &) = default ;
        TemplateList(TemplateList &&) = default ;
        TemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TemplateList() = default ;
        TemplateList& operator=(const TemplateList &) = default ;
        TemplateList& operator=(TemplateList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->simpleQuery_ == nullptr
        && this->templateId_ == nullptr && this->templateName_ == nullptr && this->templateSql_ == nullptr; };
        // simpleQuery Field Functions 
        bool hasSimpleQuery() const { return this->simpleQuery_ != nullptr;};
        void deleteSimpleQuery() { this->simpleQuery_ = nullptr;};
        inline bool getSimpleQuery() const { DARABONBA_PTR_GET_DEFAULT(simpleQuery_, false) };
        inline TemplateList& setSimpleQuery(bool simpleQuery) { DARABONBA_PTR_SET_VALUE(simpleQuery_, simpleQuery) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline TemplateList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline TemplateList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        // templateSql Field Functions 
        bool hasTemplateSql() const { return this->templateSql_ != nullptr;};
        void deleteTemplateSql() { this->templateSql_ = nullptr;};
        inline string getTemplateSql() const { DARABONBA_PTR_GET_DEFAULT(templateSql_, "") };
        inline TemplateList& setTemplateSql(string templateSql) { DARABONBA_PTR_SET_VALUE(templateSql_, templateSql) };


      protected:
        shared_ptr<bool> simpleQuery_ {};
        shared_ptr<string> templateId_ {};
        shared_ptr<string> templateName_ {};
        shared_ptr<string> templateSql_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->templateList_ == nullptr && this->total_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
      inline TemplatePage& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline TemplatePage& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // templateList Field Functions 
      bool hasTemplateList() const { return this->templateList_ != nullptr;};
      void deleteTemplateList() { this->templateList_ = nullptr;};
      inline const vector<TemplatePage::TemplateList> & getTemplateList() const { DARABONBA_PTR_GET_CONST(templateList_, vector<TemplatePage::TemplateList>) };
      inline vector<TemplatePage::TemplateList> getTemplateList() { DARABONBA_PTR_GET(templateList_, vector<TemplatePage::TemplateList>) };
      inline TemplatePage& setTemplateList(const vector<TemplatePage::TemplateList> & templateList) { DARABONBA_PTR_SET_VALUE(templateList_, templateList) };
      inline TemplatePage& setTemplateList(vector<TemplatePage::TemplateList> && templateList) { DARABONBA_PTR_SET_RVALUE(templateList_, templateList) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline TemplatePage& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<string> pageNumber_ {};
      shared_ptr<string> pageSize_ {};
      shared_ptr<vector<TemplatePage::TemplateList>> templateList_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->templatePage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdvancedQueryTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templatePage Field Functions 
    bool hasTemplatePage() const { return this->templatePage_ != nullptr;};
    void deleteTemplatePage() { this->templatePage_ = nullptr;};
    inline const DescribeAdvancedQueryTemplateResponseBody::TemplatePage & getTemplatePage() const { DARABONBA_PTR_GET_CONST(templatePage_, DescribeAdvancedQueryTemplateResponseBody::TemplatePage) };
    inline DescribeAdvancedQueryTemplateResponseBody::TemplatePage getTemplatePage() { DARABONBA_PTR_GET(templatePage_, DescribeAdvancedQueryTemplateResponseBody::TemplatePage) };
    inline DescribeAdvancedQueryTemplateResponseBody& setTemplatePage(const DescribeAdvancedQueryTemplateResponseBody::TemplatePage & templatePage) { DARABONBA_PTR_SET_VALUE(templatePage_, templatePage) };
    inline DescribeAdvancedQueryTemplateResponseBody& setTemplatePage(DescribeAdvancedQueryTemplateResponseBody::TemplatePage && templatePage) { DARABONBA_PTR_SET_RVALUE(templatePage_, templatePage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeAdvancedQueryTemplateResponseBody::TemplatePage> templatePage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
