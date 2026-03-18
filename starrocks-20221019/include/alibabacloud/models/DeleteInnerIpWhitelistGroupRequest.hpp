// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINNERIPWHITELISTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINNERIPWHITELISTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DeleteInnerIpWhitelistGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInnerIpWhitelistGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InnerIpWhitelistGroupId, innerIpWhitelistGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInnerIpWhitelistGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InnerIpWhitelistGroupId, innerIpWhitelistGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeleteInnerIpWhitelistGroupRequest() = default ;
    DeleteInnerIpWhitelistGroupRequest(const DeleteInnerIpWhitelistGroupRequest &) = default ;
    DeleteInnerIpWhitelistGroupRequest(DeleteInnerIpWhitelistGroupRequest &&) = default ;
    DeleteInnerIpWhitelistGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInnerIpWhitelistGroupRequest() = default ;
    DeleteInnerIpWhitelistGroupRequest& operator=(const DeleteInnerIpWhitelistGroupRequest &) = default ;
    DeleteInnerIpWhitelistGroupRequest& operator=(DeleteInnerIpWhitelistGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->innerIpWhitelistGroupId_ == nullptr
        && this->instanceId_ == nullptr; };
    // innerIpWhitelistGroupId Field Functions 
    bool hasInnerIpWhitelistGroupId() const { return this->innerIpWhitelistGroupId_ != nullptr;};
    void deleteInnerIpWhitelistGroupId() { this->innerIpWhitelistGroupId_ = nullptr;};
    inline string getInnerIpWhitelistGroupId() const { DARABONBA_PTR_GET_DEFAULT(innerIpWhitelistGroupId_, "") };
    inline DeleteInnerIpWhitelistGroupRequest& setInnerIpWhitelistGroupId(string innerIpWhitelistGroupId) { DARABONBA_PTR_SET_VALUE(innerIpWhitelistGroupId_, innerIpWhitelistGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteInnerIpWhitelistGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> innerIpWhitelistGroupId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
