// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPORTEDRESOURCERELATIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPORTEDRESOURCERELATIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetSupportedResourceRelationConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupportedResourceRelationConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceRelationConfigList, resourceRelationConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupportedResourceRelationConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceRelationConfigList, resourceRelationConfigList_);
    };
    GetSupportedResourceRelationConfigResponseBody() = default ;
    GetSupportedResourceRelationConfigResponseBody(const GetSupportedResourceRelationConfigResponseBody &) = default ;
    GetSupportedResourceRelationConfigResponseBody(GetSupportedResourceRelationConfigResponseBody &&) = default ;
    GetSupportedResourceRelationConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupportedResourceRelationConfigResponseBody() = default ;
    GetSupportedResourceRelationConfigResponseBody& operator=(const GetSupportedResourceRelationConfigResponseBody &) = default ;
    GetSupportedResourceRelationConfigResponseBody& operator=(GetSupportedResourceRelationConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceRelationConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceRelationConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(RelationType, relationType_);
        DARABONBA_PTR_TO_JSON(TargetResourceType, targetResourceType_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceRelationConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
        DARABONBA_PTR_FROM_JSON(TargetResourceType, targetResourceType_);
      };
      ResourceRelationConfigList() = default ;
      ResourceRelationConfigList(const ResourceRelationConfigList &) = default ;
      ResourceRelationConfigList(ResourceRelationConfigList &&) = default ;
      ResourceRelationConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceRelationConfigList() = default ;
      ResourceRelationConfigList& operator=(const ResourceRelationConfigList &) = default ;
      ResourceRelationConfigList& operator=(ResourceRelationConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->relationType_ == nullptr
        && this->targetResourceType_ == nullptr; };
      // relationType Field Functions 
      bool hasRelationType() const { return this->relationType_ != nullptr;};
      void deleteRelationType() { this->relationType_ = nullptr;};
      inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
      inline ResourceRelationConfigList& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


      // targetResourceType Field Functions 
      bool hasTargetResourceType() const { return this->targetResourceType_ != nullptr;};
      void deleteTargetResourceType() { this->targetResourceType_ = nullptr;};
      inline string getTargetResourceType() const { DARABONBA_PTR_GET_DEFAULT(targetResourceType_, "") };
      inline ResourceRelationConfigList& setTargetResourceType(string targetResourceType) { DARABONBA_PTR_SET_VALUE(targetResourceType_, targetResourceType) };


    protected:
      // The type of the relationship between the resource and the object. Valid values:
      // 
      // *   IsContained: The object is included as part of the resource.
      // *   IsAttachedTo: The object is added to the resource.
      // *   IsAssociatedIn: The object is associated with the resource.
      // *   Contains: The actual value contains the expected value.
      shared_ptr<string> relationType_ {};
      // The resource type.
      shared_ptr<string> targetResourceType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceRelationConfigList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSupportedResourceRelationConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceRelationConfigList Field Functions 
    bool hasResourceRelationConfigList() const { return this->resourceRelationConfigList_ != nullptr;};
    void deleteResourceRelationConfigList() { this->resourceRelationConfigList_ = nullptr;};
    inline const vector<GetSupportedResourceRelationConfigResponseBody::ResourceRelationConfigList> & getResourceRelationConfigList() const { DARABONBA_PTR_GET_CONST(resourceRelationConfigList_, vector<GetSupportedResourceRelationConfigResponseBody::ResourceRelationConfigList>) };
    inline vector<GetSupportedResourceRelationConfigResponseBody::ResourceRelationConfigList> getResourceRelationConfigList() { DARABONBA_PTR_GET(resourceRelationConfigList_, vector<GetSupportedResourceRelationConfigResponseBody::ResourceRelationConfigList>) };
    inline GetSupportedResourceRelationConfigResponseBody& setResourceRelationConfigList(const vector<GetSupportedResourceRelationConfigResponseBody::ResourceRelationConfigList> & resourceRelationConfigList) { DARABONBA_PTR_SET_VALUE(resourceRelationConfigList_, resourceRelationConfigList) };
    inline GetSupportedResourceRelationConfigResponseBody& setResourceRelationConfigList(vector<GetSupportedResourceRelationConfigResponseBody::ResourceRelationConfigList> && resourceRelationConfigList) { DARABONBA_PTR_SET_RVALUE(resourceRelationConfigList_, resourceRelationConfigList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // An array that contains the relationships.
    shared_ptr<vector<GetSupportedResourceRelationConfigResponseBody::ResourceRelationConfigList>> resourceRelationConfigList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
