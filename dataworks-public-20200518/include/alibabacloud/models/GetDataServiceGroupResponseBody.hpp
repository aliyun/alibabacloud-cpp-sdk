// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServiceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataServiceGroupResponseBody() = default ;
    GetDataServiceGroupResponseBody(const GetDataServiceGroupResponseBody &) = default ;
    GetDataServiceGroupResponseBody(GetDataServiceGroupResponseBody &&) = default ;
    GetDataServiceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceGroupResponseBody() = default ;
    GetDataServiceGroupResponseBody& operator=(const GetDataServiceGroupResponseBody &) = default ;
    GetDataServiceGroupResponseBody& operator=(GetDataServiceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Group : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Group& obj) { 
        DARABONBA_PTR_TO_JSON(ApiGatewayGroupId, apiGatewayGroupId_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, Group& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiGatewayGroupId, apiGatewayGroupId_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      };
      Group() = default ;
      Group(const Group &) = default ;
      Group(Group &&) = default ;
      Group(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Group() = default ;
      Group& operator=(const Group &) = default ;
      Group& operator=(Group &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiGatewayGroupId_ == nullptr
        && this->createdTime_ == nullptr && this->creatorId_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr
        && this->modifiedTime_ == nullptr && this->projectId_ == nullptr && this->tenantId_ == nullptr; };
      // apiGatewayGroupId Field Functions 
      bool hasApiGatewayGroupId() const { return this->apiGatewayGroupId_ != nullptr;};
      void deleteApiGatewayGroupId() { this->apiGatewayGroupId_ = nullptr;};
      inline string getApiGatewayGroupId() const { DARABONBA_PTR_GET_DEFAULT(apiGatewayGroupId_, "") };
      inline Group& setApiGatewayGroupId(string apiGatewayGroupId) { DARABONBA_PTR_SET_VALUE(apiGatewayGroupId_, apiGatewayGroupId) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Group& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline Group& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Group& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Group& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Group& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Group& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Group& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline Group& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      // The ID of the API group that is associated with the business process in the API Gateway console.
      shared_ptr<string> apiGatewayGroupId_ {};
      // The time when the business process was created.
      shared_ptr<string> createdTime_ {};
      // The user identifier (UID) of the creator of the business process. The value of this parameter may be empty for creators of some existing business processes.
      shared_ptr<string> creatorId_ {};
      // The description of the business process.
      shared_ptr<string> description_ {};
      // The business process ID.
      shared_ptr<string> groupId_ {};
      // The name of the business process.
      shared_ptr<string> groupName_ {};
      // The time when the business process was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // The tenant ID.
      shared_ptr<int64_t> tenantId_ {};
    };

    virtual bool empty() const override { return this->group_ == nullptr
        && this->requestId_ == nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const GetDataServiceGroupResponseBody::Group & getGroup() const { DARABONBA_PTR_GET_CONST(group_, GetDataServiceGroupResponseBody::Group) };
    inline GetDataServiceGroupResponseBody::Group getGroup() { DARABONBA_PTR_GET(group_, GetDataServiceGroupResponseBody::Group) };
    inline GetDataServiceGroupResponseBody& setGroup(const GetDataServiceGroupResponseBody::Group & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline GetDataServiceGroupResponseBody& setGroup(GetDataServiceGroupResponseBody::Group && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the business process.
    shared_ptr<GetDataServiceGroupResponseBody::Group> group_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
