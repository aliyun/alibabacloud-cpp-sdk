// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYOTASEARCHV2RESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightModifyOtaSearchV2ResponseBodyModuleAgentInfos.hpp>
#include <alibabacloud/models/FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo.hpp>
#include <alibabacloud/models/FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos.hpp>
#include <alibabacloud/models/FlightModifyOtaSearchV2ResponseBodyModulePassengerCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOtaSearchV2ResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOtaSearchV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(agentInfos, agentInfos_);
      DARABONBA_PTR_TO_JSON(agent_info, agentInfo_);
      DARABONBA_PTR_TO_JSON(cache_key, cacheKey_);
      DARABONBA_PTR_TO_JSON(flight_segment_infos, flightSegmentInfos_);
      DARABONBA_PTR_TO_JSON(passenger_count, passengerCount_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOtaSearchV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(agentInfos, agentInfos_);
      DARABONBA_PTR_FROM_JSON(agent_info, agentInfo_);
      DARABONBA_PTR_FROM_JSON(cache_key, cacheKey_);
      DARABONBA_PTR_FROM_JSON(flight_segment_infos, flightSegmentInfos_);
      DARABONBA_PTR_FROM_JSON(passenger_count, passengerCount_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
    };
    FlightModifyOtaSearchV2ResponseBodyModule() = default ;
    FlightModifyOtaSearchV2ResponseBodyModule(const FlightModifyOtaSearchV2ResponseBodyModule &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModule(FlightModifyOtaSearchV2ResponseBodyModule &&) = default ;
    FlightModifyOtaSearchV2ResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOtaSearchV2ResponseBodyModule() = default ;
    FlightModifyOtaSearchV2ResponseBodyModule& operator=(const FlightModifyOtaSearchV2ResponseBodyModule &) = default ;
    FlightModifyOtaSearchV2ResponseBodyModule& operator=(FlightModifyOtaSearchV2ResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentInfos_ != nullptr
        && this->agentInfo_ != nullptr && this->cacheKey_ != nullptr && this->flightSegmentInfos_ != nullptr && this->passengerCount_ != nullptr && this->sessionId_ != nullptr; };
    // agentInfos Field Functions 
    bool hasAgentInfos() const { return this->agentInfos_ != nullptr;};
    void deleteAgentInfos() { this->agentInfos_ = nullptr;};
    inline const vector<Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfos> & agentInfos() const { DARABONBA_PTR_GET_CONST(agentInfos_, vector<Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfos>) };
    inline vector<Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfos> agentInfos() { DARABONBA_PTR_GET(agentInfos_, vector<Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfos>) };
    inline FlightModifyOtaSearchV2ResponseBodyModule& setAgentInfos(const vector<Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfos> & agentInfos) { DARABONBA_PTR_SET_VALUE(agentInfos_, agentInfos) };
    inline FlightModifyOtaSearchV2ResponseBodyModule& setAgentInfos(vector<Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfos> && agentInfos) { DARABONBA_PTR_SET_RVALUE(agentInfos_, agentInfos) };


    // agentInfo Field Functions 
    bool hasAgentInfo() const { return this->agentInfo_ != nullptr;};
    void deleteAgentInfo() { this->agentInfo_ = nullptr;};
    inline const Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo & agentInfo() const { DARABONBA_PTR_GET_CONST(agentInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo) };
    inline Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo agentInfo() { DARABONBA_PTR_GET(agentInfo_, Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModule& setAgentInfo(const Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo & agentInfo) { DARABONBA_PTR_SET_VALUE(agentInfo_, agentInfo) };
    inline FlightModifyOtaSearchV2ResponseBodyModule& setAgentInfo(Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo && agentInfo) { DARABONBA_PTR_SET_RVALUE(agentInfo_, agentInfo) };


    // cacheKey Field Functions 
    bool hasCacheKey() const { return this->cacheKey_ != nullptr;};
    void deleteCacheKey() { this->cacheKey_ = nullptr;};
    inline string cacheKey() const { DARABONBA_PTR_GET_DEFAULT(cacheKey_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModule& setCacheKey(string cacheKey) { DARABONBA_PTR_SET_VALUE(cacheKey_, cacheKey) };


    // flightSegmentInfos Field Functions 
    bool hasFlightSegmentInfos() const { return this->flightSegmentInfos_ != nullptr;};
    void deleteFlightSegmentInfos() { this->flightSegmentInfos_ = nullptr;};
    inline const vector<vector<Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos>> & flightSegmentInfos() const { DARABONBA_PTR_GET_CONST(flightSegmentInfos_, vector<vector<Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos>>) };
    inline vector<vector<Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos>> flightSegmentInfos() { DARABONBA_PTR_GET(flightSegmentInfos_, vector<vector<Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos>>) };
    inline FlightModifyOtaSearchV2ResponseBodyModule& setFlightSegmentInfos(const vector<vector<Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos>> & flightSegmentInfos) { DARABONBA_PTR_SET_VALUE(flightSegmentInfos_, flightSegmentInfos) };
    inline FlightModifyOtaSearchV2ResponseBodyModule& setFlightSegmentInfos(vector<vector<Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos>> && flightSegmentInfos) { DARABONBA_PTR_SET_RVALUE(flightSegmentInfos_, flightSegmentInfos) };


    // passengerCount Field Functions 
    bool hasPassengerCount() const { return this->passengerCount_ != nullptr;};
    void deletePassengerCount() { this->passengerCount_ = nullptr;};
    inline const Models::FlightModifyOtaSearchV2ResponseBodyModulePassengerCount & passengerCount() const { DARABONBA_PTR_GET_CONST(passengerCount_, Models::FlightModifyOtaSearchV2ResponseBodyModulePassengerCount) };
    inline Models::FlightModifyOtaSearchV2ResponseBodyModulePassengerCount passengerCount() { DARABONBA_PTR_GET(passengerCount_, Models::FlightModifyOtaSearchV2ResponseBodyModulePassengerCount) };
    inline FlightModifyOtaSearchV2ResponseBodyModule& setPassengerCount(const Models::FlightModifyOtaSearchV2ResponseBodyModulePassengerCount & passengerCount) { DARABONBA_PTR_SET_VALUE(passengerCount_, passengerCount) };
    inline FlightModifyOtaSearchV2ResponseBodyModule& setPassengerCount(Models::FlightModifyOtaSearchV2ResponseBodyModulePassengerCount && passengerCount) { DARABONBA_PTR_SET_RVALUE(passengerCount_, passengerCount) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FlightModifyOtaSearchV2ResponseBodyModule& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<vector<Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfos>> agentInfos_ = nullptr;
    std::shared_ptr<Models::FlightModifyOtaSearchV2ResponseBodyModuleAgentInfo> agentInfo_ = nullptr;
    std::shared_ptr<string> cacheKey_ = nullptr;
    std::shared_ptr<vector<vector<Models::FlightModifyOtaSearchV2ResponseBodyModuleFlightSegmentInfos>>> flightSegmentInfos_ = nullptr;
    std::shared_ptr<Models::FlightModifyOtaSearchV2ResponseBodyModulePassengerCount> passengerCount_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
