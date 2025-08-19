// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(page_num, pageNum_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(template_type, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(page_num, pageNum_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(template_type, templateType_);
    };
    DescribeTemplatesRequest() = default ;
    DescribeTemplatesRequest(const DescribeTemplatesRequest &) = default ;
    DescribeTemplatesRequest(DescribeTemplatesRequest &&) = default ;
    DescribeTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplatesRequest() = default ;
    DescribeTemplatesRequest& operator=(const DescribeTemplatesRequest &) = default ;
    DescribeTemplatesRequest& operator=(DescribeTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNum_ != nullptr
        && this->pageSize_ != nullptr && this->templateType_ != nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribeTemplatesRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeTemplatesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline DescribeTemplatesRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The page number.
    // 
    // Default value: 1.
    std::shared_ptr<int64_t> pageNum_ = nullptr;
    // The number of entries per page.
    // 
    // Default value: 10.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The type of template. This parameter can be set to a custom value.
    // 
    // *   If the parameter is set to `kubernetes`, the template is displayed on the Templates page in the console.
    // *   If you set the parameter to `compose`, the template is not displayed on the Templates page in the console.
    // 
    // Default value: `kubernetes`.
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
