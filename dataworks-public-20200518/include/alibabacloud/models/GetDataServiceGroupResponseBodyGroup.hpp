// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEGROUPRESPONSEBODYGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEGROUPRESPONSEBODYGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServiceGroupResponseBodyGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceGroupResponseBodyGroup& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetDataServiceGroupResponseBodyGroup& obj) { 
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
    GetDataServiceGroupResponseBodyGroup() = default ;
    GetDataServiceGroupResponseBodyGroup(const GetDataServiceGroupResponseBodyGroup &) = default ;
    GetDataServiceGroupResponseBodyGroup(GetDataServiceGroupResponseBodyGroup &&) = default ;
    GetDataServiceGroupResponseBodyGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceGroupResponseBodyGroup() = default ;
    GetDataServiceGroupResponseBodyGroup& operator=(const GetDataServiceGroupResponseBodyGroup &) = default ;
    GetDataServiceGroupResponseBodyGroup& operator=(GetDataServiceGroupResponseBodyGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiGatewayGroupId_ != nullptr
        && this->createdTime_ != nullptr && this->creatorId_ != nullptr && this->description_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr
        && this->modifiedTime_ != nullptr && this->projectId_ != nullptr && this->tenantId_ != nullptr; };
    // apiGatewayGroupId Field Functions 
    bool hasApiGatewayGroupId() const { return this->apiGatewayGroupId_ != nullptr;};
    void deleteApiGatewayGroupId() { this->apiGatewayGroupId_ = nullptr;};
    inline string apiGatewayGroupId() const { DARABONBA_PTR_GET_DEFAULT(apiGatewayGroupId_, "") };
    inline GetDataServiceGroupResponseBodyGroup& setApiGatewayGroupId(string apiGatewayGroupId) { DARABONBA_PTR_SET_VALUE(apiGatewayGroupId_, apiGatewayGroupId) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline GetDataServiceGroupResponseBodyGroup& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetDataServiceGroupResponseBodyGroup& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDataServiceGroupResponseBodyGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline GetDataServiceGroupResponseBodyGroup& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetDataServiceGroupResponseBodyGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetDataServiceGroupResponseBodyGroup& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetDataServiceGroupResponseBodyGroup& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetDataServiceGroupResponseBodyGroup& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the API group that is associated with the business process in the API Gateway console.
    std::shared_ptr<string> apiGatewayGroupId_ = nullptr;
    // The time when the business process was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The user identifier (UID) of the creator of the business process. The value of this parameter may be empty for creators of some existing business processes.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The description of the business process.
    std::shared_ptr<string> description_ = nullptr;
    // The business process ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the business process.
    std::shared_ptr<string> groupName_ = nullptr;
    // The time when the business process was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The tenant ID.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
