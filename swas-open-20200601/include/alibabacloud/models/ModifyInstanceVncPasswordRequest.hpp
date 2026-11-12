// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEVNCPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEVNCPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class ModifyInstanceVncPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceVncPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VncPassword, vncPassword_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceVncPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VncPassword, vncPassword_);
    };
    ModifyInstanceVncPasswordRequest() = default ;
    ModifyInstanceVncPasswordRequest(const ModifyInstanceVncPasswordRequest &) = default ;
    ModifyInstanceVncPasswordRequest(ModifyInstanceVncPasswordRequest &&) = default ;
    ModifyInstanceVncPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceVncPasswordRequest() = default ;
    ModifyInstanceVncPasswordRequest& operator=(const ModifyInstanceVncPasswordRequest &) = default ;
    ModifyInstanceVncPasswordRequest& operator=(ModifyInstanceVncPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->vncPassword_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyInstanceVncPasswordRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceVncPasswordRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceVncPasswordRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vncPassword Field Functions 
    bool hasVncPassword() const { return this->vncPassword_ != nullptr;};
    void deleteVncPassword() { this->vncPassword_ = nullptr;};
    inline string getVncPassword() const { DARABONBA_PTR_GET_DEFAULT(vncPassword_, "") };
    inline ModifyInstanceVncPasswordRequest& setVncPassword(string vncPassword) { DARABONBA_PTR_SET_VALUE(vncPassword_, vncPassword) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The ID of the simple application server.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the simple application server. You can call the [ListRegions](https://help.aliyun.com/document_detail/189315.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The VNC connection password.
    shared_ptr<string> vncPassword_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
