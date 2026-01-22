// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOIDCPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOIDCPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListOIDCProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOIDCProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(OIDCProviders, OIDCProviders_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOIDCProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(OIDCProviders, OIDCProviders_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOIDCProvidersResponseBody() = default ;
    ListOIDCProvidersResponseBody(const ListOIDCProvidersResponseBody &) = default ;
    ListOIDCProvidersResponseBody(ListOIDCProvidersResponseBody &&) = default ;
    ListOIDCProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOIDCProvidersResponseBody() = default ;
    ListOIDCProvidersResponseBody& operator=(const ListOIDCProvidersResponseBody &) = default ;
    ListOIDCProvidersResponseBody& operator=(ListOIDCProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OIDCProviders : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OIDCProviders& obj) { 
        DARABONBA_PTR_TO_JSON(OIDCProvider, OIDCProvider_);
      };
      friend void from_json(const Darabonba::Json& j, OIDCProviders& obj) { 
        DARABONBA_PTR_FROM_JSON(OIDCProvider, OIDCProvider_);
      };
      OIDCProviders() = default ;
      OIDCProviders(const OIDCProviders &) = default ;
      OIDCProviders(OIDCProviders &&) = default ;
      OIDCProviders(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OIDCProviders() = default ;
      OIDCProviders& operator=(const OIDCProviders &) = default ;
      OIDCProviders& operator=(OIDCProviders &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OIDCProvider : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OIDCProvider& obj) { 
          DARABONBA_PTR_TO_JSON(Arn, arn_);
          DARABONBA_PTR_TO_JSON(ClientIds, clientIds_);
          DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Fingerprints, fingerprints_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(IssuanceLimitTime, issuanceLimitTime_);
          DARABONBA_PTR_TO_JSON(IssuerUrl, issuerUrl_);
          DARABONBA_PTR_TO_JSON(OIDCProviderName, OIDCProviderName_);
          DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
        };
        friend void from_json(const Darabonba::Json& j, OIDCProvider& obj) { 
          DARABONBA_PTR_FROM_JSON(Arn, arn_);
          DARABONBA_PTR_FROM_JSON(ClientIds, clientIds_);
          DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Fingerprints, fingerprints_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(IssuanceLimitTime, issuanceLimitTime_);
          DARABONBA_PTR_FROM_JSON(IssuerUrl, issuerUrl_);
          DARABONBA_PTR_FROM_JSON(OIDCProviderName, OIDCProviderName_);
          DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
        };
        OIDCProvider() = default ;
        OIDCProvider(const OIDCProvider &) = default ;
        OIDCProvider(OIDCProvider &&) = default ;
        OIDCProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OIDCProvider() = default ;
        OIDCProvider& operator=(const OIDCProvider &) = default ;
        OIDCProvider& operator=(OIDCProvider &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arn_ == nullptr
        && this->clientIds_ == nullptr && this->createDate_ == nullptr && this->description_ == nullptr && this->fingerprints_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->issuanceLimitTime_ == nullptr && this->issuerUrl_ == nullptr && this->OIDCProviderName_ == nullptr && this->updateDate_ == nullptr; };
        // arn Field Functions 
        bool hasArn() const { return this->arn_ != nullptr;};
        void deleteArn() { this->arn_ = nullptr;};
        inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
        inline OIDCProvider& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


        // clientIds Field Functions 
        bool hasClientIds() const { return this->clientIds_ != nullptr;};
        void deleteClientIds() { this->clientIds_ = nullptr;};
        inline string getClientIds() const { DARABONBA_PTR_GET_DEFAULT(clientIds_, "") };
        inline OIDCProvider& setClientIds(string clientIds) { DARABONBA_PTR_SET_VALUE(clientIds_, clientIds) };


        // createDate Field Functions 
        bool hasCreateDate() const { return this->createDate_ != nullptr;};
        void deleteCreateDate() { this->createDate_ = nullptr;};
        inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
        inline OIDCProvider& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline OIDCProvider& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // fingerprints Field Functions 
        bool hasFingerprints() const { return this->fingerprints_ != nullptr;};
        void deleteFingerprints() { this->fingerprints_ = nullptr;};
        inline string getFingerprints() const { DARABONBA_PTR_GET_DEFAULT(fingerprints_, "") };
        inline OIDCProvider& setFingerprints(string fingerprints) { DARABONBA_PTR_SET_VALUE(fingerprints_, fingerprints) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline OIDCProvider& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline OIDCProvider& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // issuanceLimitTime Field Functions 
        bool hasIssuanceLimitTime() const { return this->issuanceLimitTime_ != nullptr;};
        void deleteIssuanceLimitTime() { this->issuanceLimitTime_ = nullptr;};
        inline int64_t getIssuanceLimitTime() const { DARABONBA_PTR_GET_DEFAULT(issuanceLimitTime_, 0L) };
        inline OIDCProvider& setIssuanceLimitTime(int64_t issuanceLimitTime) { DARABONBA_PTR_SET_VALUE(issuanceLimitTime_, issuanceLimitTime) };


        // issuerUrl Field Functions 
        bool hasIssuerUrl() const { return this->issuerUrl_ != nullptr;};
        void deleteIssuerUrl() { this->issuerUrl_ = nullptr;};
        inline string getIssuerUrl() const { DARABONBA_PTR_GET_DEFAULT(issuerUrl_, "") };
        inline OIDCProvider& setIssuerUrl(string issuerUrl) { DARABONBA_PTR_SET_VALUE(issuerUrl_, issuerUrl) };


        // OIDCProviderName Field Functions 
        bool hasOIDCProviderName() const { return this->OIDCProviderName_ != nullptr;};
        void deleteOIDCProviderName() { this->OIDCProviderName_ = nullptr;};
        inline string getOIDCProviderName() const { DARABONBA_PTR_GET_DEFAULT(OIDCProviderName_, "") };
        inline OIDCProvider& setOIDCProviderName(string OIDCProviderName) { DARABONBA_PTR_SET_VALUE(OIDCProviderName_, OIDCProviderName) };


        // updateDate Field Functions 
        bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
        void deleteUpdateDate() { this->updateDate_ = nullptr;};
        inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
        inline OIDCProvider& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


      protected:
        // The Alibaba Cloud Resource Name (ARN) of the OIDC IdP.
        shared_ptr<string> arn_ {};
        // The ID of the client, If you want to specify multiple client IDs, separate the client IDs with commas (,).
        shared_ptr<string> clientIds_ {};
        // The time when the OIDC IdP was created. The time is displayed in UTC.
        shared_ptr<string> createDate_ {};
        // The description of the OIDC IdP.
        shared_ptr<string> description_ {};
        // The fingerprint of the HTTPS certificate. If multiple fingerprints are returned, the fingerprints are separated by commas (,).
        shared_ptr<string> fingerprints_ {};
        // The timestamp when the OIDC IdP was created.
        shared_ptr<string> gmtCreate_ {};
        // The timestamp when the OIDC IdP was modified.
        shared_ptr<string> gmtModified_ {};
        // The earliest time when an external IdP can issue an ID token. If the value of the iat field in the ID token is later than the current time, the request is rejected. Unit: hours. Valid values: 1 to 168.
        shared_ptr<int64_t> issuanceLimitTime_ {};
        // The URL of the issuer.
        shared_ptr<string> issuerUrl_ {};
        // The name of the OIDC IdP.
        shared_ptr<string> OIDCProviderName_ {};
        // The time when the OIDC IdP was modified. The time is displayed in UTC.
        shared_ptr<string> updateDate_ {};
      };

      virtual bool empty() const override { return this->OIDCProvider_ == nullptr; };
      // OIDCProvider Field Functions 
      bool hasOIDCProvider() const { return this->OIDCProvider_ != nullptr;};
      void deleteOIDCProvider() { this->OIDCProvider_ = nullptr;};
      inline const vector<OIDCProviders::OIDCProvider> & getOIDCProvider() const { DARABONBA_PTR_GET_CONST(OIDCProvider_, vector<OIDCProviders::OIDCProvider>) };
      inline vector<OIDCProviders::OIDCProvider> getOIDCProvider() { DARABONBA_PTR_GET(OIDCProvider_, vector<OIDCProviders::OIDCProvider>) };
      inline OIDCProviders& setOIDCProvider(const vector<OIDCProviders::OIDCProvider> & oIDCProvider) { DARABONBA_PTR_SET_VALUE(OIDCProvider_, oIDCProvider) };
      inline OIDCProviders& setOIDCProvider(vector<OIDCProviders::OIDCProvider> && oIDCProvider) { DARABONBA_PTR_SET_RVALUE(OIDCProvider_, oIDCProvider) };


    protected:
      shared_ptr<vector<OIDCProviders::OIDCProvider>> OIDCProvider_ {};
    };

    virtual bool empty() const override { return this->isTruncated_ == nullptr
        && this->marker_ == nullptr && this->OIDCProviders_ == nullptr && this->requestId_ == nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline ListOIDCProvidersResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListOIDCProvidersResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // OIDCProviders Field Functions 
    bool hasOIDCProviders() const { return this->OIDCProviders_ != nullptr;};
    void deleteOIDCProviders() { this->OIDCProviders_ = nullptr;};
    inline const ListOIDCProvidersResponseBody::OIDCProviders & getOIDCProviders() const { DARABONBA_PTR_GET_CONST(OIDCProviders_, ListOIDCProvidersResponseBody::OIDCProviders) };
    inline ListOIDCProvidersResponseBody::OIDCProviders getOIDCProviders() { DARABONBA_PTR_GET(OIDCProviders_, ListOIDCProvidersResponseBody::OIDCProviders) };
    inline ListOIDCProvidersResponseBody& setOIDCProviders(const ListOIDCProvidersResponseBody::OIDCProviders & oIDCProviders) { DARABONBA_PTR_SET_VALUE(OIDCProviders_, oIDCProviders) };
    inline ListOIDCProvidersResponseBody& setOIDCProviders(ListOIDCProvidersResponseBody::OIDCProviders && oIDCProviders) { DARABONBA_PTR_SET_RVALUE(OIDCProviders_, oIDCProviders) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOIDCProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the response is truncated. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> isTruncated_ {};
    // The `marker`. This parameter is returned only if the value of `IsTruncated` is `true`. If the parameter is returned, you can call this operation again and set this parameter to obtain the truncated part.``
    shared_ptr<string> marker_ {};
    // The information about the OIDC IdP.
    shared_ptr<ListOIDCProvidersResponseBody::OIDCProviders> OIDCProviders_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
