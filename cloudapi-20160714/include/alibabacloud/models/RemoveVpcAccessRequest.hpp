// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEVPCACCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEVPCACCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class RemoveVpcAccessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveVpcAccessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NeedBatchWork, needBatchWork_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveVpcAccessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NeedBatchWork, needBatchWork_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    RemoveVpcAccessRequest() = default ;
    RemoveVpcAccessRequest(const RemoveVpcAccessRequest &) = default ;
    RemoveVpcAccessRequest(RemoveVpcAccessRequest &&) = default ;
    RemoveVpcAccessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveVpcAccessRequest() = default ;
    RemoveVpcAccessRequest& operator=(const RemoveVpcAccessRequest &) = default ;
    RemoveVpcAccessRequest& operator=(RemoveVpcAccessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->needBatchWork_ == nullptr && this->port_ == nullptr && this->securityToken_ == nullptr && this->vpcId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveVpcAccessRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // needBatchWork Field Functions 
    bool hasNeedBatchWork() const { return this->needBatchWork_ != nullptr;};
    void deleteNeedBatchWork() { this->needBatchWork_ = nullptr;};
    inline bool getNeedBatchWork() const { DARABONBA_PTR_GET_DEFAULT(needBatchWork_, false) };
    inline RemoveVpcAccessRequest& setNeedBatchWork(bool needBatchWork) { DARABONBA_PTR_SET_VALUE(needBatchWork_, needBatchWork) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline RemoveVpcAccessRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline RemoveVpcAccessRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline RemoveVpcAccessRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of an ECS or SLB instance in the VPC.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies whether batch work is required.
    shared_ptr<bool> needBatchWork_ {};
    // The port number that corresponds to the instance.
    // 
    // This parameter is required.
    shared_ptr<int32_t> port_ {};
    shared_ptr<string> securityToken_ {};
    // The ID of the VPC.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
