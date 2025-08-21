// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKANDDOVOIPCALLFORHOTELRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CHECKANDDOVOIPCALLFORHOTELRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets.hpp>
#include <alibabacloud/models/CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CheckAndDoVoipCallForHotelResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAndDoVoipCallForHotelResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceTargets, deviceTargets_);
      DARABONBA_PTR_TO_JSON(IsStartCall, isStartCall_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(StartCallResult, startCallResult_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAndDoVoipCallForHotelResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceTargets, deviceTargets_);
      DARABONBA_PTR_FROM_JSON(IsStartCall, isStartCall_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(StartCallResult, startCallResult_);
    };
    CheckAndDoVoipCallForHotelResponseBodyResult() = default ;
    CheckAndDoVoipCallForHotelResponseBodyResult(const CheckAndDoVoipCallForHotelResponseBodyResult &) = default ;
    CheckAndDoVoipCallForHotelResponseBodyResult(CheckAndDoVoipCallForHotelResponseBodyResult &&) = default ;
    CheckAndDoVoipCallForHotelResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAndDoVoipCallForHotelResponseBodyResult() = default ;
    CheckAndDoVoipCallForHotelResponseBodyResult& operator=(const CheckAndDoVoipCallForHotelResponseBodyResult &) = default ;
    CheckAndDoVoipCallForHotelResponseBodyResult& operator=(CheckAndDoVoipCallForHotelResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceTargets_ != nullptr
        && this->isStartCall_ != nullptr && this->passed_ != nullptr && this->startCallResult_ != nullptr; };
    // deviceTargets Field Functions 
    bool hasDeviceTargets() const { return this->deviceTargets_ != nullptr;};
    void deleteDeviceTargets() { this->deviceTargets_ = nullptr;};
    inline const Models::CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets & deviceTargets() const { DARABONBA_PTR_GET_CONST(deviceTargets_, Models::CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets) };
    inline Models::CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets deviceTargets() { DARABONBA_PTR_GET(deviceTargets_, Models::CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets) };
    inline CheckAndDoVoipCallForHotelResponseBodyResult& setDeviceTargets(const Models::CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets & deviceTargets) { DARABONBA_PTR_SET_VALUE(deviceTargets_, deviceTargets) };
    inline CheckAndDoVoipCallForHotelResponseBodyResult& setDeviceTargets(Models::CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets && deviceTargets) { DARABONBA_PTR_SET_RVALUE(deviceTargets_, deviceTargets) };


    // isStartCall Field Functions 
    bool hasIsStartCall() const { return this->isStartCall_ != nullptr;};
    void deleteIsStartCall() { this->isStartCall_ = nullptr;};
    inline bool isStartCall() const { DARABONBA_PTR_GET_DEFAULT(isStartCall_, false) };
    inline CheckAndDoVoipCallForHotelResponseBodyResult& setIsStartCall(bool isStartCall) { DARABONBA_PTR_SET_VALUE(isStartCall_, isStartCall) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline bool passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, false) };
    inline CheckAndDoVoipCallForHotelResponseBodyResult& setPassed(bool passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // startCallResult Field Functions 
    bool hasStartCallResult() const { return this->startCallResult_ != nullptr;};
    void deleteStartCallResult() { this->startCallResult_ = nullptr;};
    inline const Models::CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult & startCallResult() const { DARABONBA_PTR_GET_CONST(startCallResult_, Models::CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult) };
    inline Models::CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult startCallResult() { DARABONBA_PTR_GET(startCallResult_, Models::CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult) };
    inline CheckAndDoVoipCallForHotelResponseBodyResult& setStartCallResult(const Models::CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult & startCallResult) { DARABONBA_PTR_SET_VALUE(startCallResult_, startCallResult) };
    inline CheckAndDoVoipCallForHotelResponseBodyResult& setStartCallResult(Models::CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult && startCallResult) { DARABONBA_PTR_SET_RVALUE(startCallResult_, startCallResult) };


  protected:
    std::shared_ptr<Models::CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargets> deviceTargets_ = nullptr;
    std::shared_ptr<bool> isStartCall_ = nullptr;
    std::shared_ptr<bool> passed_ = nullptr;
    std::shared_ptr<Models::CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult> startCallResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
