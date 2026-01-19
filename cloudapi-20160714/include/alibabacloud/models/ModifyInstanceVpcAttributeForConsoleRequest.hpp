// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEVPCATTRIBUTEFORCONSOLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEVPCATTRIBUTEFORCONSOLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyInstanceVpcAttributeForConsoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceVpcAttributeForConsoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteVpcAccess, deleteVpcAccess_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcOwnerId, vpcOwnerId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceVpcAttributeForConsoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteVpcAccess, deleteVpcAccess_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcOwnerId, vpcOwnerId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    ModifyInstanceVpcAttributeForConsoleRequest() = default ;
    ModifyInstanceVpcAttributeForConsoleRequest(const ModifyInstanceVpcAttributeForConsoleRequest &) = default ;
    ModifyInstanceVpcAttributeForConsoleRequest(ModifyInstanceVpcAttributeForConsoleRequest &&) = default ;
    ModifyInstanceVpcAttributeForConsoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceVpcAttributeForConsoleRequest() = default ;
    ModifyInstanceVpcAttributeForConsoleRequest& operator=(const ModifyInstanceVpcAttributeForConsoleRequest &) = default ;
    ModifyInstanceVpcAttributeForConsoleRequest& operator=(ModifyInstanceVpcAttributeForConsoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteVpcAccess_ == nullptr
        && this->instanceId_ == nullptr && this->token_ == nullptr && this->vpcId_ == nullptr && this->vpcOwnerId_ == nullptr && this->vswitchId_ == nullptr; };
    // deleteVpcAccess Field Functions 
    bool hasDeleteVpcAccess() const { return this->deleteVpcAccess_ != nullptr;};
    void deleteDeleteVpcAccess() { this->deleteVpcAccess_ = nullptr;};
    inline bool getDeleteVpcAccess() const { DARABONBA_PTR_GET_DEFAULT(deleteVpcAccess_, false) };
    inline ModifyInstanceVpcAttributeForConsoleRequest& setDeleteVpcAccess(bool deleteVpcAccess) { DARABONBA_PTR_SET_VALUE(deleteVpcAccess_, deleteVpcAccess) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceVpcAttributeForConsoleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ModifyInstanceVpcAttributeForConsoleRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ModifyInstanceVpcAttributeForConsoleRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcOwnerId Field Functions 
    bool hasVpcOwnerId() const { return this->vpcOwnerId_ != nullptr;};
    void deleteVpcOwnerId() { this->vpcOwnerId_ = nullptr;};
    inline int64_t getVpcOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpcOwnerId_, 0L) };
    inline ModifyInstanceVpcAttributeForConsoleRequest& setVpcOwnerId(int64_t vpcOwnerId) { DARABONBA_PTR_SET_VALUE(vpcOwnerId_, vpcOwnerId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline ModifyInstanceVpcAttributeForConsoleRequest& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // Whether delete instance client VPC.
    // - FALSE: set or modify instance client VPC
    // - TRUE: delete instance client VPC
    shared_ptr<bool> deleteVpcAccess_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The token of the request.
    shared_ptr<string> token_ {};
    // The ID of the VPC.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The ID of the Alibaba Cloud account to which the VPC belongs.
    shared_ptr<int64_t> vpcOwnerId_ {};
    // The ID of the vSwitch.
    shared_ptr<string> vswitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
