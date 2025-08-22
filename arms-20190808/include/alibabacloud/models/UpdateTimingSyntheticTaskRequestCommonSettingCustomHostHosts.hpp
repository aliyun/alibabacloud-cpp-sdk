// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTCOMMONSETTINGCUSTOMHOSTHOSTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTCOMMONSETTINGCUSTOMHOSTHOSTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
    };
    UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts() = default ;
    UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts(const UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts &) = default ;
    UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts(UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts &&) = default ;
    UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts() = default ;
    UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts& operator=(const UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts &) = default ;
    UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts& operator=(UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->ipType_ != nullptr && this->ips_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline int32_t ipType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, 0) };
    inline UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts& setIpType(int32_t ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> ips() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline UpdateTimingSyntheticTaskRequestCommonSettingCustomHostHosts& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


  protected:
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The IP version. Valid values:
    // 
    // *   0: A version is automatically selected.
    // *   1: IPv4
    // *   2: IPv6
    std::shared_ptr<int32_t> ipType_ = nullptr;
    // The list of IP addresses.
    std::shared_ptr<vector<string>> ips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
