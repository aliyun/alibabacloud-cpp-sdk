// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMYRELATEDAPPROVALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMYRELATEDAPPROVALSREQUEST_HPP_
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
  class ListMyRelatedApprovalsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMyRelatedApprovalsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTypes, accessTypes_);
      DARABONBA_PTR_TO_JSON(DefSchema, defSchema_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Grantee, grantee_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
    };
    friend void from_json(const Darabonba::Json& j, ListMyRelatedApprovalsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTypes, accessTypes_);
      DARABONBA_PTR_FROM_JSON(DefSchema, defSchema_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Grantee, grantee_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
    };
    ListMyRelatedApprovalsRequest() = default ;
    ListMyRelatedApprovalsRequest(const ListMyRelatedApprovalsRequest &) = default ;
    ListMyRelatedApprovalsRequest(ListMyRelatedApprovalsRequest &&) = default ;
    ListMyRelatedApprovalsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMyRelatedApprovalsRequest() = default ;
    ListMyRelatedApprovalsRequest& operator=(const ListMyRelatedApprovalsRequest &) = default ;
    ListMyRelatedApprovalsRequest& operator=(ListMyRelatedApprovalsRequest &&) = default ;
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
      // The resource metadata. The `ResourceSchema` defines its content.
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
      // The ID of the principal. The format varies based on the value of `PrincipalType`.
      // 
      // - If `PrincipalType` is `RamUser`, this parameter is the Dataworks user ID.
      // 
      // - If `PrincipalType` is `RamRole`, this parameter is a Dataworks user ID that starts with `ROLE_`.
      // 
      // - If `PrincipalType` is `DataworksTenantMember`, this parameter is the Dataworks user ID.
      // 
      // - If `PrincipalType` is `DataworksTenantRole`, this parameter is the Dataworks tenant `roleCode`.
      // 
      // - If `PrincipalType` is `DataworksProjectRole`, this parameter is the Dataworks workspace `roleCode`.
      // 
      // - If `PrincipalType` is `DataworksProjectMember`, this parameter is the Dataworks user ID.
      // 
      // - If `PrincipalType` is `DlfRole`, this parameter is the DlfNext role name.
      shared_ptr<string> principalId_ {};
      // The type of the principal. Valid values:
      // 
      // - `RamRole`
      // 
      // - `RamUser`
      // 
      // - `DataworksTenantMember`
      // 
      // - `DataworksTenantRole`
      // 
      // - `DataworksProjectMember`
      // 
      // - `DataworksProjectRole`
      // 
      // - `DlfRole`
      shared_ptr<string> principalType_ {};
    };

    virtual bool empty() const override { return this->accessTypes_ == nullptr
        && this->defSchema_ == nullptr && this->endTime_ == nullptr && this->grantee_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr
        && this->resource_ == nullptr && this->resourceType_ == nullptr && this->startTime_ == nullptr && this->statuses_ == nullptr; };
    // accessTypes Field Functions 
    bool hasAccessTypes() const { return this->accessTypes_ != nullptr;};
    void deleteAccessTypes() { this->accessTypes_ = nullptr;};
    inline const vector<string> & getAccessTypes() const { DARABONBA_PTR_GET_CONST(accessTypes_, vector<string>) };
    inline vector<string> getAccessTypes() { DARABONBA_PTR_GET(accessTypes_, vector<string>) };
    inline ListMyRelatedApprovalsRequest& setAccessTypes(const vector<string> & accessTypes) { DARABONBA_PTR_SET_VALUE(accessTypes_, accessTypes) };
    inline ListMyRelatedApprovalsRequest& setAccessTypes(vector<string> && accessTypes) { DARABONBA_PTR_SET_RVALUE(accessTypes_, accessTypes) };


    // defSchema Field Functions 
    bool hasDefSchema() const { return this->defSchema_ != nullptr;};
    void deleteDefSchema() { this->defSchema_ = nullptr;};
    inline string getDefSchema() const { DARABONBA_PTR_GET_DEFAULT(defSchema_, "") };
    inline ListMyRelatedApprovalsRequest& setDefSchema(string defSchema) { DARABONBA_PTR_SET_VALUE(defSchema_, defSchema) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListMyRelatedApprovalsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // grantee Field Functions 
    bool hasGrantee() const { return this->grantee_ != nullptr;};
    void deleteGrantee() { this->grantee_ = nullptr;};
    inline const ListMyRelatedApprovalsRequest::Grantee & getGrantee() const { DARABONBA_PTR_GET_CONST(grantee_, ListMyRelatedApprovalsRequest::Grantee) };
    inline ListMyRelatedApprovalsRequest::Grantee getGrantee() { DARABONBA_PTR_GET(grantee_, ListMyRelatedApprovalsRequest::Grantee) };
    inline ListMyRelatedApprovalsRequest& setGrantee(const ListMyRelatedApprovalsRequest::Grantee & grantee) { DARABONBA_PTR_SET_VALUE(grantee_, grantee) };
    inline ListMyRelatedApprovalsRequest& setGrantee(ListMyRelatedApprovalsRequest::Grantee && grantee) { DARABONBA_PTR_SET_RVALUE(grantee_, grantee) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMyRelatedApprovalsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMyRelatedApprovalsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const ListMyRelatedApprovalsRequest::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, ListMyRelatedApprovalsRequest::Resource) };
    inline ListMyRelatedApprovalsRequest::Resource getResource() { DARABONBA_PTR_GET(resource_, ListMyRelatedApprovalsRequest::Resource) };
    inline ListMyRelatedApprovalsRequest& setResource(const ListMyRelatedApprovalsRequest::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline ListMyRelatedApprovalsRequest& setResource(ListMyRelatedApprovalsRequest::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline const vector<string> & getResourceType() const { DARABONBA_PTR_GET_CONST(resourceType_, vector<string>) };
    inline vector<string> getResourceType() { DARABONBA_PTR_GET(resourceType_, vector<string>) };
    inline ListMyRelatedApprovalsRequest& setResourceType(const vector<string> & resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };
    inline ListMyRelatedApprovalsRequest& setResourceType(vector<string> && resourceType) { DARABONBA_PTR_SET_RVALUE(resourceType_, resourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListMyRelatedApprovalsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & getStatuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> getStatuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListMyRelatedApprovalsRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListMyRelatedApprovalsRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


  protected:
    // The permissions.
    shared_ptr<vector<string>> accessTypes_ {};
    // The resource type.
    // 
    // This parameter is required.
    shared_ptr<string> defSchema_ {};
    // The end of the application time range, specified as a millisecond timestamp.
    shared_ptr<int64_t> endTime_ {};
    // Filters approvals by the specified principal.
    shared_ptr<ListMyRelatedApprovalsRequest::Grantee> grantee_ {};
    // The pagination token that acts as a cursor to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The number of entries to return on each page. Default value: 10. Maximum value: 200.
    shared_ptr<int32_t> pageSize_ {};
    // The resource declaration.
    shared_ptr<ListMyRelatedApprovalsRequest::Resource> resource_ {};
    // The resource type, specified as a leaf node name. Multiple values are supported because a single business semantic can be mapped to multiple leaf node names.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> resourceType_ {};
    // The start of the application time range, specified as a millisecond timestamp.
    shared_ptr<int64_t> startTime_ {};
    // Filters the results by approval status. Valid values:
    // 
    // - `WaitApproval`: Pending approval
    // 
    // - `Confirmed`: Pending authorization
    // 
    // - `RejectApproval`: Approval rejected
    // 
    // - `AuthorizeSucceed`: Authorization succeeded
    // 
    // - `AuthorizeFailed`: Authorization failed
    // 
    // - `Deleted`: Deleted
    // 
    // - `Canceled`: Withdrawn
    shared_ptr<vector<string>> statuses_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
