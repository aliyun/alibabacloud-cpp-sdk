// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAMLSERVICEPROVIDERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSAMLSERVICEPROVIDERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetSAMLServiceProviderInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSAMLServiceProviderInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SAMLServiceProviderInfo, SAMLServiceProviderInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetSAMLServiceProviderInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SAMLServiceProviderInfo, SAMLServiceProviderInfo_);
    };
    GetSAMLServiceProviderInfoResponseBody() = default ;
    GetSAMLServiceProviderInfoResponseBody(const GetSAMLServiceProviderInfoResponseBody &) = default ;
    GetSAMLServiceProviderInfoResponseBody(GetSAMLServiceProviderInfoResponseBody &&) = default ;
    GetSAMLServiceProviderInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSAMLServiceProviderInfoResponseBody() = default ;
    GetSAMLServiceProviderInfoResponseBody& operator=(const GetSAMLServiceProviderInfoResponseBody &) = default ;
    GetSAMLServiceProviderInfoResponseBody& operator=(GetSAMLServiceProviderInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SAMLServiceProviderInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SAMLServiceProviderInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ACSURL, ACSURL_);
        DARABONBA_PTR_TO_JSON(EntityId, entityId_);
        DARABONBA_PTR_TO_JSON(SPMetadataDocument, SPMetadataDocument_);
        DARABONBA_PTR_TO_JSON(UserPoolId, userPoolId_);
      };
      friend void from_json(const Darabonba::Json& j, SAMLServiceProviderInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ACSURL, ACSURL_);
        DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
        DARABONBA_PTR_FROM_JSON(SPMetadataDocument, SPMetadataDocument_);
        DARABONBA_PTR_FROM_JSON(UserPoolId, userPoolId_);
      };
      SAMLServiceProviderInfo() = default ;
      SAMLServiceProviderInfo(const SAMLServiceProviderInfo &) = default ;
      SAMLServiceProviderInfo(SAMLServiceProviderInfo &&) = default ;
      SAMLServiceProviderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SAMLServiceProviderInfo() = default ;
      SAMLServiceProviderInfo& operator=(const SAMLServiceProviderInfo &) = default ;
      SAMLServiceProviderInfo& operator=(SAMLServiceProviderInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ACSURL_ == nullptr
        && this->entityId_ == nullptr && this->SPMetadataDocument_ == nullptr && this->userPoolId_ == nullptr; };
      // ACSURL Field Functions 
      bool hasACSURL() const { return this->ACSURL_ != nullptr;};
      void deleteACSURL() { this->ACSURL_ = nullptr;};
      inline string getACSURL() const { DARABONBA_PTR_GET_DEFAULT(ACSURL_, "") };
      inline SAMLServiceProviderInfo& setACSURL(string ACSURL) { DARABONBA_PTR_SET_VALUE(ACSURL_, ACSURL) };


      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline SAMLServiceProviderInfo& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // SPMetadataDocument Field Functions 
      bool hasSPMetadataDocument() const { return this->SPMetadataDocument_ != nullptr;};
      void deleteSPMetadataDocument() { this->SPMetadataDocument_ = nullptr;};
      inline string getSPMetadataDocument() const { DARABONBA_PTR_GET_DEFAULT(SPMetadataDocument_, "") };
      inline SAMLServiceProviderInfo& setSPMetadataDocument(string SPMetadataDocument) { DARABONBA_PTR_SET_VALUE(SPMetadataDocument_, SPMetadataDocument) };


      // userPoolId Field Functions 
      bool hasUserPoolId() const { return this->userPoolId_ != nullptr;};
      void deleteUserPoolId() { this->userPoolId_ = nullptr;};
      inline string getUserPoolId() const { DARABONBA_PTR_GET_DEFAULT(userPoolId_, "") };
      inline SAMLServiceProviderInfo& setUserPoolId(string userPoolId) { DARABONBA_PTR_SET_VALUE(userPoolId_, userPoolId) };


    protected:
      shared_ptr<string> ACSURL_ {};
      shared_ptr<string> entityId_ {};
      shared_ptr<string> SPMetadataDocument_ {};
      shared_ptr<string> userPoolId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->SAMLServiceProviderInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSAMLServiceProviderInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SAMLServiceProviderInfo Field Functions 
    bool hasSAMLServiceProviderInfo() const { return this->SAMLServiceProviderInfo_ != nullptr;};
    void deleteSAMLServiceProviderInfo() { this->SAMLServiceProviderInfo_ = nullptr;};
    inline const GetSAMLServiceProviderInfoResponseBody::SAMLServiceProviderInfo & getSAMLServiceProviderInfo() const { DARABONBA_PTR_GET_CONST(SAMLServiceProviderInfo_, GetSAMLServiceProviderInfoResponseBody::SAMLServiceProviderInfo) };
    inline GetSAMLServiceProviderInfoResponseBody::SAMLServiceProviderInfo getSAMLServiceProviderInfo() { DARABONBA_PTR_GET(SAMLServiceProviderInfo_, GetSAMLServiceProviderInfoResponseBody::SAMLServiceProviderInfo) };
    inline GetSAMLServiceProviderInfoResponseBody& setSAMLServiceProviderInfo(const GetSAMLServiceProviderInfoResponseBody::SAMLServiceProviderInfo & sAMLServiceProviderInfo) { DARABONBA_PTR_SET_VALUE(SAMLServiceProviderInfo_, sAMLServiceProviderInfo) };
    inline GetSAMLServiceProviderInfoResponseBody& setSAMLServiceProviderInfo(GetSAMLServiceProviderInfoResponseBody::SAMLServiceProviderInfo && sAMLServiceProviderInfo) { DARABONBA_PTR_SET_RVALUE(SAMLServiceProviderInfo_, sAMLServiceProviderInfo) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetSAMLServiceProviderInfoResponseBody::SAMLServiceProviderInfo> SAMLServiceProviderInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
