// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOFFICESITEDNSINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOFFICESITEDNSINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyOfficeSiteDnsInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOfficeSiteDnsInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DnsAddress, dnsAddress_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOfficeSiteDnsInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsAddress, dnsAddress_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyOfficeSiteDnsInfoRequest() = default ;
    ModifyOfficeSiteDnsInfoRequest(const ModifyOfficeSiteDnsInfoRequest &) = default ;
    ModifyOfficeSiteDnsInfoRequest(ModifyOfficeSiteDnsInfoRequest &&) = default ;
    ModifyOfficeSiteDnsInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOfficeSiteDnsInfoRequest() = default ;
    ModifyOfficeSiteDnsInfoRequest& operator=(const ModifyOfficeSiteDnsInfoRequest &) = default ;
    ModifyOfficeSiteDnsInfoRequest& operator=(ModifyOfficeSiteDnsInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnsAddress_ == nullptr
        && return this->officeSiteId_ == nullptr && return this->regionId_ == nullptr; };
    // dnsAddress Field Functions 
    bool hasDnsAddress() const { return this->dnsAddress_ != nullptr;};
    void deleteDnsAddress() { this->dnsAddress_ = nullptr;};
    inline const vector<string> & dnsAddress() const { DARABONBA_PTR_GET_CONST(dnsAddress_, vector<string>) };
    inline vector<string> dnsAddress() { DARABONBA_PTR_GET(dnsAddress_, vector<string>) };
    inline ModifyOfficeSiteDnsInfoRequest& setDnsAddress(const vector<string> & dnsAddress) { DARABONBA_PTR_SET_VALUE(dnsAddress_, dnsAddress) };
    inline ModifyOfficeSiteDnsInfoRequest& setDnsAddress(vector<string> && dnsAddress) { DARABONBA_PTR_SET_RVALUE(dnsAddress_, dnsAddress) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ModifyOfficeSiteDnsInfoRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyOfficeSiteDnsInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IP addresses of the custom DNS servers. Up to 2 IP addresses can be specified.
    std::shared_ptr<vector<string>> dnsAddress_ = nullptr;
    // The office network ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The region ID of the instance. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
