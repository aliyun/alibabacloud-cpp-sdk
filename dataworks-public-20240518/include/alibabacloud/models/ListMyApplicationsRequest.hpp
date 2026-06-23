// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMYAPPLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMYAPPLICATIONSREQUEST_HPP_
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
  class ListMyApplicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMyApplicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefSchema, defSchema_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
    };
    friend void from_json(const Darabonba::Json& j, ListMyApplicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefSchema, defSchema_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
    };
    ListMyApplicationsRequest() = default ;
    ListMyApplicationsRequest(const ListMyApplicationsRequest &) = default ;
    ListMyApplicationsRequest(ListMyApplicationsRequest &&) = default ;
    ListMyApplicationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMyApplicationsRequest() = default ;
    ListMyApplicationsRequest& operator=(const ListMyApplicationsRequest &) = default ;
    ListMyApplicationsRequest& operator=(ListMyApplicationsRequest &&) = default ;
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
      // The name of the resource schema (`ResourceSchema.name`) required for resource parsing.
      shared_ptr<string> defSchema_ {};
      // The version of the resource schema (`ResourceSchema.version`) required for resource parsing.
      shared_ptr<string> defVersion_ {};
      // The resource metadata. The content is constrained by the `ResourceSchema`.
      Darabonba::Json metaData_ {};
    };

    virtual bool empty() const override { return this->defSchema_ == nullptr
        && this->endTime_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->resource_ == nullptr && this->resourceType_ == nullptr
        && this->startTime_ == nullptr && this->statuses_ == nullptr; };
    // defSchema Field Functions 
    bool hasDefSchema() const { return this->defSchema_ != nullptr;};
    void deleteDefSchema() { this->defSchema_ = nullptr;};
    inline string getDefSchema() const { DARABONBA_PTR_GET_DEFAULT(defSchema_, "") };
    inline ListMyApplicationsRequest& setDefSchema(string defSchema) { DARABONBA_PTR_SET_VALUE(defSchema_, defSchema) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListMyApplicationsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMyApplicationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMyApplicationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const ListMyApplicationsRequest::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, ListMyApplicationsRequest::Resource) };
    inline ListMyApplicationsRequest::Resource getResource() { DARABONBA_PTR_GET(resource_, ListMyApplicationsRequest::Resource) };
    inline ListMyApplicationsRequest& setResource(const ListMyApplicationsRequest::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline ListMyApplicationsRequest& setResource(ListMyApplicationsRequest::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline const vector<string> & getResourceType() const { DARABONBA_PTR_GET_CONST(resourceType_, vector<string>) };
    inline vector<string> getResourceType() { DARABONBA_PTR_GET(resourceType_, vector<string>) };
    inline ListMyApplicationsRequest& setResourceType(const vector<string> & resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };
    inline ListMyApplicationsRequest& setResourceType(vector<string> && resourceType) { DARABONBA_PTR_SET_RVALUE(resourceType_, resourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListMyApplicationsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & getStatuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> getStatuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListMyApplicationsRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListMyApplicationsRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


  protected:
    // The resource type.
    // 
    // This parameter is required.
    shared_ptr<string> defSchema_ {};
    // The end time of the application, specified as a Unix timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // A token that you can use in a subsequent request to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The number of entries to return on each page. Default value: 10. Maximum value: 200.
    shared_ptr<int32_t> pageSize_ {};
    // The search criteria for the resource.
    shared_ptr<ListMyApplicationsRequest::Resource> resource_ {};
    // The name of the leaf node that specifies the resource type. You can specify multiple resource types. Note that different leaf node names can map to the same business logic.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> resourceType_ {};
    // The start time of the application, specified as a Unix timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The approval statuses for filtering. Valid values:
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
    // - `Deleted`: The application was deleted.
    // 
    // - `Canceled`: The application was canceled.
    shared_ptr<vector<string>> statuses_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
