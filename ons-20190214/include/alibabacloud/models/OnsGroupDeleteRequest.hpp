// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSGROUPDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSGROUPDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsGroupDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsGroupDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsGroupDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    OnsGroupDeleteRequest() = default ;
    OnsGroupDeleteRequest(const OnsGroupDeleteRequest &) = default ;
    OnsGroupDeleteRequest(OnsGroupDeleteRequest &&) = default ;
    OnsGroupDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsGroupDeleteRequest() = default ;
    OnsGroupDeleteRequest& operator=(const OnsGroupDeleteRequest &) = default ;
    OnsGroupDeleteRequest& operator=(OnsGroupDeleteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->instanceId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline OnsGroupDeleteRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsGroupDeleteRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the consumer group that you want to delete.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The ID of the ApsaraMQ for RocketMQ instance to which the specified consumer group belongs.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
