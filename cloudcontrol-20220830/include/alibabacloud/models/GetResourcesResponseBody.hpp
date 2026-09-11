// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resource, resource_);
      DARABONBA_PTR_TO_JSON(resources, resources_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resource, resource_);
      DARABONBA_PTR_FROM_JSON(resources, resources_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    GetResourcesResponseBody() = default ;
    GetResourcesResponseBody(const GetResourcesResponseBody &) = default ;
    GetResourcesResponseBody(GetResourcesResponseBody &&) = default ;
    GetResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcesResponseBody() = default ;
    GetResourcesResponseBody& operator=(const GetResourcesResponseBody &) = default ;
    GetResourcesResponseBody& operator=(GetResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_ANY_TO_JSON(resourceAttributes, resourceAttributes_);
        DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_ANY_FROM_JSON(resourceAttributes, resourceAttributes_);
        DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceAttributes_ == nullptr
        && this->resourceId_ == nullptr; };
      // resourceAttributes Field Functions 
      bool hasResourceAttributes() const { return this->resourceAttributes_ != nullptr;};
      void deleteResourceAttributes() { this->resourceAttributes_ = nullptr;};
      inline       const Darabonba::Json & getResourceAttributes() const { DARABONBA_GET(resourceAttributes_) };
      Darabonba::Json & getResourceAttributes() { DARABONBA_GET(resourceAttributes_) };
      inline Resources& setResourceAttributes(const Darabonba::Json & resourceAttributes) { DARABONBA_SET_VALUE(resourceAttributes_, resourceAttributes) };
      inline Resources& setResourceAttributes(Darabonba::Json && resourceAttributes) { DARABONBA_SET_RVALUE(resourceAttributes_, resourceAttributes) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    protected:
      // The resource properties in JSON format.
      Darabonba::Json resourceAttributes_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
    };

    class Resource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resource& obj) { 
        DARABONBA_ANY_TO_JSON(resourceAttributes, resourceAttributes_);
        DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      };
      friend void from_json(const Darabonba::Json& j, Resource& obj) { 
        DARABONBA_ANY_FROM_JSON(resourceAttributes, resourceAttributes_);
        DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      };
      Resource() = default ;
      Resource(const Resource &) = default ;
      Resource(Resource &&) = default ;
      Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resource() = default ;
      Resource& operator=(const Resource &) = default ;
      Resource& operator=(Resource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceAttributes_ == nullptr
        && this->resourceId_ == nullptr; };
      // resourceAttributes Field Functions 
      bool hasResourceAttributes() const { return this->resourceAttributes_ != nullptr;};
      void deleteResourceAttributes() { this->resourceAttributes_ = nullptr;};
      inline       const Darabonba::Json & getResourceAttributes() const { DARABONBA_GET(resourceAttributes_) };
      Darabonba::Json & getResourceAttributes() { DARABONBA_GET(resourceAttributes_) };
      inline Resource& setResourceAttributes(const Darabonba::Json & resourceAttributes) { DARABONBA_SET_VALUE(resourceAttributes_, resourceAttributes) };
      inline Resource& setResourceAttributes(Darabonba::Json && resourceAttributes) { DARABONBA_SET_RVALUE(resourceAttributes_, resourceAttributes) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    protected:
      // The resource properties in JSON format.
      Darabonba::Json resourceAttributes_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->resource_ == nullptr && this->resources_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetResourcesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const GetResourcesResponseBody::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, GetResourcesResponseBody::Resource) };
    inline GetResourcesResponseBody::Resource getResource() { DARABONBA_PTR_GET(resource_, GetResourcesResponseBody::Resource) };
    inline GetResourcesResponseBody& setResource(const GetResourcesResponseBody::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline GetResourcesResponseBody& setResource(GetResourcesResponseBody::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<GetResourcesResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<GetResourcesResponseBody::Resources>) };
    inline vector<GetResourcesResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<GetResourcesResponseBody::Resources>) };
    inline GetResourcesResponseBody& setResources(const vector<GetResourcesResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline GetResourcesResponseBody& setResources(vector<GetResourcesResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetResourcesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of records returned for the current request. This parameter is returned by the List operation.
    shared_ptr<int32_t> maxResults_ {};
    // The position where the current call finished reading. An empty value indicates that all data has been read. This parameter is returned by the List operation.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The specified resource. This parameter is returned by the Get operation.
    shared_ptr<GetResourcesResponseBody::Resource> resource_ {};
    // A list of resources. This parameter is returned by the List operation.
    shared_ptr<vector<GetResourcesResponseBody::Resources>> resources_ {};
    // The total number of entries that match the query conditions. This parameter is returned by the List operation.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
