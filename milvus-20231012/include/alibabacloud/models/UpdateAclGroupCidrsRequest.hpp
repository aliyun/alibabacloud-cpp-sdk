// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACLGROUPCIDRSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACLGROUPCIDRSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class UpdateAclGroupCidrsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAclGroupCidrsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(newCidrs, newCidrs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAclGroupCidrsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(newCidrs, newCidrs_);
    };
    UpdateAclGroupCidrsRequest() = default ;
    UpdateAclGroupCidrsRequest(const UpdateAclGroupCidrsRequest &) = default ;
    UpdateAclGroupCidrsRequest(UpdateAclGroupCidrsRequest &&) = default ;
    UpdateAclGroupCidrsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAclGroupCidrsRequest() = default ;
    UpdateAclGroupCidrsRequest& operator=(const UpdateAclGroupCidrsRequest &) = default ;
    UpdateAclGroupCidrsRequest& operator=(UpdateAclGroupCidrsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && this->instanceId_ == nullptr && this->newCidrs_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateAclGroupCidrsRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateAclGroupCidrsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // newCidrs Field Functions 
    bool hasNewCidrs() const { return this->newCidrs_ != nullptr;};
    void deleteNewCidrs() { this->newCidrs_ = nullptr;};
    inline string getNewCidrs() const { DARABONBA_PTR_GET_DEFAULT(newCidrs_, "") };
    inline UpdateAclGroupCidrsRequest& setNewCidrs(string newCidrs) { DARABONBA_PTR_SET_VALUE(newCidrs_, newCidrs) };


  protected:
    shared_ptr<string> groupName_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> newCidrs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
