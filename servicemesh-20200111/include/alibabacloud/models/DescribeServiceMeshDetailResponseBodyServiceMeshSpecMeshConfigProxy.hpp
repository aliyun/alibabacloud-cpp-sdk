// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGPROXY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGPROXY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLogFile, accessLogFile_);
      DARABONBA_PTR_TO_JSON(AccessLogFormat, accessLogFormat_);
      DARABONBA_PTR_TO_JSON(AccessLogServiceEnabled, accessLogServiceEnabled_);
      DARABONBA_PTR_TO_JSON(AccessLogServiceHost, accessLogServiceHost_);
      DARABONBA_PTR_TO_JSON(AccessLogServicePort, accessLogServicePort_);
      DARABONBA_PTR_TO_JSON(ClusterDomain, clusterDomain_);
      DARABONBA_PTR_TO_JSON(EnableDNSProxying, enableDNSProxying_);
      DARABONBA_PTR_TO_JSON(LimitCPU, limitCPU_);
      DARABONBA_PTR_TO_JSON(LimitMemory, limitMemory_);
      DARABONBA_PTR_TO_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_TO_JSON(RequestMemory, requestMemory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLogFile, accessLogFile_);
      DARABONBA_PTR_FROM_JSON(AccessLogFormat, accessLogFormat_);
      DARABONBA_PTR_FROM_JSON(AccessLogServiceEnabled, accessLogServiceEnabled_);
      DARABONBA_PTR_FROM_JSON(AccessLogServiceHost, accessLogServiceHost_);
      DARABONBA_PTR_FROM_JSON(AccessLogServicePort, accessLogServicePort_);
      DARABONBA_PTR_FROM_JSON(ClusterDomain, clusterDomain_);
      DARABONBA_PTR_FROM_JSON(EnableDNSProxying, enableDNSProxying_);
      DARABONBA_PTR_FROM_JSON(LimitCPU, limitCPU_);
      DARABONBA_PTR_FROM_JSON(LimitMemory, limitMemory_);
      DARABONBA_PTR_FROM_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_FROM_JSON(RequestMemory, requestMemory_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLogFile_ == nullptr
        && return this->accessLogFormat_ == nullptr && return this->accessLogServiceEnabled_ == nullptr && return this->accessLogServiceHost_ == nullptr && return this->accessLogServicePort_ == nullptr && return this->clusterDomain_ == nullptr
        && return this->enableDNSProxying_ == nullptr && return this->limitCPU_ == nullptr && return this->limitMemory_ == nullptr && return this->requestCPU_ == nullptr && return this->requestMemory_ == nullptr; };
    // accessLogFile Field Functions 
    bool hasAccessLogFile() const { return this->accessLogFile_ != nullptr;};
    void deleteAccessLogFile() { this->accessLogFile_ = nullptr;};
    inline string accessLogFile() const { DARABONBA_PTR_GET_DEFAULT(accessLogFile_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy& setAccessLogFile(string accessLogFile) { DARABONBA_PTR_SET_VALUE(accessLogFile_, accessLogFile) };


    // accessLogFormat Field Functions 
    bool hasAccessLogFormat() const { return this->accessLogFormat_ != nullptr;};
    void deleteAccessLogFormat() { this->accessLogFormat_ = nullptr;};
    inline string accessLogFormat() const { DARABONBA_PTR_GET_DEFAULT(accessLogFormat_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy& setAccessLogFormat(string accessLogFormat) { DARABONBA_PTR_SET_VALUE(accessLogFormat_, accessLogFormat) };


    // accessLogServiceEnabled Field Functions 
    bool hasAccessLogServiceEnabled() const { return this->accessLogServiceEnabled_ != nullptr;};
    void deleteAccessLogServiceEnabled() { this->accessLogServiceEnabled_ = nullptr;};
    inline bool accessLogServiceEnabled() const { DARABONBA_PTR_GET_DEFAULT(accessLogServiceEnabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy& setAccessLogServiceEnabled(bool accessLogServiceEnabled) { DARABONBA_PTR_SET_VALUE(accessLogServiceEnabled_, accessLogServiceEnabled) };


    // accessLogServiceHost Field Functions 
    bool hasAccessLogServiceHost() const { return this->accessLogServiceHost_ != nullptr;};
    void deleteAccessLogServiceHost() { this->accessLogServiceHost_ = nullptr;};
    inline string accessLogServiceHost() const { DARABONBA_PTR_GET_DEFAULT(accessLogServiceHost_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy& setAccessLogServiceHost(string accessLogServiceHost) { DARABONBA_PTR_SET_VALUE(accessLogServiceHost_, accessLogServiceHost) };


    // accessLogServicePort Field Functions 
    bool hasAccessLogServicePort() const { return this->accessLogServicePort_ != nullptr;};
    void deleteAccessLogServicePort() { this->accessLogServicePort_ = nullptr;};
    inline int32_t accessLogServicePort() const { DARABONBA_PTR_GET_DEFAULT(accessLogServicePort_, 0) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy& setAccessLogServicePort(int32_t accessLogServicePort) { DARABONBA_PTR_SET_VALUE(accessLogServicePort_, accessLogServicePort) };


    // clusterDomain Field Functions 
    bool hasClusterDomain() const { return this->clusterDomain_ != nullptr;};
    void deleteClusterDomain() { this->clusterDomain_ = nullptr;};
    inline string clusterDomain() const { DARABONBA_PTR_GET_DEFAULT(clusterDomain_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy& setClusterDomain(string clusterDomain) { DARABONBA_PTR_SET_VALUE(clusterDomain_, clusterDomain) };


    // enableDNSProxying Field Functions 
    bool hasEnableDNSProxying() const { return this->enableDNSProxying_ != nullptr;};
    void deleteEnableDNSProxying() { this->enableDNSProxying_ = nullptr;};
    inline bool enableDNSProxying() const { DARABONBA_PTR_GET_DEFAULT(enableDNSProxying_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy& setEnableDNSProxying(bool enableDNSProxying) { DARABONBA_PTR_SET_VALUE(enableDNSProxying_, enableDNSProxying) };


    // limitCPU Field Functions 
    bool hasLimitCPU() const { return this->limitCPU_ != nullptr;};
    void deleteLimitCPU() { this->limitCPU_ = nullptr;};
    inline string limitCPU() const { DARABONBA_PTR_GET_DEFAULT(limitCPU_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy& setLimitCPU(string limitCPU) { DARABONBA_PTR_SET_VALUE(limitCPU_, limitCPU) };


    // limitMemory Field Functions 
    bool hasLimitMemory() const { return this->limitMemory_ != nullptr;};
    void deleteLimitMemory() { this->limitMemory_ = nullptr;};
    inline string limitMemory() const { DARABONBA_PTR_GET_DEFAULT(limitMemory_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy& setLimitMemory(string limitMemory) { DARABONBA_PTR_SET_VALUE(limitMemory_, limitMemory) };


    // requestCPU Field Functions 
    bool hasRequestCPU() const { return this->requestCPU_ != nullptr;};
    void deleteRequestCPU() { this->requestCPU_ = nullptr;};
    inline string requestCPU() const { DARABONBA_PTR_GET_DEFAULT(requestCPU_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy& setRequestCPU(string requestCPU) { DARABONBA_PTR_SET_VALUE(requestCPU_, requestCPU) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline string requestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy& setRequestMemory(string requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


  protected:
    // The path to the file that stores the access logs of sidecar proxies.
    std::shared_ptr<string> accessLogFile_ = nullptr;
    // The format of the access logs of sidecar proxies.
    std::shared_ptr<string> accessLogFormat_ = nullptr;
    // Indicates whether gRPC Access Log Service (ALS) for Envoy is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> accessLogServiceEnabled_ = nullptr;
    // The endpoint of gRPC ALS for Envoy.
    std::shared_ptr<string> accessLogServiceHost_ = nullptr;
    // The port of gRPC ALS for Envoy.
    std::shared_ptr<int32_t> accessLogServicePort_ = nullptr;
    // The trusted domain.
    std::shared_ptr<string> clusterDomain_ = nullptr;
    // Indicates whether the Domain Name System (DNS) proxy feature is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enableDNSProxying_ = nullptr;
    // The maximum number of CPU cores.
    std::shared_ptr<string> limitCPU_ = nullptr;
    // The maximum size of the memory.
    std::shared_ptr<string> limitMemory_ = nullptr;
    // The number of CPU cores that are requested.
    std::shared_ptr<string> requestCPU_ = nullptr;
    // The size of the memory that is requested.
    std::shared_ptr<string> requestMemory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
