// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESFORTAGOPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESFORTAGOPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class ListResourcesForTagOptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesForTagOptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceDetails, resourceDetails_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesForTagOptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceDetails, resourceDetails_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResourcesForTagOptionResponseBody() = default ;
    ListResourcesForTagOptionResponseBody(const ListResourcesForTagOptionResponseBody &) = default ;
    ListResourcesForTagOptionResponseBody(ListResourcesForTagOptionResponseBody &&) = default ;
    ListResourcesForTagOptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesForTagOptionResponseBody() = default ;
    ListResourcesForTagOptionResponseBody& operator=(const ListResourcesForTagOptionResponseBody &) = default ;
    ListResourcesForTagOptionResponseBody& operator=(ListResourcesForTagOptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceDetails& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      };
      ResourceDetails() = default ;
      ResourceDetails(const ResourceDetails &) = default ;
      ResourceDetails(ResourceDetails &&) = default ;
      ResourceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceDetails() = default ;
      ResourceDetails& operator=(const ResourceDetails &) = default ;
      ResourceDetails& operator=(ResourceDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->resourceArn_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ResourceDetails& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResourceDetails& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // resourceArn Field Functions 
      bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
      void deleteResourceArn() { this->resourceArn_ = nullptr;};
      inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
      inline ResourceDetails& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ResourceDetails& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline ResourceDetails& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    protected:
      // The time when the resource was created.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the resource.
      // 
      // The value must be 1 to 128 characters in length.
      shared_ptr<string> description_ {};
      // The Alibaba Cloud Resource Name (ARN) of the resource.
      shared_ptr<string> resourceArn_ {};
      // The ID of the resource with which the tag option is associated.
      shared_ptr<string> resourceId_ {};
      // The name of the resource.
      shared_ptr<string> resourceName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resourceDetails_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourcesForTagOptionResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourcesForTagOptionResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourcesForTagOptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceDetails Field Functions 
    bool hasResourceDetails() const { return this->resourceDetails_ != nullptr;};
    void deleteResourceDetails() { this->resourceDetails_ = nullptr;};
    inline const vector<ListResourcesForTagOptionResponseBody::ResourceDetails> & getResourceDetails() const { DARABONBA_PTR_GET_CONST(resourceDetails_, vector<ListResourcesForTagOptionResponseBody::ResourceDetails>) };
    inline vector<ListResourcesForTagOptionResponseBody::ResourceDetails> getResourceDetails() { DARABONBA_PTR_GET(resourceDetails_, vector<ListResourcesForTagOptionResponseBody::ResourceDetails>) };
    inline ListResourcesForTagOptionResponseBody& setResourceDetails(const vector<ListResourcesForTagOptionResponseBody::ResourceDetails> & resourceDetails) { DARABONBA_PTR_SET_VALUE(resourceDetails_, resourceDetails) };
    inline ListResourcesForTagOptionResponseBody& setResourceDetails(vector<ListResourcesForTagOptionResponseBody::ResourceDetails> && resourceDetails) { DARABONBA_PTR_SET_RVALUE(resourceDetails_, resourceDetails) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResourcesForTagOptionResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    // 
    // Valid values: 1 to 100 Minimum value: 1. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of the associated resources.
    shared_ptr<vector<ListResourcesForTagOptionResponseBody::ResourceDetails>> resourceDetails_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
