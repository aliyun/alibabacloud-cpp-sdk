// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSLBSRESPONSEBODYDATAINTERNET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSLBSRESPONSEBODYDATAINTERNET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationSlbsResponseBodyDataInternet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationSlbsResponseBodyDataInternet& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeApplicationSlbsResponseBodyDataInternet& obj) { 
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
    DescribeApplicationSlbsResponseBodyDataInternet() = default ;
    DescribeApplicationSlbsResponseBodyDataInternet(const DescribeApplicationSlbsResponseBodyDataInternet &) = default ;
    DescribeApplicationSlbsResponseBodyDataInternet(DescribeApplicationSlbsResponseBodyDataInternet &&) = default ;
    DescribeApplicationSlbsResponseBodyDataInternet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationSlbsResponseBodyDataInternet() = default ;
    DescribeApplicationSlbsResponseBodyDataInternet& operator=(const DescribeApplicationSlbsResponseBodyDataInternet &) = default ;
    DescribeApplicationSlbsResponseBodyDataInternet& operator=(DescribeApplicationSlbsResponseBodyDataInternet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionDrainTimeout_ == nullptr
        && return this->cookie_ == nullptr && return this->cookieTimeout_ == nullptr && return this->createTime_ == nullptr && return this->enableConnectionDrain_ == nullptr && return this->httpsCaCertId_ == nullptr
        && return this->httpsCertId_ == nullptr && return this->port_ == nullptr && return this->protocol_ == nullptr && return this->stickySession_ == nullptr && return this->stickySessionType_ == nullptr
        && return this->targetPort_ == nullptr && return this->VServerGroupId_ == nullptr; };
    // connectionDrainTimeout Field Functions 
    bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
    void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
    inline int32_t connectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
    inline DescribeApplicationSlbsResponseBodyDataInternet& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


    // cookie Field Functions 
    bool hasCookie() const { return this->cookie_ != nullptr;};
    void deleteCookie() { this->cookie_ = nullptr;};
    inline string cookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
    inline DescribeApplicationSlbsResponseBodyDataInternet& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


    // cookieTimeout Field Functions 
    bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
    void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
    inline int32_t cookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
    inline DescribeApplicationSlbsResponseBodyDataInternet& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeApplicationSlbsResponseBodyDataInternet& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enableConnectionDrain Field Functions 
    bool hasEnableConnectionDrain() const { return this->enableConnectionDrain_ != nullptr;};
    void deleteEnableConnectionDrain() { this->enableConnectionDrain_ = nullptr;};
    inline bool enableConnectionDrain() const { DARABONBA_PTR_GET_DEFAULT(enableConnectionDrain_, false) };
    inline DescribeApplicationSlbsResponseBodyDataInternet& setEnableConnectionDrain(bool enableConnectionDrain) { DARABONBA_PTR_SET_VALUE(enableConnectionDrain_, enableConnectionDrain) };


    // httpsCaCertId Field Functions 
    bool hasHttpsCaCertId() const { return this->httpsCaCertId_ != nullptr;};
    void deleteHttpsCaCertId() { this->httpsCaCertId_ = nullptr;};
    inline string httpsCaCertId() const { DARABONBA_PTR_GET_DEFAULT(httpsCaCertId_, "") };
    inline DescribeApplicationSlbsResponseBodyDataInternet& setHttpsCaCertId(string httpsCaCertId) { DARABONBA_PTR_SET_VALUE(httpsCaCertId_, httpsCaCertId) };


    // httpsCertId Field Functions 
    bool hasHttpsCertId() const { return this->httpsCertId_ != nullptr;};
    void deleteHttpsCertId() { this->httpsCertId_ = nullptr;};
    inline string httpsCertId() const { DARABONBA_PTR_GET_DEFAULT(httpsCertId_, "") };
    inline DescribeApplicationSlbsResponseBodyDataInternet& setHttpsCertId(string httpsCertId) { DARABONBA_PTR_SET_VALUE(httpsCertId_, httpsCertId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeApplicationSlbsResponseBodyDataInternet& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeApplicationSlbsResponseBodyDataInternet& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // stickySession Field Functions 
    bool hasStickySession() const { return this->stickySession_ != nullptr;};
    void deleteStickySession() { this->stickySession_ = nullptr;};
    inline bool stickySession() const { DARABONBA_PTR_GET_DEFAULT(stickySession_, false) };
    inline DescribeApplicationSlbsResponseBodyDataInternet& setStickySession(bool stickySession) { DARABONBA_PTR_SET_VALUE(stickySession_, stickySession) };


    // stickySessionType Field Functions 
    bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
    void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
    inline string stickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
    inline DescribeApplicationSlbsResponseBodyDataInternet& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline int32_t targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
    inline DescribeApplicationSlbsResponseBodyDataInternet& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline DescribeApplicationSlbsResponseBodyDataInternet& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


  protected:
    std::shared_ptr<int32_t> connectionDrainTimeout_ = nullptr;
    std::shared_ptr<string> cookie_ = nullptr;
    std::shared_ptr<int32_t> cookieTimeout_ = nullptr;
    // The timestamp when the canary release rule was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<bool> enableConnectionDrain_ = nullptr;
    std::shared_ptr<string> httpsCaCertId_ = nullptr;
    // The supported protocol.
    std::shared_ptr<string> httpsCertId_ = nullptr;
    // The ID of the internal-facing SLB instance.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The container port.
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<bool> stickySession_ = nullptr;
    std::shared_ptr<string> stickySessionType_ = nullptr;
    // The port specified for the SLB listener.
    std::shared_ptr<int32_t> targetPort_ = nullptr;
    std::shared_ptr<string> VServerGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
