// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTASSOCIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePortRangeListAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortRangeListAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PortRangeListAssociations, portRangeListAssociations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortRangeListAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PortRangeListAssociations, portRangeListAssociations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortRangeListAssociationsResponseBody() = default ;
    DescribePortRangeListAssociationsResponseBody(const DescribePortRangeListAssociationsResponseBody &) = default ;
    DescribePortRangeListAssociationsResponseBody(DescribePortRangeListAssociationsResponseBody &&) = default ;
    DescribePortRangeListAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortRangeListAssociationsResponseBody() = default ;
    DescribePortRangeListAssociationsResponseBody& operator=(const DescribePortRangeListAssociationsResponseBody &) = default ;
    DescribePortRangeListAssociationsResponseBody& operator=(DescribePortRangeListAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PortRangeListAssociations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortRangeListAssociations& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, PortRangeListAssociations& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      PortRangeListAssociations() = default ;
      PortRangeListAssociations(const PortRangeListAssociations &) = default ;
      PortRangeListAssociations(PortRangeListAssociations &&) = default ;
      PortRangeListAssociations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortRangeListAssociations() = default ;
      PortRangeListAssociations& operator=(const PortRangeListAssociations &) = default ;
      PortRangeListAssociations& operator=(PortRangeListAssociations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr; };
      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline PortRangeListAssociations& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline PortRangeListAssociations& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The ID of the resource.
      shared_ptr<string> resourceId_ {};
      // The type of the resource. Valid value: SecurityGroup.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->portRangeListAssociations_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePortRangeListAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // portRangeListAssociations Field Functions 
    bool hasPortRangeListAssociations() const { return this->portRangeListAssociations_ != nullptr;};
    void deletePortRangeListAssociations() { this->portRangeListAssociations_ = nullptr;};
    inline const vector<DescribePortRangeListAssociationsResponseBody::PortRangeListAssociations> & getPortRangeListAssociations() const { DARABONBA_PTR_GET_CONST(portRangeListAssociations_, vector<DescribePortRangeListAssociationsResponseBody::PortRangeListAssociations>) };
    inline vector<DescribePortRangeListAssociationsResponseBody::PortRangeListAssociations> getPortRangeListAssociations() { DARABONBA_PTR_GET(portRangeListAssociations_, vector<DescribePortRangeListAssociationsResponseBody::PortRangeListAssociations>) };
    inline DescribePortRangeListAssociationsResponseBody& setPortRangeListAssociations(const vector<DescribePortRangeListAssociationsResponseBody::PortRangeListAssociations> & portRangeListAssociations) { DARABONBA_PTR_SET_VALUE(portRangeListAssociations_, portRangeListAssociations) };
    inline DescribePortRangeListAssociationsResponseBody& setPortRangeListAssociations(vector<DescribePortRangeListAssociationsResponseBody::PortRangeListAssociations> && portRangeListAssociations) { DARABONBA_PTR_SET_RVALUE(portRangeListAssociations_, portRangeListAssociations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortRangeListAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results. If the return value is empty, no more data is returned.
    shared_ptr<string> nextToken_ {};
    // The resources that are associated with the port list.
    shared_ptr<vector<DescribePortRangeListAssociationsResponseBody::PortRangeListAssociations>> portRangeListAssociations_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
