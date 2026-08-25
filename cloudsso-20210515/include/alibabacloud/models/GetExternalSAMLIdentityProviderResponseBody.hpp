// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXTERNALSAMLIDENTITYPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXTERNALSAMLIDENTITYPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetExternalSAMLIdentityProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExternalSAMLIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SAMLIdentityProviderConfiguration, SAMLIdentityProviderConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, GetExternalSAMLIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SAMLIdentityProviderConfiguration, SAMLIdentityProviderConfiguration_);
    };
    GetExternalSAMLIdentityProviderResponseBody() = default ;
    GetExternalSAMLIdentityProviderResponseBody(const GetExternalSAMLIdentityProviderResponseBody &) = default ;
    GetExternalSAMLIdentityProviderResponseBody(GetExternalSAMLIdentityProviderResponseBody &&) = default ;
    GetExternalSAMLIdentityProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExternalSAMLIdentityProviderResponseBody() = default ;
    GetExternalSAMLIdentityProviderResponseBody& operator=(const GetExternalSAMLIdentityProviderResponseBody &) = default ;
    GetExternalSAMLIdentityProviderResponseBody& operator=(GetExternalSAMLIdentityProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SAMLIdentityProviderConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SAMLIdentityProviderConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(BindingType, bindingType_);
        DARABONBA_PTR_TO_JSON(CertificateIds, certificateIds_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(EncodedMetadataDocument, encodedMetadataDocument_);
        DARABONBA_PTR_TO_JSON(EntityId, entityId_);
        DARABONBA_PTR_TO_JSON(LoginUrl, loginUrl_);
        DARABONBA_PTR_TO_JSON(SSOStatus, SSOStatus_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(WantRequestSigned, wantRequestSigned_);
      };
      friend void from_json(const Darabonba::Json& j, SAMLIdentityProviderConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(BindingType, bindingType_);
        DARABONBA_PTR_FROM_JSON(CertificateIds, certificateIds_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(EncodedMetadataDocument, encodedMetadataDocument_);
        DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
        DARABONBA_PTR_FROM_JSON(LoginUrl, loginUrl_);
        DARABONBA_PTR_FROM_JSON(SSOStatus, SSOStatus_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(WantRequestSigned, wantRequestSigned_);
      };
      SAMLIdentityProviderConfiguration() = default ;
      SAMLIdentityProviderConfiguration(const SAMLIdentityProviderConfiguration &) = default ;
      SAMLIdentityProviderConfiguration(SAMLIdentityProviderConfiguration &&) = default ;
      SAMLIdentityProviderConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SAMLIdentityProviderConfiguration() = default ;
      SAMLIdentityProviderConfiguration& operator=(const SAMLIdentityProviderConfiguration &) = default ;
      SAMLIdentityProviderConfiguration& operator=(SAMLIdentityProviderConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bindingType_ == nullptr
        && this->certificateIds_ == nullptr && this->createTime_ == nullptr && this->directoryId_ == nullptr && this->encodedMetadataDocument_ == nullptr && this->entityId_ == nullptr
        && this->loginUrl_ == nullptr && this->SSOStatus_ == nullptr && this->updateTime_ == nullptr && this->wantRequestSigned_ == nullptr; };
      // bindingType Field Functions 
      bool hasBindingType() const { return this->bindingType_ != nullptr;};
      void deleteBindingType() { this->bindingType_ = nullptr;};
      inline string getBindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, "") };
      inline SAMLIdentityProviderConfiguration& setBindingType(string bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


      // certificateIds Field Functions 
      bool hasCertificateIds() const { return this->certificateIds_ != nullptr;};
      void deleteCertificateIds() { this->certificateIds_ = nullptr;};
      inline const vector<string> & getCertificateIds() const { DARABONBA_PTR_GET_CONST(certificateIds_, vector<string>) };
      inline vector<string> getCertificateIds() { DARABONBA_PTR_GET(certificateIds_, vector<string>) };
      inline SAMLIdentityProviderConfiguration& setCertificateIds(const vector<string> & certificateIds) { DARABONBA_PTR_SET_VALUE(certificateIds_, certificateIds) };
      inline SAMLIdentityProviderConfiguration& setCertificateIds(vector<string> && certificateIds) { DARABONBA_PTR_SET_RVALUE(certificateIds_, certificateIds) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SAMLIdentityProviderConfiguration& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline SAMLIdentityProviderConfiguration& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // encodedMetadataDocument Field Functions 
      bool hasEncodedMetadataDocument() const { return this->encodedMetadataDocument_ != nullptr;};
      void deleteEncodedMetadataDocument() { this->encodedMetadataDocument_ = nullptr;};
      inline string getEncodedMetadataDocument() const { DARABONBA_PTR_GET_DEFAULT(encodedMetadataDocument_, "") };
      inline SAMLIdentityProviderConfiguration& setEncodedMetadataDocument(string encodedMetadataDocument) { DARABONBA_PTR_SET_VALUE(encodedMetadataDocument_, encodedMetadataDocument) };


      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline SAMLIdentityProviderConfiguration& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // loginUrl Field Functions 
      bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
      void deleteLoginUrl() { this->loginUrl_ = nullptr;};
      inline string getLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
      inline SAMLIdentityProviderConfiguration& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


      // SSOStatus Field Functions 
      bool hasSSOStatus() const { return this->SSOStatus_ != nullptr;};
      void deleteSSOStatus() { this->SSOStatus_ = nullptr;};
      inline string getSSOStatus() const { DARABONBA_PTR_GET_DEFAULT(SSOStatus_, "") };
      inline SAMLIdentityProviderConfiguration& setSSOStatus(string SSOStatus) { DARABONBA_PTR_SET_VALUE(SSOStatus_, SSOStatus) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline SAMLIdentityProviderConfiguration& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // wantRequestSigned Field Functions 
      bool hasWantRequestSigned() const { return this->wantRequestSigned_ != nullptr;};
      void deleteWantRequestSigned() { this->wantRequestSigned_ = nullptr;};
      inline bool getWantRequestSigned() const { DARABONBA_PTR_GET_DEFAULT(wantRequestSigned_, false) };
      inline SAMLIdentityProviderConfiguration& setWantRequestSigned(bool wantRequestSigned) { DARABONBA_PTR_SET_VALUE(wantRequestSigned_, wantRequestSigned) };


    protected:
      // The binding for sending SAML requests. Valid values:
      // 
      // *   Post: HTTP Post bindings.
      // *   Redirect: HTTP Redirect bindings.
      shared_ptr<string> bindingType_ {};
      // The SAML signing certificates.
      shared_ptr<vector<string>> certificateIds_ {};
      // The time when the IdP was configured for the first time.
      shared_ptr<string> createTime_ {};
      // The ID of the directory.
      shared_ptr<string> directoryId_ {};
      // The metadata file of the IdP. The value of this parameter is Base64-encoded.
      shared_ptr<string> encodedMetadataDocument_ {};
      // The ID of the IdP.
      shared_ptr<string> entityId_ {};
      // The logon URL of the IdP.
      shared_ptr<string> loginUrl_ {};
      // Indicates whether SSO is enabled. Valid values:
      // 
      // *   Enabled
      // *   Disabled
      shared_ptr<string> SSOStatus_ {};
      // The time when the IdP configurations were last modified.
      shared_ptr<string> updateTime_ {};
      // Indicates whether CloudSSO needs to sign SAML requests. The requests are sent when users log on to the CloudSSO user portal to initiate SAML-based SSO. Valid values:
      // 
      // *   true:
      // *   false (default)
      shared_ptr<bool> wantRequestSigned_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->SAMLIdentityProviderConfiguration_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExternalSAMLIdentityProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SAMLIdentityProviderConfiguration Field Functions 
    bool hasSAMLIdentityProviderConfiguration() const { return this->SAMLIdentityProviderConfiguration_ != nullptr;};
    void deleteSAMLIdentityProviderConfiguration() { this->SAMLIdentityProviderConfiguration_ = nullptr;};
    inline const GetExternalSAMLIdentityProviderResponseBody::SAMLIdentityProviderConfiguration & getSAMLIdentityProviderConfiguration() const { DARABONBA_PTR_GET_CONST(SAMLIdentityProviderConfiguration_, GetExternalSAMLIdentityProviderResponseBody::SAMLIdentityProviderConfiguration) };
    inline GetExternalSAMLIdentityProviderResponseBody::SAMLIdentityProviderConfiguration getSAMLIdentityProviderConfiguration() { DARABONBA_PTR_GET(SAMLIdentityProviderConfiguration_, GetExternalSAMLIdentityProviderResponseBody::SAMLIdentityProviderConfiguration) };
    inline GetExternalSAMLIdentityProviderResponseBody& setSAMLIdentityProviderConfiguration(const GetExternalSAMLIdentityProviderResponseBody::SAMLIdentityProviderConfiguration & sAMLIdentityProviderConfiguration) { DARABONBA_PTR_SET_VALUE(SAMLIdentityProviderConfiguration_, sAMLIdentityProviderConfiguration) };
    inline GetExternalSAMLIdentityProviderResponseBody& setSAMLIdentityProviderConfiguration(GetExternalSAMLIdentityProviderResponseBody::SAMLIdentityProviderConfiguration && sAMLIdentityProviderConfiguration) { DARABONBA_PTR_SET_RVALUE(SAMLIdentityProviderConfiguration_, sAMLIdentityProviderConfiguration) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The configurations of the IdP.
    shared_ptr<GetExternalSAMLIdentityProviderResponseBody::SAMLIdentityProviderConfiguration> SAMLIdentityProviderConfiguration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
