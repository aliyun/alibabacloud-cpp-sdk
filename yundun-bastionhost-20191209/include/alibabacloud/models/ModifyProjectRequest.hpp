// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MemberIds, memberIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MemberIds, memberIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyProjectRequest() = default ;
    ModifyProjectRequest(const ModifyProjectRequest &) = default ;
    ModifyProjectRequest(ModifyProjectRequest &&) = default ;
    ModifyProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyProjectRequest() = default ;
    ModifyProjectRequest& operator=(const ModifyProjectRequest &) = default ;
    ModifyProjectRequest& operator=(ModifyProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->instanceId_ == nullptr && this->memberIds_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyProjectRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyProjectRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // memberIds Field Functions 
    bool hasMemberIds() const { return this->memberIds_ != nullptr;};
    void deleteMemberIds() { this->memberIds_ = nullptr;};
    inline string getMemberIds() const { DARABONBA_PTR_GET_DEFAULT(memberIds_, "") };
    inline ModifyProjectRequest& setMemberIds(string memberIds) { DARABONBA_PTR_SET_VALUE(memberIds_, memberIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyProjectRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ModifyProjectRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyProjectRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The new description of the project. The description can be up to 500 characters in length.
    shared_ptr<string> description_ {};
    // The instance ID of the bastion host for which you want to modify project information.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The UIDs of the member accounts to associate with the project after modification.
    // > You can call the ListMembersNotForProject operation to obtain this parameter. If you do not specify this parameter, no changes are made.
    shared_ptr<string> memberIds_ {};
    // The new name of the project. The name must be 1 to 128 characters in length, cannot start with a special character, and can contain only the following special characters: periods (.), underscores (_), hyphens (-), backslashes (\\), and spaces.
    shared_ptr<string> name_ {};
    // The ID of the project that you want to modify.
    // > You can call the ListProjects operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the bastion host.
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
