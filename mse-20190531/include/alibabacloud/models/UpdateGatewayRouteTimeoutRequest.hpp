// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTETIMEOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTETIMEOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteTimeoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteTimeoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(TimeoutJSON, timeoutJSON_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteTimeoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(TimeoutJSON, timeoutJSON_);
    };
    UpdateGatewayRouteTimeoutRequest() = default ;
    UpdateGatewayRouteTimeoutRequest(const UpdateGatewayRouteTimeoutRequest &) = default ;
    UpdateGatewayRouteTimeoutRequest(UpdateGatewayRouteTimeoutRequest &&) = default ;
    UpdateGatewayRouteTimeoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteTimeoutRequest() = default ;
    UpdateGatewayRouteTimeoutRequest& operator=(const UpdateGatewayRouteTimeoutRequest &) = default ;
    UpdateGatewayRouteTimeoutRequest& operator=(UpdateGatewayRouteTimeoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeoutJSON : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeoutJSON& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
        DARABONBA_PTR_TO_JSON(UnitNum, unitNum_);
      };
      friend void from_json(const Darabonba::Json& j, TimeoutJSON& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
        DARABONBA_PTR_FROM_JSON(UnitNum, unitNum_);
      };
      TimeoutJSON() = default ;
      TimeoutJSON(const TimeoutJSON &) = default ;
      TimeoutJSON(TimeoutJSON &&) = default ;
      TimeoutJSON(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeoutJSON() = default ;
      TimeoutJSON& operator=(const TimeoutJSON &) = default ;
      TimeoutJSON& operator=(TimeoutJSON &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->timeUnit_ == nullptr && this->unitNum_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TimeoutJSON& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // timeUnit Field Functions 
      bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
      void deleteTimeUnit() { this->timeUnit_ = nullptr;};
      inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
      inline TimeoutJSON& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


      // unitNum Field Functions 
      bool hasUnitNum() const { return this->unitNum_ != nullptr;};
      void deleteUnitNum() { this->unitNum_ = nullptr;};
      inline int32_t getUnitNum() const { DARABONBA_PTR_GET_DEFAULT(unitNum_, 0) };
      inline TimeoutJSON& setUnitNum(int32_t unitNum) { DARABONBA_PTR_SET_VALUE(unitNum_, unitNum) };


    protected:
      // The status of the policy.
      shared_ptr<string> status_ {};
      // The unit of time. A value of s indicates seconds.
      shared_ptr<string> timeUnit_ {};
      // The value of the timeout period.
      shared_ptr<int32_t> unitNum_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->id_ == nullptr && this->timeoutJSON_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayRouteTimeoutRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayRouteTimeoutRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayRouteTimeoutRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayRouteTimeoutRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // timeoutJSON Field Functions 
    bool hasTimeoutJSON() const { return this->timeoutJSON_ != nullptr;};
    void deleteTimeoutJSON() { this->timeoutJSON_ = nullptr;};
    inline const UpdateGatewayRouteTimeoutRequest::TimeoutJSON & getTimeoutJSON() const { DARABONBA_PTR_GET_CONST(timeoutJSON_, UpdateGatewayRouteTimeoutRequest::TimeoutJSON) };
    inline UpdateGatewayRouteTimeoutRequest::TimeoutJSON getTimeoutJSON() { DARABONBA_PTR_GET(timeoutJSON_, UpdateGatewayRouteTimeoutRequest::TimeoutJSON) };
    inline UpdateGatewayRouteTimeoutRequest& setTimeoutJSON(const UpdateGatewayRouteTimeoutRequest::TimeoutJSON & timeoutJSON) { DARABONBA_PTR_SET_VALUE(timeoutJSON_, timeoutJSON) };
    inline UpdateGatewayRouteTimeoutRequest& setTimeoutJSON(UpdateGatewayRouteTimeoutRequest::TimeoutJSON && timeoutJSON) { DARABONBA_PTR_SET_RVALUE(timeoutJSON_, timeoutJSON) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the gateway.
    shared_ptr<int64_t> gatewayId_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // The ID of the associated record.
    shared_ptr<int64_t> id_ {};
    // The timeout period.
    shared_ptr<UpdateGatewayRouteTimeoutRequest::TimeoutJSON> timeoutJSON_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
