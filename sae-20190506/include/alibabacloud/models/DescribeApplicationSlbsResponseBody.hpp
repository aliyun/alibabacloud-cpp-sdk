// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSLBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSLBSRESPONSEBODY_HPP_
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
  class DescribeApplicationSlbsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationSlbsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationSlbsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeApplicationSlbsResponseBody() = default ;
    DescribeApplicationSlbsResponseBody(const DescribeApplicationSlbsResponseBody &) = default ;
    DescribeApplicationSlbsResponseBody(DescribeApplicationSlbsResponseBody &&) = default ;
    DescribeApplicationSlbsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationSlbsResponseBody() = default ;
    DescribeApplicationSlbsResponseBody& operator=(const DescribeApplicationSlbsResponseBody &) = default ;
    DescribeApplicationSlbsResponseBody& operator=(DescribeApplicationSlbsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(Internet, internet_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(InternetSlbChargeType, internetSlbChargeType_);
        DARABONBA_PTR_TO_JSON(InternetSlbExpired, internetSlbExpired_);
        DARABONBA_PTR_TO_JSON(InternetSlbId, internetSlbId_);
        DARABONBA_PTR_TO_JSON(Intranet, intranet_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(IntranetSlbChargeType, intranetSlbChargeType_);
        DARABONBA_PTR_TO_JSON(IntranetSlbExpired, intranetSlbExpired_);
        DARABONBA_PTR_TO_JSON(IntranetSlbId, intranetSlbId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(Internet, internet_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(InternetSlbChargeType, internetSlbChargeType_);
        DARABONBA_PTR_FROM_JSON(InternetSlbExpired, internetSlbExpired_);
        DARABONBA_PTR_FROM_JSON(InternetSlbId, internetSlbId_);
        DARABONBA_PTR_FROM_JSON(Intranet, intranet_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetSlbChargeType, intranetSlbChargeType_);
        DARABONBA_PTR_FROM_JSON(IntranetSlbExpired, intranetSlbExpired_);
        DARABONBA_PTR_FROM_JSON(IntranetSlbId, intranetSlbId_);
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
      class Intranet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Intranet& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
          DARABONBA_PTR_TO_JSON(Cookie, cookie_);
          DARABONBA_PTR_TO_JSON(CookieTimeout, cookieTimeout_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EnableConnectionDrain, enableConnectionDrain_);
          DARABONBA_PTR_TO_JSON(HttpsCaCertId, httpsCaCertId_);
          DARABONBA_PTR_TO_JSON(HttpsCertId, httpsCertId_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(StickySession, stickySession_);
          DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
          DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
          DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, Intranet& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
          DARABONBA_PTR_FROM_JSON(Cookie, cookie_);
          DARABONBA_PTR_FROM_JSON(CookieTimeout, cookieTimeout_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EnableConnectionDrain, enableConnectionDrain_);
          DARABONBA_PTR_FROM_JSON(HttpsCaCertId, httpsCaCertId_);
          DARABONBA_PTR_FROM_JSON(HttpsCertId, httpsCertId_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(StickySession, stickySession_);
          DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
          DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
          DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
        };
        Intranet() = default ;
        Intranet(const Intranet &) = default ;
        Intranet(Intranet &&) = default ;
        Intranet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Intranet() = default ;
        Intranet& operator=(const Intranet &) = default ;
        Intranet& operator=(Intranet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionDrainTimeout_ == nullptr
        && this->cookie_ == nullptr && this->cookieTimeout_ == nullptr && this->createTime_ == nullptr && this->enableConnectionDrain_ == nullptr && this->httpsCaCertId_ == nullptr
        && this->httpsCertId_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr && this->stickySession_ == nullptr && this->stickySessionType_ == nullptr
        && this->targetPort_ == nullptr && this->VServerGroupId_ == nullptr; };
        // connectionDrainTimeout Field Functions 
        bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
        void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
        inline int32_t getConnectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
        inline Intranet& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


        // cookie Field Functions 
        bool hasCookie() const { return this->cookie_ != nullptr;};
        void deleteCookie() { this->cookie_ = nullptr;};
        inline string getCookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
        inline Intranet& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


        // cookieTimeout Field Functions 
        bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
        void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
        inline int32_t getCookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
        inline Intranet& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Intranet& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // enableConnectionDrain Field Functions 
        bool hasEnableConnectionDrain() const { return this->enableConnectionDrain_ != nullptr;};
        void deleteEnableConnectionDrain() { this->enableConnectionDrain_ = nullptr;};
        inline bool getEnableConnectionDrain() const { DARABONBA_PTR_GET_DEFAULT(enableConnectionDrain_, false) };
        inline Intranet& setEnableConnectionDrain(bool enableConnectionDrain) { DARABONBA_PTR_SET_VALUE(enableConnectionDrain_, enableConnectionDrain) };


        // httpsCaCertId Field Functions 
        bool hasHttpsCaCertId() const { return this->httpsCaCertId_ != nullptr;};
        void deleteHttpsCaCertId() { this->httpsCaCertId_ = nullptr;};
        inline string getHttpsCaCertId() const { DARABONBA_PTR_GET_DEFAULT(httpsCaCertId_, "") };
        inline Intranet& setHttpsCaCertId(string httpsCaCertId) { DARABONBA_PTR_SET_VALUE(httpsCaCertId_, httpsCaCertId) };


        // httpsCertId Field Functions 
        bool hasHttpsCertId() const { return this->httpsCertId_ != nullptr;};
        void deleteHttpsCertId() { this->httpsCertId_ = nullptr;};
        inline string getHttpsCertId() const { DARABONBA_PTR_GET_DEFAULT(httpsCertId_, "") };
        inline Intranet& setHttpsCertId(string httpsCertId) { DARABONBA_PTR_SET_VALUE(httpsCertId_, httpsCertId) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline Intranet& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline Intranet& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // stickySession Field Functions 
        bool hasStickySession() const { return this->stickySession_ != nullptr;};
        void deleteStickySession() { this->stickySession_ = nullptr;};
        inline bool getStickySession() const { DARABONBA_PTR_GET_DEFAULT(stickySession_, false) };
        inline Intranet& setStickySession(bool stickySession) { DARABONBA_PTR_SET_VALUE(stickySession_, stickySession) };


        // stickySessionType Field Functions 
        bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
        void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
        inline string getStickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
        inline Intranet& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


        // targetPort Field Functions 
        bool hasTargetPort() const { return this->targetPort_ != nullptr;};
        void deleteTargetPort() { this->targetPort_ = nullptr;};
        inline int32_t getTargetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
        inline Intranet& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


        // VServerGroupId Field Functions 
        bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
        void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
        inline string getVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
        inline Intranet& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


      protected:
        shared_ptr<int32_t> connectionDrainTimeout_ {};
        shared_ptr<string> cookie_ {};
        shared_ptr<int32_t> cookieTimeout_ {};
        // The timestamp when the canary release rule was created.
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<bool> enableConnectionDrain_ {};
        shared_ptr<string> httpsCaCertId_ {};
        // The supported protocol.
        shared_ptr<string> httpsCertId_ {};
        // The IP address of the Internet-facing SLB instance.
        shared_ptr<int32_t> port_ {};
        // The container port.
        shared_ptr<string> protocol_ {};
        shared_ptr<bool> stickySession_ {};
        shared_ptr<string> stickySessionType_ {};
        // The port specified for the SLB listener.
        shared_ptr<int32_t> targetPort_ {};
        shared_ptr<string> VServerGroupId_ {};
      };

      class Internet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Internet& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
          DARABONBA_PTR_TO_JSON(Cookie, cookie_);
          DARABONBA_PTR_TO_JSON(CookieTimeout, cookieTimeout_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EnableConnectionDrain, enableConnectionDrain_);
          DARABONBA_PTR_TO_JSON(HttpsCaCertId, httpsCaCertId_);
          DARABONBA_PTR_TO_JSON(HttpsCertId, httpsCertId_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(StickySession, stickySession_);
          DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
          DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
          DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, Internet& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
          DARABONBA_PTR_FROM_JSON(Cookie, cookie_);
          DARABONBA_PTR_FROM_JSON(CookieTimeout, cookieTimeout_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EnableConnectionDrain, enableConnectionDrain_);
          DARABONBA_PTR_FROM_JSON(HttpsCaCertId, httpsCaCertId_);
          DARABONBA_PTR_FROM_JSON(HttpsCertId, httpsCertId_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(StickySession, stickySession_);
          DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
          DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
          DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
        };
        Internet() = default ;
        Internet(const Internet &) = default ;
        Internet(Internet &&) = default ;
        Internet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Internet() = default ;
        Internet& operator=(const Internet &) = default ;
        Internet& operator=(Internet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionDrainTimeout_ == nullptr
        && this->cookie_ == nullptr && this->cookieTimeout_ == nullptr && this->createTime_ == nullptr && this->enableConnectionDrain_ == nullptr && this->httpsCaCertId_ == nullptr
        && this->httpsCertId_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr && this->stickySession_ == nullptr && this->stickySessionType_ == nullptr
        && this->targetPort_ == nullptr && this->VServerGroupId_ == nullptr; };
        // connectionDrainTimeout Field Functions 
        bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
        void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
        inline int32_t getConnectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
        inline Internet& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


        // cookie Field Functions 
        bool hasCookie() const { return this->cookie_ != nullptr;};
        void deleteCookie() { this->cookie_ = nullptr;};
        inline string getCookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
        inline Internet& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


        // cookieTimeout Field Functions 
        bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
        void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
        inline int32_t getCookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
        inline Internet& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Internet& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // enableConnectionDrain Field Functions 
        bool hasEnableConnectionDrain() const { return this->enableConnectionDrain_ != nullptr;};
        void deleteEnableConnectionDrain() { this->enableConnectionDrain_ = nullptr;};
        inline bool getEnableConnectionDrain() const { DARABONBA_PTR_GET_DEFAULT(enableConnectionDrain_, false) };
        inline Internet& setEnableConnectionDrain(bool enableConnectionDrain) { DARABONBA_PTR_SET_VALUE(enableConnectionDrain_, enableConnectionDrain) };


        // httpsCaCertId Field Functions 
        bool hasHttpsCaCertId() const { return this->httpsCaCertId_ != nullptr;};
        void deleteHttpsCaCertId() { this->httpsCaCertId_ = nullptr;};
        inline string getHttpsCaCertId() const { DARABONBA_PTR_GET_DEFAULT(httpsCaCertId_, "") };
        inline Internet& setHttpsCaCertId(string httpsCaCertId) { DARABONBA_PTR_SET_VALUE(httpsCaCertId_, httpsCaCertId) };


        // httpsCertId Field Functions 
        bool hasHttpsCertId() const { return this->httpsCertId_ != nullptr;};
        void deleteHttpsCertId() { this->httpsCertId_ = nullptr;};
        inline string getHttpsCertId() const { DARABONBA_PTR_GET_DEFAULT(httpsCertId_, "") };
        inline Internet& setHttpsCertId(string httpsCertId) { DARABONBA_PTR_SET_VALUE(httpsCertId_, httpsCertId) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline Internet& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline Internet& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // stickySession Field Functions 
        bool hasStickySession() const { return this->stickySession_ != nullptr;};
        void deleteStickySession() { this->stickySession_ = nullptr;};
        inline bool getStickySession() const { DARABONBA_PTR_GET_DEFAULT(stickySession_, false) };
        inline Internet& setStickySession(bool stickySession) { DARABONBA_PTR_SET_VALUE(stickySession_, stickySession) };


        // stickySessionType Field Functions 
        bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
        void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
        inline string getStickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
        inline Internet& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


        // targetPort Field Functions 
        bool hasTargetPort() const { return this->targetPort_ != nullptr;};
        void deleteTargetPort() { this->targetPort_ = nullptr;};
        inline int32_t getTargetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
        inline Internet& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


        // VServerGroupId Field Functions 
        bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
        void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
        inline string getVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
        inline Internet& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


      protected:
        shared_ptr<int32_t> connectionDrainTimeout_ {};
        shared_ptr<string> cookie_ {};
        shared_ptr<int32_t> cookieTimeout_ {};
        // The timestamp when the canary release rule was created.
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<bool> enableConnectionDrain_ {};
        shared_ptr<string> httpsCaCertId_ {};
        // The supported protocol.
        shared_ptr<string> httpsCertId_ {};
        // The ID of the internal-facing SLB instance.
        shared_ptr<int32_t> port_ {};
        // The container port.
        shared_ptr<string> protocol_ {};
        shared_ptr<bool> stickySession_ {};
        shared_ptr<string> stickySessionType_ {};
        // The port specified for the SLB listener.
        shared_ptr<int32_t> targetPort_ {};
        shared_ptr<string> VServerGroupId_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->clusterId_ == nullptr && this->internet_ == nullptr && this->internetIp_ == nullptr && this->internetSlbChargeType_ == nullptr
        && this->internetSlbExpired_ == nullptr && this->internetSlbId_ == nullptr && this->intranet_ == nullptr && this->intranetIp_ == nullptr && this->intranetSlbChargeType_ == nullptr
        && this->intranetSlbExpired_ == nullptr && this->intranetSlbId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // internet Field Functions 
      bool hasInternet() const { return this->internet_ != nullptr;};
      void deleteInternet() { this->internet_ = nullptr;};
      inline const vector<Data::Internet> & getInternet() const { DARABONBA_PTR_GET_CONST(internet_, vector<Data::Internet>) };
      inline vector<Data::Internet> getInternet() { DARABONBA_PTR_GET(internet_, vector<Data::Internet>) };
      inline Data& setInternet(const vector<Data::Internet> & internet) { DARABONBA_PTR_SET_VALUE(internet_, internet) };
      inline Data& setInternet(vector<Data::Internet> && internet) { DARABONBA_PTR_SET_RVALUE(internet_, internet) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Data& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // internetSlbChargeType Field Functions 
      bool hasInternetSlbChargeType() const { return this->internetSlbChargeType_ != nullptr;};
      void deleteInternetSlbChargeType() { this->internetSlbChargeType_ = nullptr;};
      inline string getInternetSlbChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetSlbChargeType_, "") };
      inline Data& setInternetSlbChargeType(string internetSlbChargeType) { DARABONBA_PTR_SET_VALUE(internetSlbChargeType_, internetSlbChargeType) };


      // internetSlbExpired Field Functions 
      bool hasInternetSlbExpired() const { return this->internetSlbExpired_ != nullptr;};
      void deleteInternetSlbExpired() { this->internetSlbExpired_ = nullptr;};
      inline bool getInternetSlbExpired() const { DARABONBA_PTR_GET_DEFAULT(internetSlbExpired_, false) };
      inline Data& setInternetSlbExpired(bool internetSlbExpired) { DARABONBA_PTR_SET_VALUE(internetSlbExpired_, internetSlbExpired) };


      // internetSlbId Field Functions 
      bool hasInternetSlbId() const { return this->internetSlbId_ != nullptr;};
      void deleteInternetSlbId() { this->internetSlbId_ = nullptr;};
      inline string getInternetSlbId() const { DARABONBA_PTR_GET_DEFAULT(internetSlbId_, "") };
      inline Data& setInternetSlbId(string internetSlbId) { DARABONBA_PTR_SET_VALUE(internetSlbId_, internetSlbId) };


      // intranet Field Functions 
      bool hasIntranet() const { return this->intranet_ != nullptr;};
      void deleteIntranet() { this->intranet_ = nullptr;};
      inline const vector<Data::Intranet> & getIntranet() const { DARABONBA_PTR_GET_CONST(intranet_, vector<Data::Intranet>) };
      inline vector<Data::Intranet> getIntranet() { DARABONBA_PTR_GET(intranet_, vector<Data::Intranet>) };
      inline Data& setIntranet(const vector<Data::Intranet> & intranet) { DARABONBA_PTR_SET_VALUE(intranet_, intranet) };
      inline Data& setIntranet(vector<Data::Intranet> && intranet) { DARABONBA_PTR_SET_RVALUE(intranet_, intranet) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Data& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // intranetSlbChargeType Field Functions 
      bool hasIntranetSlbChargeType() const { return this->intranetSlbChargeType_ != nullptr;};
      void deleteIntranetSlbChargeType() { this->intranetSlbChargeType_ = nullptr;};
      inline string getIntranetSlbChargeType() const { DARABONBA_PTR_GET_DEFAULT(intranetSlbChargeType_, "") };
      inline Data& setIntranetSlbChargeType(string intranetSlbChargeType) { DARABONBA_PTR_SET_VALUE(intranetSlbChargeType_, intranetSlbChargeType) };


      // intranetSlbExpired Field Functions 
      bool hasIntranetSlbExpired() const { return this->intranetSlbExpired_ != nullptr;};
      void deleteIntranetSlbExpired() { this->intranetSlbExpired_ = nullptr;};
      inline bool getIntranetSlbExpired() const { DARABONBA_PTR_GET_DEFAULT(intranetSlbExpired_, false) };
      inline Data& setIntranetSlbExpired(bool intranetSlbExpired) { DARABONBA_PTR_SET_VALUE(intranetSlbExpired_, intranetSlbExpired) };


      // intranetSlbId Field Functions 
      bool hasIntranetSlbId() const { return this->intranetSlbId_ != nullptr;};
      void deleteIntranetSlbId() { this->intranetSlbId_ = nullptr;};
      inline string getIntranetSlbId() const { DARABONBA_PTR_GET_DEFAULT(intranetSlbId_, "") };
      inline Data& setIntranetSlbId(string intranetSlbId) { DARABONBA_PTR_SET_VALUE(intranetSlbId_, intranetSlbId) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> appName_ {};
      shared_ptr<string> clusterId_ {};
      // The configurations of the Internet-facing SLB instance.
      shared_ptr<vector<Data::Internet>> internet_ {};
      // The ID of the Internet-facing SLB instance.
      shared_ptr<string> internetIp_ {};
      shared_ptr<string> internetSlbChargeType_ {};
      shared_ptr<bool> internetSlbExpired_ {};
      // Configurations of Internet-facing SLB instances.
      shared_ptr<string> internetSlbId_ {};
      // The configurations of the internal-facing SLB instance.
      shared_ptr<vector<Data::Intranet>> intranet_ {};
      // The error code.
      // 
      // *   The **ErrorCode** parameter is not returned when the request succeeds.
      // *   The **ErrorCode** parameter is returned when the request fails. For more information, see **Error codes** in this topic.
      shared_ptr<string> intranetIp_ {};
      shared_ptr<string> intranetSlbChargeType_ {};
      shared_ptr<bool> intranetSlbExpired_ {};
      // The IP address of the internal-facing SLB instance.
      shared_ptr<string> intranetSlbId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeApplicationSlbsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeApplicationSlbsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeApplicationSlbsResponseBody::Data) };
    inline DescribeApplicationSlbsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeApplicationSlbsResponseBody::Data) };
    inline DescribeApplicationSlbsResponseBody& setData(const DescribeApplicationSlbsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApplicationSlbsResponseBody& setData(DescribeApplicationSlbsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeApplicationSlbsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeApplicationSlbsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationSlbsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeApplicationSlbsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeApplicationSlbsResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // Indicates whether the information about the SLB instances that are associated with an application was obtained successfully. Valid values:
    // 
    // *   **true**: indicates that the information was obtained successfully.
    // *   **false**: indicates that the information failed to be obtained.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<DescribeApplicationSlbsResponseBody::Data> data_ {};
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: indicates that the request was successful.
    // *   **3xx**: indicates that the request was redirected.
    // *   **4xx**: indicates that the request was invalid.
    // *   **5xx**: indicates that a server error occurred.
    shared_ptr<string> errorCode_ {};
    // The ID of the trace. It can be used to query the details of a request.
    shared_ptr<string> message_ {};
    // The returned message.
    // 
    // *   **success** is returned when the request succeeds.
    // *   An error code is returned when the request fails.
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // The returned data.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
