// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCESSSLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCESSSLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ModifyInstancesSSLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstancesSSLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CAType, CAType_);
      DARABONBA_PTR_TO_JSON(InstanceNames, instanceNames_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_TO_JSON(ServerCert, serverCert_);
      DARABONBA_PTR_TO_JSON(ServerKey, serverKey_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstancesSSLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CAType, CAType_);
      DARABONBA_PTR_FROM_JSON(InstanceNames, instanceNames_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_FROM_JSON(ServerCert, serverCert_);
      DARABONBA_PTR_FROM_JSON(ServerKey, serverKey_);
    };
    ModifyInstancesSSLRequest() = default ;
    ModifyInstancesSSLRequest(const ModifyInstancesSSLRequest &) = default ;
    ModifyInstancesSSLRequest(ModifyInstancesSSLRequest &&) = default ;
    ModifyInstancesSSLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstancesSSLRequest() = default ;
    ModifyInstancesSSLRequest& operator=(const ModifyInstancesSSLRequest &) = default ;
    ModifyInstancesSSLRequest& operator=(ModifyInstancesSSLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CAType_ == nullptr
        && this->instanceNames_ == nullptr && this->regionId_ == nullptr && this->SSLEnabled_ == nullptr && this->serverCert_ == nullptr && this->serverKey_ == nullptr; };
    // CAType Field Functions 
    bool hasCAType() const { return this->CAType_ != nullptr;};
    void deleteCAType() { this->CAType_ = nullptr;};
    inline string getCAType() const { DARABONBA_PTR_GET_DEFAULT(CAType_, "") };
    inline ModifyInstancesSSLRequest& setCAType(string CAType) { DARABONBA_PTR_SET_VALUE(CAType_, CAType) };


    // instanceNames Field Functions 
    bool hasInstanceNames() const { return this->instanceNames_ != nullptr;};
    void deleteInstanceNames() { this->instanceNames_ = nullptr;};
    inline const vector<string> & getInstanceNames() const { DARABONBA_PTR_GET_CONST(instanceNames_, vector<string>) };
    inline vector<string> getInstanceNames() { DARABONBA_PTR_GET(instanceNames_, vector<string>) };
    inline ModifyInstancesSSLRequest& setInstanceNames(const vector<string> & instanceNames) { DARABONBA_PTR_SET_VALUE(instanceNames_, instanceNames) };
    inline ModifyInstancesSSLRequest& setInstanceNames(vector<string> && instanceNames) { DARABONBA_PTR_SET_RVALUE(instanceNames_, instanceNames) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstancesSSLRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline int32_t getSSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, 0) };
    inline ModifyInstancesSSLRequest& setSSLEnabled(int32_t SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


    // serverCert Field Functions 
    bool hasServerCert() const { return this->serverCert_ != nullptr;};
    void deleteServerCert() { this->serverCert_ = nullptr;};
    inline string getServerCert() const { DARABONBA_PTR_GET_DEFAULT(serverCert_, "") };
    inline ModifyInstancesSSLRequest& setServerCert(string serverCert) { DARABONBA_PTR_SET_VALUE(serverCert_, serverCert) };


    // serverKey Field Functions 
    bool hasServerKey() const { return this->serverKey_ != nullptr;};
    void deleteServerKey() { this->serverKey_ = nullptr;};
    inline string getServerKey() const { DARABONBA_PTR_GET_DEFAULT(serverKey_, "") };
    inline ModifyInstancesSSLRequest& setServerKey(string serverKey) { DARABONBA_PTR_SET_VALUE(serverKey_, serverKey) };


  protected:
    // The certificate type. Only **custom** is supported.
    // 
    // >  This parameter is required if **SSLEnabled** is set to **1**.
    shared_ptr<string> CAType_ {};
    // The information about the RDS Supabase instances that you want to configure. You can specify up to 10 instances.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceNames_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // Enables or disables SSL. Valid values:
    // 
    // *   **1**: enable
    // *   **0**: disable
    // 
    // This parameter is required.
    shared_ptr<int32_t> SSLEnabled_ {};
    // The content of the custom certificate.
    // 
    // >  This parameter is required if **CAType** is set to **custom**.
    shared_ptr<string> serverCert_ {};
    // The private key of the certificate.
    // 
    // >  This parameter is required if **CAType** is set to **custom**.
    shared_ptr<string> serverKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
