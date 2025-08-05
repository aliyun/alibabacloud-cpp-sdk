// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTUNNELQUOTATIMERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTUNNELQUOTATIMERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListTunnelQuotaTimerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTunnelQuotaTimerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(timezone, timezone_);
      DARABONBA_PTR_TO_JSON(tunnelQuotaParameter, tunnelQuotaParameter_);
    };
    friend void from_json(const Darabonba::Json& j, ListTunnelQuotaTimerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(tunnelQuotaParameter, tunnelQuotaParameter_);
    };
    ListTunnelQuotaTimerResponseBodyData() = default ;
    ListTunnelQuotaTimerResponseBodyData(const ListTunnelQuotaTimerResponseBodyData &) = default ;
    ListTunnelQuotaTimerResponseBodyData(ListTunnelQuotaTimerResponseBodyData &&) = default ;
    ListTunnelQuotaTimerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTunnelQuotaTimerResponseBodyData() = default ;
    ListTunnelQuotaTimerResponseBodyData& operator=(const ListTunnelQuotaTimerResponseBodyData &) = default ;
    ListTunnelQuotaTimerResponseBodyData& operator=(ListTunnelQuotaTimerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginTime_ != nullptr
        && this->endTime_ != nullptr && this->timezone_ != nullptr && this->tunnelQuotaParameter_ != nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline ListTunnelQuotaTimerResponseBodyData& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListTunnelQuotaTimerResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline ListTunnelQuotaTimerResponseBodyData& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // tunnelQuotaParameter Field Functions 
    bool hasTunnelQuotaParameter() const { return this->tunnelQuotaParameter_ != nullptr;};
    void deleteTunnelQuotaParameter() { this->tunnelQuotaParameter_ = nullptr;};
    inline const Models::ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter & tunnelQuotaParameter() const { DARABONBA_PTR_GET_CONST(tunnelQuotaParameter_, Models::ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter) };
    inline Models::ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter tunnelQuotaParameter() { DARABONBA_PTR_GET(tunnelQuotaParameter_, Models::ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter) };
    inline ListTunnelQuotaTimerResponseBodyData& setTunnelQuotaParameter(const Models::ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter & tunnelQuotaParameter) { DARABONBA_PTR_SET_VALUE(tunnelQuotaParameter_, tunnelQuotaParameter) };
    inline ListTunnelQuotaTimerResponseBodyData& setTunnelQuotaParameter(Models::ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter && tunnelQuotaParameter) { DARABONBA_PTR_SET_RVALUE(tunnelQuotaParameter_, tunnelQuotaParameter) };


  protected:
    // The start time of the time-specific configuration.
    std::shared_ptr<string> beginTime_ = nullptr;
    // The end time of the time-specific configuration.
    std::shared_ptr<string> endTime_ = nullptr;
    // The time zone property for the time-specific configuration.
    std::shared_ptr<string> timezone_ = nullptr;
    // The parameters for the time-specific configuration.
    std::shared_ptr<Models::ListTunnelQuotaTimerResponseBodyDataTunnelQuotaParameter> tunnelQuotaParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
