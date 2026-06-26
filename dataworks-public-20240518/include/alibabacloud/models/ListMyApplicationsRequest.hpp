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
      // The resource type.
      // 
      // Note: The resource types supported by the system for applications are constrained by [ResourceSchema](https://help.aliyun.com/zh/dataworks/developer-reference/resourceschema-template-instructions).name.
      // 
      // See also: [ResourceSchema documentation for International site](https://www.alibabacloud.com/help/zh/dataworks/developer-reference/resourceschema-template-instructions)
      shared_ptr<string> defSchema_ {};
      // The resource parsing version, which is constrained by [ResourceSchema](https://help.aliyun.com/zh/dataworks/developer-reference/resourceschema-template-instructions).version.
      // 
      // [ResourceSchema documentation for International site](https://www.alibabacloud.com/help/zh/dataworks/developer-reference/resourceschema-template-instructions)
      shared_ptr<string> defVersion_ {};
      // The resource metadata.
      // 
      // Note: The metadata is constrained by [ResourceSchema](https://help.aliyun.com/zh/dataworks/developer-reference/resourceschema-template-instructions).resources. A valid resource declaration must include the full-path metadata declarations from level 0 to the validLeaf level.
      // 
      // See also: [ResourceSchema documentation for International site](https://www.alibabacloud.com/help/zh/dataworks/developer-reference/resourceschema-template-instructions)
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
    // Filters by resource type.
    // 
    // Note: The resource types supported by the system for applications are constrained by [ResourceSchema](https://help.aliyun.com/zh/dataworks/developer-reference/resourceschema-template-instructions).name.
    // 
    // See also: [ResourceSchema documentation for International site](https://www.alibabacloud.com/help/zh/dataworks/developer-reference/resourceschema-template-instructions)
    // 
    // This parameter is required.
    shared_ptr<string> defSchema_ {};
    // The end time of the application period (millisecond timestamp).
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The pagination cursor.
    shared_ptr<string> nextToken_ {};
    // The number of entries per page. Default value: 10. Maximum value: 200.
    shared_ptr<int32_t> pageSize_ {};
    // Filters by resource with exact or wildcard matching. The resource description is constrained by [ResourceSchema](https://help.aliyun.com/zh/dataworks/developer-reference/resourceschema-template-instructions).
    // 
    // See also: [ResourceSchema documentation for International site](https://www.alibabacloud.com/help/zh/dataworks/developer-reference/resourceschema-template-instructions)
    shared_ptr<ListMyApplicationsRequest::Resource> resource_ {};
    // Filters by minimum permission resource type.
    // 
    // Note: The minimum permission resource type is constrained by [ResourceSchema](https://help.aliyun.com/zh/dataworks/developer-reference/resourceschema-template-instructions).resources[*].isValidLeaf being true.
    // 
    // See also: [ResourceSchema documentation for International site](https://www.alibabacloud.com/help/zh/dataworks/developer-reference/resourceschema-template-instructions)
    // 
    // This parameter is required.
    shared_ptr<vector<string>> resourceType_ {};
    // The start time of the application period (millisecond timestamp).
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // Filters by approval status. Valid values:
    // 
    // - WaitApproval: pending approval.
    // - Confirmed: pending authorization.
    // - RejectApproval: approval rejected.
    // - AuthorizeSucceed: authorization succeeded.
    // - AuthorizeFailed: authorization failed.
    // - Deleted: deleted.
    // - Canceled: withdrawn.
    shared_ptr<vector<string>> statuses_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
