// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANSSERVICECLUSTERSRESPONSEBODYDATAAPPDETAIL_HPP_
#define ALIBABACLOUD_MODELS_LISTANSSERVICECLUSTERSRESPONSEBODYDATAAPPDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListAnsServiceClustersResponseBodyDataAppDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnsServiceClustersResponseBodyDataAppDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CheckInternal, checkInternal_);
      DARABONBA_PTR_TO_JSON(CheckPath, checkPath_);
      DARABONBA_PTR_TO_JSON(CheckTimeout, checkTimeout_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(HealthyCheckTimes, healthyCheckTimes_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(UnhealthyCheckTimes, unhealthyCheckTimes_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnsServiceClustersResponseBodyDataAppDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CheckInternal, checkInternal_);
      DARABONBA_PTR_FROM_JSON(CheckPath, checkPath_);
      DARABONBA_PTR_FROM_JSON(CheckTimeout, checkTimeout_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(HealthyCheckTimes, healthyCheckTimes_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(UnhealthyCheckTimes, unhealthyCheckTimes_);
    };
    ListAnsServiceClustersResponseBodyDataAppDetail() = default ;
    ListAnsServiceClustersResponseBodyDataAppDetail(const ListAnsServiceClustersResponseBodyDataAppDetail &) = default ;
    ListAnsServiceClustersResponseBodyDataAppDetail(ListAnsServiceClustersResponseBodyDataAppDetail &&) = default ;
    ListAnsServiceClustersResponseBodyDataAppDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnsServiceClustersResponseBodyDataAppDetail() = default ;
    ListAnsServiceClustersResponseBodyDataAppDetail& operator=(const ListAnsServiceClustersResponseBodyDataAppDetail &) = default ;
    ListAnsServiceClustersResponseBodyDataAppDetail& operator=(ListAnsServiceClustersResponseBodyDataAppDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->checkInternal_ == nullptr && return this->checkPath_ == nullptr && return this->checkTimeout_ == nullptr && return this->checkType_ == nullptr
        && return this->healthyCheckTimes_ == nullptr && return this->port_ == nullptr && return this->unhealthyCheckTimes_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListAnsServiceClustersResponseBodyDataAppDetail& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAnsServiceClustersResponseBodyDataAppDetail& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // checkInternal Field Functions 
    bool hasCheckInternal() const { return this->checkInternal_ != nullptr;};
    void deleteCheckInternal() { this->checkInternal_ = nullptr;};
    inline int32_t checkInternal() const { DARABONBA_PTR_GET_DEFAULT(checkInternal_, 0) };
    inline ListAnsServiceClustersResponseBodyDataAppDetail& setCheckInternal(int32_t checkInternal) { DARABONBA_PTR_SET_VALUE(checkInternal_, checkInternal) };


    // checkPath Field Functions 
    bool hasCheckPath() const { return this->checkPath_ != nullptr;};
    void deleteCheckPath() { this->checkPath_ = nullptr;};
    inline string checkPath() const { DARABONBA_PTR_GET_DEFAULT(checkPath_, "") };
    inline ListAnsServiceClustersResponseBodyDataAppDetail& setCheckPath(string checkPath) { DARABONBA_PTR_SET_VALUE(checkPath_, checkPath) };


    // checkTimeout Field Functions 
    bool hasCheckTimeout() const { return this->checkTimeout_ != nullptr;};
    void deleteCheckTimeout() { this->checkTimeout_ = nullptr;};
    inline int32_t checkTimeout() const { DARABONBA_PTR_GET_DEFAULT(checkTimeout_, 0) };
    inline ListAnsServiceClustersResponseBodyDataAppDetail& setCheckTimeout(int32_t checkTimeout) { DARABONBA_PTR_SET_VALUE(checkTimeout_, checkTimeout) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline string checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
    inline ListAnsServiceClustersResponseBodyDataAppDetail& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // healthyCheckTimes Field Functions 
    bool hasHealthyCheckTimes() const { return this->healthyCheckTimes_ != nullptr;};
    void deleteHealthyCheckTimes() { this->healthyCheckTimes_ = nullptr;};
    inline int32_t healthyCheckTimes() const { DARABONBA_PTR_GET_DEFAULT(healthyCheckTimes_, 0) };
    inline ListAnsServiceClustersResponseBodyDataAppDetail& setHealthyCheckTimes(int32_t healthyCheckTimes) { DARABONBA_PTR_SET_VALUE(healthyCheckTimes_, healthyCheckTimes) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ListAnsServiceClustersResponseBodyDataAppDetail& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // unhealthyCheckTimes Field Functions 
    bool hasUnhealthyCheckTimes() const { return this->unhealthyCheckTimes_ != nullptr;};
    void deleteUnhealthyCheckTimes() { this->unhealthyCheckTimes_ = nullptr;};
    inline int32_t unhealthyCheckTimes() const { DARABONBA_PTR_GET_DEFAULT(unhealthyCheckTimes_, 0) };
    inline ListAnsServiceClustersResponseBodyDataAppDetail& setUnhealthyCheckTimes(int32_t unhealthyCheckTimes) { DARABONBA_PTR_SET_VALUE(unhealthyCheckTimes_, unhealthyCheckTimes) };


  protected:
    // The ID of the application for which Microservices Governance is enabled.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application for which Microservices Governance is enabled.
    std::shared_ptr<string> appName_ = nullptr;
    // The health check interval. Unit: seconds.
    std::shared_ptr<int32_t> checkInternal_ = nullptr;
    // The path of the health check. This parameter is required only when the CheckType parameter is set to http.
    std::shared_ptr<string> checkPath_ = nullptr;
    // The timeout period of the health check response. Unit: seconds.
    std::shared_ptr<int32_t> checkTimeout_ = nullptr;
    // The type of the health check. Valid values:
    // 
    // *   connection: connection status check
    // *   tcp: TCP connection check
    // *   http: HTTP connection check
    std::shared_ptr<string> checkType_ = nullptr;
    // The maximum number of health check retries when the instance state changes from unhealthy to healthy.
    std::shared_ptr<int32_t> healthyCheckTimes_ = nullptr;
    // The port number of the application for which Microservices Governance is enabled.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The maximum number of health check retries when the instance state changes from healthy to unhealthy.
    std::shared_ptr<int32_t> unhealthyCheckTimes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
