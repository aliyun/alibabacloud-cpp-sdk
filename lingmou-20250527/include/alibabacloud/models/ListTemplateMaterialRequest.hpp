// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATEMATERIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATEMATERIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class ListTemplateMaterialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateMaterialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(templateIds, templateIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateMaterialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(templateIds, templateIds_);
    };
    ListTemplateMaterialRequest() = default ;
    ListTemplateMaterialRequest(const ListTemplateMaterialRequest &) = default ;
    ListTemplateMaterialRequest(ListTemplateMaterialRequest &&) = default ;
    ListTemplateMaterialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateMaterialRequest() = default ;
    ListTemplateMaterialRequest& operator=(const ListTemplateMaterialRequest &) = default ;
    ListTemplateMaterialRequest& operator=(ListTemplateMaterialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->page_ == nullptr && return this->size_ == nullptr && return this->templateIds_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTemplateMaterialRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTemplateMaterialRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListTemplateMaterialRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListTemplateMaterialRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline string templateIds() const { DARABONBA_PTR_GET_DEFAULT(templateIds_, "") };
    inline ListTemplateMaterialRequest& setTemplateIds(string templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> page_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> templateIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
