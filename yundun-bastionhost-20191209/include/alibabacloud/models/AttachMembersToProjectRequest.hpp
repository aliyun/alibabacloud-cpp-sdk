// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHMEMBERSTOPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHMEMBERSTOPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachMembersToProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachMembersToProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MemberIds, memberIds_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachMembersToProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MemberIds, memberIds_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AttachMembersToProjectRequest() = default ;
    AttachMembersToProjectRequest(const AttachMembersToProjectRequest &) = default ;
    AttachMembersToProjectRequest(AttachMembersToProjectRequest &&) = default ;
    AttachMembersToProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachMembersToProjectRequest() = default ;
    AttachMembersToProjectRequest& operator=(const AttachMembersToProjectRequest &) = default ;
    AttachMembersToProjectRequest& operator=(AttachMembersToProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->memberIds_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachMembersToProjectRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // memberIds Field Functions 
    bool hasMemberIds() const { return this->memberIds_ != nullptr;};
    void deleteMemberIds() { this->memberIds_ = nullptr;};
    inline string getMemberIds() const { DARABONBA_PTR_GET_DEFAULT(memberIds_, "") };
    inline AttachMembersToProjectRequest& setMemberIds(string memberIds) { DARABONBA_PTR_SET_VALUE(memberIds_, memberIds) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline AttachMembersToProjectRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachMembersToProjectRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The Bastionhost instance ID.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The UIDs of the member accounts to associate with the project.
    // > You can call the ListMembersNotForProject operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> memberIds_ {};
    // The ID of the project to which you want to associate member accounts.
    // > You can call the ListProjects operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the Bastionhost instance.
    // 
    // > For the mappings between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
