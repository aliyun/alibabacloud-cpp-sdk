// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDIDPLISTBYLOGINIDENTIFIERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FINDIDPLISTBYLOGINIDENTIFIERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{
namespace Models
{
  class FindIdpListByLoginIdentifierResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindIdpListByLoginIdentifierResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdpInfos, idpInfos_);
      DARABONBA_PTR_TO_JSON(OfficeSiteInfo, officeSiteInfo_);
      DARABONBA_PTR_TO_JSON(PopRegionConfig, popRegionConfig_);
      DARABONBA_PTR_TO_JSON(ProfileRegion, profileRegion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TenantAliasInfo, tenantAliasInfo_);
    };
    friend void from_json(const Darabonba::Json& j, FindIdpListByLoginIdentifierResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdpInfos, idpInfos_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteInfo, officeSiteInfo_);
      DARABONBA_PTR_FROM_JSON(PopRegionConfig, popRegionConfig_);
      DARABONBA_PTR_FROM_JSON(ProfileRegion, profileRegion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TenantAliasInfo, tenantAliasInfo_);
    };
    FindIdpListByLoginIdentifierResponseBody() = default ;
    FindIdpListByLoginIdentifierResponseBody(const FindIdpListByLoginIdentifierResponseBody &) = default ;
    FindIdpListByLoginIdentifierResponseBody(FindIdpListByLoginIdentifierResponseBody &&) = default ;
    FindIdpListByLoginIdentifierResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindIdpListByLoginIdentifierResponseBody() = default ;
    FindIdpListByLoginIdentifierResponseBody& operator=(const FindIdpListByLoginIdentifierResponseBody &) = default ;
    FindIdpListByLoginIdentifierResponseBody& operator=(FindIdpListByLoginIdentifierResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantAliasInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantAliasInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(PreferVpcAccess, preferVpcAccess_);
        DARABONBA_PTR_TO_JSON(TenantAlias, tenantAlias_);
        DARABONBA_PTR_TO_JSON(VpcAccessAddress, vpcAccessAddress_);
      };
      friend void from_json(const Darabonba::Json& j, TenantAliasInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(PreferVpcAccess, preferVpcAccess_);
        DARABONBA_PTR_FROM_JSON(TenantAlias, tenantAlias_);
        DARABONBA_PTR_FROM_JSON(VpcAccessAddress, vpcAccessAddress_);
      };
      TenantAliasInfo() = default ;
      TenantAliasInfo(const TenantAliasInfo &) = default ;
      TenantAliasInfo(TenantAliasInfo &&) = default ;
      TenantAliasInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantAliasInfo() = default ;
      TenantAliasInfo& operator=(const TenantAliasInfo &) = default ;
      TenantAliasInfo& operator=(TenantAliasInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->preferVpcAccess_ == nullptr && this->tenantAlias_ == nullptr && this->vpcAccessAddress_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline TenantAliasInfo& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // preferVpcAccess Field Functions 
      bool hasPreferVpcAccess() const { return this->preferVpcAccess_ != nullptr;};
      void deletePreferVpcAccess() { this->preferVpcAccess_ = nullptr;};
      inline bool getPreferVpcAccess() const { DARABONBA_PTR_GET_DEFAULT(preferVpcAccess_, false) };
      inline TenantAliasInfo& setPreferVpcAccess(bool preferVpcAccess) { DARABONBA_PTR_SET_VALUE(preferVpcAccess_, preferVpcAccess) };


      // tenantAlias Field Functions 
      bool hasTenantAlias() const { return this->tenantAlias_ != nullptr;};
      void deleteTenantAlias() { this->tenantAlias_ = nullptr;};
      inline string getTenantAlias() const { DARABONBA_PTR_GET_DEFAULT(tenantAlias_, "") };
      inline TenantAliasInfo& setTenantAlias(string tenantAlias) { DARABONBA_PTR_SET_VALUE(tenantAlias_, tenantAlias) };


      // vpcAccessAddress Field Functions 
      bool hasVpcAccessAddress() const { return this->vpcAccessAddress_ != nullptr;};
      void deleteVpcAccessAddress() { this->vpcAccessAddress_ = nullptr;};
      inline string getVpcAccessAddress() const { DARABONBA_PTR_GET_DEFAULT(vpcAccessAddress_, "") };
      inline TenantAliasInfo& setVpcAccessAddress(string vpcAccessAddress) { DARABONBA_PTR_SET_VALUE(vpcAccessAddress_, vpcAccessAddress) };


    protected:
      shared_ptr<string> accessType_ {};
      shared_ptr<bool> preferVpcAccess_ {};
      shared_ptr<string> tenantAlias_ {};
      shared_ptr<string> vpcAccessAddress_ {};
    };

    class OfficeSiteInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OfficeSiteInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(PreferVpcAccess, preferVpcAccess_);
        DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SsoServiceUrl, ssoServiceUrl_);
        DARABONBA_PTR_TO_JSON(VpcAccessAddress, vpcAccessAddress_);
      };
      friend void from_json(const Darabonba::Json& j, OfficeSiteInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(PreferVpcAccess, preferVpcAccess_);
        DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SsoServiceUrl, ssoServiceUrl_);
        DARABONBA_PTR_FROM_JSON(VpcAccessAddress, vpcAccessAddress_);
      };
      OfficeSiteInfo() = default ;
      OfficeSiteInfo(const OfficeSiteInfo &) = default ;
      OfficeSiteInfo(OfficeSiteInfo &&) = default ;
      OfficeSiteInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OfficeSiteInfo() = default ;
      OfficeSiteInfo& operator=(const OfficeSiteInfo &) = default ;
      OfficeSiteInfo& operator=(OfficeSiteInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->officeSiteId_ == nullptr && this->preferVpcAccess_ == nullptr && this->providerId_ == nullptr && this->regionId_ == nullptr && this->ssoServiceUrl_ == nullptr
        && this->vpcAccessAddress_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline OfficeSiteInfo& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline OfficeSiteInfo& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // preferVpcAccess Field Functions 
      bool hasPreferVpcAccess() const { return this->preferVpcAccess_ != nullptr;};
      void deletePreferVpcAccess() { this->preferVpcAccess_ = nullptr;};
      inline bool getPreferVpcAccess() const { DARABONBA_PTR_GET_DEFAULT(preferVpcAccess_, false) };
      inline OfficeSiteInfo& setPreferVpcAccess(bool preferVpcAccess) { DARABONBA_PTR_SET_VALUE(preferVpcAccess_, preferVpcAccess) };


      // providerId Field Functions 
      bool hasProviderId() const { return this->providerId_ != nullptr;};
      void deleteProviderId() { this->providerId_ = nullptr;};
      inline string getProviderId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
      inline OfficeSiteInfo& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline OfficeSiteInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // ssoServiceUrl Field Functions 
      bool hasSsoServiceUrl() const { return this->ssoServiceUrl_ != nullptr;};
      void deleteSsoServiceUrl() { this->ssoServiceUrl_ = nullptr;};
      inline string getSsoServiceUrl() const { DARABONBA_PTR_GET_DEFAULT(ssoServiceUrl_, "") };
      inline OfficeSiteInfo& setSsoServiceUrl(string ssoServiceUrl) { DARABONBA_PTR_SET_VALUE(ssoServiceUrl_, ssoServiceUrl) };


      // vpcAccessAddress Field Functions 
      bool hasVpcAccessAddress() const { return this->vpcAccessAddress_ != nullptr;};
      void deleteVpcAccessAddress() { this->vpcAccessAddress_ = nullptr;};
      inline string getVpcAccessAddress() const { DARABONBA_PTR_GET_DEFAULT(vpcAccessAddress_, "") };
      inline OfficeSiteInfo& setVpcAccessAddress(string vpcAccessAddress) { DARABONBA_PTR_SET_VALUE(vpcAccessAddress_, vpcAccessAddress) };


    protected:
      shared_ptr<string> accessType_ {};
      shared_ptr<string> officeSiteId_ {};
      shared_ptr<bool> preferVpcAccess_ {};
      shared_ptr<string> providerId_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> ssoServiceUrl_ {};
      shared_ptr<string> vpcAccessAddress_ {};
    };

    class IdpInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdpInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(Cookies, cookies_);
        DARABONBA_PTR_TO_JSON(IdpId, idpId_);
        DARABONBA_PTR_TO_JSON(IdpName, idpName_);
        DARABONBA_PTR_TO_JSON(IdpNameEN, idpNameEN_);
        DARABONBA_PTR_TO_JSON(IdpProvider, idpProvider_);
        DARABONBA_PTR_TO_JSON(JumpSwitch, jumpSwitch_);
        DARABONBA_PTR_TO_JSON(SsoProtocol, ssoProtocol_);
        DARABONBA_PTR_TO_JSON(SsoServiceUrl, ssoServiceUrl_);
      };
      friend void from_json(const Darabonba::Json& j, IdpInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(Cookies, cookies_);
        DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
        DARABONBA_PTR_FROM_JSON(IdpName, idpName_);
        DARABONBA_PTR_FROM_JSON(IdpNameEN, idpNameEN_);
        DARABONBA_PTR_FROM_JSON(IdpProvider, idpProvider_);
        DARABONBA_PTR_FROM_JSON(JumpSwitch, jumpSwitch_);
        DARABONBA_PTR_FROM_JSON(SsoProtocol, ssoProtocol_);
        DARABONBA_PTR_FROM_JSON(SsoServiceUrl, ssoServiceUrl_);
      };
      IdpInfos() = default ;
      IdpInfos(const IdpInfos &) = default ;
      IdpInfos(IdpInfos &&) = default ;
      IdpInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdpInfos() = default ;
      IdpInfos& operator=(const IdpInfos &) = default ;
      IdpInfos& operator=(IdpInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountType_ == nullptr
        && this->cookies_ == nullptr && this->idpId_ == nullptr && this->idpName_ == nullptr && this->idpNameEN_ == nullptr && this->idpProvider_ == nullptr
        && this->jumpSwitch_ == nullptr && this->ssoProtocol_ == nullptr && this->ssoServiceUrl_ == nullptr; };
      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline IdpInfos& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // cookies Field Functions 
      bool hasCookies() const { return this->cookies_ != nullptr;};
      void deleteCookies() { this->cookies_ = nullptr;};
      inline string getCookies() const { DARABONBA_PTR_GET_DEFAULT(cookies_, "") };
      inline IdpInfos& setCookies(string cookies) { DARABONBA_PTR_SET_VALUE(cookies_, cookies) };


      // idpId Field Functions 
      bool hasIdpId() const { return this->idpId_ != nullptr;};
      void deleteIdpId() { this->idpId_ = nullptr;};
      inline string getIdpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, "") };
      inline IdpInfos& setIdpId(string idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


      // idpName Field Functions 
      bool hasIdpName() const { return this->idpName_ != nullptr;};
      void deleteIdpName() { this->idpName_ = nullptr;};
      inline string getIdpName() const { DARABONBA_PTR_GET_DEFAULT(idpName_, "") };
      inline IdpInfos& setIdpName(string idpName) { DARABONBA_PTR_SET_VALUE(idpName_, idpName) };


      // idpNameEN Field Functions 
      bool hasIdpNameEN() const { return this->idpNameEN_ != nullptr;};
      void deleteIdpNameEN() { this->idpNameEN_ = nullptr;};
      inline string getIdpNameEN() const { DARABONBA_PTR_GET_DEFAULT(idpNameEN_, "") };
      inline IdpInfos& setIdpNameEN(string idpNameEN) { DARABONBA_PTR_SET_VALUE(idpNameEN_, idpNameEN) };


      // idpProvider Field Functions 
      bool hasIdpProvider() const { return this->idpProvider_ != nullptr;};
      void deleteIdpProvider() { this->idpProvider_ = nullptr;};
      inline string getIdpProvider() const { DARABONBA_PTR_GET_DEFAULT(idpProvider_, "") };
      inline IdpInfos& setIdpProvider(string idpProvider) { DARABONBA_PTR_SET_VALUE(idpProvider_, idpProvider) };


      // jumpSwitch Field Functions 
      bool hasJumpSwitch() const { return this->jumpSwitch_ != nullptr;};
      void deleteJumpSwitch() { this->jumpSwitch_ = nullptr;};
      inline string getJumpSwitch() const { DARABONBA_PTR_GET_DEFAULT(jumpSwitch_, "") };
      inline IdpInfos& setJumpSwitch(string jumpSwitch) { DARABONBA_PTR_SET_VALUE(jumpSwitch_, jumpSwitch) };


      // ssoProtocol Field Functions 
      bool hasSsoProtocol() const { return this->ssoProtocol_ != nullptr;};
      void deleteSsoProtocol() { this->ssoProtocol_ = nullptr;};
      inline string getSsoProtocol() const { DARABONBA_PTR_GET_DEFAULT(ssoProtocol_, "") };
      inline IdpInfos& setSsoProtocol(string ssoProtocol) { DARABONBA_PTR_SET_VALUE(ssoProtocol_, ssoProtocol) };


      // ssoServiceUrl Field Functions 
      bool hasSsoServiceUrl() const { return this->ssoServiceUrl_ != nullptr;};
      void deleteSsoServiceUrl() { this->ssoServiceUrl_ = nullptr;};
      inline string getSsoServiceUrl() const { DARABONBA_PTR_GET_DEFAULT(ssoServiceUrl_, "") };
      inline IdpInfos& setSsoServiceUrl(string ssoServiceUrl) { DARABONBA_PTR_SET_VALUE(ssoServiceUrl_, ssoServiceUrl) };


    protected:
      shared_ptr<string> accountType_ {};
      shared_ptr<string> cookies_ {};
      shared_ptr<string> idpId_ {};
      shared_ptr<string> idpName_ {};
      shared_ptr<string> idpNameEN_ {};
      shared_ptr<string> idpProvider_ {};
      shared_ptr<string> jumpSwitch_ {};
      shared_ptr<string> ssoProtocol_ {};
      shared_ptr<string> ssoServiceUrl_ {};
    };

    virtual bool empty() const override { return this->idpInfos_ == nullptr
        && this->officeSiteInfo_ == nullptr && this->popRegionConfig_ == nullptr && this->profileRegion_ == nullptr && this->requestId_ == nullptr && this->tenantAliasInfo_ == nullptr; };
    // idpInfos Field Functions 
    bool hasIdpInfos() const { return this->idpInfos_ != nullptr;};
    void deleteIdpInfos() { this->idpInfos_ = nullptr;};
    inline const vector<FindIdpListByLoginIdentifierResponseBody::IdpInfos> & getIdpInfos() const { DARABONBA_PTR_GET_CONST(idpInfos_, vector<FindIdpListByLoginIdentifierResponseBody::IdpInfos>) };
    inline vector<FindIdpListByLoginIdentifierResponseBody::IdpInfos> getIdpInfos() { DARABONBA_PTR_GET(idpInfos_, vector<FindIdpListByLoginIdentifierResponseBody::IdpInfos>) };
    inline FindIdpListByLoginIdentifierResponseBody& setIdpInfos(const vector<FindIdpListByLoginIdentifierResponseBody::IdpInfos> & idpInfos) { DARABONBA_PTR_SET_VALUE(idpInfos_, idpInfos) };
    inline FindIdpListByLoginIdentifierResponseBody& setIdpInfos(vector<FindIdpListByLoginIdentifierResponseBody::IdpInfos> && idpInfos) { DARABONBA_PTR_SET_RVALUE(idpInfos_, idpInfos) };


    // officeSiteInfo Field Functions 
    bool hasOfficeSiteInfo() const { return this->officeSiteInfo_ != nullptr;};
    void deleteOfficeSiteInfo() { this->officeSiteInfo_ = nullptr;};
    inline const FindIdpListByLoginIdentifierResponseBody::OfficeSiteInfo & getOfficeSiteInfo() const { DARABONBA_PTR_GET_CONST(officeSiteInfo_, FindIdpListByLoginIdentifierResponseBody::OfficeSiteInfo) };
    inline FindIdpListByLoginIdentifierResponseBody::OfficeSiteInfo getOfficeSiteInfo() { DARABONBA_PTR_GET(officeSiteInfo_, FindIdpListByLoginIdentifierResponseBody::OfficeSiteInfo) };
    inline FindIdpListByLoginIdentifierResponseBody& setOfficeSiteInfo(const FindIdpListByLoginIdentifierResponseBody::OfficeSiteInfo & officeSiteInfo) { DARABONBA_PTR_SET_VALUE(officeSiteInfo_, officeSiteInfo) };
    inline FindIdpListByLoginIdentifierResponseBody& setOfficeSiteInfo(FindIdpListByLoginIdentifierResponseBody::OfficeSiteInfo && officeSiteInfo) { DARABONBA_PTR_SET_RVALUE(officeSiteInfo_, officeSiteInfo) };


    // popRegionConfig Field Functions 
    bool hasPopRegionConfig() const { return this->popRegionConfig_ != nullptr;};
    void deletePopRegionConfig() { this->popRegionConfig_ = nullptr;};
    inline const map<string, string> & getPopRegionConfig() const { DARABONBA_PTR_GET_CONST(popRegionConfig_, map<string, string>) };
    inline map<string, string> getPopRegionConfig() { DARABONBA_PTR_GET(popRegionConfig_, map<string, string>) };
    inline FindIdpListByLoginIdentifierResponseBody& setPopRegionConfig(const map<string, string> & popRegionConfig) { DARABONBA_PTR_SET_VALUE(popRegionConfig_, popRegionConfig) };
    inline FindIdpListByLoginIdentifierResponseBody& setPopRegionConfig(map<string, string> && popRegionConfig) { DARABONBA_PTR_SET_RVALUE(popRegionConfig_, popRegionConfig) };


    // profileRegion Field Functions 
    bool hasProfileRegion() const { return this->profileRegion_ != nullptr;};
    void deleteProfileRegion() { this->profileRegion_ = nullptr;};
    inline string getProfileRegion() const { DARABONBA_PTR_GET_DEFAULT(profileRegion_, "") };
    inline FindIdpListByLoginIdentifierResponseBody& setProfileRegion(string profileRegion) { DARABONBA_PTR_SET_VALUE(profileRegion_, profileRegion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FindIdpListByLoginIdentifierResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tenantAliasInfo Field Functions 
    bool hasTenantAliasInfo() const { return this->tenantAliasInfo_ != nullptr;};
    void deleteTenantAliasInfo() { this->tenantAliasInfo_ = nullptr;};
    inline const FindIdpListByLoginIdentifierResponseBody::TenantAliasInfo & getTenantAliasInfo() const { DARABONBA_PTR_GET_CONST(tenantAliasInfo_, FindIdpListByLoginIdentifierResponseBody::TenantAliasInfo) };
    inline FindIdpListByLoginIdentifierResponseBody::TenantAliasInfo getTenantAliasInfo() { DARABONBA_PTR_GET(tenantAliasInfo_, FindIdpListByLoginIdentifierResponseBody::TenantAliasInfo) };
    inline FindIdpListByLoginIdentifierResponseBody& setTenantAliasInfo(const FindIdpListByLoginIdentifierResponseBody::TenantAliasInfo & tenantAliasInfo) { DARABONBA_PTR_SET_VALUE(tenantAliasInfo_, tenantAliasInfo) };
    inline FindIdpListByLoginIdentifierResponseBody& setTenantAliasInfo(FindIdpListByLoginIdentifierResponseBody::TenantAliasInfo && tenantAliasInfo) { DARABONBA_PTR_SET_RVALUE(tenantAliasInfo_, tenantAliasInfo) };


  protected:
    shared_ptr<vector<FindIdpListByLoginIdentifierResponseBody::IdpInfos>> idpInfos_ {};
    shared_ptr<FindIdpListByLoginIdentifierResponseBody::OfficeSiteInfo> officeSiteInfo_ {};
    shared_ptr<map<string, string>> popRegionConfig_ {};
    shared_ptr<string> profileRegion_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<FindIdpListByLoginIdentifierResponseBody::TenantAliasInfo> tenantAliasInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
