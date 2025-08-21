// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDETAILSRESPONSEBODYINSTANCEDETAILSEIPINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDETAILSRESPONSEBODYINSTANCEDETAILSEIPINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CertConfigured, certConfigured_);
      DARABONBA_PTR_TO_JSON(Eip, eip_);
      DARABONBA_PTR_TO_JSON(FunctionVersion, functionVersion_);
      DARABONBA_PTR_TO_JSON(IpMode, ipMode_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Ssl13Enabled, ssl13Enabled_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TlsVersion, tlsVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CertConfigured, certConfigured_);
      DARABONBA_PTR_FROM_JSON(Eip, eip_);
      DARABONBA_PTR_FROM_JSON(FunctionVersion, functionVersion_);
      DARABONBA_PTR_FROM_JSON(IpMode, ipMode_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Ssl13Enabled, ssl13Enabled_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TlsVersion, tlsVersion_);
    };
    DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos() = default ;
    DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos(const DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos &) = default ;
    DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos(DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos &&) = default ;
    DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos() = default ;
    DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos& operator=(const DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos &) = default ;
    DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos& operator=(DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certConfigured_ != nullptr
        && this->eip_ != nullptr && this->functionVersion_ != nullptr && this->ipMode_ != nullptr && this->ipVersion_ != nullptr && this->ssl13Enabled_ != nullptr
        && this->status_ != nullptr && this->tlsVersion_ != nullptr; };
    // certConfigured Field Functions 
    bool hasCertConfigured() const { return this->certConfigured_ != nullptr;};
    void deleteCertConfigured() { this->certConfigured_ = nullptr;};
    inline bool certConfigured() const { DARABONBA_PTR_GET_DEFAULT(certConfigured_, false) };
    inline DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos& setCertConfigured(bool certConfigured) { DARABONBA_PTR_SET_VALUE(certConfigured_, certConfigured) };


    // eip Field Functions 
    bool hasEip() const { return this->eip_ != nullptr;};
    void deleteEip() { this->eip_ = nullptr;};
    inline string eip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
    inline DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


    // functionVersion Field Functions 
    bool hasFunctionVersion() const { return this->functionVersion_ != nullptr;};
    void deleteFunctionVersion() { this->functionVersion_ = nullptr;};
    inline string functionVersion() const { DARABONBA_PTR_GET_DEFAULT(functionVersion_, "") };
    inline DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos& setFunctionVersion(string functionVersion) { DARABONBA_PTR_SET_VALUE(functionVersion_, functionVersion) };


    // ipMode Field Functions 
    bool hasIpMode() const { return this->ipMode_ != nullptr;};
    void deleteIpMode() { this->ipMode_ = nullptr;};
    inline string ipMode() const { DARABONBA_PTR_GET_DEFAULT(ipMode_, "") };
    inline DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos& setIpMode(string ipMode) { DARABONBA_PTR_SET_VALUE(ipMode_, ipMode) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // ssl13Enabled Field Functions 
    bool hasSsl13Enabled() const { return this->ssl13Enabled_ != nullptr;};
    void deleteSsl13Enabled() { this->ssl13Enabled_ = nullptr;};
    inline bool ssl13Enabled() const { DARABONBA_PTR_GET_DEFAULT(ssl13Enabled_, false) };
    inline DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos& setSsl13Enabled(bool ssl13Enabled) { DARABONBA_PTR_SET_VALUE(ssl13Enabled_, ssl13Enabled) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tlsVersion Field Functions 
    bool hasTlsVersion() const { return this->tlsVersion_ != nullptr;};
    void deleteTlsVersion() { this->tlsVersion_ = nullptr;};
    inline string tlsVersion() const { DARABONBA_PTR_GET_DEFAULT(tlsVersion_, "") };
    inline DescribeInstanceDetailsResponseBodyInstanceDetailsEipInfos& setTlsVersion(string tlsVersion) { DARABONBA_PTR_SET_VALUE(tlsVersion_, tlsVersion) };


  protected:
    // Indicates whether a custom certificate is configured.
    std::shared_ptr<bool> certConfigured_ = nullptr;
    // The IP address of the instance.
    std::shared_ptr<string> eip_ = nullptr;
    // The type of the instance.
    std::shared_ptr<string> functionVersion_ = nullptr;
    // The IP address-based forwarding mode of the instance. Valid values:
    // 
    // *   **fnat**: Requests from IPv4 addresses are forwarded to origin servers that use IPv4 addresses and requests from IPv6 addresses are forwarded to origin servers that use IPv6 addresses.
    // *   **v6tov4**: All requests are forwarded to origin servers that use IPv4 addresses.
    std::shared_ptr<string> ipMode_ = nullptr;
    // The IP version of the protocol. Valid values:
    // 
    // *   **Ipv4**: IPv4
    // *   **Ipv6**: IPv6
    std::shared_ptr<string> ipVersion_ = nullptr;
    // Indicates whether the TLS 1.3 version is supported.
    std::shared_ptr<bool> ssl13Enabled_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // *   **normal**: indicates that the instance is normal.
    // *   **expired**: indicates that the instance expired.
    // *   **defense**: indicates that traffic scrubbing is performed on the asset that is protected by the instance.
    // *   **blackhole**: indicates that blackhole filtering is triggered for the asset that is protected by the instance.
    // *   **punished**: indicates that the instance is in penalty.
    std::shared_ptr<string> status_ = nullptr;
    // The Transport Layer Security (TLS) version that is configured.
    std::shared_ptr<string> tlsVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
