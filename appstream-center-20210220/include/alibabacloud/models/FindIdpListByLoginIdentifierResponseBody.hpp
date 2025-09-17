// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDIDPLISTBYLOGINIDENTIFIERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FINDIDPLISTBYLOGINIDENTIFIERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FindIdpListByLoginIdentifierResponseBodyIdpInfos.hpp>
#include <alibabacloud/models/FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo.hpp>
#include <map>
#include <alibabacloud/models/FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo.hpp>
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
    virtual bool empty() const override { this->idpInfos_ != nullptr
        && this->officeSiteInfo_ != nullptr && this->popRegionConfig_ != nullptr && this->profileRegion_ != nullptr && this->requestId_ != nullptr && this->tenantAliasInfo_ != nullptr; };
    // idpInfos Field Functions 
    bool hasIdpInfos() const { return this->idpInfos_ != nullptr;};
    void deleteIdpInfos() { this->idpInfos_ = nullptr;};
    inline const vector<FindIdpListByLoginIdentifierResponseBodyIdpInfos> & idpInfos() const { DARABONBA_PTR_GET_CONST(idpInfos_, vector<FindIdpListByLoginIdentifierResponseBodyIdpInfos>) };
    inline vector<FindIdpListByLoginIdentifierResponseBodyIdpInfos> idpInfos() { DARABONBA_PTR_GET(idpInfos_, vector<FindIdpListByLoginIdentifierResponseBodyIdpInfos>) };
    inline FindIdpListByLoginIdentifierResponseBody& setIdpInfos(const vector<FindIdpListByLoginIdentifierResponseBodyIdpInfos> & idpInfos) { DARABONBA_PTR_SET_VALUE(idpInfos_, idpInfos) };
    inline FindIdpListByLoginIdentifierResponseBody& setIdpInfos(vector<FindIdpListByLoginIdentifierResponseBodyIdpInfos> && idpInfos) { DARABONBA_PTR_SET_RVALUE(idpInfos_, idpInfos) };


    // officeSiteInfo Field Functions 
    bool hasOfficeSiteInfo() const { return this->officeSiteInfo_ != nullptr;};
    void deleteOfficeSiteInfo() { this->officeSiteInfo_ = nullptr;};
    inline const FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo & officeSiteInfo() const { DARABONBA_PTR_GET_CONST(officeSiteInfo_, FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo) };
    inline FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo officeSiteInfo() { DARABONBA_PTR_GET(officeSiteInfo_, FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo) };
    inline FindIdpListByLoginIdentifierResponseBody& setOfficeSiteInfo(const FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo & officeSiteInfo) { DARABONBA_PTR_SET_VALUE(officeSiteInfo_, officeSiteInfo) };
    inline FindIdpListByLoginIdentifierResponseBody& setOfficeSiteInfo(FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo && officeSiteInfo) { DARABONBA_PTR_SET_RVALUE(officeSiteInfo_, officeSiteInfo) };


    // popRegionConfig Field Functions 
    bool hasPopRegionConfig() const { return this->popRegionConfig_ != nullptr;};
    void deletePopRegionConfig() { this->popRegionConfig_ = nullptr;};
    inline const map<string, string> & popRegionConfig() const { DARABONBA_PTR_GET_CONST(popRegionConfig_, map<string, string>) };
    inline map<string, string> popRegionConfig() { DARABONBA_PTR_GET(popRegionConfig_, map<string, string>) };
    inline FindIdpListByLoginIdentifierResponseBody& setPopRegionConfig(const map<string, string> & popRegionConfig) { DARABONBA_PTR_SET_VALUE(popRegionConfig_, popRegionConfig) };
    inline FindIdpListByLoginIdentifierResponseBody& setPopRegionConfig(map<string, string> && popRegionConfig) { DARABONBA_PTR_SET_RVALUE(popRegionConfig_, popRegionConfig) };


    // profileRegion Field Functions 
    bool hasProfileRegion() const { return this->profileRegion_ != nullptr;};
    void deleteProfileRegion() { this->profileRegion_ = nullptr;};
    inline string profileRegion() const { DARABONBA_PTR_GET_DEFAULT(profileRegion_, "") };
    inline FindIdpListByLoginIdentifierResponseBody& setProfileRegion(string profileRegion) { DARABONBA_PTR_SET_VALUE(profileRegion_, profileRegion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FindIdpListByLoginIdentifierResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tenantAliasInfo Field Functions 
    bool hasTenantAliasInfo() const { return this->tenantAliasInfo_ != nullptr;};
    void deleteTenantAliasInfo() { this->tenantAliasInfo_ = nullptr;};
    inline const FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo & tenantAliasInfo() const { DARABONBA_PTR_GET_CONST(tenantAliasInfo_, FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo) };
    inline FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo tenantAliasInfo() { DARABONBA_PTR_GET(tenantAliasInfo_, FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo) };
    inline FindIdpListByLoginIdentifierResponseBody& setTenantAliasInfo(const FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo & tenantAliasInfo) { DARABONBA_PTR_SET_VALUE(tenantAliasInfo_, tenantAliasInfo) };
    inline FindIdpListByLoginIdentifierResponseBody& setTenantAliasInfo(FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo && tenantAliasInfo) { DARABONBA_PTR_SET_RVALUE(tenantAliasInfo_, tenantAliasInfo) };


  protected:
    std::shared_ptr<vector<FindIdpListByLoginIdentifierResponseBodyIdpInfos>> idpInfos_ = nullptr;
    std::shared_ptr<FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo> officeSiteInfo_ = nullptr;
    std::shared_ptr<map<string, string>> popRegionConfig_ = nullptr;
    std::shared_ptr<string> profileRegion_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo> tenantAliasInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
