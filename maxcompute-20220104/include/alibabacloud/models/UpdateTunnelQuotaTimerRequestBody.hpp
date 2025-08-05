// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETUNNELQUOTATIMERREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATETUNNELQUOTATIMERREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateTunnelQuotaTimerRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTunnelQuotaTimerRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(tunnelQuotaParameter, tunnelQuotaParameter_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTunnelQuotaTimerRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(tunnelQuotaParameter, tunnelQuotaParameter_);
    };
    UpdateTunnelQuotaTimerRequestBody() = default ;
    UpdateTunnelQuotaTimerRequestBody(const UpdateTunnelQuotaTimerRequestBody &) = default ;
    UpdateTunnelQuotaTimerRequestBody(UpdateTunnelQuotaTimerRequestBody &&) = default ;
    UpdateTunnelQuotaTimerRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTunnelQuotaTimerRequestBody() = default ;
    UpdateTunnelQuotaTimerRequestBody& operator=(const UpdateTunnelQuotaTimerRequestBody &) = default ;
    UpdateTunnelQuotaTimerRequestBody& operator=(UpdateTunnelQuotaTimerRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginTime_ != nullptr
        && this->endTime_ != nullptr && this->tunnelQuotaParameter_ != nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline UpdateTunnelQuotaTimerRequestBody& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateTunnelQuotaTimerRequestBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // tunnelQuotaParameter Field Functions 
    bool hasTunnelQuotaParameter() const { return this->tunnelQuotaParameter_ != nullptr;};
    void deleteTunnelQuotaParameter() { this->tunnelQuotaParameter_ = nullptr;};
    inline const Models::UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter & tunnelQuotaParameter() const { DARABONBA_PTR_GET_CONST(tunnelQuotaParameter_, Models::UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter) };
    inline Models::UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter tunnelQuotaParameter() { DARABONBA_PTR_GET(tunnelQuotaParameter_, Models::UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter) };
    inline UpdateTunnelQuotaTimerRequestBody& setTunnelQuotaParameter(const Models::UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter & tunnelQuotaParameter) { DARABONBA_PTR_SET_VALUE(tunnelQuotaParameter_, tunnelQuotaParameter) };
    inline UpdateTunnelQuotaTimerRequestBody& setTunnelQuotaParameter(Models::UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter && tunnelQuotaParameter) { DARABONBA_PTR_SET_RVALUE(tunnelQuotaParameter_, tunnelQuotaParameter) };


  protected:
    // The start time of the time-specific configuration.
    std::shared_ptr<string> beginTime_ = nullptr;
    // The end time of the time-specific configuration.
    std::shared_ptr<string> endTime_ = nullptr;
    // The parameters for the time-specific configuration.
    std::shared_ptr<Models::UpdateTunnelQuotaTimerRequestBodyTunnelQuotaParameter> tunnelQuotaParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
