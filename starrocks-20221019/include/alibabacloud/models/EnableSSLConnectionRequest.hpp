// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESSLCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLESSLCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class EnableSSLConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableSSLConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomSSLCertificate, customSSLCertificate_);
      DARABONBA_PTR_TO_JSON(EnableCustom, enableCustom_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Renewal, renewal_);
      DARABONBA_PTR_TO_JSON(SslKeyPassword, sslKeyPassword_);
      DARABONBA_PTR_TO_JSON(SslKeystorePassword, sslKeystorePassword_);
    };
    friend void from_json(const Darabonba::Json& j, EnableSSLConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomSSLCertificate, customSSLCertificate_);
      DARABONBA_PTR_FROM_JSON(EnableCustom, enableCustom_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Renewal, renewal_);
      DARABONBA_PTR_FROM_JSON(SslKeyPassword, sslKeyPassword_);
      DARABONBA_PTR_FROM_JSON(SslKeystorePassword, sslKeystorePassword_);
    };
    EnableSSLConnectionRequest() = default ;
    EnableSSLConnectionRequest(const EnableSSLConnectionRequest &) = default ;
    EnableSSLConnectionRequest(EnableSSLConnectionRequest &&) = default ;
    EnableSSLConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableSSLConnectionRequest() = default ;
    EnableSSLConnectionRequest& operator=(const EnableSSLConnectionRequest &) = default ;
    EnableSSLConnectionRequest& operator=(EnableSSLConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customSSLCertificate_ == nullptr
        && this->enableCustom_ == nullptr && this->instanceId_ == nullptr && this->renewal_ == nullptr && this->sslKeyPassword_ == nullptr && this->sslKeystorePassword_ == nullptr; };
    // customSSLCertificate Field Functions 
    bool hasCustomSSLCertificate() const { return this->customSSLCertificate_ != nullptr;};
    void deleteCustomSSLCertificate() { this->customSSLCertificate_ = nullptr;};
    inline string getCustomSSLCertificate() const { DARABONBA_PTR_GET_DEFAULT(customSSLCertificate_, "") };
    inline EnableSSLConnectionRequest& setCustomSSLCertificate(string customSSLCertificate) { DARABONBA_PTR_SET_VALUE(customSSLCertificate_, customSSLCertificate) };


    // enableCustom Field Functions 
    bool hasEnableCustom() const { return this->enableCustom_ != nullptr;};
    void deleteEnableCustom() { this->enableCustom_ = nullptr;};
    inline bool getEnableCustom() const { DARABONBA_PTR_GET_DEFAULT(enableCustom_, false) };
    inline EnableSSLConnectionRequest& setEnableCustom(bool enableCustom) { DARABONBA_PTR_SET_VALUE(enableCustom_, enableCustom) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EnableSSLConnectionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // renewal Field Functions 
    bool hasRenewal() const { return this->renewal_ != nullptr;};
    void deleteRenewal() { this->renewal_ = nullptr;};
    inline bool getRenewal() const { DARABONBA_PTR_GET_DEFAULT(renewal_, false) };
    inline EnableSSLConnectionRequest& setRenewal(bool renewal) { DARABONBA_PTR_SET_VALUE(renewal_, renewal) };


    // sslKeyPassword Field Functions 
    bool hasSslKeyPassword() const { return this->sslKeyPassword_ != nullptr;};
    void deleteSslKeyPassword() { this->sslKeyPassword_ = nullptr;};
    inline string getSslKeyPassword() const { DARABONBA_PTR_GET_DEFAULT(sslKeyPassword_, "") };
    inline EnableSSLConnectionRequest& setSslKeyPassword(string sslKeyPassword) { DARABONBA_PTR_SET_VALUE(sslKeyPassword_, sslKeyPassword) };


    // sslKeystorePassword Field Functions 
    bool hasSslKeystorePassword() const { return this->sslKeystorePassword_ != nullptr;};
    void deleteSslKeystorePassword() { this->sslKeystorePassword_ = nullptr;};
    inline string getSslKeystorePassword() const { DARABONBA_PTR_GET_DEFAULT(sslKeystorePassword_, "") };
    inline EnableSSLConnectionRequest& setSslKeystorePassword(string sslKeystorePassword) { DARABONBA_PTR_SET_VALUE(sslKeystorePassword_, sslKeystorePassword) };


  protected:
    shared_ptr<string> customSSLCertificate_ {};
    shared_ptr<bool> enableCustom_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> renewal_ {};
    shared_ptr<string> sslKeyPassword_ {};
    shared_ptr<string> sslKeystorePassword_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
