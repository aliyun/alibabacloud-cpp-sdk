// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYDOMAINRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYDOMAINRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListGatewayDomainResponseBodyDataComment.hpp>
#include <alibabacloud/models/ListGatewayDomainResponseBodyDataTlsCipherSuitesConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayDomainResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayDomainResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CertBeforeDate, certBeforeDate_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Http2, http2_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsManaged, isManaged_);
      DARABONBA_PTR_TO_JSON(MustHttps, mustHttps_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TlsCipherSuitesConfig, tlsCipherSuitesConfig_);
      DARABONBA_PTR_TO_JSON(TlsMax, tlsMax_);
      DARABONBA_PTR_TO_JSON(TlsMin, tlsMin_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayDomainResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CertBeforeDate, certBeforeDate_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Http2, http2_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsManaged, isManaged_);
      DARABONBA_PTR_FROM_JSON(MustHttps, mustHttps_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TlsCipherSuitesConfig, tlsCipherSuitesConfig_);
      DARABONBA_PTR_FROM_JSON(TlsMax, tlsMax_);
      DARABONBA_PTR_FROM_JSON(TlsMin, tlsMin_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListGatewayDomainResponseBodyData() = default ;
    ListGatewayDomainResponseBodyData(const ListGatewayDomainResponseBodyData &) = default ;
    ListGatewayDomainResponseBodyData(ListGatewayDomainResponseBodyData &&) = default ;
    ListGatewayDomainResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayDomainResponseBodyData() = default ;
    ListGatewayDomainResponseBodyData& operator=(const ListGatewayDomainResponseBodyData &) = default ;
    ListGatewayDomainResponseBodyData& operator=(ListGatewayDomainResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certBeforeDate_ == nullptr
        && return this->certIdentifier_ == nullptr && return this->comment_ == nullptr && return this->gatewayId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->http2_ == nullptr && return this->id_ == nullptr && return this->isManaged_ == nullptr && return this->mustHttps_ == nullptr && return this->name_ == nullptr
        && return this->protocol_ == nullptr && return this->status_ == nullptr && return this->tlsCipherSuitesConfig_ == nullptr && return this->tlsMax_ == nullptr && return this->tlsMin_ == nullptr
        && return this->type_ == nullptr; };
    // certBeforeDate Field Functions 
    bool hasCertBeforeDate() const { return this->certBeforeDate_ != nullptr;};
    void deleteCertBeforeDate() { this->certBeforeDate_ = nullptr;};
    inline string certBeforeDate() const { DARABONBA_PTR_GET_DEFAULT(certBeforeDate_, "") };
    inline ListGatewayDomainResponseBodyData& setCertBeforeDate(string certBeforeDate) { DARABONBA_PTR_SET_VALUE(certBeforeDate_, certBeforeDate) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline ListGatewayDomainResponseBodyData& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline const Models::ListGatewayDomainResponseBodyDataComment & comment() const { DARABONBA_PTR_GET_CONST(comment_, Models::ListGatewayDomainResponseBodyDataComment) };
    inline Models::ListGatewayDomainResponseBodyDataComment comment() { DARABONBA_PTR_GET(comment_, Models::ListGatewayDomainResponseBodyDataComment) };
    inline ListGatewayDomainResponseBodyData& setComment(const Models::ListGatewayDomainResponseBodyDataComment & comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };
    inline ListGatewayDomainResponseBodyData& setComment(Models::ListGatewayDomainResponseBodyDataComment && comment) { DARABONBA_PTR_SET_RVALUE(comment_, comment) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline ListGatewayDomainResponseBodyData& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListGatewayDomainResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListGatewayDomainResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // http2 Field Functions 
    bool hasHttp2() const { return this->http2_ != nullptr;};
    void deleteHttp2() { this->http2_ = nullptr;};
    inline string http2() const { DARABONBA_PTR_GET_DEFAULT(http2_, "") };
    inline ListGatewayDomainResponseBodyData& setHttp2(string http2) { DARABONBA_PTR_SET_VALUE(http2_, http2) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListGatewayDomainResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isManaged Field Functions 
    bool hasIsManaged() const { return this->isManaged_ != nullptr;};
    void deleteIsManaged() { this->isManaged_ = nullptr;};
    inline bool isManaged() const { DARABONBA_PTR_GET_DEFAULT(isManaged_, false) };
    inline ListGatewayDomainResponseBodyData& setIsManaged(bool isManaged) { DARABONBA_PTR_SET_VALUE(isManaged_, isManaged) };


    // mustHttps Field Functions 
    bool hasMustHttps() const { return this->mustHttps_ != nullptr;};
    void deleteMustHttps() { this->mustHttps_ = nullptr;};
    inline bool mustHttps() const { DARABONBA_PTR_GET_DEFAULT(mustHttps_, false) };
    inline ListGatewayDomainResponseBodyData& setMustHttps(bool mustHttps) { DARABONBA_PTR_SET_VALUE(mustHttps_, mustHttps) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGatewayDomainResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListGatewayDomainResponseBodyData& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListGatewayDomainResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tlsCipherSuitesConfig Field Functions 
    bool hasTlsCipherSuitesConfig() const { return this->tlsCipherSuitesConfig_ != nullptr;};
    void deleteTlsCipherSuitesConfig() { this->tlsCipherSuitesConfig_ = nullptr;};
    inline const Models::ListGatewayDomainResponseBodyDataTlsCipherSuitesConfig & tlsCipherSuitesConfig() const { DARABONBA_PTR_GET_CONST(tlsCipherSuitesConfig_, Models::ListGatewayDomainResponseBodyDataTlsCipherSuitesConfig) };
    inline Models::ListGatewayDomainResponseBodyDataTlsCipherSuitesConfig tlsCipherSuitesConfig() { DARABONBA_PTR_GET(tlsCipherSuitesConfig_, Models::ListGatewayDomainResponseBodyDataTlsCipherSuitesConfig) };
    inline ListGatewayDomainResponseBodyData& setTlsCipherSuitesConfig(const Models::ListGatewayDomainResponseBodyDataTlsCipherSuitesConfig & tlsCipherSuitesConfig) { DARABONBA_PTR_SET_VALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };
    inline ListGatewayDomainResponseBodyData& setTlsCipherSuitesConfig(Models::ListGatewayDomainResponseBodyDataTlsCipherSuitesConfig && tlsCipherSuitesConfig) { DARABONBA_PTR_SET_RVALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };


    // tlsMax Field Functions 
    bool hasTlsMax() const { return this->tlsMax_ != nullptr;};
    void deleteTlsMax() { this->tlsMax_ = nullptr;};
    inline string tlsMax() const { DARABONBA_PTR_GET_DEFAULT(tlsMax_, "") };
    inline ListGatewayDomainResponseBodyData& setTlsMax(string tlsMax) { DARABONBA_PTR_SET_VALUE(tlsMax_, tlsMax) };


    // tlsMin Field Functions 
    bool hasTlsMin() const { return this->tlsMin_ != nullptr;};
    void deleteTlsMin() { this->tlsMin_ = nullptr;};
    inline string tlsMin() const { DARABONBA_PTR_GET_DEFAULT(tlsMin_, "") };
    inline ListGatewayDomainResponseBodyData& setTlsMin(string tlsMin) { DARABONBA_PTR_SET_VALUE(tlsMin_, tlsMin) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListGatewayDomainResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the certificate expires.
    std::shared_ptr<string> certBeforeDate_ = nullptr;
    // The certificate ID.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The route comment. This parameter is returned only in ingress scenarios.
    std::shared_ptr<Models::ListGatewayDomainResponseBodyDataComment> comment_ = nullptr;
    // The gateway ID.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The time when the domain name was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the domain name was updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Indicates whether `HTTP/2` is enabled.
    // 
    // *   `open`: `HTTP/2` is enabled.
    // *   `close`: `HTTP/2` is disabled.
    // *   `globalConfig`: Global configurations are used.
    std::shared_ptr<string> http2_ = nullptr;
    // The ID of the domain name.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<bool> isManaged_ = nullptr;
    // Indicates whether HTTPS is forcefully used.
    std::shared_ptr<bool> mustHttps_ = nullptr;
    // The domain name.
    std::shared_ptr<string> name_ = nullptr;
    // The protocol.
    std::shared_ptr<string> protocol_ = nullptr;
    // The state of the domain name. Valid values:
    // 
    // *   0: unpublished
    // *   2: publishing
    // *   3: published
    // *   4: editing
    // *   5: unpublishing
    // *   6: unavailable
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<Models::ListGatewayDomainResponseBodyDataTlsCipherSuitesConfig> tlsCipherSuitesConfig_ = nullptr;
    // The maximum version of Transport Layer Security (TLS).
    std::shared_ptr<string> tlsMax_ = nullptr;
    // The minimum version of TLS.
    std::shared_ptr<string> tlsMin_ = nullptr;
    // The type of the domain name source. Valid values:
    // 
    // *   Op: console
    // *   Ingress: MSE Ingress
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
