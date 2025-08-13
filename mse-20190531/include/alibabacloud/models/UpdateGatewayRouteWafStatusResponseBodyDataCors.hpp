// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATACORS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATACORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteWafStatusResponseBodyDataCors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteWafStatusResponseBodyDataCors& obj) { 
      DARABONBA_PTR_TO_JSON(AllowCredentials, allowCredentials_);
      DARABONBA_PTR_TO_JSON(AllowHeaders, allowHeaders_);
      DARABONBA_PTR_TO_JSON(AllowMethods, allowMethods_);
      DARABONBA_PTR_TO_JSON(AllowOrigins, allowOrigins_);
      DARABONBA_PTR_TO_JSON(ExposeHeaders, exposeHeaders_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
      DARABONBA_PTR_TO_JSON(UnitNum, unitNum_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteWafStatusResponseBodyDataCors& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowCredentials, allowCredentials_);
      DARABONBA_PTR_FROM_JSON(AllowHeaders, allowHeaders_);
      DARABONBA_PTR_FROM_JSON(AllowMethods, allowMethods_);
      DARABONBA_PTR_FROM_JSON(AllowOrigins, allowOrigins_);
      DARABONBA_PTR_FROM_JSON(ExposeHeaders, exposeHeaders_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
      DARABONBA_PTR_FROM_JSON(UnitNum, unitNum_);
    };
    UpdateGatewayRouteWafStatusResponseBodyDataCors() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataCors(const UpdateGatewayRouteWafStatusResponseBodyDataCors &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataCors(UpdateGatewayRouteWafStatusResponseBodyDataCors &&) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataCors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteWafStatusResponseBodyDataCors() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataCors& operator=(const UpdateGatewayRouteWafStatusResponseBodyDataCors &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataCors& operator=(UpdateGatewayRouteWafStatusResponseBodyDataCors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowCredentials_ != nullptr
        && this->allowHeaders_ != nullptr && this->allowMethods_ != nullptr && this->allowOrigins_ != nullptr && this->exposeHeaders_ != nullptr && this->status_ != nullptr
        && this->timeUnit_ != nullptr && this->unitNum_ != nullptr; };
    // allowCredentials Field Functions 
    bool hasAllowCredentials() const { return this->allowCredentials_ != nullptr;};
    void deleteAllowCredentials() { this->allowCredentials_ = nullptr;};
    inline bool allowCredentials() const { DARABONBA_PTR_GET_DEFAULT(allowCredentials_, false) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataCors& setAllowCredentials(bool allowCredentials) { DARABONBA_PTR_SET_VALUE(allowCredentials_, allowCredentials) };


    // allowHeaders Field Functions 
    bool hasAllowHeaders() const { return this->allowHeaders_ != nullptr;};
    void deleteAllowHeaders() { this->allowHeaders_ = nullptr;};
    inline string allowHeaders() const { DARABONBA_PTR_GET_DEFAULT(allowHeaders_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataCors& setAllowHeaders(string allowHeaders) { DARABONBA_PTR_SET_VALUE(allowHeaders_, allowHeaders) };


    // allowMethods Field Functions 
    bool hasAllowMethods() const { return this->allowMethods_ != nullptr;};
    void deleteAllowMethods() { this->allowMethods_ = nullptr;};
    inline string allowMethods() const { DARABONBA_PTR_GET_DEFAULT(allowMethods_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataCors& setAllowMethods(string allowMethods) { DARABONBA_PTR_SET_VALUE(allowMethods_, allowMethods) };


    // allowOrigins Field Functions 
    bool hasAllowOrigins() const { return this->allowOrigins_ != nullptr;};
    void deleteAllowOrigins() { this->allowOrigins_ = nullptr;};
    inline string allowOrigins() const { DARABONBA_PTR_GET_DEFAULT(allowOrigins_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataCors& setAllowOrigins(string allowOrigins) { DARABONBA_PTR_SET_VALUE(allowOrigins_, allowOrigins) };


    // exposeHeaders Field Functions 
    bool hasExposeHeaders() const { return this->exposeHeaders_ != nullptr;};
    void deleteExposeHeaders() { this->exposeHeaders_ = nullptr;};
    inline string exposeHeaders() const { DARABONBA_PTR_GET_DEFAULT(exposeHeaders_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataCors& setExposeHeaders(string exposeHeaders) { DARABONBA_PTR_SET_VALUE(exposeHeaders_, exposeHeaders) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataCors& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataCors& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


    // unitNum Field Functions 
    bool hasUnitNum() const { return this->unitNum_ != nullptr;};
    void deleteUnitNum() { this->unitNum_ = nullptr;};
    inline int64_t unitNum() const { DARABONBA_PTR_GET_DEFAULT(unitNum_, 0L) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataCors& setUnitNum(int64_t unitNum) { DARABONBA_PTR_SET_VALUE(unitNum_, unitNum) };


  protected:
    // The credentials allowed.
    std::shared_ptr<bool> allowCredentials_ = nullptr;
    // The headers allowed.
    std::shared_ptr<string> allowHeaders_ = nullptr;
    // The methods allowed.
    std::shared_ptr<string> allowMethods_ = nullptr;
    // The origins allowed.
    std::shared_ptr<string> allowOrigins_ = nullptr;
    // The response headers.
    std::shared_ptr<string> exposeHeaders_ = nullptr;
    // The status.
    std::shared_ptr<string> status_ = nullptr;
    // The time unit.
    std::shared_ptr<string> timeUnit_ = nullptr;
    // The unit number.
    std::shared_ptr<int64_t> unitNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
