// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESFORTAGOPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESFORTAGOPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class ListResourcesForTagOptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesForTagOptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagOptionId, tagOptionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesForTagOptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagOptionId, tagOptionId_);
    };
    ListResourcesForTagOptionRequest() = default ;
    ListResourcesForTagOptionRequest(const ListResourcesForTagOptionRequest &) = default ;
    ListResourcesForTagOptionRequest(ListResourcesForTagOptionRequest &&) = default ;
    ListResourcesForTagOptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesForTagOptionRequest() = default ;
    ListResourcesForTagOptionRequest& operator=(const ListResourcesForTagOptionRequest &) = default ;
    ListResourcesForTagOptionRequest& operator=(ListResourcesForTagOptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->resourceType_ == nullptr && this->tagOptionId_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourcesForTagOptionRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourcesForTagOptionRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourcesForTagOptionRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagOptionId Field Functions 
    bool hasTagOptionId() const { return this->tagOptionId_ != nullptr;};
    void deleteTagOptionId() { this->tagOptionId_ = nullptr;};
    inline string getTagOptionId() const { DARABONBA_PTR_GET_DEFAULT(tagOptionId_, "") };
    inline ListResourcesForTagOptionRequest& setTagOptionId(string tagOptionId) { DARABONBA_PTR_SET_VALUE(tagOptionId_, tagOptionId) };


  protected:
    // The number of the page to return.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    // 
    // Valid values: 1 to 100 Minimum value: 1. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The type of resource that is associated with the tag option. Valid values:
    // 
    // *   product: product
    // *   Portfolio: product portfolio
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The ID of the tag option.
    // 
    // This parameter is required.
    shared_ptr<string> tagOptionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
