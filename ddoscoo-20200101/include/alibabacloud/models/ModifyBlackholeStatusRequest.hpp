// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBLACKHOLESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBLACKHOLESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyBlackholeStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBlackholeStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlackholeStatus, blackholeStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBlackholeStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackholeStatus, blackholeStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ModifyBlackholeStatusRequest() = default ;
    ModifyBlackholeStatusRequest(const ModifyBlackholeStatusRequest &) = default ;
    ModifyBlackholeStatusRequest(ModifyBlackholeStatusRequest &&) = default ;
    ModifyBlackholeStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBlackholeStatusRequest() = default ;
    ModifyBlackholeStatusRequest& operator=(const ModifyBlackholeStatusRequest &) = default ;
    ModifyBlackholeStatusRequest& operator=(ModifyBlackholeStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blackholeStatus_ == nullptr
        && return this->instanceId_ == nullptr; };
    // blackholeStatus Field Functions 
    bool hasBlackholeStatus() const { return this->blackholeStatus_ != nullptr;};
    void deleteBlackholeStatus() { this->blackholeStatus_ = nullptr;};
    inline string blackholeStatus() const { DARABONBA_PTR_GET_DEFAULT(blackholeStatus_, "") };
    inline ModifyBlackholeStatusRequest& setBlackholeStatus(string blackholeStatus) { DARABONBA_PTR_SET_VALUE(blackholeStatus_, blackholeStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyBlackholeStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The action that you want to perform on the instance. Set the value to **undo**, which indicates that you want to deactivate blackhole filtering.
    // 
    // This parameter is required.
    std::shared_ptr<string> blackholeStatus_ = nullptr;
    // The ID of the instance.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
