// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHOTELSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHOTELSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class DeleteHotelSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHotelSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(SettingType, settingType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHotelSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(SettingType, settingType_);
    };
    DeleteHotelSettingRequest() = default ;
    DeleteHotelSettingRequest(const DeleteHotelSettingRequest &) = default ;
    DeleteHotelSettingRequest(DeleteHotelSettingRequest &&) = default ;
    DeleteHotelSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHotelSettingRequest() = default ;
    DeleteHotelSettingRequest& operator=(const DeleteHotelSettingRequest &) = default ;
    DeleteHotelSettingRequest& operator=(DeleteHotelSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->settingType_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline DeleteHotelSettingRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // settingType Field Functions 
    bool hasSettingType() const { return this->settingType_ != nullptr;};
    void deleteSettingType() { this->settingType_ = nullptr;};
    inline string getSettingType() const { DARABONBA_PTR_GET_DEFAULT(settingType_, "") };
    inline DeleteHotelSettingRequest& setSettingType(string settingType) { DARABONBA_PTR_SET_VALUE(settingType_, settingType) };


  protected:
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> settingType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
