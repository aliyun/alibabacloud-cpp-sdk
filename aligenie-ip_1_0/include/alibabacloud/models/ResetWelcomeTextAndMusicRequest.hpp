// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETWELCOMETEXTANDMUSICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETWELCOMETEXTANDMUSICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ResetWelcomeTextAndMusicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetWelcomeTextAndMusicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetWelcomeTextAndMusicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
    };
    ResetWelcomeTextAndMusicRequest() = default ;
    ResetWelcomeTextAndMusicRequest(const ResetWelcomeTextAndMusicRequest &) = default ;
    ResetWelcomeTextAndMusicRequest(ResetWelcomeTextAndMusicRequest &&) = default ;
    ResetWelcomeTextAndMusicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetWelcomeTextAndMusicRequest() = default ;
    ResetWelcomeTextAndMusicRequest& operator=(const ResetWelcomeTextAndMusicRequest &) = default ;
    ResetWelcomeTextAndMusicRequest& operator=(ResetWelcomeTextAndMusicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ResetWelcomeTextAndMusicRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
