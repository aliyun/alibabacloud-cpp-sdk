// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVANCEDQUERYTEMPLATERESPONSEBODYTEMPLATEPAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVANCEDQUERYTEMPLATERESPONSEBODYTEMPLATEPAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeAdvancedQueryTemplateResponseBodyTemplatePage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvancedQueryTemplateResponseBodyTemplatePage& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TemplateList, templateList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvancedQueryTemplateResponseBodyTemplatePage& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TemplateList, templateList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeAdvancedQueryTemplateResponseBodyTemplatePage() = default ;
    DescribeAdvancedQueryTemplateResponseBodyTemplatePage(const DescribeAdvancedQueryTemplateResponseBodyTemplatePage &) = default ;
    DescribeAdvancedQueryTemplateResponseBodyTemplatePage(DescribeAdvancedQueryTemplateResponseBodyTemplatePage &&) = default ;
    DescribeAdvancedQueryTemplateResponseBodyTemplatePage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvancedQueryTemplateResponseBodyTemplatePage() = default ;
    DescribeAdvancedQueryTemplateResponseBodyTemplatePage& operator=(const DescribeAdvancedQueryTemplateResponseBodyTemplatePage &) = default ;
    DescribeAdvancedQueryTemplateResponseBodyTemplatePage& operator=(DescribeAdvancedQueryTemplateResponseBodyTemplatePage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->templateList_ != nullptr && this->total_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeAdvancedQueryTemplateResponseBodyTemplatePage& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeAdvancedQueryTemplateResponseBodyTemplatePage& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // templateList Field Functions 
    bool hasTemplateList() const { return this->templateList_ != nullptr;};
    void deleteTemplateList() { this->templateList_ = nullptr;};
    inline const vector<Models::DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList> & templateList() const { DARABONBA_PTR_GET_CONST(templateList_, vector<Models::DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList>) };
    inline vector<Models::DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList> templateList() { DARABONBA_PTR_GET(templateList_, vector<Models::DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList>) };
    inline DescribeAdvancedQueryTemplateResponseBodyTemplatePage& setTemplateList(const vector<Models::DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList> & templateList) { DARABONBA_PTR_SET_VALUE(templateList_, templateList) };
    inline DescribeAdvancedQueryTemplateResponseBodyTemplatePage& setTemplateList(vector<Models::DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList> && templateList) { DARABONBA_PTR_SET_RVALUE(templateList_, templateList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeAdvancedQueryTemplateResponseBodyTemplatePage& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<string> pageNumber_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<vector<Models::DescribeAdvancedQueryTemplateResponseBodyTemplatePageTemplateList>> templateList_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
