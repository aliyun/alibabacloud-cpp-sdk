// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVANCEDQUERYTEMPLATERESPONSEBODYTEMPLATEPAGETEMPLATELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVANCEDQUERYTEMPLATERESPONSEBODYTEMPLATEPAGETEMPLATELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList& obj) { 
      DARABONBA_PTR_TO_JSON(SimpleQuery, simpleQuery_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateSql, templateSql_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList& obj) { 
      DARABONBA_PTR_FROM_JSON(SimpleQuery, simpleQuery_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateSql, templateSql_);
    };
    DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList() = default ;
    DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList(const DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList &) = default ;
    DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList(DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList &&) = default ;
    DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList() = default ;
    DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList& operator=(const DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList &) = default ;
    DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList& operator=(DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->simpleQuery_ == nullptr
        && return this->templateId_ == nullptr && return this->templateName_ == nullptr && return this->templateSql_ == nullptr; };
    // simpleQuery Field Functions 
    bool hasSimpleQuery() const { return this->simpleQuery_ != nullptr;};
    void deleteSimpleQuery() { this->simpleQuery_ = nullptr;};
    inline bool simpleQuery() const { DARABONBA_PTR_GET_DEFAULT(simpleQuery_, false) };
    inline DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList& setSimpleQuery(bool simpleQuery) { DARABONBA_PTR_SET_VALUE(simpleQuery_, simpleQuery) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateSql Field Functions 
    bool hasTemplateSql() const { return this->templateSql_ != nullptr;};
    void deleteTemplateSql() { this->templateSql_ = nullptr;};
    inline string templateSql() const { DARABONBA_PTR_GET_DEFAULT(templateSql_, "") };
    inline DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList& setTemplateSql(string templateSql) { DARABONBA_PTR_SET_VALUE(templateSql_, templateSql) };


  protected:
    std::shared_ptr<bool> simpleQuery_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<string> templateSql_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
