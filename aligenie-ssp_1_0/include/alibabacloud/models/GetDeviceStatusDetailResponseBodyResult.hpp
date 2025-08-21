// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICESTATUSDETAILRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICESTATUSDETAILRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDeviceStatusDetailResponseBodyResultPlayer.hpp>
#include <alibabacloud/models/GetDeviceStatusDetailResponseBodyResultPower.hpp>
#include <alibabacloud/models/GetDeviceStatusDetailResponseBodyResultSpeaker.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceStatusDetailResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceStatusDetailResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Player, player_);
      DARABONBA_PTR_TO_JSON(Power, power_);
      DARABONBA_PTR_TO_JSON(Speaker, speaker_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceStatusDetailResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Player, player_);
      DARABONBA_PTR_FROM_JSON(Power, power_);
      DARABONBA_PTR_FROM_JSON(Speaker, speaker_);
    };
    GetDeviceStatusDetailResponseBodyResult() = default ;
    GetDeviceStatusDetailResponseBodyResult(const GetDeviceStatusDetailResponseBodyResult &) = default ;
    GetDeviceStatusDetailResponseBodyResult(GetDeviceStatusDetailResponseBodyResult &&) = default ;
    GetDeviceStatusDetailResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceStatusDetailResponseBodyResult() = default ;
    GetDeviceStatusDetailResponseBodyResult& operator=(const GetDeviceStatusDetailResponseBodyResult &) = default ;
    GetDeviceStatusDetailResponseBodyResult& operator=(GetDeviceStatusDetailResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->player_ != nullptr
        && this->power_ != nullptr && this->speaker_ != nullptr; };
    // player Field Functions 
    bool hasPlayer() const { return this->player_ != nullptr;};
    void deletePlayer() { this->player_ = nullptr;};
    inline const Models::GetDeviceStatusDetailResponseBodyResultPlayer & player() const { DARABONBA_PTR_GET_CONST(player_, Models::GetDeviceStatusDetailResponseBodyResultPlayer) };
    inline Models::GetDeviceStatusDetailResponseBodyResultPlayer player() { DARABONBA_PTR_GET(player_, Models::GetDeviceStatusDetailResponseBodyResultPlayer) };
    inline GetDeviceStatusDetailResponseBodyResult& setPlayer(const Models::GetDeviceStatusDetailResponseBodyResultPlayer & player) { DARABONBA_PTR_SET_VALUE(player_, player) };
    inline GetDeviceStatusDetailResponseBodyResult& setPlayer(Models::GetDeviceStatusDetailResponseBodyResultPlayer && player) { DARABONBA_PTR_SET_RVALUE(player_, player) };


    // power Field Functions 
    bool hasPower() const { return this->power_ != nullptr;};
    void deletePower() { this->power_ = nullptr;};
    inline const Models::GetDeviceStatusDetailResponseBodyResultPower & power() const { DARABONBA_PTR_GET_CONST(power_, Models::GetDeviceStatusDetailResponseBodyResultPower) };
    inline Models::GetDeviceStatusDetailResponseBodyResultPower power() { DARABONBA_PTR_GET(power_, Models::GetDeviceStatusDetailResponseBodyResultPower) };
    inline GetDeviceStatusDetailResponseBodyResult& setPower(const Models::GetDeviceStatusDetailResponseBodyResultPower & power) { DARABONBA_PTR_SET_VALUE(power_, power) };
    inline GetDeviceStatusDetailResponseBodyResult& setPower(Models::GetDeviceStatusDetailResponseBodyResultPower && power) { DARABONBA_PTR_SET_RVALUE(power_, power) };


    // speaker Field Functions 
    bool hasSpeaker() const { return this->speaker_ != nullptr;};
    void deleteSpeaker() { this->speaker_ = nullptr;};
    inline const Models::GetDeviceStatusDetailResponseBodyResultSpeaker & speaker() const { DARABONBA_PTR_GET_CONST(speaker_, Models::GetDeviceStatusDetailResponseBodyResultSpeaker) };
    inline Models::GetDeviceStatusDetailResponseBodyResultSpeaker speaker() { DARABONBA_PTR_GET(speaker_, Models::GetDeviceStatusDetailResponseBodyResultSpeaker) };
    inline GetDeviceStatusDetailResponseBodyResult& setSpeaker(const Models::GetDeviceStatusDetailResponseBodyResultSpeaker & speaker) { DARABONBA_PTR_SET_VALUE(speaker_, speaker) };
    inline GetDeviceStatusDetailResponseBodyResult& setSpeaker(Models::GetDeviceStatusDetailResponseBodyResultSpeaker && speaker) { DARABONBA_PTR_SET_RVALUE(speaker_, speaker) };


  protected:
    std::shared_ptr<Models::GetDeviceStatusDetailResponseBodyResultPlayer> player_ = nullptr;
    std::shared_ptr<Models::GetDeviceStatusDetailResponseBodyResultPower> power_ = nullptr;
    std::shared_ptr<Models::GetDeviceStatusDetailResponseBodyResultSpeaker> speaker_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
