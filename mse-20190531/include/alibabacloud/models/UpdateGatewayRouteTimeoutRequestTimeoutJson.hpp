// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTETIMEOUTREQUESTTIMEOUTJSON_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTETIMEOUTREQUESTTIMEOUTJSON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteTimeoutRequestTimeoutJSON : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteTimeoutRequestTimeoutJSON& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
      DARABONBA_PTR_TO_JSON(UnitNum, unitNum_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteTimeoutRequestTimeoutJSON& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
      DARABONBA_PTR_FROM_JSON(UnitNum, unitNum_);
    };
    UpdateGatewayRouteTimeoutRequestTimeoutJSON() = default ;
    UpdateGatewayRouteTimeoutRequestTimeoutJSON(const UpdateGatewayRouteTimeoutRequestTimeoutJSON &) = default ;
    UpdateGatewayRouteTimeoutRequestTimeoutJSON(UpdateGatewayRouteTimeoutRequestTimeoutJSON &&) = default ;
    UpdateGatewayRouteTimeoutRequestTimeoutJSON(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteTimeoutRequestTimeoutJSON() = default ;
    UpdateGatewayRouteTimeoutRequestTimeoutJSON& operator=(const UpdateGatewayRouteTimeoutRequestTimeoutJSON &) = default ;
    UpdateGatewayRouteTimeoutRequestTimeoutJSON& operator=(UpdateGatewayRouteTimeoutRequestTimeoutJSON &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr
        && return this->timeUnit_ == nullptr && return this->unitNum_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateGatewayRouteTimeoutRequestTimeoutJSON& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline UpdateGatewayRouteTimeoutRequestTimeoutJSON& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


    // unitNum Field Functions 
    bool hasUnitNum() const { return this->unitNum_ != nullptr;};
    void deleteUnitNum() { this->unitNum_ = nullptr;};
    inline int32_t unitNum() const { DARABONBA_PTR_GET_DEFAULT(unitNum_, 0) };
    inline UpdateGatewayRouteTimeoutRequestTimeoutJSON& setUnitNum(int32_t unitNum) { DARABONBA_PTR_SET_VALUE(unitNum_, unitNum) };


  protected:
    // The status of the policy.
    std::shared_ptr<string> status_ = nullptr;
    // The unit of time. A value of s indicates seconds.
    std::shared_ptr<string> timeUnit_ = nullptr;
    // The value of the timeout period.
    std::shared_ptr<int32_t> unitNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
