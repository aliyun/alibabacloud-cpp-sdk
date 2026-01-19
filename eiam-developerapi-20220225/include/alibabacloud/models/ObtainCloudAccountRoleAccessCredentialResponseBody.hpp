// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINCLOUDACCOUNTROLEACCESSCREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OBTAINCLOUDACCOUNTROLEACCESSCREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ObtainCloudAccountRoleAccessCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainCloudAccountRoleAccessCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cloudAccountId, cloudAccountId_);
      DARABONBA_PTR_TO_JSON(cloudAccountRoleAccessCredential, cloudAccountRoleAccessCredential_);
      DARABONBA_PTR_TO_JSON(cloudAccountRoleExternalId, cloudAccountRoleExternalId_);
      DARABONBA_PTR_TO_JSON(cloudAccountRoleId, cloudAccountRoleId_);
      DARABONBA_PTR_TO_JSON(cloudAccountRoleName, cloudAccountRoleName_);
      DARABONBA_PTR_TO_JSON(cloudAccountVendorType, cloudAccountVendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainCloudAccountRoleAccessCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cloudAccountId, cloudAccountId_);
      DARABONBA_PTR_FROM_JSON(cloudAccountRoleAccessCredential, cloudAccountRoleAccessCredential_);
      DARABONBA_PTR_FROM_JSON(cloudAccountRoleExternalId, cloudAccountRoleExternalId_);
      DARABONBA_PTR_FROM_JSON(cloudAccountRoleId, cloudAccountRoleId_);
      DARABONBA_PTR_FROM_JSON(cloudAccountRoleName, cloudAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(cloudAccountVendorType, cloudAccountVendorType_);
    };
    ObtainCloudAccountRoleAccessCredentialResponseBody() = default ;
    ObtainCloudAccountRoleAccessCredentialResponseBody(const ObtainCloudAccountRoleAccessCredentialResponseBody &) = default ;
    ObtainCloudAccountRoleAccessCredentialResponseBody(ObtainCloudAccountRoleAccessCredentialResponseBody &&) = default ;
    ObtainCloudAccountRoleAccessCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainCloudAccountRoleAccessCredentialResponseBody() = default ;
    ObtainCloudAccountRoleAccessCredentialResponseBody& operator=(const ObtainCloudAccountRoleAccessCredentialResponseBody &) = default ;
    ObtainCloudAccountRoleAccessCredentialResponseBody& operator=(ObtainCloudAccountRoleAccessCredentialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudAccountRoleAccessCredential : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudAccountRoleAccessCredential& obj) { 
        DARABONBA_PTR_TO_JSON(accessCredentialExpiresAt, accessCredentialExpiresAt_);
        DARABONBA_PTR_TO_JSON(alibabaCloudStsToken, alibabaCloudStsToken_);
      };
      friend void from_json(const Darabonba::Json& j, CloudAccountRoleAccessCredential& obj) { 
        DARABONBA_PTR_FROM_JSON(accessCredentialExpiresAt, accessCredentialExpiresAt_);
        DARABONBA_PTR_FROM_JSON(alibabaCloudStsToken, alibabaCloudStsToken_);
      };
      CloudAccountRoleAccessCredential() = default ;
      CloudAccountRoleAccessCredential(const CloudAccountRoleAccessCredential &) = default ;
      CloudAccountRoleAccessCredential(CloudAccountRoleAccessCredential &&) = default ;
      CloudAccountRoleAccessCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudAccountRoleAccessCredential() = default ;
      CloudAccountRoleAccessCredential& operator=(const CloudAccountRoleAccessCredential &) = default ;
      CloudAccountRoleAccessCredential& operator=(CloudAccountRoleAccessCredential &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlibabaCloudStsToken : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlibabaCloudStsToken& obj) { 
          DARABONBA_PTR_TO_JSON(accessKeyId, accessKeyId_);
          DARABONBA_PTR_TO_JSON(accessKeySecret, accessKeySecret_);
          DARABONBA_PTR_TO_JSON(expiration, expiration_);
          DARABONBA_PTR_TO_JSON(securityToken, securityToken_);
        };
        friend void from_json(const Darabonba::Json& j, AlibabaCloudStsToken& obj) { 
          DARABONBA_PTR_FROM_JSON(accessKeyId, accessKeyId_);
          DARABONBA_PTR_FROM_JSON(accessKeySecret, accessKeySecret_);
          DARABONBA_PTR_FROM_JSON(expiration, expiration_);
          DARABONBA_PTR_FROM_JSON(securityToken, securityToken_);
        };
        AlibabaCloudStsToken() = default ;
        AlibabaCloudStsToken(const AlibabaCloudStsToken &) = default ;
        AlibabaCloudStsToken(AlibabaCloudStsToken &&) = default ;
        AlibabaCloudStsToken(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlibabaCloudStsToken() = default ;
        AlibabaCloudStsToken& operator=(const AlibabaCloudStsToken &) = default ;
        AlibabaCloudStsToken& operator=(AlibabaCloudStsToken &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->accessKeySecret_ == nullptr && this->expiration_ == nullptr && this->securityToken_ == nullptr; };
        // accessKeyId Field Functions 
        bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
        void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
        inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
        inline AlibabaCloudStsToken& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


        // accessKeySecret Field Functions 
        bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
        void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
        inline string getAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
        inline AlibabaCloudStsToken& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


        // expiration Field Functions 
        bool hasExpiration() const { return this->expiration_ != nullptr;};
        void deleteExpiration() { this->expiration_ = nullptr;};
        inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
        inline AlibabaCloudStsToken& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


        // securityToken Field Functions 
        bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
        void deleteSecurityToken() { this->securityToken_ = nullptr;};
        inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
        inline AlibabaCloudStsToken& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


      protected:
        shared_ptr<string> accessKeyId_ {};
        shared_ptr<string> accessKeySecret_ {};
        shared_ptr<string> expiration_ {};
        shared_ptr<string> securityToken_ {};
      };

      virtual bool empty() const override { return this->accessCredentialExpiresAt_ == nullptr
        && this->alibabaCloudStsToken_ == nullptr; };
      // accessCredentialExpiresAt Field Functions 
      bool hasAccessCredentialExpiresAt() const { return this->accessCredentialExpiresAt_ != nullptr;};
      void deleteAccessCredentialExpiresAt() { this->accessCredentialExpiresAt_ = nullptr;};
      inline int64_t getAccessCredentialExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(accessCredentialExpiresAt_, 0L) };
      inline CloudAccountRoleAccessCredential& setAccessCredentialExpiresAt(int64_t accessCredentialExpiresAt) { DARABONBA_PTR_SET_VALUE(accessCredentialExpiresAt_, accessCredentialExpiresAt) };


      // alibabaCloudStsToken Field Functions 
      bool hasAlibabaCloudStsToken() const { return this->alibabaCloudStsToken_ != nullptr;};
      void deleteAlibabaCloudStsToken() { this->alibabaCloudStsToken_ = nullptr;};
      inline const CloudAccountRoleAccessCredential::AlibabaCloudStsToken & getAlibabaCloudStsToken() const { DARABONBA_PTR_GET_CONST(alibabaCloudStsToken_, CloudAccountRoleAccessCredential::AlibabaCloudStsToken) };
      inline CloudAccountRoleAccessCredential::AlibabaCloudStsToken getAlibabaCloudStsToken() { DARABONBA_PTR_GET(alibabaCloudStsToken_, CloudAccountRoleAccessCredential::AlibabaCloudStsToken) };
      inline CloudAccountRoleAccessCredential& setAlibabaCloudStsToken(const CloudAccountRoleAccessCredential::AlibabaCloudStsToken & alibabaCloudStsToken) { DARABONBA_PTR_SET_VALUE(alibabaCloudStsToken_, alibabaCloudStsToken) };
      inline CloudAccountRoleAccessCredential& setAlibabaCloudStsToken(CloudAccountRoleAccessCredential::AlibabaCloudStsToken && alibabaCloudStsToken) { DARABONBA_PTR_SET_RVALUE(alibabaCloudStsToken_, alibabaCloudStsToken) };


    protected:
      shared_ptr<int64_t> accessCredentialExpiresAt_ {};
      shared_ptr<CloudAccountRoleAccessCredential::AlibabaCloudStsToken> alibabaCloudStsToken_ {};
    };

    virtual bool empty() const override { return this->cloudAccountId_ == nullptr
        && this->cloudAccountRoleAccessCredential_ == nullptr && this->cloudAccountRoleExternalId_ == nullptr && this->cloudAccountRoleId_ == nullptr && this->cloudAccountRoleName_ == nullptr && this->cloudAccountVendorType_ == nullptr; };
    // cloudAccountId Field Functions 
    bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
    void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
    inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
    inline ObtainCloudAccountRoleAccessCredentialResponseBody& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


    // cloudAccountRoleAccessCredential Field Functions 
    bool hasCloudAccountRoleAccessCredential() const { return this->cloudAccountRoleAccessCredential_ != nullptr;};
    void deleteCloudAccountRoleAccessCredential() { this->cloudAccountRoleAccessCredential_ = nullptr;};
    inline const ObtainCloudAccountRoleAccessCredentialResponseBody::CloudAccountRoleAccessCredential & getCloudAccountRoleAccessCredential() const { DARABONBA_PTR_GET_CONST(cloudAccountRoleAccessCredential_, ObtainCloudAccountRoleAccessCredentialResponseBody::CloudAccountRoleAccessCredential) };
    inline ObtainCloudAccountRoleAccessCredentialResponseBody::CloudAccountRoleAccessCredential getCloudAccountRoleAccessCredential() { DARABONBA_PTR_GET(cloudAccountRoleAccessCredential_, ObtainCloudAccountRoleAccessCredentialResponseBody::CloudAccountRoleAccessCredential) };
    inline ObtainCloudAccountRoleAccessCredentialResponseBody& setCloudAccountRoleAccessCredential(const ObtainCloudAccountRoleAccessCredentialResponseBody::CloudAccountRoleAccessCredential & cloudAccountRoleAccessCredential) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleAccessCredential_, cloudAccountRoleAccessCredential) };
    inline ObtainCloudAccountRoleAccessCredentialResponseBody& setCloudAccountRoleAccessCredential(ObtainCloudAccountRoleAccessCredentialResponseBody::CloudAccountRoleAccessCredential && cloudAccountRoleAccessCredential) { DARABONBA_PTR_SET_RVALUE(cloudAccountRoleAccessCredential_, cloudAccountRoleAccessCredential) };


    // cloudAccountRoleExternalId Field Functions 
    bool hasCloudAccountRoleExternalId() const { return this->cloudAccountRoleExternalId_ != nullptr;};
    void deleteCloudAccountRoleExternalId() { this->cloudAccountRoleExternalId_ = nullptr;};
    inline string getCloudAccountRoleExternalId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleExternalId_, "") };
    inline ObtainCloudAccountRoleAccessCredentialResponseBody& setCloudAccountRoleExternalId(string cloudAccountRoleExternalId) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleExternalId_, cloudAccountRoleExternalId) };


    // cloudAccountRoleId Field Functions 
    bool hasCloudAccountRoleId() const { return this->cloudAccountRoleId_ != nullptr;};
    void deleteCloudAccountRoleId() { this->cloudAccountRoleId_ = nullptr;};
    inline string getCloudAccountRoleId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleId_, "") };
    inline ObtainCloudAccountRoleAccessCredentialResponseBody& setCloudAccountRoleId(string cloudAccountRoleId) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleId_, cloudAccountRoleId) };


    // cloudAccountRoleName Field Functions 
    bool hasCloudAccountRoleName() const { return this->cloudAccountRoleName_ != nullptr;};
    void deleteCloudAccountRoleName() { this->cloudAccountRoleName_ = nullptr;};
    inline string getCloudAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleName_, "") };
    inline ObtainCloudAccountRoleAccessCredentialResponseBody& setCloudAccountRoleName(string cloudAccountRoleName) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleName_, cloudAccountRoleName) };


    // cloudAccountVendorType Field Functions 
    bool hasCloudAccountVendorType() const { return this->cloudAccountVendorType_ != nullptr;};
    void deleteCloudAccountVendorType() { this->cloudAccountVendorType_ = nullptr;};
    inline string getCloudAccountVendorType() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountVendorType_, "") };
    inline ObtainCloudAccountRoleAccessCredentialResponseBody& setCloudAccountVendorType(string cloudAccountVendorType) { DARABONBA_PTR_SET_VALUE(cloudAccountVendorType_, cloudAccountVendorType) };


  protected:
    shared_ptr<string> cloudAccountId_ {};
    shared_ptr<ObtainCloudAccountRoleAccessCredentialResponseBody::CloudAccountRoleAccessCredential> cloudAccountRoleAccessCredential_ {};
    shared_ptr<string> cloudAccountRoleExternalId_ {};
    shared_ptr<string> cloudAccountRoleId_ {};
    shared_ptr<string> cloudAccountRoleName_ {};
    shared_ptr<string> cloudAccountVendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
