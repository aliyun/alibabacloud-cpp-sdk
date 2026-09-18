// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISTILLATIONTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDISTILLATIONTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20250630
{
namespace Models
{
  class ListDistillationTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDistillationTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDistillationTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ListDistillationTemplatesRequest() = default ;
    ListDistillationTemplatesRequest(const ListDistillationTemplatesRequest &) = default ;
    ListDistillationTemplatesRequest(ListDistillationTemplatesRequest &&) = default ;
    ListDistillationTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDistillationTemplatesRequest() = default ;
    ListDistillationTemplatesRequest& operator=(const ListDistillationTemplatesRequest &) = default ;
    ListDistillationTemplatesRequest& operator=(ListDistillationTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->keyword_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->templateId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListDistillationTemplatesRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListDistillationTemplatesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDistillationTemplatesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDistillationTemplatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListDistillationTemplatesRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The template category for scenario-specific template filtering.
    shared_ptr<string> category_ {};
    // The search keyword for cross-language substring matching against template names, descriptions, and other text fields. If this parameter is left empty, no keyword filtering is applied.
    shared_ptr<string> keyword_ {};
    // The page number, starting from 1. If this parameter is not specified or is invalid, the default value 1 is used.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. If this parameter is not specified or is invalid, the default value is used. If the value exceeds the upper limit, the upper limit is used.
    shared_ptr<int32_t> pageSize_ {};
    // The template ID for exact filtering. If this parameter is left empty, no filtering by ID is applied.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630
#endif
