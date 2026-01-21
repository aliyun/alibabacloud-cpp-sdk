// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEINSTANCERDMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEINSTANCERDMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class RemoveInstanceRdMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveInstanceRdMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveInstanceRdMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    RemoveInstanceRdMemberRequest() = default ;
    RemoveInstanceRdMemberRequest(const RemoveInstanceRdMemberRequest &) = default ;
    RemoveInstanceRdMemberRequest(RemoveInstanceRdMemberRequest &&) = default ;
    RemoveInstanceRdMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveInstanceRdMemberRequest() = default ;
    RemoveInstanceRdMemberRequest& operator=(const RemoveInstanceRdMemberRequest &) = default ;
    RemoveInstanceRdMemberRequest& operator=(RemoveInstanceRdMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->memberId_ == nullptr && this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveInstanceRdMemberRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline RemoveInstanceRdMemberRequest& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveInstanceRdMemberRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> memberId_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
