// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDIDPLISTBYLOGINIDENTIFIERRESPONSEBODYOFFICESITEINFO_HPP_
#define ALIBABACLOUD_MODELS_FINDIDPLISTBYLOGINIDENTIFIERRESPONSEBODYOFFICESITEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{
namespace Models
{
  class FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SsoServiceUrl, ssoServiceUrl_);
    };
    friend void from_json(const Darabonba::Json& j, FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SsoServiceUrl, ssoServiceUrl_);
    };
    FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo() = default ;
    FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo(const FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo &) = default ;
    FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo(FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo &&) = default ;
    FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo() = default ;
    FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo& operator=(const FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo &) = default ;
    FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo& operator=(FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessType_ == nullptr
        && return this->officeSiteId_ == nullptr && return this->providerId_ == nullptr && return this->regionId_ == nullptr && return this->ssoServiceUrl_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // providerId Field Functions 
    bool hasProviderId() const { return this->providerId_ != nullptr;};
    void deleteProviderId() { this->providerId_ = nullptr;};
    inline string providerId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ssoServiceUrl Field Functions 
    bool hasSsoServiceUrl() const { return this->ssoServiceUrl_ != nullptr;};
    void deleteSsoServiceUrl() { this->ssoServiceUrl_ = nullptr;};
    inline string ssoServiceUrl() const { DARABONBA_PTR_GET_DEFAULT(ssoServiceUrl_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo& setSsoServiceUrl(string ssoServiceUrl) { DARABONBA_PTR_SET_VALUE(ssoServiceUrl_, ssoServiceUrl) };


  protected:
    std::shared_ptr<string> accessType_ = nullptr;
    std::shared_ptr<string> officeSiteId_ = nullptr;
    std::shared_ptr<string> providerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> ssoServiceUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
