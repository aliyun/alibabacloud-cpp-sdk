// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCESSLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCESSLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ModifyInstanceSSLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceSSLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CAType, CAType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_TO_JSON(ServerCert, serverCert_);
      DARABONBA_PTR_TO_JSON(ServerKey, serverKey_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceSSLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CAType, CAType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_FROM_JSON(ServerCert, serverCert_);
      DARABONBA_PTR_FROM_JSON(ServerKey, serverKey_);
    };
    ModifyInstanceSSLRequest() = default ;
    ModifyInstanceSSLRequest(const ModifyInstanceSSLRequest &) = default ;
    ModifyInstanceSSLRequest(ModifyInstanceSSLRequest &&) = default ;
    ModifyInstanceSSLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceSSLRequest() = default ;
    ModifyInstanceSSLRequest& operator=(const ModifyInstanceSSLRequest &) = default ;
    ModifyInstanceSSLRequest& operator=(ModifyInstanceSSLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CAType_ == nullptr
        && this->instanceName_ == nullptr && this->regionId_ == nullptr && this->SSLEnabled_ == nullptr && this->serverCert_ == nullptr && this->serverKey_ == nullptr; };
    // CAType Field Functions 
    bool hasCAType() const { return this->CAType_ != nullptr;};
    void deleteCAType() { this->CAType_ = nullptr;};
    inline string getCAType() const { DARABONBA_PTR_GET_DEFAULT(CAType_, "") };
    inline ModifyInstanceSSLRequest& setCAType(string CAType) { DARABONBA_PTR_SET_VALUE(CAType_, CAType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyInstanceSSLRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceSSLRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline int32_t getSSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, 0) };
    inline ModifyInstanceSSLRequest& setSSLEnabled(int32_t SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


    // serverCert Field Functions 
    bool hasServerCert() const { return this->serverCert_ != nullptr;};
    void deleteServerCert() { this->serverCert_ = nullptr;};
    inline string getServerCert() const { DARABONBA_PTR_GET_DEFAULT(serverCert_, "") };
    inline ModifyInstanceSSLRequest& setServerCert(string serverCert) { DARABONBA_PTR_SET_VALUE(serverCert_, serverCert) };


    // serverKey Field Functions 
    bool hasServerKey() const { return this->serverKey_ != nullptr;};
    void deleteServerKey() { this->serverKey_ = nullptr;};
    inline string getServerKey() const { DARABONBA_PTR_GET_DEFAULT(serverKey_, "") };
    inline ModifyInstanceSSLRequest& setServerKey(string serverKey) { DARABONBA_PTR_SET_VALUE(serverKey_, serverKey) };


  protected:
    // Enables or disables SSL. Valid values:
    // 
    // *   **1**: enables SSL.
    // *   **0**: disables SSL.
    shared_ptr<string> CAType_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The operation that you want to perform. Set the value to **ModifyInstanceSSL**.
    shared_ptr<string> regionId_ {};
    // The ID of the RDS Supabase instance.
    // 
    // This parameter is required.
    shared_ptr<int32_t> SSLEnabled_ {};
    // The certificate type. Only **custom** is supported.
    // 
    // >  This parameter is required if **SSLEnabled** is set to **1**.
    shared_ptr<string> serverCert_ {};
    // The content of the custom certificate.
    // 
    // >  This parameter is required if **CAType** is set to **custom**.
    shared_ptr<string> serverKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
