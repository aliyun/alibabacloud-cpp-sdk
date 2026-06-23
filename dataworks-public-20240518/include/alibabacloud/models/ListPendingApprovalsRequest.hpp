// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPENDINGAPPROVALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPENDINGAPPROVALSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListPendingApprovalsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPendingApprovalsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTypes, accessTypes_);
      DARABONBA_PTR_TO_JSON(DefSchema, defSchema_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Grantee, grantee_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListPendingApprovalsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTypes, accessTypes_);
      DARABONBA_PTR_FROM_JSON(DefSchema, defSchema_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Grantee, grantee_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListPendingApprovalsRequest() = default ;
    ListPendingApprovalsRequest(const ListPendingApprovalsRequest &) = default ;
    ListPendingApprovalsRequest(ListPendingApprovalsRequest &&) = default ;
    ListPendingApprovalsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPendingApprovalsRequest() = default ;
    ListPendingApprovalsRequest& operator=(const ListPendingApprovalsRequest &) = default ;
    ListPendingApprovalsRequest& operator=(ListPendingApprovalsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resource& obj) { 
        DARABONBA_PTR_TO_JSON(DefSchema, defSchema_);
        DARABONBA_PTR_TO_JSON(DefVersion, defVersion_);
        DARABONBA_ANY_TO_JSON(MetaData, metaData_);
      };
      friend void from_json(const Darabonba::Json& j, Resource& obj) { 
        DARABONBA_PTR_FROM_JSON(DefSchema, defSchema_);
        DARABONBA_PTR_FROM_JSON(DefVersion, defVersion_);
        DARABONBA_ANY_FROM_JSON(MetaData, metaData_);
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
      virtual bool empty() const override { return this->defSchema_ == nullptr
        && this->defVersion_ == nullptr && this->metaData_ == nullptr; };
      // defSchema Field Functions 
      bool hasDefSchema() const { return this->defSchema_ != nullptr;};
      void deleteDefSchema() { this->defSchema_ = nullptr;};
      inline string getDefSchema() const { DARABONBA_PTR_GET_DEFAULT(defSchema_, "") };
      inline Resource& setDefSchema(string defSchema) { DARABONBA_PTR_SET_VALUE(defSchema_, defSchema) };


      // defVersion Field Functions 
      bool hasDefVersion() const { return this->defVersion_ != nullptr;};
      void deleteDefVersion() { this->defVersion_ = nullptr;};
      inline string getDefVersion() const { DARABONBA_PTR_GET_DEFAULT(defVersion_, "") };
      inline Resource& setDefVersion(string defVersion) { DARABONBA_PTR_SET_VALUE(defVersion_, defVersion) };


      // metaData Field Functions 
      bool hasMetaData() const { return this->metaData_ != nullptr;};
      void deleteMetaData() { this->metaData_ = nullptr;};
      inline       const Darabonba::Json & getMetaData() const { DARABONBA_GET(metaData_) };
      Darabonba::Json & getMetaData() { DARABONBA_GET(metaData_) };
      inline Resource& setMetaData(const Darabonba::Json & metaData) { DARABONBA_SET_VALUE(metaData_, metaData) };
      inline Resource& setMetaData(Darabonba::Json && metaData) { DARABONBA_SET_RVALUE(metaData_, metaData) };


    protected:
      // The `name` of the `ResourceSchema` used to parse the resource.
      shared_ptr<string> defSchema_ {};
      // The `version` of the `ResourceSchema` used to parse the resource.
      shared_ptr<string> defVersion_ {};
      // The resource metadata. Its content is constrained by the `ResourceSchema`.
      Darabonba::Json metaData_ {};
    };

    class Grantee : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Grantee& obj) { 
        DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
      };
      friend void from_json(const Darabonba::Json& j, Grantee& obj) { 
        DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
      };
      Grantee() = default ;
      Grantee(const Grantee &) = default ;
      Grantee(Grantee &&) = default ;
      Grantee(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Grantee() = default ;
      Grantee& operator=(const Grantee &) = default ;
      Grantee& operator=(Grantee &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->principalId_ == nullptr
        && this->principalType_ == nullptr; };
      // principalId Field Functions 
      bool hasPrincipalId() const { return this->principalId_ != nullptr;};
      void deletePrincipalId() { this->principalId_ = nullptr;};
      inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
      inline Grantee& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


      // principalType Field Functions 
      bool hasPrincipalType() const { return this->principalType_ != nullptr;};
      void deletePrincipalType() { this->principalType_ = nullptr;};
      inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
      inline Grantee& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


    protected:
      // The ID of the principal.
      shared_ptr<string> principalId_ {};
      // The type of principal.
      shared_ptr<string> principalType_ {};
    };

    virtual bool empty() const override { return this->accessTypes_ == nullptr
        && this->defSchema_ == nullptr && this->endTime_ == nullptr && this->grantee_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr
        && this->resource_ == nullptr && this->resourceType_ == nullptr && this->startTime_ == nullptr; };
    // accessTypes Field Functions 
    bool hasAccessTypes() const { return this->accessTypes_ != nullptr;};
    void deleteAccessTypes() { this->accessTypes_ = nullptr;};
    inline const vector<string> & getAccessTypes() const { DARABONBA_PTR_GET_CONST(accessTypes_, vector<string>) };
    inline vector<string> getAccessTypes() { DARABONBA_PTR_GET(accessTypes_, vector<string>) };
    inline ListPendingApprovalsRequest& setAccessTypes(const vector<string> & accessTypes) { DARABONBA_PTR_SET_VALUE(accessTypes_, accessTypes) };
    inline ListPendingApprovalsRequest& setAccessTypes(vector<string> && accessTypes) { DARABONBA_PTR_SET_RVALUE(accessTypes_, accessTypes) };


    // defSchema Field Functions 
    bool hasDefSchema() const { return this->defSchema_ != nullptr;};
    void deleteDefSchema() { this->defSchema_ = nullptr;};
    inline string getDefSchema() const { DARABONBA_PTR_GET_DEFAULT(defSchema_, "") };
    inline ListPendingApprovalsRequest& setDefSchema(string defSchema) { DARABONBA_PTR_SET_VALUE(defSchema_, defSchema) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListPendingApprovalsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // grantee Field Functions 
    bool hasGrantee() const { return this->grantee_ != nullptr;};
    void deleteGrantee() { this->grantee_ = nullptr;};
    inline const ListPendingApprovalsRequest::Grantee & getGrantee() const { DARABONBA_PTR_GET_CONST(grantee_, ListPendingApprovalsRequest::Grantee) };
    inline ListPendingApprovalsRequest::Grantee getGrantee() { DARABONBA_PTR_GET(grantee_, ListPendingApprovalsRequest::Grantee) };
    inline ListPendingApprovalsRequest& setGrantee(const ListPendingApprovalsRequest::Grantee & grantee) { DARABONBA_PTR_SET_VALUE(grantee_, grantee) };
    inline ListPendingApprovalsRequest& setGrantee(ListPendingApprovalsRequest::Grantee && grantee) { DARABONBA_PTR_SET_RVALUE(grantee_, grantee) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPendingApprovalsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPendingApprovalsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const ListPendingApprovalsRequest::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, ListPendingApprovalsRequest::Resource) };
    inline ListPendingApprovalsRequest::Resource getResource() { DARABONBA_PTR_GET(resource_, ListPendingApprovalsRequest::Resource) };
    inline ListPendingApprovalsRequest& setResource(const ListPendingApprovalsRequest::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline ListPendingApprovalsRequest& setResource(ListPendingApprovalsRequest::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline const vector<string> & getResourceType() const { DARABONBA_PTR_GET_CONST(resourceType_, vector<string>) };
    inline vector<string> getResourceType() { DARABONBA_PTR_GET(resourceType_, vector<string>) };
    inline ListPendingApprovalsRequest& setResourceType(const vector<string> & resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };
    inline ListPendingApprovalsRequest& setResourceType(vector<string> && resourceType) { DARABONBA_PTR_SET_RVALUE(resourceType_, resourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListPendingApprovalsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The access types.
    shared_ptr<vector<string>> accessTypes_ {};
    // The resource schema type.
    // 
    // This parameter is required.
    shared_ptr<string> defSchema_ {};
    // The end time of the query range, specified as a Unix timestamp in milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // The grantee object used to filter results.
    shared_ptr<ListPendingApprovalsRequest::Grantee> grantee_ {};
    // The token used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The number of entries to return per page. Default: 10. Maximum: 200.
    shared_ptr<int32_t> pageSize_ {};
    // The criteria to filter resources.
    shared_ptr<ListPendingApprovalsRequest::Resource> resource_ {};
    // The resource type, which corresponds to a leaf node name. You can specify multiple values. A business context can map to multiple leaf node names.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> resourceType_ {};
    // The start time of the query range, specified as a Unix timestamp in milliseconds.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
