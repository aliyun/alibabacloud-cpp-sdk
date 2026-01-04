// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceDetails, instanceDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceDetails, instanceDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceDetailsResponseBody() = default ;
    DescribeInstanceDetailsResponseBody(const DescribeInstanceDetailsResponseBody &) = default ;
    DescribeInstanceDetailsResponseBody(DescribeInstanceDetailsResponseBody &&) = default ;
    DescribeInstanceDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDetailsResponseBody() = default ;
    DescribeInstanceDetailsResponseBody& operator=(const DescribeInstanceDetailsResponseBody &) = default ;
    DescribeInstanceDetailsResponseBody& operator=(DescribeInstanceDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceDetails& obj) { 
        DARABONBA_PTR_TO_JSON(EipInfos, eipInfos_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Line, line_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(EipInfos, eipInfos_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Line, line_);
      };
      InstanceDetails() = default ;
      InstanceDetails(const InstanceDetails &) = default ;
      InstanceDetails(InstanceDetails &&) = default ;
      InstanceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceDetails() = default ;
      InstanceDetails& operator=(const InstanceDetails &) = default ;
      InstanceDetails& operator=(InstanceDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EipInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EipInfos& obj) { 
          DARABONBA_PTR_TO_JSON(CertConfigured, certConfigured_);
          DARABONBA_PTR_TO_JSON(Eip, eip_);
          DARABONBA_PTR_TO_JSON(FunctionVersion, functionVersion_);
          DARABONBA_PTR_TO_JSON(IpMode, ipMode_);
          DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_TO_JSON(Ssl13Enabled, ssl13Enabled_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TlsVersion, tlsVersion_);
        };
        friend void from_json(const Darabonba::Json& j, EipInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(CertConfigured, certConfigured_);
          DARABONBA_PTR_FROM_JSON(Eip, eip_);
          DARABONBA_PTR_FROM_JSON(FunctionVersion, functionVersion_);
          DARABONBA_PTR_FROM_JSON(IpMode, ipMode_);
          DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_FROM_JSON(Ssl13Enabled, ssl13Enabled_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TlsVersion, tlsVersion_);
        };
        EipInfos() = default ;
        EipInfos(const EipInfos &) = default ;
        EipInfos(EipInfos &&) = default ;
        EipInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EipInfos() = default ;
        EipInfos& operator=(const EipInfos &) = default ;
        EipInfos& operator=(EipInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->certConfigured_ == nullptr
        && this->eip_ == nullptr && this->functionVersion_ == nullptr && this->ipMode_ == nullptr && this->ipVersion_ == nullptr && this->ssl13Enabled_ == nullptr
        && this->status_ == nullptr && this->tlsVersion_ == nullptr; };
        // certConfigured Field Functions 
        bool hasCertConfigured() const { return this->certConfigured_ != nullptr;};
        void deleteCertConfigured() { this->certConfigured_ = nullptr;};
        inline bool getCertConfigured() const { DARABONBA_PTR_GET_DEFAULT(certConfigured_, false) };
        inline EipInfos& setCertConfigured(bool certConfigured) { DARABONBA_PTR_SET_VALUE(certConfigured_, certConfigured) };


        // eip Field Functions 
        bool hasEip() const { return this->eip_ != nullptr;};
        void deleteEip() { this->eip_ = nullptr;};
        inline string getEip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
        inline EipInfos& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


        // functionVersion Field Functions 
        bool hasFunctionVersion() const { return this->functionVersion_ != nullptr;};
        void deleteFunctionVersion() { this->functionVersion_ = nullptr;};
        inline string getFunctionVersion() const { DARABONBA_PTR_GET_DEFAULT(functionVersion_, "") };
        inline EipInfos& setFunctionVersion(string functionVersion) { DARABONBA_PTR_SET_VALUE(functionVersion_, functionVersion) };


        // ipMode Field Functions 
        bool hasIpMode() const { return this->ipMode_ != nullptr;};
        void deleteIpMode() { this->ipMode_ = nullptr;};
        inline string getIpMode() const { DARABONBA_PTR_GET_DEFAULT(ipMode_, "") };
        inline EipInfos& setIpMode(string ipMode) { DARABONBA_PTR_SET_VALUE(ipMode_, ipMode) };


        // ipVersion Field Functions 
        bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
        void deleteIpVersion() { this->ipVersion_ = nullptr;};
        inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
        inline EipInfos& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


        // ssl13Enabled Field Functions 
        bool hasSsl13Enabled() const { return this->ssl13Enabled_ != nullptr;};
        void deleteSsl13Enabled() { this->ssl13Enabled_ = nullptr;};
        inline bool getSsl13Enabled() const { DARABONBA_PTR_GET_DEFAULT(ssl13Enabled_, false) };
        inline EipInfos& setSsl13Enabled(bool ssl13Enabled) { DARABONBA_PTR_SET_VALUE(ssl13Enabled_, ssl13Enabled) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline EipInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tlsVersion Field Functions 
        bool hasTlsVersion() const { return this->tlsVersion_ != nullptr;};
        void deleteTlsVersion() { this->tlsVersion_ = nullptr;};
        inline string getTlsVersion() const { DARABONBA_PTR_GET_DEFAULT(tlsVersion_, "") };
        inline EipInfos& setTlsVersion(string tlsVersion) { DARABONBA_PTR_SET_VALUE(tlsVersion_, tlsVersion) };


      protected:
        // Indicates whether a custom certificate is configured.
        shared_ptr<bool> certConfigured_ {};
        // The IP address of the instance.
        shared_ptr<string> eip_ {};
        // The type of the instance.
        shared_ptr<string> functionVersion_ {};
        // The IP address-based forwarding mode of the instance. Valid values:
        // 
        // *   **fnat**: Requests from IPv4 addresses are forwarded to origin servers that use IPv4 addresses and requests from IPv6 addresses are forwarded to origin servers that use IPv6 addresses.
        // *   **v6tov4**: All requests are forwarded to origin servers that use IPv4 addresses.
        shared_ptr<string> ipMode_ {};
        // The IP version of the protocol. Valid values:
        // 
        // *   **Ipv4**: IPv4
        // *   **Ipv6**: IPv6
        shared_ptr<string> ipVersion_ {};
        // Indicates whether the TLS 1.3 version is supported.
        shared_ptr<bool> ssl13Enabled_ {};
        // The status of the instance. Valid values:
        // 
        // *   **normal**: indicates that the instance is normal.
        // *   **expired**: indicates that the instance expired.
        // *   **defense**: indicates that traffic scrubbing is performed on the asset that is protected by the instance.
        // *   **blackhole**: indicates that blackhole filtering is triggered for the asset that is protected by the instance.
        // *   **punished**: indicates that the instance is in penalty.
        shared_ptr<string> status_ {};
        // The Transport Layer Security (TLS) version that is configured.
        shared_ptr<string> tlsVersion_ {};
      };

      virtual bool empty() const override { return this->eipInfos_ == nullptr
        && this->instanceId_ == nullptr && this->line_ == nullptr; };
      // eipInfos Field Functions 
      bool hasEipInfos() const { return this->eipInfos_ != nullptr;};
      void deleteEipInfos() { this->eipInfos_ = nullptr;};
      inline const vector<InstanceDetails::EipInfos> & getEipInfos() const { DARABONBA_PTR_GET_CONST(eipInfos_, vector<InstanceDetails::EipInfos>) };
      inline vector<InstanceDetails::EipInfos> getEipInfos() { DARABONBA_PTR_GET(eipInfos_, vector<InstanceDetails::EipInfos>) };
      inline InstanceDetails& setEipInfos(const vector<InstanceDetails::EipInfos> & eipInfos) { DARABONBA_PTR_SET_VALUE(eipInfos_, eipInfos) };
      inline InstanceDetails& setEipInfos(vector<InstanceDetails::EipInfos> && eipInfos) { DARABONBA_PTR_SET_RVALUE(eipInfos_, eipInfos) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceDetails& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // line Field Functions 
      bool hasLine() const { return this->line_ != nullptr;};
      void deleteLine() { this->line_ = nullptr;};
      inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
      inline InstanceDetails& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    protected:
      // The IP address information about the Anti-DDoS Proxy instance.
      shared_ptr<vector<InstanceDetails::EipInfos>> eipInfos_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The protection line of the instance.
      shared_ptr<string> line_ {};
    };

    virtual bool empty() const override { return this->instanceDetails_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceDetails Field Functions 
    bool hasInstanceDetails() const { return this->instanceDetails_ != nullptr;};
    void deleteInstanceDetails() { this->instanceDetails_ = nullptr;};
    inline const vector<DescribeInstanceDetailsResponseBody::InstanceDetails> & getInstanceDetails() const { DARABONBA_PTR_GET_CONST(instanceDetails_, vector<DescribeInstanceDetailsResponseBody::InstanceDetails>) };
    inline vector<DescribeInstanceDetailsResponseBody::InstanceDetails> getInstanceDetails() { DARABONBA_PTR_GET(instanceDetails_, vector<DescribeInstanceDetailsResponseBody::InstanceDetails>) };
    inline DescribeInstanceDetailsResponseBody& setInstanceDetails(const vector<DescribeInstanceDetailsResponseBody::InstanceDetails> & instanceDetails) { DARABONBA_PTR_SET_VALUE(instanceDetails_, instanceDetails) };
    inline DescribeInstanceDetailsResponseBody& setInstanceDetails(vector<DescribeInstanceDetailsResponseBody::InstanceDetails> && instanceDetails) { DARABONBA_PTR_SET_RVALUE(instanceDetails_, instanceDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IP address and ISP line information about the Anti-DDoS Proxy instance.
    shared_ptr<vector<DescribeInstanceDetailsResponseBody::InstanceDetails>> instanceDetails_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
