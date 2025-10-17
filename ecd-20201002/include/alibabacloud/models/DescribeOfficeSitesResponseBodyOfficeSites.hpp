// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODYOFFICESITES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODYOFFICESITES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeOfficeSitesResponseBodyOfficeSites : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOfficeSitesResponseBodyOfficeSites& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_TO_JSON(DesktopVpcEndpoint, desktopVpcEndpoint_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
      DARABONBA_PTR_TO_JSON(SsoServiceUrl, ssoServiceUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOfficeSitesResponseBodyOfficeSites& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_FROM_JSON(DesktopVpcEndpoint, desktopVpcEndpoint_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
      DARABONBA_PTR_FROM_JSON(SsoServiceUrl, ssoServiceUrl_);
    };
    DescribeOfficeSitesResponseBodyOfficeSites() = default ;
    DescribeOfficeSitesResponseBodyOfficeSites(const DescribeOfficeSitesResponseBodyOfficeSites &) = default ;
    DescribeOfficeSitesResponseBodyOfficeSites(DescribeOfficeSitesResponseBodyOfficeSites &&) = default ;
    DescribeOfficeSitesResponseBodyOfficeSites(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOfficeSitesResponseBodyOfficeSites() = default ;
    DescribeOfficeSitesResponseBodyOfficeSites& operator=(const DescribeOfficeSitesResponseBodyOfficeSites &) = default ;
    DescribeOfficeSitesResponseBodyOfficeSites& operator=(DescribeOfficeSitesResponseBodyOfficeSites &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopAccessType_ == nullptr
        && return this->desktopVpcEndpoint_ == nullptr && return this->officeSiteId_ == nullptr && return this->officeSiteType_ == nullptr && return this->providerId_ == nullptr && return this->ssoServiceUrl_ == nullptr; };
    // desktopAccessType Field Functions 
    bool hasDesktopAccessType() const { return this->desktopAccessType_ != nullptr;};
    void deleteDesktopAccessType() { this->desktopAccessType_ = nullptr;};
    inline string desktopAccessType() const { DARABONBA_PTR_GET_DEFAULT(desktopAccessType_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setDesktopAccessType(string desktopAccessType) { DARABONBA_PTR_SET_VALUE(desktopAccessType_, desktopAccessType) };


    // desktopVpcEndpoint Field Functions 
    bool hasDesktopVpcEndpoint() const { return this->desktopVpcEndpoint_ != nullptr;};
    void deleteDesktopVpcEndpoint() { this->desktopVpcEndpoint_ = nullptr;};
    inline string desktopVpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(desktopVpcEndpoint_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setDesktopVpcEndpoint(string desktopVpcEndpoint) { DARABONBA_PTR_SET_VALUE(desktopVpcEndpoint_, desktopVpcEndpoint) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteType Field Functions 
    bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
    void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
    inline string officeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


    // providerId Field Functions 
    bool hasProviderId() const { return this->providerId_ != nullptr;};
    void deleteProviderId() { this->providerId_ = nullptr;};
    inline string providerId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


    // ssoServiceUrl Field Functions 
    bool hasSsoServiceUrl() const { return this->ssoServiceUrl_ != nullptr;};
    void deleteSsoServiceUrl() { this->ssoServiceUrl_ = nullptr;};
    inline string ssoServiceUrl() const { DARABONBA_PTR_GET_DEFAULT(ssoServiceUrl_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setSsoServiceUrl(string ssoServiceUrl) { DARABONBA_PTR_SET_VALUE(ssoServiceUrl_, ssoServiceUrl) };


  protected:
    std::shared_ptr<string> desktopAccessType_ = nullptr;
    std::shared_ptr<string> desktopVpcEndpoint_ = nullptr;
    std::shared_ptr<string> officeSiteId_ = nullptr;
    std::shared_ptr<string> officeSiteType_ = nullptr;
    std::shared_ptr<string> providerId_ = nullptr;
    std::shared_ptr<string> ssoServiceUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
