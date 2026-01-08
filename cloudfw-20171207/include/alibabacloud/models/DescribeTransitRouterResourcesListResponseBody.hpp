// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERRESOURCESLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERRESOURCESLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTransitRouterResourcesListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransitRouterResourcesListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachedResources, transitRouterAttachedResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransitRouterResourcesListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachedResources, transitRouterAttachedResources_);
    };
    DescribeTransitRouterResourcesListResponseBody() = default ;
    DescribeTransitRouterResourcesListResponseBody(const DescribeTransitRouterResourcesListResponseBody &) = default ;
    DescribeTransitRouterResourcesListResponseBody(DescribeTransitRouterResourcesListResponseBody &&) = default ;
    DescribeTransitRouterResourcesListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransitRouterResourcesListResponseBody() = default ;
    DescribeTransitRouterResourcesListResponseBody& operator=(const DescribeTransitRouterResourcesListResponseBody &) = default ;
    DescribeTransitRouterResourcesListResponseBody& operator=(DescribeTransitRouterResourcesListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransitRouterAttachedResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransitRouterAttachedResources& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, TransitRouterAttachedResources& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      TransitRouterAttachedResources() = default ;
      TransitRouterAttachedResources(const TransitRouterAttachedResources &) = default ;
      TransitRouterAttachedResources(TransitRouterAttachedResources &&) = default ;
      TransitRouterAttachedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransitRouterAttachedResources() = default ;
      TransitRouterAttachedResources& operator=(const TransitRouterAttachedResources &) = default ;
      TransitRouterAttachedResources& operator=(TransitRouterAttachedResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline TransitRouterAttachedResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline TransitRouterAttachedResources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline TransitRouterAttachedResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> resourceName_ {};
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->transitRouterAttachedResources_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTransitRouterResourcesListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transitRouterAttachedResources Field Functions 
    bool hasTransitRouterAttachedResources() const { return this->transitRouterAttachedResources_ != nullptr;};
    void deleteTransitRouterAttachedResources() { this->transitRouterAttachedResources_ = nullptr;};
    inline const vector<DescribeTransitRouterResourcesListResponseBody::TransitRouterAttachedResources> & getTransitRouterAttachedResources() const { DARABONBA_PTR_GET_CONST(transitRouterAttachedResources_, vector<DescribeTransitRouterResourcesListResponseBody::TransitRouterAttachedResources>) };
    inline vector<DescribeTransitRouterResourcesListResponseBody::TransitRouterAttachedResources> getTransitRouterAttachedResources() { DARABONBA_PTR_GET(transitRouterAttachedResources_, vector<DescribeTransitRouterResourcesListResponseBody::TransitRouterAttachedResources>) };
    inline DescribeTransitRouterResourcesListResponseBody& setTransitRouterAttachedResources(const vector<DescribeTransitRouterResourcesListResponseBody::TransitRouterAttachedResources> & transitRouterAttachedResources) { DARABONBA_PTR_SET_VALUE(transitRouterAttachedResources_, transitRouterAttachedResources) };
    inline DescribeTransitRouterResourcesListResponseBody& setTransitRouterAttachedResources(vector<DescribeTransitRouterResourcesListResponseBody::TransitRouterAttachedResources> && transitRouterAttachedResources) { DARABONBA_PTR_SET_RVALUE(transitRouterAttachedResources_, transitRouterAttachedResources) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeTransitRouterResourcesListResponseBody::TransitRouterAttachedResources>> transitRouterAttachedResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
