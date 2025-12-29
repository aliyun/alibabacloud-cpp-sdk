// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDORUPDATEWELCOMETEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDORUPDATEWELCOMETEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class AddOrUpdateWelcomeTextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddOrUpdateWelcomeTextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(MusicUrl, musicUrl_);
      DARABONBA_PTR_TO_JSON(WelcomeText, welcomeText_);
    };
    friend void from_json(const Darabonba::Json& j, AddOrUpdateWelcomeTextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(MusicUrl, musicUrl_);
      DARABONBA_PTR_FROM_JSON(WelcomeText, welcomeText_);
    };
    AddOrUpdateWelcomeTextRequest() = default ;
    AddOrUpdateWelcomeTextRequest(const AddOrUpdateWelcomeTextRequest &) = default ;
    AddOrUpdateWelcomeTextRequest(AddOrUpdateWelcomeTextRequest &&) = default ;
    AddOrUpdateWelcomeTextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddOrUpdateWelcomeTextRequest() = default ;
    AddOrUpdateWelcomeTextRequest& operator=(const AddOrUpdateWelcomeTextRequest &) = default ;
    AddOrUpdateWelcomeTextRequest& operator=(AddOrUpdateWelcomeTextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->musicUrl_ == nullptr && this->welcomeText_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline AddOrUpdateWelcomeTextRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // musicUrl Field Functions 
    bool hasMusicUrl() const { return this->musicUrl_ != nullptr;};
    void deleteMusicUrl() { this->musicUrl_ = nullptr;};
    inline string getMusicUrl() const { DARABONBA_PTR_GET_DEFAULT(musicUrl_, "") };
    inline AddOrUpdateWelcomeTextRequest& setMusicUrl(string musicUrl) { DARABONBA_PTR_SET_VALUE(musicUrl_, musicUrl) };


    // welcomeText Field Functions 
    bool hasWelcomeText() const { return this->welcomeText_ != nullptr;};
    void deleteWelcomeText() { this->welcomeText_ = nullptr;};
    inline string getWelcomeText() const { DARABONBA_PTR_GET_DEFAULT(welcomeText_, "") };
    inline AddOrUpdateWelcomeTextRequest& setWelcomeText(string welcomeText) { DARABONBA_PTR_SET_VALUE(welcomeText_, welcomeText) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> musicUrl_ {};
    // This parameter is required.
    shared_ptr<string> welcomeText_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
