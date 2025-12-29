// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROBE_HPP_
#define ALIBABACLOUD_MODELS_PROBE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class Probe : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Probe& obj) { 
      DARABONBA_PTR_TO_JSON(failureThreshold, failureThreshold_);
      DARABONBA_PTR_TO_JSON(initialDelaySeconds, initialDelaySeconds_);
      DARABONBA_PTR_TO_JSON(periodSeconds, periodSeconds_);
      DARABONBA_PTR_TO_JSON(probeHandler, probeHandler_);
      DARABONBA_PTR_TO_JSON(timeoutSeconds, timeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, Probe& obj) { 
      DARABONBA_PTR_FROM_JSON(failureThreshold, failureThreshold_);
      DARABONBA_PTR_FROM_JSON(initialDelaySeconds, initialDelaySeconds_);
      DARABONBA_PTR_FROM_JSON(periodSeconds, periodSeconds_);
      DARABONBA_PTR_FROM_JSON(probeHandler, probeHandler_);
      DARABONBA_PTR_FROM_JSON(timeoutSeconds, timeoutSeconds_);
    };
    Probe() = default ;
    Probe(const Probe &) = default ;
    Probe(Probe &&) = default ;
    Probe(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Probe() = default ;
    Probe& operator=(const Probe &) = default ;
    Probe& operator=(Probe &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProbeHandler : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProbeHandler& obj) { 
        DARABONBA_PTR_TO_JSON(httpGet, httpGet_);
        DARABONBA_PTR_TO_JSON(tcpSocket, tcpSocket_);
      };
      friend void from_json(const Darabonba::Json& j, ProbeHandler& obj) { 
        DARABONBA_PTR_FROM_JSON(httpGet, httpGet_);
        DARABONBA_PTR_FROM_JSON(tcpSocket, tcpSocket_);
      };
      ProbeHandler() = default ;
      ProbeHandler(const ProbeHandler &) = default ;
      ProbeHandler(ProbeHandler &&) = default ;
      ProbeHandler(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProbeHandler() = default ;
      ProbeHandler& operator=(const ProbeHandler &) = default ;
      ProbeHandler& operator=(ProbeHandler &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TcpSocket : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TcpSocket& obj) { 
          DARABONBA_PTR_TO_JSON(port, port_);
        };
        friend void from_json(const Darabonba::Json& j, TcpSocket& obj) { 
          DARABONBA_PTR_FROM_JSON(port, port_);
        };
        TcpSocket() = default ;
        TcpSocket(const TcpSocket &) = default ;
        TcpSocket(TcpSocket &&) = default ;
        TcpSocket(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TcpSocket() = default ;
        TcpSocket& operator=(const TcpSocket &) = default ;
        TcpSocket& operator=(TcpSocket &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->port_ == nullptr; };
        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline TcpSocket& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        shared_ptr<int32_t> port_ {};
      };

      class HttpGet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HttpGet& obj) { 
          DARABONBA_PTR_TO_JSON(httpHeaders, httpHeaders_);
          DARABONBA_PTR_TO_JSON(path, path_);
          DARABONBA_PTR_TO_JSON(port, port_);
        };
        friend void from_json(const Darabonba::Json& j, HttpGet& obj) { 
          DARABONBA_PTR_FROM_JSON(httpHeaders, httpHeaders_);
          DARABONBA_PTR_FROM_JSON(path, path_);
          DARABONBA_PTR_FROM_JSON(port, port_);
        };
        HttpGet() = default ;
        HttpGet(const HttpGet &) = default ;
        HttpGet(HttpGet &&) = default ;
        HttpGet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HttpGet() = default ;
        HttpGet& operator=(const HttpGet &) = default ;
        HttpGet& operator=(HttpGet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class HttpHeaders : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HttpHeaders& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, HttpHeaders& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          HttpHeaders() = default ;
          HttpHeaders(const HttpHeaders &) = default ;
          HttpHeaders(HttpHeaders &&) = default ;
          HttpHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HttpHeaders() = default ;
          HttpHeaders& operator=(const HttpHeaders &) = default ;
          HttpHeaders& operator=(HttpHeaders &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline HttpHeaders& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline HttpHeaders& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->httpHeaders_ == nullptr
        && this->path_ == nullptr && this->port_ == nullptr; };
        // httpHeaders Field Functions 
        bool hasHttpHeaders() const { return this->httpHeaders_ != nullptr;};
        void deleteHttpHeaders() { this->httpHeaders_ = nullptr;};
        inline const vector<HttpGet::HttpHeaders> & getHttpHeaders() const { DARABONBA_PTR_GET_CONST(httpHeaders_, vector<HttpGet::HttpHeaders>) };
        inline vector<HttpGet::HttpHeaders> getHttpHeaders() { DARABONBA_PTR_GET(httpHeaders_, vector<HttpGet::HttpHeaders>) };
        inline HttpGet& setHttpHeaders(const vector<HttpGet::HttpHeaders> & httpHeaders) { DARABONBA_PTR_SET_VALUE(httpHeaders_, httpHeaders) };
        inline HttpGet& setHttpHeaders(vector<HttpGet::HttpHeaders> && httpHeaders) { DARABONBA_PTR_SET_RVALUE(httpHeaders_, httpHeaders) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline HttpGet& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline HttpGet& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        shared_ptr<vector<HttpGet::HttpHeaders>> httpHeaders_ {};
        shared_ptr<string> path_ {};
        shared_ptr<int32_t> port_ {};
      };

      virtual bool empty() const override { return this->httpGet_ == nullptr
        && this->tcpSocket_ == nullptr; };
      // httpGet Field Functions 
      bool hasHttpGet() const { return this->httpGet_ != nullptr;};
      void deleteHttpGet() { this->httpGet_ = nullptr;};
      inline const ProbeHandler::HttpGet & getHttpGet() const { DARABONBA_PTR_GET_CONST(httpGet_, ProbeHandler::HttpGet) };
      inline ProbeHandler::HttpGet getHttpGet() { DARABONBA_PTR_GET(httpGet_, ProbeHandler::HttpGet) };
      inline ProbeHandler& setHttpGet(const ProbeHandler::HttpGet & httpGet) { DARABONBA_PTR_SET_VALUE(httpGet_, httpGet) };
      inline ProbeHandler& setHttpGet(ProbeHandler::HttpGet && httpGet) { DARABONBA_PTR_SET_RVALUE(httpGet_, httpGet) };


      // tcpSocket Field Functions 
      bool hasTcpSocket() const { return this->tcpSocket_ != nullptr;};
      void deleteTcpSocket() { this->tcpSocket_ = nullptr;};
      inline const ProbeHandler::TcpSocket & getTcpSocket() const { DARABONBA_PTR_GET_CONST(tcpSocket_, ProbeHandler::TcpSocket) };
      inline ProbeHandler::TcpSocket getTcpSocket() { DARABONBA_PTR_GET(tcpSocket_, ProbeHandler::TcpSocket) };
      inline ProbeHandler& setTcpSocket(const ProbeHandler::TcpSocket & tcpSocket) { DARABONBA_PTR_SET_VALUE(tcpSocket_, tcpSocket) };
      inline ProbeHandler& setTcpSocket(ProbeHandler::TcpSocket && tcpSocket) { DARABONBA_PTR_SET_RVALUE(tcpSocket_, tcpSocket) };


    protected:
      shared_ptr<ProbeHandler::HttpGet> httpGet_ {};
      shared_ptr<ProbeHandler::TcpSocket> tcpSocket_ {};
    };

    virtual bool empty() const override { return this->failureThreshold_ == nullptr
        && this->initialDelaySeconds_ == nullptr && this->periodSeconds_ == nullptr && this->probeHandler_ == nullptr && this->timeoutSeconds_ == nullptr; };
    // failureThreshold Field Functions 
    bool hasFailureThreshold() const { return this->failureThreshold_ != nullptr;};
    void deleteFailureThreshold() { this->failureThreshold_ = nullptr;};
    inline int32_t getFailureThreshold() const { DARABONBA_PTR_GET_DEFAULT(failureThreshold_, 0) };
    inline Probe& setFailureThreshold(int32_t failureThreshold) { DARABONBA_PTR_SET_VALUE(failureThreshold_, failureThreshold) };


    // initialDelaySeconds Field Functions 
    bool hasInitialDelaySeconds() const { return this->initialDelaySeconds_ != nullptr;};
    void deleteInitialDelaySeconds() { this->initialDelaySeconds_ = nullptr;};
    inline int32_t getInitialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(initialDelaySeconds_, 0) };
    inline Probe& setInitialDelaySeconds(int32_t initialDelaySeconds) { DARABONBA_PTR_SET_VALUE(initialDelaySeconds_, initialDelaySeconds) };


    // periodSeconds Field Functions 
    bool hasPeriodSeconds() const { return this->periodSeconds_ != nullptr;};
    void deletePeriodSeconds() { this->periodSeconds_ = nullptr;};
    inline int32_t getPeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(periodSeconds_, 0) };
    inline Probe& setPeriodSeconds(int32_t periodSeconds) { DARABONBA_PTR_SET_VALUE(periodSeconds_, periodSeconds) };


    // probeHandler Field Functions 
    bool hasProbeHandler() const { return this->probeHandler_ != nullptr;};
    void deleteProbeHandler() { this->probeHandler_ = nullptr;};
    inline const Probe::ProbeHandler & getProbeHandler() const { DARABONBA_PTR_GET_CONST(probeHandler_, Probe::ProbeHandler) };
    inline Probe::ProbeHandler getProbeHandler() { DARABONBA_PTR_GET(probeHandler_, Probe::ProbeHandler) };
    inline Probe& setProbeHandler(const Probe::ProbeHandler & probeHandler) { DARABONBA_PTR_SET_VALUE(probeHandler_, probeHandler) };
    inline Probe& setProbeHandler(Probe::ProbeHandler && probeHandler) { DARABONBA_PTR_SET_RVALUE(probeHandler_, probeHandler) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline Probe& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


  protected:
    shared_ptr<int32_t> failureThreshold_ {};
    shared_ptr<int32_t> initialDelaySeconds_ {};
    shared_ptr<int32_t> periodSeconds_ {};
    shared_ptr<Probe::ProbeHandler> probeHandler_ {};
    shared_ptr<int32_t> timeoutSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
