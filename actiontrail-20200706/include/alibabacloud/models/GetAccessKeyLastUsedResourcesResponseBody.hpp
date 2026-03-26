// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDRESOURCESRESPONSEBODY_HPP_
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
  class GetAccessKeyLastUsedResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    GetAccessKeyLastUsedResourcesResponseBody() = default ;
    GetAccessKeyLastUsedResourcesResponseBody(const GetAccessKeyLastUsedResourcesResponseBody &) = default ;
    GetAccessKeyLastUsedResourcesResponseBody(GetAccessKeyLastUsedResourcesResponseBody &&) = default ;
    GetAccessKeyLastUsedResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedResourcesResponseBody() = default ;
    GetAccessKeyLastUsedResourcesResponseBody& operator=(const GetAccessKeyLastUsedResourcesResponseBody &) = default ;
    GetAccessKeyLastUsedResourcesResponseBody& operator=(GetAccessKeyLastUsedResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(UsedTimestamp, usedTimestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(UsedTimestamp, usedTimestamp_);
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
      virtual bool empty() const override { return this->detail_ == nullptr
        && this->resourceName_ == nullptr && this->resourceType_ == nullptr && this->source_ == nullptr && this->usedTimestamp_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline Resources& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline Resources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Resources& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // usedTimestamp Field Functions 
      bool hasUsedTimestamp() const { return this->usedTimestamp_ != nullptr;};
      void deleteUsedTimestamp() { this->usedTimestamp_ = nullptr;};
      inline int64_t getUsedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(usedTimestamp_, 0L) };
      inline Resources& setUsedTimestamp(int64_t usedTimestamp) { DARABONBA_PTR_SET_VALUE(usedTimestamp_, usedTimestamp) };


    protected:
      // The event details.
      shared_ptr<string> detail_ {};
      // The resource name.
      shared_ptr<string> resourceName_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The event source.
      // 
      // Valid values:
      // 
      // *   Internal
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     other events
      // 
      //     <!-- -->
      // 
      // *   ManagementEvent
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     management events
      // 
      //     <!-- -->
      // 
      // *   DataEvent
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     data events
      // 
      //     <!-- -->
      shared_ptr<string> source_ {};
      // The timestamp when the resource was used. Unit: millisecond.
      shared_ptr<int64_t> usedTimestamp_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->resources_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetAccessKeyLastUsedResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessKeyLastUsedResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<GetAccessKeyLastUsedResourcesResponseBody::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<GetAccessKeyLastUsedResourcesResponseBody::Resources>) };
    inline vector<GetAccessKeyLastUsedResourcesResponseBody::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<GetAccessKeyLastUsedResourcesResponseBody::Resources>) };
    inline GetAccessKeyLastUsedResourcesResponseBody& setResources(const vector<GetAccessKeyLastUsedResourcesResponseBody::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline GetAccessKeyLastUsedResourcesResponseBody& setResources(vector<GetAccessKeyLastUsedResourcesResponseBody::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    // 
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // The list of returned resources.
    // 
    // This parameter is required.
    shared_ptr<vector<GetAccessKeyLastUsedResourcesResponseBody::Resources>> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
