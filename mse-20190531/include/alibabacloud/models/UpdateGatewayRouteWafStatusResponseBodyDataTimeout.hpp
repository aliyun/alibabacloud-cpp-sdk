// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATATIMEOUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODYDATATIMEOUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteWafStatusResponseBodyDataTimeout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteWafStatusResponseBodyDataTimeout& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
      DARABONBA_PTR_TO_JSON(UnitNum, unitNum_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteWafStatusResponseBodyDataTimeout& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
      DARABONBA_PTR_FROM_JSON(UnitNum, unitNum_);
    };
    UpdateGatewayRouteWafStatusResponseBodyDataTimeout() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataTimeout(const UpdateGatewayRouteWafStatusResponseBodyDataTimeout &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataTimeout(UpdateGatewayRouteWafStatusResponseBodyDataTimeout &&) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataTimeout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteWafStatusResponseBodyDataTimeout() = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataTimeout& operator=(const UpdateGatewayRouteWafStatusResponseBodyDataTimeout &) = default ;
    UpdateGatewayRouteWafStatusResponseBodyDataTimeout& operator=(UpdateGatewayRouteWafStatusResponseBodyDataTimeout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->timeUnit_ != nullptr && this->unitNum_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataTimeout& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline UpdateGatewayRouteWafStatusResponseBodyDataTimeout& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


    // unitNum Field Functions 
    bool hasUnitNum() const { return this->unitNum_ != nullptr;};
    void deleteUnitNum() { this->unitNum_ = nullptr;};
    inline int32_t unitNum() const { DARABONBA_PTR_GET_DEFAULT(unitNum_, 0) };
    inline UpdateGatewayRouteWafStatusResponseBodyDataTimeout& setUnitNum(int32_t unitNum) { DARABONBA_PTR_SET_VALUE(unitNum_, unitNum) };


  protected:
    // The status.
    std::shared_ptr<string> status_ = nullptr;
    // The time unit.
    std::shared_ptr<string> timeUnit_ = nullptr;
    // The unit number.
    std::shared_ptr<int32_t> unitNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
