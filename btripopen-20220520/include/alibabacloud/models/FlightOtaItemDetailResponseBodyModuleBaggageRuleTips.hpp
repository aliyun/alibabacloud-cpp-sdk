// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILRESPONSEBODYMODULEBAGGAGERULETIPS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILRESPONSEBODYMODULEBAGGAGERULETIPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaItemDetailResponseBodyModuleBaggageRuleTips : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaItemDetailResponseBodyModuleBaggageRuleTips& obj) { 
      DARABONBA_PTR_TO_JSON(logo, logo_);
      DARABONBA_PTR_TO_JSON(tips_desc, tipsDesc_);
      DARABONBA_PTR_TO_JSON(tips_image, tipsImage_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaItemDetailResponseBodyModuleBaggageRuleTips& obj) { 
      DARABONBA_PTR_FROM_JSON(logo, logo_);
      DARABONBA_PTR_FROM_JSON(tips_desc, tipsDesc_);
      DARABONBA_PTR_FROM_JSON(tips_image, tipsImage_);
    };
    FlightOtaItemDetailResponseBodyModuleBaggageRuleTips() = default ;
    FlightOtaItemDetailResponseBodyModuleBaggageRuleTips(const FlightOtaItemDetailResponseBodyModuleBaggageRuleTips &) = default ;
    FlightOtaItemDetailResponseBodyModuleBaggageRuleTips(FlightOtaItemDetailResponseBodyModuleBaggageRuleTips &&) = default ;
    FlightOtaItemDetailResponseBodyModuleBaggageRuleTips(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaItemDetailResponseBodyModuleBaggageRuleTips() = default ;
    FlightOtaItemDetailResponseBodyModuleBaggageRuleTips& operator=(const FlightOtaItemDetailResponseBodyModuleBaggageRuleTips &) = default ;
    FlightOtaItemDetailResponseBodyModuleBaggageRuleTips& operator=(FlightOtaItemDetailResponseBodyModuleBaggageRuleTips &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logo_ != nullptr
        && this->tipsDesc_ != nullptr && this->tipsImage_ != nullptr; };
    // logo Field Functions 
    bool hasLogo() const { return this->logo_ != nullptr;};
    void deleteLogo() { this->logo_ = nullptr;};
    inline string logo() const { DARABONBA_PTR_GET_DEFAULT(logo_, "") };
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleTips& setLogo(string logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };


    // tipsDesc Field Functions 
    bool hasTipsDesc() const { return this->tipsDesc_ != nullptr;};
    void deleteTipsDesc() { this->tipsDesc_ = nullptr;};
    inline string tipsDesc() const { DARABONBA_PTR_GET_DEFAULT(tipsDesc_, "") };
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleTips& setTipsDesc(string tipsDesc) { DARABONBA_PTR_SET_VALUE(tipsDesc_, tipsDesc) };


    // tipsImage Field Functions 
    bool hasTipsImage() const { return this->tipsImage_ != nullptr;};
    void deleteTipsImage() { this->tipsImage_ = nullptr;};
    inline string tipsImage() const { DARABONBA_PTR_GET_DEFAULT(tipsImage_, "") };
    inline FlightOtaItemDetailResponseBodyModuleBaggageRuleTips& setTipsImage(string tipsImage) { DARABONBA_PTR_SET_VALUE(tipsImage_, tipsImage) };


  protected:
    std::shared_ptr<string> logo_ = nullptr;
    std::shared_ptr<string> tipsDesc_ = nullptr;
    std::shared_ptr<string> tipsImage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
