// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCEACCESSPORTDETAILSRESPONSEBODYACCESSPORTDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCEACCESSPORTDETAILSRESPONSEBODYACCESSPORTDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates.hpp>
#include <alibabacloud/models/DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsLogHeaders.hpp>
#include <alibabacloud/models/DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_TO_JSON(CloudResourceId, cloudResourceId_);
      DARABONBA_PTR_TO_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_TO_JSON(EnableTLSv3, enableTLSv3_);
      DARABONBA_PTR_TO_JSON(Http2Enabled, http2Enabled_);
      DARABONBA_PTR_TO_JSON(Keepalive, keepalive_);
      DARABONBA_PTR_TO_JSON(KeepaliveRequests, keepaliveRequests_);
      DARABONBA_PTR_TO_JSON(KeepaliveTimeout, keepaliveTimeout_);
      DARABONBA_PTR_TO_JSON(LogHeaders, logHeaders_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(ReadTimeout, readTimeout_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_TO_JSON(SubStatusDetails, subStatusDetails_);
      DARABONBA_PTR_TO_JSON(TLSVersion, TLSVersion_);
      DARABONBA_PTR_TO_JSON(WriteTimeout, writeTimeout_);
      DARABONBA_PTR_TO_JSON(XffHeaderMode, xffHeaderMode_);
      DARABONBA_PTR_TO_JSON(XffHeaders, xffHeaders_);
      DARABONBA_PTR_TO_JSON(XffProto, xffProto_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_FROM_JSON(CloudResourceId, cloudResourceId_);
      DARABONBA_PTR_FROM_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_FROM_JSON(EnableTLSv3, enableTLSv3_);
      DARABONBA_PTR_FROM_JSON(Http2Enabled, http2Enabled_);
      DARABONBA_PTR_FROM_JSON(Keepalive, keepalive_);
      DARABONBA_PTR_FROM_JSON(KeepaliveRequests, keepaliveRequests_);
      DARABONBA_PTR_FROM_JSON(KeepaliveTimeout, keepaliveTimeout_);
      DARABONBA_PTR_FROM_JSON(LogHeaders, logHeaders_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(ReadTimeout, readTimeout_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_FROM_JSON(SubStatusDetails, subStatusDetails_);
      DARABONBA_PTR_FROM_JSON(TLSVersion, TLSVersion_);
      DARABONBA_PTR_FROM_JSON(WriteTimeout, writeTimeout_);
      DARABONBA_PTR_FROM_JSON(XffHeaderMode, xffHeaderMode_);
      DARABONBA_PTR_FROM_JSON(XffHeaders, xffHeaders_);
      DARABONBA_PTR_FROM_JSON(XffProto, xffProto_);
    };
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails() = default ;
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails(const DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails &) = default ;
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails(DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails &&) = default ;
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails() = default ;
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& operator=(const DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails &) = default ;
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& operator=(DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificates_ == nullptr
        && return this->cipherSuite_ == nullptr && return this->cloudResourceId_ == nullptr && return this->customCiphers_ == nullptr && return this->enableTLSv3_ == nullptr && return this->http2Enabled_ == nullptr
        && return this->keepalive_ == nullptr && return this->keepaliveRequests_ == nullptr && return this->keepaliveTimeout_ == nullptr && return this->logHeaders_ == nullptr && return this->ownerUserId_ == nullptr
        && return this->port_ == nullptr && return this->protocol_ == nullptr && return this->readTimeout_ == nullptr && return this->status_ == nullptr && return this->subStatus_ == nullptr
        && return this->subStatusDetails_ == nullptr && return this->TLSVersion_ == nullptr && return this->writeTimeout_ == nullptr && return this->xffHeaderMode_ == nullptr && return this->xffHeaders_ == nullptr
        && return this->xffProto_ == nullptr; };
    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates> & certificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates>) };
    inline vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates> certificates() { DARABONBA_PTR_GET(certificates_, vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates>) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setCertificates(const vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setCertificates(vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // cipherSuite Field Functions 
    bool hasCipherSuite() const { return this->cipherSuite_ != nullptr;};
    void deleteCipherSuite() { this->cipherSuite_ = nullptr;};
    inline int32_t cipherSuite() const { DARABONBA_PTR_GET_DEFAULT(cipherSuite_, 0) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setCipherSuite(int32_t cipherSuite) { DARABONBA_PTR_SET_VALUE(cipherSuite_, cipherSuite) };


    // cloudResourceId Field Functions 
    bool hasCloudResourceId() const { return this->cloudResourceId_ != nullptr;};
    void deleteCloudResourceId() { this->cloudResourceId_ = nullptr;};
    inline string cloudResourceId() const { DARABONBA_PTR_GET_DEFAULT(cloudResourceId_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setCloudResourceId(string cloudResourceId) { DARABONBA_PTR_SET_VALUE(cloudResourceId_, cloudResourceId) };


    // customCiphers Field Functions 
    bool hasCustomCiphers() const { return this->customCiphers_ != nullptr;};
    void deleteCustomCiphers() { this->customCiphers_ = nullptr;};
    inline const vector<string> & customCiphers() const { DARABONBA_PTR_GET_CONST(customCiphers_, vector<string>) };
    inline vector<string> customCiphers() { DARABONBA_PTR_GET(customCiphers_, vector<string>) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setCustomCiphers(const vector<string> & customCiphers) { DARABONBA_PTR_SET_VALUE(customCiphers_, customCiphers) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setCustomCiphers(vector<string> && customCiphers) { DARABONBA_PTR_SET_RVALUE(customCiphers_, customCiphers) };


    // enableTLSv3 Field Functions 
    bool hasEnableTLSv3() const { return this->enableTLSv3_ != nullptr;};
    void deleteEnableTLSv3() { this->enableTLSv3_ = nullptr;};
    inline bool enableTLSv3() const { DARABONBA_PTR_GET_DEFAULT(enableTLSv3_, false) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setEnableTLSv3(bool enableTLSv3) { DARABONBA_PTR_SET_VALUE(enableTLSv3_, enableTLSv3) };


    // http2Enabled Field Functions 
    bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
    void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
    inline bool http2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


    // keepalive Field Functions 
    bool hasKeepalive() const { return this->keepalive_ != nullptr;};
    void deleteKeepalive() { this->keepalive_ = nullptr;};
    inline bool keepalive() const { DARABONBA_PTR_GET_DEFAULT(keepalive_, false) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setKeepalive(bool keepalive) { DARABONBA_PTR_SET_VALUE(keepalive_, keepalive) };


    // keepaliveRequests Field Functions 
    bool hasKeepaliveRequests() const { return this->keepaliveRequests_ != nullptr;};
    void deleteKeepaliveRequests() { this->keepaliveRequests_ = nullptr;};
    inline int32_t keepaliveRequests() const { DARABONBA_PTR_GET_DEFAULT(keepaliveRequests_, 0) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setKeepaliveRequests(int32_t keepaliveRequests) { DARABONBA_PTR_SET_VALUE(keepaliveRequests_, keepaliveRequests) };


    // keepaliveTimeout Field Functions 
    bool hasKeepaliveTimeout() const { return this->keepaliveTimeout_ != nullptr;};
    void deleteKeepaliveTimeout() { this->keepaliveTimeout_ = nullptr;};
    inline int32_t keepaliveTimeout() const { DARABONBA_PTR_GET_DEFAULT(keepaliveTimeout_, 0) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setKeepaliveTimeout(int32_t keepaliveTimeout) { DARABONBA_PTR_SET_VALUE(keepaliveTimeout_, keepaliveTimeout) };


    // logHeaders Field Functions 
    bool hasLogHeaders() const { return this->logHeaders_ != nullptr;};
    void deleteLogHeaders() { this->logHeaders_ = nullptr;};
    inline const vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsLogHeaders> & logHeaders() const { DARABONBA_PTR_GET_CONST(logHeaders_, vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsLogHeaders>) };
    inline vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsLogHeaders> logHeaders() { DARABONBA_PTR_GET(logHeaders_, vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsLogHeaders>) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setLogHeaders(const vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsLogHeaders> & logHeaders) { DARABONBA_PTR_SET_VALUE(logHeaders_, logHeaders) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setLogHeaders(vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsLogHeaders> && logHeaders) { DARABONBA_PTR_SET_RVALUE(logHeaders_, logHeaders) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // readTimeout Field Functions 
    bool hasReadTimeout() const { return this->readTimeout_ != nullptr;};
    void deleteReadTimeout() { this->readTimeout_ = nullptr;};
    inline int32_t readTimeout() const { DARABONBA_PTR_GET_DEFAULT(readTimeout_, 0) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setReadTimeout(int32_t readTimeout) { DARABONBA_PTR_SET_VALUE(readTimeout_, readTimeout) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline string subStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


    // subStatusDetails Field Functions 
    bool hasSubStatusDetails() const { return this->subStatusDetails_ != nullptr;};
    void deleteSubStatusDetails() { this->subStatusDetails_ = nullptr;};
    inline const vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails> & subStatusDetails() const { DARABONBA_PTR_GET_CONST(subStatusDetails_, vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails>) };
    inline vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails> subStatusDetails() { DARABONBA_PTR_GET(subStatusDetails_, vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails>) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setSubStatusDetails(const vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails> & subStatusDetails) { DARABONBA_PTR_SET_VALUE(subStatusDetails_, subStatusDetails) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setSubStatusDetails(vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails> && subStatusDetails) { DARABONBA_PTR_SET_RVALUE(subStatusDetails_, subStatusDetails) };


    // TLSVersion Field Functions 
    bool hasTLSVersion() const { return this->TLSVersion_ != nullptr;};
    void deleteTLSVersion() { this->TLSVersion_ = nullptr;};
    inline string TLSVersion() const { DARABONBA_PTR_GET_DEFAULT(TLSVersion_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setTLSVersion(string TLSVersion) { DARABONBA_PTR_SET_VALUE(TLSVersion_, TLSVersion) };


    // writeTimeout Field Functions 
    bool hasWriteTimeout() const { return this->writeTimeout_ != nullptr;};
    void deleteWriteTimeout() { this->writeTimeout_ = nullptr;};
    inline int32_t writeTimeout() const { DARABONBA_PTR_GET_DEFAULT(writeTimeout_, 0) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setWriteTimeout(int32_t writeTimeout) { DARABONBA_PTR_SET_VALUE(writeTimeout_, writeTimeout) };


    // xffHeaderMode Field Functions 
    bool hasXffHeaderMode() const { return this->xffHeaderMode_ != nullptr;};
    void deleteXffHeaderMode() { this->xffHeaderMode_ = nullptr;};
    inline int32_t xffHeaderMode() const { DARABONBA_PTR_GET_DEFAULT(xffHeaderMode_, 0) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setXffHeaderMode(int32_t xffHeaderMode) { DARABONBA_PTR_SET_VALUE(xffHeaderMode_, xffHeaderMode) };


    // xffHeaders Field Functions 
    bool hasXffHeaders() const { return this->xffHeaders_ != nullptr;};
    void deleteXffHeaders() { this->xffHeaders_ = nullptr;};
    inline const vector<string> & xffHeaders() const { DARABONBA_PTR_GET_CONST(xffHeaders_, vector<string>) };
    inline vector<string> xffHeaders() { DARABONBA_PTR_GET(xffHeaders_, vector<string>) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setXffHeaders(const vector<string> & xffHeaders) { DARABONBA_PTR_SET_VALUE(xffHeaders_, xffHeaders) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setXffHeaders(vector<string> && xffHeaders) { DARABONBA_PTR_SET_RVALUE(xffHeaders_, xffHeaders) };


    // xffProto Field Functions 
    bool hasXffProto() const { return this->xffProto_ != nullptr;};
    void deleteXffProto() { this->xffProto_ = nullptr;};
    inline bool xffProto() const { DARABONBA_PTR_GET_DEFAULT(xffProto_, false) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetails& setXffProto(bool xffProto) { DARABONBA_PTR_SET_VALUE(xffProto_, xffProto) };


  protected:
    // The certificates that are associated with the ports of cloud services.
    std::shared_ptr<vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates>> certificates_ = nullptr;
    // The type of the cipher suites. Valid values:
    // 
    // *   **1**: all cipher suites.
    // *   **2**: strong cipher suites.
    // *   **99**: custom cipher suites.
    std::shared_ptr<int32_t> cipherSuite_ = nullptr;
    std::shared_ptr<string> cloudResourceId_ = nullptr;
    // The custom cipher suites that you want to add. This parameter is available only if you set **CipherSuite** to **99**.
    std::shared_ptr<vector<string>> customCiphers_ = nullptr;
    // Indicates whether to support TLS 1.3. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableTLSv3_ = nullptr;
    // Indicates whether to enable HTTP/2. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> http2Enabled_ = nullptr;
    // Indicates whether to enable the persistent connection feature. Valid values:
    // 
    // *   **true** (default)
    // *   **false:**
    std::shared_ptr<bool> keepalive_ = nullptr;
    // The number of reused persistent connections. Valid values: 60 to 1000.
    // 
    // >  This parameter specifies the number of requests that reuse persistent connections after you enable the persistent connection feature.
    std::shared_ptr<int32_t> keepaliveRequests_ = nullptr;
    // The timeout period for idle persistent connections. Valid values: 10 to 3600. Default value: 15. Unit: seconds.
    // 
    // >  If no new requests are initiated over the idle persistent connection within the specified timeout period, the connection is closed.
    std::shared_ptr<int32_t> keepaliveTimeout_ = nullptr;
    // The custom header field that you want to use to label requests that are processed by WAF.
    // 
    // >  This parameter is returned only when the traffic marking feature is enabled for the domain name.
    std::shared_ptr<vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsLogHeaders>> logHeaders_ = nullptr;
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<string> ownerUserId_ = nullptr;
    // The port of the cloud service that is added to WAF.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The type of the protocol. Valid values:
    // 
    // *   **http**
    // *   **https**
    std::shared_ptr<string> protocol_ = nullptr;
    // The timeout period for read connections. Unit: seconds. Valid values: 1 to 3600.
    std::shared_ptr<int32_t> readTimeout_ = nullptr;
    // The status of the domain name. Valid values:
    // 
    // *   **1**: indicates that the port is available.
    // *   **2**: indicates that the port is being created.
    // *   **3**: indicates that the port is being modified.
    // *   **4**: indicates that the port is being released.
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> subStatus_ = nullptr;
    std::shared_ptr<vector<Models::DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails>> subStatusDetails_ = nullptr;
    // The version of the Transport Layer Security (TLS) protocol. Valid values:
    // 
    // *   **tlsv1**
    // *   **tlsv1.1**
    // *   **tlsv1.2**
    std::shared_ptr<string> TLSVersion_ = nullptr;
    // The timeout period for write connections. Unit: seconds. Valid values: 1 to 3600.
    std::shared_ptr<int32_t> writeTimeout_ = nullptr;
    // The method that WAF uses to obtain the originating IP address of a client. Valid values:
    // 
    // *   **0**: No Layer 7 proxies are deployed in front of WAF.
    // *   **1**: WAF reads the first value of the X-Forwarded-For (XFF) header field as the originating IP address of the client.
    // *   **2**: WAF reads the value of a custom header field as the originating IP address of the client.
    std::shared_ptr<int32_t> xffHeaderMode_ = nullptr;
    // The custom header field that is used to obtain the originating IP address of a client. Specify the value in the ["header1","header2",...] format.
    // 
    // >  This parameter is required only if you set **XffHeaderMode** to 2.
    std::shared_ptr<vector<string>> xffHeaders_ = nullptr;
    // Indicates whether to use the X-Forward-For-Proto header to identify the protocol used by WAF to forward requests to the origin server. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> xffProto_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
