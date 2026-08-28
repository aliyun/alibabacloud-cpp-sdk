// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYERRORACCESSLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYERRORACCESSLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewayErrorAccessLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayErrorAccessLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authority, authority_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(gatewayRequestId, gatewayRequestId_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(responseCode, responseCode_);
      DARABONBA_PTR_TO_JSON(routeName, routeName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayErrorAccessLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authority, authority_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(gatewayRequestId, gatewayRequestId_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(responseCode, responseCode_);
      DARABONBA_PTR_FROM_JSON(routeName, routeName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    ListGatewayErrorAccessLogsRequest() = default ;
    ListGatewayErrorAccessLogsRequest(const ListGatewayErrorAccessLogsRequest &) = default ;
    ListGatewayErrorAccessLogsRequest(ListGatewayErrorAccessLogsRequest &&) = default ;
    ListGatewayErrorAccessLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayErrorAccessLogsRequest() = default ;
    ListGatewayErrorAccessLogsRequest& operator=(const ListGatewayErrorAccessLogsRequest &) = default ;
    ListGatewayErrorAccessLogsRequest& operator=(ListGatewayErrorAccessLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authority_ == nullptr
        && this->endTime_ == nullptr && this->gatewayRequestId_ == nullptr && this->path_ == nullptr && this->responseCode_ == nullptr && this->routeName_ == nullptr
        && this->startTime_ == nullptr; };
    // authority Field Functions 
    bool hasAuthority() const { return this->authority_ != nullptr;};
    void deleteAuthority() { this->authority_ = nullptr;};
    inline string getAuthority() const { DARABONBA_PTR_GET_DEFAULT(authority_, "") };
    inline ListGatewayErrorAccessLogsRequest& setAuthority(string authority) { DARABONBA_PTR_SET_VALUE(authority_, authority) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListGatewayErrorAccessLogsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gatewayRequestId Field Functions 
    bool hasGatewayRequestId() const { return this->gatewayRequestId_ != nullptr;};
    void deleteGatewayRequestId() { this->gatewayRequestId_ = nullptr;};
    inline string getGatewayRequestId() const { DARABONBA_PTR_GET_DEFAULT(gatewayRequestId_, "") };
    inline ListGatewayErrorAccessLogsRequest& setGatewayRequestId(string gatewayRequestId) { DARABONBA_PTR_SET_VALUE(gatewayRequestId_, gatewayRequestId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListGatewayErrorAccessLogsRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // responseCode Field Functions 
    bool hasResponseCode() const { return this->responseCode_ != nullptr;};
    void deleteResponseCode() { this->responseCode_ = nullptr;};
    inline string getResponseCode() const { DARABONBA_PTR_GET_DEFAULT(responseCode_, "") };
    inline ListGatewayErrorAccessLogsRequest& setResponseCode(string responseCode) { DARABONBA_PTR_SET_VALUE(responseCode_, responseCode) };


    // routeName Field Functions 
    bool hasRouteName() const { return this->routeName_ != nullptr;};
    void deleteRouteName() { this->routeName_ = nullptr;};
    inline string getRouteName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
    inline ListGatewayErrorAccessLogsRequest& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListGatewayErrorAccessLogsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> authority_ {};
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> gatewayRequestId_ {};
    shared_ptr<string> path_ {};
    shared_ptr<string> responseCode_ {};
    shared_ptr<string> routeName_ {};
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
