// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGADCONNECTORTRUSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGADCONNECTORTRUSTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ConfigADConnectorTrustRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigADConnectorTrustRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RdsLicenseDomain, rdsLicenseDomain_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TrustKey, trustKey_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigADConnectorTrustRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RdsLicenseDomain, rdsLicenseDomain_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TrustKey, trustKey_);
    };
    ConfigADConnectorTrustRequest() = default ;
    ConfigADConnectorTrustRequest(const ConfigADConnectorTrustRequest &) = default ;
    ConfigADConnectorTrustRequest(ConfigADConnectorTrustRequest &&) = default ;
    ConfigADConnectorTrustRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigADConnectorTrustRequest() = default ;
    ConfigADConnectorTrustRequest& operator=(const ConfigADConnectorTrustRequest &) = default ;
    ConfigADConnectorTrustRequest& operator=(ConfigADConnectorTrustRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->officeSiteId_ == nullptr
        && return this->rdsLicenseDomain_ == nullptr && return this->regionId_ == nullptr && return this->trustKey_ == nullptr; };
    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ConfigADConnectorTrustRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // rdsLicenseDomain Field Functions 
    bool hasRdsLicenseDomain() const { return this->rdsLicenseDomain_ != nullptr;};
    void deleteRdsLicenseDomain() { this->rdsLicenseDomain_ = nullptr;};
    inline bool rdsLicenseDomain() const { DARABONBA_PTR_GET_DEFAULT(rdsLicenseDomain_, false) };
    inline ConfigADConnectorTrustRequest& setRdsLicenseDomain(bool rdsLicenseDomain) { DARABONBA_PTR_SET_VALUE(rdsLicenseDomain_, rdsLicenseDomain) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigADConnectorTrustRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // trustKey Field Functions 
    bool hasTrustKey() const { return this->trustKey_ != nullptr;};
    void deleteTrustKey() { this->trustKey_ = nullptr;};
    inline string trustKey() const { DARABONBA_PTR_GET_DEFAULT(trustKey_, "") };
    inline ConfigADConnectorTrustRequest& setTrustKey(string trustKey) { DARABONBA_PTR_SET_VALUE(trustKey_, trustKey) };


  protected:
    // The ID of the enterprise AD office network.
    // 
    // This parameter is required.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // Specifies whether to configure a trust password for the Remote Desktop Services (RDS) License Domain of the enterprise AD office network.
    // 
    // Valid values:
    // 
    // *   true: configures a trust password for the RDS License Domain of the AD office network.
    // 
    // *   false: configures a trust password for a regular enterprise AD office network.
    std::shared_ptr<bool> rdsLicenseDomain_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The trust password. You can specify the password when you configure a trust relationship between the AD domain and the ecd.acs domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> trustKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
