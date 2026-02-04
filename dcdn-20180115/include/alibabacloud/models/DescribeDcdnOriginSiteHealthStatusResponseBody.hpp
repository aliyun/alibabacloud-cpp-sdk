// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNORIGINSITEHEALTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNORIGINSITEHEALTHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnOriginSiteHealthStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnOriginSiteHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OriginSiteStatus, originSiteStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnOriginSiteHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OriginSiteStatus, originSiteStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnOriginSiteHealthStatusResponseBody() = default ;
    DescribeDcdnOriginSiteHealthStatusResponseBody(const DescribeDcdnOriginSiteHealthStatusResponseBody &) = default ;
    DescribeDcdnOriginSiteHealthStatusResponseBody(DescribeDcdnOriginSiteHealthStatusResponseBody &&) = default ;
    DescribeDcdnOriginSiteHealthStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnOriginSiteHealthStatusResponseBody() = default ;
    DescribeDcdnOriginSiteHealthStatusResponseBody& operator=(const DescribeDcdnOriginSiteHealthStatusResponseBody &) = default ;
    DescribeDcdnOriginSiteHealthStatusResponseBody& operator=(DescribeDcdnOriginSiteHealthStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OriginSiteStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OriginSiteStatus& obj) { 
        DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
        DARABONBA_PTR_TO_JSON(Host, host_);
      };
      friend void from_json(const Darabonba::Json& j, OriginSiteStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
      };
      OriginSiteStatus() = default ;
      OriginSiteStatus(const OriginSiteStatus &) = default ;
      OriginSiteStatus(OriginSiteStatus &&) = default ;
      OriginSiteStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OriginSiteStatus() = default ;
      OriginSiteStatus& operator=(const OriginSiteStatus &) = default ;
      OriginSiteStatus& operator=(OriginSiteStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->healthStatus_ == nullptr
        && this->host_ == nullptr; };
      // healthStatus Field Functions 
      bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
      void deleteHealthStatus() { this->healthStatus_ = nullptr;};
      inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
      inline OriginSiteStatus& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline OriginSiteStatus& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    protected:
      // The health status of the origin server. Each point of presence (POP) periodically initiates a probe request to the configured origin domain name. If the POP receives a response from the origin server in 5 seconds, the probe is considered successful. After the probe data for each POP is collected, the health status of the origin server is calculated based on the proportion of successful probes. Valid values:
      // 
      // *   unknown: The probe data of the origin server is not obtained because the configurations of the origin server have been changed recently. Try again later.
      // *   healthy: The proportion of successful probes is higher than 80%.
      // *   degraded: The proportion of successful probes is higher than 0% and lower than or equal to 80%.
      // *   critical: All probing requests to the origin server failed.
      shared_ptr<string> healthStatus_ {};
      // The origin domain name that you configured in the DCDN console, which can be an IPv4 address, IPv6 address, common domain name, or Object Storage Service (OSS) domain name.
      shared_ptr<string> host_ {};
    };

    virtual bool empty() const override { return this->originSiteStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // originSiteStatus Field Functions 
    bool hasOriginSiteStatus() const { return this->originSiteStatus_ != nullptr;};
    void deleteOriginSiteStatus() { this->originSiteStatus_ = nullptr;};
    inline const vector<DescribeDcdnOriginSiteHealthStatusResponseBody::OriginSiteStatus> & getOriginSiteStatus() const { DARABONBA_PTR_GET_CONST(originSiteStatus_, vector<DescribeDcdnOriginSiteHealthStatusResponseBody::OriginSiteStatus>) };
    inline vector<DescribeDcdnOriginSiteHealthStatusResponseBody::OriginSiteStatus> getOriginSiteStatus() { DARABONBA_PTR_GET(originSiteStatus_, vector<DescribeDcdnOriginSiteHealthStatusResponseBody::OriginSiteStatus>) };
    inline DescribeDcdnOriginSiteHealthStatusResponseBody& setOriginSiteStatus(const vector<DescribeDcdnOriginSiteHealthStatusResponseBody::OriginSiteStatus> & originSiteStatus) { DARABONBA_PTR_SET_VALUE(originSiteStatus_, originSiteStatus) };
    inline DescribeDcdnOriginSiteHealthStatusResponseBody& setOriginSiteStatus(vector<DescribeDcdnOriginSiteHealthStatusResponseBody::OriginSiteStatus> && originSiteStatus) { DARABONBA_PTR_SET_RVALUE(originSiteStatus_, originSiteStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnOriginSiteHealthStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the origin server of the accelerated domain name.
    shared_ptr<vector<DescribeDcdnOriginSiteHealthStatusResponseBody::OriginSiteStatus>> originSiteStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
