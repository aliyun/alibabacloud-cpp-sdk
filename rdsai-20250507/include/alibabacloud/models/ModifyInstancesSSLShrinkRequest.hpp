// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCESSSLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCESSSLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ModifyInstancesSSLShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstancesSSLShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CAType, CAType_);
      DARABONBA_PTR_TO_JSON(InstanceNames, instanceNamesShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_TO_JSON(ServerCert, serverCert_);
      DARABONBA_PTR_TO_JSON(ServerKey, serverKey_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstancesSSLShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CAType, CAType_);
      DARABONBA_PTR_FROM_JSON(InstanceNames, instanceNamesShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_FROM_JSON(ServerCert, serverCert_);
      DARABONBA_PTR_FROM_JSON(ServerKey, serverKey_);
    };
    ModifyInstancesSSLShrinkRequest() = default ;
    ModifyInstancesSSLShrinkRequest(const ModifyInstancesSSLShrinkRequest &) = default ;
    ModifyInstancesSSLShrinkRequest(ModifyInstancesSSLShrinkRequest &&) = default ;
    ModifyInstancesSSLShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstancesSSLShrinkRequest() = default ;
    ModifyInstancesSSLShrinkRequest& operator=(const ModifyInstancesSSLShrinkRequest &) = default ;
    ModifyInstancesSSLShrinkRequest& operator=(ModifyInstancesSSLShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CAType_ == nullptr
        && this->instanceNamesShrink_ == nullptr && this->regionId_ == nullptr && this->SSLEnabled_ == nullptr && this->serverCert_ == nullptr && this->serverKey_ == nullptr; };
    // CAType Field Functions 
    bool hasCAType() const { return this->CAType_ != nullptr;};
    void deleteCAType() { this->CAType_ = nullptr;};
    inline string getCAType() const { DARABONBA_PTR_GET_DEFAULT(CAType_, "") };
    inline ModifyInstancesSSLShrinkRequest& setCAType(string CAType) { DARABONBA_PTR_SET_VALUE(CAType_, CAType) };


    // instanceNamesShrink Field Functions 
    bool hasInstanceNamesShrink() const { return this->instanceNamesShrink_ != nullptr;};
    void deleteInstanceNamesShrink() { this->instanceNamesShrink_ = nullptr;};
    inline string getInstanceNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceNamesShrink_, "") };
    inline ModifyInstancesSSLShrinkRequest& setInstanceNamesShrink(string instanceNamesShrink) { DARABONBA_PTR_SET_VALUE(instanceNamesShrink_, instanceNamesShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstancesSSLShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline int32_t getSSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, 0) };
    inline ModifyInstancesSSLShrinkRequest& setSSLEnabled(int32_t SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


    // serverCert Field Functions 
    bool hasServerCert() const { return this->serverCert_ != nullptr;};
    void deleteServerCert() { this->serverCert_ = nullptr;};
    inline string getServerCert() const { DARABONBA_PTR_GET_DEFAULT(serverCert_, "") };
    inline ModifyInstancesSSLShrinkRequest& setServerCert(string serverCert) { DARABONBA_PTR_SET_VALUE(serverCert_, serverCert) };


    // serverKey Field Functions 
    bool hasServerKey() const { return this->serverKey_ != nullptr;};
    void deleteServerKey() { this->serverKey_ = nullptr;};
    inline string getServerKey() const { DARABONBA_PTR_GET_DEFAULT(serverKey_, "") };
    inline ModifyInstancesSSLShrinkRequest& setServerKey(string serverKey) { DARABONBA_PTR_SET_VALUE(serverKey_, serverKey) };


  protected:
    shared_ptr<string> CAType_ {};
    // This parameter is required.
    shared_ptr<string> instanceNamesShrink_ {};
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<int32_t> SSLEnabled_ {};
    shared_ptr<string> serverCert_ {};
    shared_ptr<string> serverKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
