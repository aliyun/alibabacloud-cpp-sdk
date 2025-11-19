// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCEREQUESTLISTEN_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCEREQUESTLISTEN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyCloudResourceRequestListenCertificates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyCloudResourceRequestListen : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudResourceRequestListen& obj) { 
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_TO_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_TO_JSON(EnableTLSv3, enableTLSv3_);
      DARABONBA_PTR_TO_JSON(Http2Enabled, http2Enabled_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceProduct, resourceProduct_);
      DARABONBA_PTR_TO_JSON(TLSVersion, TLSVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudResourceRequestListen& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_FROM_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_FROM_JSON(EnableTLSv3, enableTLSv3_);
      DARABONBA_PTR_FROM_JSON(Http2Enabled, http2Enabled_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceProduct, resourceProduct_);
      DARABONBA_PTR_FROM_JSON(TLSVersion, TLSVersion_);
    };
    ModifyCloudResourceRequestListen() = default ;
    ModifyCloudResourceRequestListen(const ModifyCloudResourceRequestListen &) = default ;
    ModifyCloudResourceRequestListen(ModifyCloudResourceRequestListen &&) = default ;
    ModifyCloudResourceRequestListen(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudResourceRequestListen() = default ;
    ModifyCloudResourceRequestListen& operator=(const ModifyCloudResourceRequestListen &) = default ;
    ModifyCloudResourceRequestListen& operator=(ModifyCloudResourceRequestListen &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificates_ == nullptr
        && return this->cipherSuite_ == nullptr && return this->customCiphers_ == nullptr && return this->enableTLSv3_ == nullptr && return this->http2Enabled_ == nullptr && return this->port_ == nullptr
        && return this->protocol_ == nullptr && return this->resourceInstanceId_ == nullptr && return this->resourceProduct_ == nullptr && return this->TLSVersion_ == nullptr; };
    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<Models::ModifyCloudResourceRequestListenCertificates> & certificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<Models::ModifyCloudResourceRequestListenCertificates>) };
    inline vector<Models::ModifyCloudResourceRequestListenCertificates> certificates() { DARABONBA_PTR_GET(certificates_, vector<Models::ModifyCloudResourceRequestListenCertificates>) };
    inline ModifyCloudResourceRequestListen& setCertificates(const vector<Models::ModifyCloudResourceRequestListenCertificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline ModifyCloudResourceRequestListen& setCertificates(vector<Models::ModifyCloudResourceRequestListenCertificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // cipherSuite Field Functions 
    bool hasCipherSuite() const { return this->cipherSuite_ != nullptr;};
    void deleteCipherSuite() { this->cipherSuite_ = nullptr;};
    inline int32_t cipherSuite() const { DARABONBA_PTR_GET_DEFAULT(cipherSuite_, 0) };
    inline ModifyCloudResourceRequestListen& setCipherSuite(int32_t cipherSuite) { DARABONBA_PTR_SET_VALUE(cipherSuite_, cipherSuite) };


    // customCiphers Field Functions 
    bool hasCustomCiphers() const { return this->customCiphers_ != nullptr;};
    void deleteCustomCiphers() { this->customCiphers_ = nullptr;};
    inline const vector<string> & customCiphers() const { DARABONBA_PTR_GET_CONST(customCiphers_, vector<string>) };
    inline vector<string> customCiphers() { DARABONBA_PTR_GET(customCiphers_, vector<string>) };
    inline ModifyCloudResourceRequestListen& setCustomCiphers(const vector<string> & customCiphers) { DARABONBA_PTR_SET_VALUE(customCiphers_, customCiphers) };
    inline ModifyCloudResourceRequestListen& setCustomCiphers(vector<string> && customCiphers) { DARABONBA_PTR_SET_RVALUE(customCiphers_, customCiphers) };


    // enableTLSv3 Field Functions 
    bool hasEnableTLSv3() const { return this->enableTLSv3_ != nullptr;};
    void deleteEnableTLSv3() { this->enableTLSv3_ = nullptr;};
    inline bool enableTLSv3() const { DARABONBA_PTR_GET_DEFAULT(enableTLSv3_, false) };
    inline ModifyCloudResourceRequestListen& setEnableTLSv3(bool enableTLSv3) { DARABONBA_PTR_SET_VALUE(enableTLSv3_, enableTLSv3) };


    // http2Enabled Field Functions 
    bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
    void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
    inline bool http2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
    inline ModifyCloudResourceRequestListen& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ModifyCloudResourceRequestListen& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ModifyCloudResourceRequestListen& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string resourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline ModifyCloudResourceRequestListen& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceProduct Field Functions 
    bool hasResourceProduct() const { return this->resourceProduct_ != nullptr;};
    void deleteResourceProduct() { this->resourceProduct_ = nullptr;};
    inline string resourceProduct() const { DARABONBA_PTR_GET_DEFAULT(resourceProduct_, "") };
    inline ModifyCloudResourceRequestListen& setResourceProduct(string resourceProduct) { DARABONBA_PTR_SET_VALUE(resourceProduct_, resourceProduct) };


    // TLSVersion Field Functions 
    bool hasTLSVersion() const { return this->TLSVersion_ != nullptr;};
    void deleteTLSVersion() { this->TLSVersion_ = nullptr;};
    inline string TLSVersion() const { DARABONBA_PTR_GET_DEFAULT(TLSVersion_, "") };
    inline ModifyCloudResourceRequestListen& setTLSVersion(string TLSVersion) { DARABONBA_PTR_SET_VALUE(TLSVersion_, TLSVersion) };


  protected:
    // The certificates.
    std::shared_ptr<vector<Models::ModifyCloudResourceRequestListenCertificates>> certificates_ = nullptr;
    // The type of the cipher suites that you want to add. This parameter is available only if you specify **HttpsPorts**. Valid values:
    // 
    // *   **1**: all cipher suites.
    // *   **2**: strong cipher suites. This value is available only if you set **TLSVersion** to **tlsv1.2**.
    // *   **99**: custom cipher suites.
    std::shared_ptr<int32_t> cipherSuite_ = nullptr;
    // The custom cipher suites that you want to add.
    std::shared_ptr<vector<string>> customCiphers_ = nullptr;
    // Specifies whether to support TLS 1.3. This parameter is available only if you specify **HttpsPorts**. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableTLSv3_ = nullptr;
    // Specifies whether to enable HTTP/2. This parameter is available only if you specify **HttpsPorts**. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> http2Enabled_ = nullptr;
    // The port of the cloud service instance that is added to WAF.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol type. Valid values:
    // 
    // *   **http**
    // *   **https**
    // 
    // This parameter is required.
    std::shared_ptr<string> protocol_ = nullptr;
    // The ID of the cloud service instance that is added to WAF.
    std::shared_ptr<string> resourceInstanceId_ = nullptr;
    // The type of the cloud service. Valid values:
    // 
    // *   **clb4**: Layer 4 Classic Load Balancer (CLB).
    // *   **clb7**: Layer 7 CLB.
    // *   **ecs**: Elastic Compute Service (ECS).
    // *   **nlb**: Network Load Balancer (NLB).
    std::shared_ptr<string> resourceProduct_ = nullptr;
    // The Transport Layer Security (TLS) version that you want to add. This parameter is available only if you specify **HttpsPorts**. Valid values:
    // 
    // *   **tlsv1**
    // *   **tlsv1.1**
    // *   **tlsv1.2**
    std::shared_ptr<string> TLSVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
