// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNORIGINSITEHEALTHSTATUSRESPONSEBODYORIGINSITESTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNORIGINSITEHEALTHSTATUSRESPONSEBODYORIGINSITESTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus& obj) { 
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(Host, host_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
    };
    DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus() = default ;
    DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus(const DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus &) = default ;
    DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus(DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus &&) = default ;
    DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus() = default ;
    DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus& operator=(const DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus &) = default ;
    DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus& operator=(DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->healthStatus_ != nullptr
        && this->host_ != nullptr; };
    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DescribeDcdnOriginSiteHealthStatusResponseBodyOriginSiteStatus& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


  protected:
    // The health status of the origin server. Each point of presence (POP) periodically initiates a probe request to the configured origin domain name. If the POP receives a response from the origin server in 5 seconds, the probe is considered successful. After the probe data for each POP is collected, the health status of the origin server is calculated based on the proportion of successful probes. Valid values:
    // 
    // *   unknown: The probe data of the origin server is not obtained because the configurations of the origin server have been changed recently. Try again later.
    // *   healthy: The proportion of successful probes is higher than 80%.
    // *   degraded: The proportion of successful probes is higher than 0% and lower than or equal to 80%.
    // *   critical: All probing requests to the origin server failed.
    std::shared_ptr<string> healthStatus_ = nullptr;
    // The origin domain name that you configured in the DCDN console, which can be an IPv4 address, IPv6 address, common domain name, or Object Storage Service (OSS) domain name.
    std::shared_ptr<string> host_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
