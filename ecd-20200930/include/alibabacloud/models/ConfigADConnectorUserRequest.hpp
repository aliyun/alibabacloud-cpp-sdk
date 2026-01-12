// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGADCONNECTORUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGADCONNECTORUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ConfigADConnectorUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigADConnectorUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainPassword, domainPassword_);
      DARABONBA_PTR_TO_JSON(DomainUserName, domainUserName_);
      DARABONBA_PTR_TO_JSON(OUName, OUName_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigADConnectorUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainPassword, domainPassword_);
      DARABONBA_PTR_FROM_JSON(DomainUserName, domainUserName_);
      DARABONBA_PTR_FROM_JSON(OUName, OUName_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ConfigADConnectorUserRequest() = default ;
    ConfigADConnectorUserRequest(const ConfigADConnectorUserRequest &) = default ;
    ConfigADConnectorUserRequest(ConfigADConnectorUserRequest &&) = default ;
    ConfigADConnectorUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigADConnectorUserRequest() = default ;
    ConfigADConnectorUserRequest& operator=(const ConfigADConnectorUserRequest &) = default ;
    ConfigADConnectorUserRequest& operator=(ConfigADConnectorUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainPassword_ == nullptr
        && this->domainUserName_ == nullptr && this->OUName_ == nullptr && this->officeSiteId_ == nullptr && this->regionId_ == nullptr; };
    // domainPassword Field Functions 
    bool hasDomainPassword() const { return this->domainPassword_ != nullptr;};
    void deleteDomainPassword() { this->domainPassword_ = nullptr;};
    inline string getDomainPassword() const { DARABONBA_PTR_GET_DEFAULT(domainPassword_, "") };
    inline ConfigADConnectorUserRequest& setDomainPassword(string domainPassword) { DARABONBA_PTR_SET_VALUE(domainPassword_, domainPassword) };


    // domainUserName Field Functions 
    bool hasDomainUserName() const { return this->domainUserName_ != nullptr;};
    void deleteDomainUserName() { this->domainUserName_ = nullptr;};
    inline string getDomainUserName() const { DARABONBA_PTR_GET_DEFAULT(domainUserName_, "") };
    inline ConfigADConnectorUserRequest& setDomainUserName(string domainUserName) { DARABONBA_PTR_SET_VALUE(domainUserName_, domainUserName) };


    // OUName Field Functions 
    bool hasOUName() const { return this->OUName_ != nullptr;};
    void deleteOUName() { this->OUName_ = nullptr;};
    inline string getOUName() const { DARABONBA_PTR_GET_DEFAULT(OUName_, "") };
    inline ConfigADConnectorUserRequest& setOUName(string OUName) { DARABONBA_PTR_SET_VALUE(OUName_, OUName) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ConfigADConnectorUserRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigADConnectorUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The password of the AD user that has the permissions to join computers to domains.
    // 
    // This parameter is required.
    shared_ptr<string> domainPassword_ {};
    // The username of the AD user that has the permissions to join computers to domains.
    // 
    // After the username is configured, the cloud desktops in the same AD workspace are joined to the specified OU.
    // 
    // This parameter is required.
    shared_ptr<string> domainUserName_ {};
    // The name of the OU in the AD domain. You can call the [ListUserAdOrganizationUnits](https://help.aliyun.com/document_detail/311259.html) to obtain the OU name.
    shared_ptr<string> OUName_ {};
    // The ID of the AD workspace.
    // 
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // The ID of the region.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
