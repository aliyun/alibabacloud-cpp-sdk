// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListGatewayDomainResponseBody() = default ;
    ListGatewayDomainResponseBody(const ListGatewayDomainResponseBody &) = default ;
    ListGatewayDomainResponseBody(ListGatewayDomainResponseBody &&) = default ;
    ListGatewayDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayDomainResponseBody() = default ;
    ListGatewayDomainResponseBody& operator=(const ListGatewayDomainResponseBody &) = default ;
    ListGatewayDomainResponseBody& operator=(ListGatewayDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TlsCipherSuitesConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TlsCipherSuitesConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigType, configType_);
          DARABONBA_PTR_TO_JSON(TlsCipherSuites, tlsCipherSuites_);
        };
        friend void from_json(const Darabonba::Json& j, TlsCipherSuitesConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
          DARABONBA_PTR_FROM_JSON(TlsCipherSuites, tlsCipherSuites_);
        };
        TlsCipherSuitesConfig() = default ;
        TlsCipherSuitesConfig(const TlsCipherSuitesConfig &) = default ;
        TlsCipherSuitesConfig(TlsCipherSuitesConfig &&) = default ;
        TlsCipherSuitesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TlsCipherSuitesConfig() = default ;
        TlsCipherSuitesConfig& operator=(const TlsCipherSuitesConfig &) = default ;
        TlsCipherSuitesConfig& operator=(TlsCipherSuitesConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configType_ == nullptr
        && this->tlsCipherSuites_ == nullptr; };
        // configType Field Functions 
        bool hasConfigType() const { return this->configType_ != nullptr;};
        void deleteConfigType() { this->configType_ = nullptr;};
        inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
        inline TlsCipherSuitesConfig& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


        // tlsCipherSuites Field Functions 
        bool hasTlsCipherSuites() const { return this->tlsCipherSuites_ != nullptr;};
        void deleteTlsCipherSuites() { this->tlsCipherSuites_ = nullptr;};
        inline const vector<string> & getTlsCipherSuites() const { DARABONBA_PTR_GET_CONST(tlsCipherSuites_, vector<string>) };
        inline vector<string> getTlsCipherSuites() { DARABONBA_PTR_GET(tlsCipherSuites_, vector<string>) };
        inline TlsCipherSuitesConfig& setTlsCipherSuites(const vector<string> & tlsCipherSuites) { DARABONBA_PTR_SET_VALUE(tlsCipherSuites_, tlsCipherSuites) };
        inline TlsCipherSuitesConfig& setTlsCipherSuites(vector<string> && tlsCipherSuites) { DARABONBA_PTR_SET_RVALUE(tlsCipherSuites_, tlsCipherSuites) };


      protected:
        shared_ptr<string> configType_ {};
        shared_ptr<vector<string>> tlsCipherSuites_ {};
      };

      class Comment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Comment& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Comment& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Comment() = default ;
        Comment(const Comment &) = default ;
        Comment(Comment &&) = default ;
        Comment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Comment() = default ;
        Comment& operator=(const Comment &) = default ;
        Comment& operator=(Comment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Comment& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The route status.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->certBeforeDate_ == nullptr
        && this->certIdentifier_ == nullptr && this->comment_ == nullptr && this->gatewayId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->http2_ == nullptr && this->id_ == nullptr && this->isManaged_ == nullptr && this->mustHttps_ == nullptr && this->name_ == nullptr
        && this->protocol_ == nullptr && this->status_ == nullptr && this->tlsCipherSuitesConfig_ == nullptr && this->tlsMax_ == nullptr && this->tlsMin_ == nullptr
        && this->type_ == nullptr; };
      // certBeforeDate Field Functions 
      bool hasCertBeforeDate() const { return this->certBeforeDate_ != nullptr;};
      void deleteCertBeforeDate() { this->certBeforeDate_ = nullptr;};
      inline string getCertBeforeDate() const { DARABONBA_PTR_GET_DEFAULT(certBeforeDate_, "") };
      inline Data& setCertBeforeDate(string certBeforeDate) { DARABONBA_PTR_SET_VALUE(certBeforeDate_, certBeforeDate) };


      // certIdentifier Field Functions 
      bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
      void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
      inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
      inline Data& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline const Data::Comment & getComment() const { DARABONBA_PTR_GET_CONST(comment_, Data::Comment) };
      inline Data::Comment getComment() { DARABONBA_PTR_GET(comment_, Data::Comment) };
      inline Data& setComment(const Data::Comment & comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };
      inline Data& setComment(Data::Comment && comment) { DARABONBA_PTR_SET_RVALUE(comment_, comment) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
      inline Data& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // http2 Field Functions 
      bool hasHttp2() const { return this->http2_ != nullptr;};
      void deleteHttp2() { this->http2_ = nullptr;};
      inline string getHttp2() const { DARABONBA_PTR_GET_DEFAULT(http2_, "") };
      inline Data& setHttp2(string http2) { DARABONBA_PTR_SET_VALUE(http2_, http2) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isManaged Field Functions 
      bool hasIsManaged() const { return this->isManaged_ != nullptr;};
      void deleteIsManaged() { this->isManaged_ = nullptr;};
      inline bool getIsManaged() const { DARABONBA_PTR_GET_DEFAULT(isManaged_, false) };
      inline Data& setIsManaged(bool isManaged) { DARABONBA_PTR_SET_VALUE(isManaged_, isManaged) };


      // mustHttps Field Functions 
      bool hasMustHttps() const { return this->mustHttps_ != nullptr;};
      void deleteMustHttps() { this->mustHttps_ = nullptr;};
      inline bool getMustHttps() const { DARABONBA_PTR_GET_DEFAULT(mustHttps_, false) };
      inline Data& setMustHttps(bool mustHttps) { DARABONBA_PTR_SET_VALUE(mustHttps_, mustHttps) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tlsCipherSuitesConfig Field Functions 
      bool hasTlsCipherSuitesConfig() const { return this->tlsCipherSuitesConfig_ != nullptr;};
      void deleteTlsCipherSuitesConfig() { this->tlsCipherSuitesConfig_ = nullptr;};
      inline const Data::TlsCipherSuitesConfig & getTlsCipherSuitesConfig() const { DARABONBA_PTR_GET_CONST(tlsCipherSuitesConfig_, Data::TlsCipherSuitesConfig) };
      inline Data::TlsCipherSuitesConfig getTlsCipherSuitesConfig() { DARABONBA_PTR_GET(tlsCipherSuitesConfig_, Data::TlsCipherSuitesConfig) };
      inline Data& setTlsCipherSuitesConfig(const Data::TlsCipherSuitesConfig & tlsCipherSuitesConfig) { DARABONBA_PTR_SET_VALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };
      inline Data& setTlsCipherSuitesConfig(Data::TlsCipherSuitesConfig && tlsCipherSuitesConfig) { DARABONBA_PTR_SET_RVALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };


      // tlsMax Field Functions 
      bool hasTlsMax() const { return this->tlsMax_ != nullptr;};
      void deleteTlsMax() { this->tlsMax_ = nullptr;};
      inline string getTlsMax() const { DARABONBA_PTR_GET_DEFAULT(tlsMax_, "") };
      inline Data& setTlsMax(string tlsMax) { DARABONBA_PTR_SET_VALUE(tlsMax_, tlsMax) };


      // tlsMin Field Functions 
      bool hasTlsMin() const { return this->tlsMin_ != nullptr;};
      void deleteTlsMin() { this->tlsMin_ = nullptr;};
      inline string getTlsMin() const { DARABONBA_PTR_GET_DEFAULT(tlsMin_, "") };
      inline Data& setTlsMin(string tlsMin) { DARABONBA_PTR_SET_VALUE(tlsMin_, tlsMin) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The time when the certificate expires.
      shared_ptr<string> certBeforeDate_ {};
      // The certificate ID.
      shared_ptr<string> certIdentifier_ {};
      // The route comment. This parameter is returned only in ingress scenarios.
      shared_ptr<Data::Comment> comment_ {};
      // The gateway ID.
      shared_ptr<int64_t> gatewayId_ {};
      // The time when the domain name was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the domain name was updated.
      shared_ptr<string> gmtModified_ {};
      // Indicates whether `HTTP/2` is enabled.
      // 
      // *   `open`: `HTTP/2` is enabled.
      // *   `close`: `HTTP/2` is disabled.
      // *   `globalConfig`: Global configurations are used.
      shared_ptr<string> http2_ {};
      // The ID of the domain name.
      shared_ptr<int64_t> id_ {};
      shared_ptr<bool> isManaged_ {};
      // Indicates whether HTTPS is forcefully used.
      shared_ptr<bool> mustHttps_ {};
      // The domain name.
      shared_ptr<string> name_ {};
      // The protocol.
      shared_ptr<string> protocol_ {};
      // The state of the domain name. Valid values:
      // 
      // *   0: unpublished
      // *   2: publishing
      // *   3: published
      // *   4: editing
      // *   5: unpublishing
      // *   6: unavailable
      shared_ptr<int32_t> status_ {};
      shared_ptr<Data::TlsCipherSuitesConfig> tlsCipherSuitesConfig_ {};
      // The maximum version of Transport Layer Security (TLS).
      shared_ptr<string> tlsMax_ {};
      // The minimum version of TLS.
      shared_ptr<string> tlsMin_ {};
      // The type of the domain name source. Valid values:
      // 
      // *   Op: console
      // *   Ingress: MSE Ingress
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListGatewayDomainResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListGatewayDomainResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListGatewayDomainResponseBody::Data>) };
    inline vector<ListGatewayDomainResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListGatewayDomainResponseBody::Data>) };
    inline ListGatewayDomainResponseBody& setData(const vector<ListGatewayDomainResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGatewayDomainResponseBody& setData(vector<ListGatewayDomainResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListGatewayDomainResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGatewayDomainResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListGatewayDomainResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<int32_t> code_ {};
    // The details of the data.
    shared_ptr<vector<ListGatewayDomainResponseBody::Data>> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
