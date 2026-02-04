// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETWEBAUTHNCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETWEBAUTHNCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetWebAuthnConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetWebAuthnConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Aaguids, aaguids_);
      DARABONBA_PTR_TO_JSON(EnableAaguidVerification, enableAaguidVerification_);
      DARABONBA_PTR_TO_JSON(EnableMetadataServiceVerification, enableMetadataServiceVerification_);
      DARABONBA_PTR_TO_JSON(EnableUserSelfRegistration, enableUserSelfRegistration_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, SetWebAuthnConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Aaguids, aaguids_);
      DARABONBA_PTR_FROM_JSON(EnableAaguidVerification, enableAaguidVerification_);
      DARABONBA_PTR_FROM_JSON(EnableMetadataServiceVerification, enableMetadataServiceVerification_);
      DARABONBA_PTR_FROM_JSON(EnableUserSelfRegistration, enableUserSelfRegistration_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    SetWebAuthnConfigurationRequest() = default ;
    SetWebAuthnConfigurationRequest(const SetWebAuthnConfigurationRequest &) = default ;
    SetWebAuthnConfigurationRequest(SetWebAuthnConfigurationRequest &&) = default ;
    SetWebAuthnConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetWebAuthnConfigurationRequest() = default ;
    SetWebAuthnConfigurationRequest& operator=(const SetWebAuthnConfigurationRequest &) = default ;
    SetWebAuthnConfigurationRequest& operator=(SetWebAuthnConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Aaguids : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Aaguids& obj) { 
        DARABONBA_PTR_TO_JSON(Aaguid, aaguid_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Aaguids& obj) { 
        DARABONBA_PTR_FROM_JSON(Aaguid, aaguid_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Aaguids() = default ;
      Aaguids(const Aaguids &) = default ;
      Aaguids(Aaguids &&) = default ;
      Aaguids(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Aaguids() = default ;
      Aaguids& operator=(const Aaguids &) = default ;
      Aaguids& operator=(Aaguids &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aaguid_ == nullptr
        && this->name_ == nullptr; };
      // aaguid Field Functions 
      bool hasAaguid() const { return this->aaguid_ != nullptr;};
      void deleteAaguid() { this->aaguid_ = nullptr;};
      inline string getAaguid() const { DARABONBA_PTR_GET_DEFAULT(aaguid_, "") };
      inline Aaguids& setAaguid(string aaguid) { DARABONBA_PTR_SET_VALUE(aaguid_, aaguid) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Aaguids& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // AAGUID
      shared_ptr<string> aaguid_ {};
      // AAGUID名称
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->aaguids_ == nullptr
        && this->enableAaguidVerification_ == nullptr && this->enableMetadataServiceVerification_ == nullptr && this->enableUserSelfRegistration_ == nullptr && this->instanceId_ == nullptr; };
    // aaguids Field Functions 
    bool hasAaguids() const { return this->aaguids_ != nullptr;};
    void deleteAaguids() { this->aaguids_ = nullptr;};
    inline const vector<SetWebAuthnConfigurationRequest::Aaguids> & getAaguids() const { DARABONBA_PTR_GET_CONST(aaguids_, vector<SetWebAuthnConfigurationRequest::Aaguids>) };
    inline vector<SetWebAuthnConfigurationRequest::Aaguids> getAaguids() { DARABONBA_PTR_GET(aaguids_, vector<SetWebAuthnConfigurationRequest::Aaguids>) };
    inline SetWebAuthnConfigurationRequest& setAaguids(const vector<SetWebAuthnConfigurationRequest::Aaguids> & aaguids) { DARABONBA_PTR_SET_VALUE(aaguids_, aaguids) };
    inline SetWebAuthnConfigurationRequest& setAaguids(vector<SetWebAuthnConfigurationRequest::Aaguids> && aaguids) { DARABONBA_PTR_SET_RVALUE(aaguids_, aaguids) };


    // enableAaguidVerification Field Functions 
    bool hasEnableAaguidVerification() const { return this->enableAaguidVerification_ != nullptr;};
    void deleteEnableAaguidVerification() { this->enableAaguidVerification_ = nullptr;};
    inline bool getEnableAaguidVerification() const { DARABONBA_PTR_GET_DEFAULT(enableAaguidVerification_, false) };
    inline SetWebAuthnConfigurationRequest& setEnableAaguidVerification(bool enableAaguidVerification) { DARABONBA_PTR_SET_VALUE(enableAaguidVerification_, enableAaguidVerification) };


    // enableMetadataServiceVerification Field Functions 
    bool hasEnableMetadataServiceVerification() const { return this->enableMetadataServiceVerification_ != nullptr;};
    void deleteEnableMetadataServiceVerification() { this->enableMetadataServiceVerification_ = nullptr;};
    inline bool getEnableMetadataServiceVerification() const { DARABONBA_PTR_GET_DEFAULT(enableMetadataServiceVerification_, false) };
    inline SetWebAuthnConfigurationRequest& setEnableMetadataServiceVerification(bool enableMetadataServiceVerification) { DARABONBA_PTR_SET_VALUE(enableMetadataServiceVerification_, enableMetadataServiceVerification) };


    // enableUserSelfRegistration Field Functions 
    bool hasEnableUserSelfRegistration() const { return this->enableUserSelfRegistration_ != nullptr;};
    void deleteEnableUserSelfRegistration() { this->enableUserSelfRegistration_ = nullptr;};
    inline bool getEnableUserSelfRegistration() const { DARABONBA_PTR_GET_DEFAULT(enableUserSelfRegistration_, false) };
    inline SetWebAuthnConfigurationRequest& setEnableUserSelfRegistration(bool enableUserSelfRegistration) { DARABONBA_PTR_SET_VALUE(enableUserSelfRegistration_, enableUserSelfRegistration) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetWebAuthnConfigurationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // AAGUID及其名称列表
    shared_ptr<vector<SetWebAuthnConfigurationRequest::Aaguids>> aaguids_ {};
    // 是否开启AAGUID校验
    shared_ptr<bool> enableAaguidVerification_ {};
    // 是否开启WebAuthn认证器MDS校验
    shared_ptr<bool> enableMetadataServiceVerification_ {};
    // 是否允许用户自注册WebAuthn认证器
    // 
    // This parameter is required.
    shared_ptr<bool> enableUserSelfRegistration_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
