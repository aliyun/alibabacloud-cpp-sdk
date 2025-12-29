// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDORUPDATESCREENSAVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDORUPDATESCREENSAVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class AddOrUpdateScreenSaverRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddOrUpdateScreenSaverRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(HotelScreenSaver, hotelScreenSaver_);
    };
    friend void from_json(const Darabonba::Json& j, AddOrUpdateScreenSaverRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(HotelScreenSaver, hotelScreenSaver_);
    };
    AddOrUpdateScreenSaverRequest() = default ;
    AddOrUpdateScreenSaverRequest(const AddOrUpdateScreenSaverRequest &) = default ;
    AddOrUpdateScreenSaverRequest(AddOrUpdateScreenSaverRequest &&) = default ;
    AddOrUpdateScreenSaverRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddOrUpdateScreenSaverRequest() = default ;
    AddOrUpdateScreenSaverRequest& operator=(const AddOrUpdateScreenSaverRequest &) = default ;
    AddOrUpdateScreenSaverRequest& operator=(AddOrUpdateScreenSaverRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HotelScreenSaver : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HotelScreenSaver& obj) { 
        DARABONBA_PTR_TO_JSON(ScreenSaverPicUrl, screenSaverPicUrl_);
        DARABONBA_PTR_TO_JSON(ScreenSaverStyle, screenSaverStyle_);
      };
      friend void from_json(const Darabonba::Json& j, HotelScreenSaver& obj) { 
        DARABONBA_PTR_FROM_JSON(ScreenSaverPicUrl, screenSaverPicUrl_);
        DARABONBA_PTR_FROM_JSON(ScreenSaverStyle, screenSaverStyle_);
      };
      HotelScreenSaver() = default ;
      HotelScreenSaver(const HotelScreenSaver &) = default ;
      HotelScreenSaver(HotelScreenSaver &&) = default ;
      HotelScreenSaver(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HotelScreenSaver() = default ;
      HotelScreenSaver& operator=(const HotelScreenSaver &) = default ;
      HotelScreenSaver& operator=(HotelScreenSaver &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->screenSaverPicUrl_ == nullptr
        && this->screenSaverStyle_ == nullptr; };
      // screenSaverPicUrl Field Functions 
      bool hasScreenSaverPicUrl() const { return this->screenSaverPicUrl_ != nullptr;};
      void deleteScreenSaverPicUrl() { this->screenSaverPicUrl_ = nullptr;};
      inline string getScreenSaverPicUrl() const { DARABONBA_PTR_GET_DEFAULT(screenSaverPicUrl_, "") };
      inline HotelScreenSaver& setScreenSaverPicUrl(string screenSaverPicUrl) { DARABONBA_PTR_SET_VALUE(screenSaverPicUrl_, screenSaverPicUrl) };


      // screenSaverStyle Field Functions 
      bool hasScreenSaverStyle() const { return this->screenSaverStyle_ != nullptr;};
      void deleteScreenSaverStyle() { this->screenSaverStyle_ = nullptr;};
      inline string getScreenSaverStyle() const { DARABONBA_PTR_GET_DEFAULT(screenSaverStyle_, "") };
      inline HotelScreenSaver& setScreenSaverStyle(string screenSaverStyle) { DARABONBA_PTR_SET_VALUE(screenSaverStyle_, screenSaverStyle) };


    protected:
      shared_ptr<string> screenSaverPicUrl_ {};
      shared_ptr<string> screenSaverStyle_ {};
    };

    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->hotelScreenSaver_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline AddOrUpdateScreenSaverRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // hotelScreenSaver Field Functions 
    bool hasHotelScreenSaver() const { return this->hotelScreenSaver_ != nullptr;};
    void deleteHotelScreenSaver() { this->hotelScreenSaver_ = nullptr;};
    inline const AddOrUpdateScreenSaverRequest::HotelScreenSaver & getHotelScreenSaver() const { DARABONBA_PTR_GET_CONST(hotelScreenSaver_, AddOrUpdateScreenSaverRequest::HotelScreenSaver) };
    inline AddOrUpdateScreenSaverRequest::HotelScreenSaver getHotelScreenSaver() { DARABONBA_PTR_GET(hotelScreenSaver_, AddOrUpdateScreenSaverRequest::HotelScreenSaver) };
    inline AddOrUpdateScreenSaverRequest& setHotelScreenSaver(const AddOrUpdateScreenSaverRequest::HotelScreenSaver & hotelScreenSaver) { DARABONBA_PTR_SET_VALUE(hotelScreenSaver_, hotelScreenSaver) };
    inline AddOrUpdateScreenSaverRequest& setHotelScreenSaver(AddOrUpdateScreenSaverRequest::HotelScreenSaver && hotelScreenSaver) { DARABONBA_PTR_SET_RVALUE(hotelScreenSaver_, hotelScreenSaver) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<AddOrUpdateScreenSaverRequest::HotelScreenSaver> hotelScreenSaver_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
