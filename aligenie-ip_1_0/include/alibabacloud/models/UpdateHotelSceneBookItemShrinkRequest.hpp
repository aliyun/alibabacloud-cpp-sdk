// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHOTELSCENEBOOKITEMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHOTELSCENEBOOKITEMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class UpdateHotelSceneBookItemShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHotelSceneBookItemShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(UpdateHotelSceneBookReq, updateHotelSceneBookReqShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHotelSceneBookItemShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(UpdateHotelSceneBookReq, updateHotelSceneBookReqShrink_);
    };
    UpdateHotelSceneBookItemShrinkRequest() = default ;
    UpdateHotelSceneBookItemShrinkRequest(const UpdateHotelSceneBookItemShrinkRequest &) = default ;
    UpdateHotelSceneBookItemShrinkRequest(UpdateHotelSceneBookItemShrinkRequest &&) = default ;
    UpdateHotelSceneBookItemShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHotelSceneBookItemShrinkRequest() = default ;
    UpdateHotelSceneBookItemShrinkRequest& operator=(const UpdateHotelSceneBookItemShrinkRequest &) = default ;
    UpdateHotelSceneBookItemShrinkRequest& operator=(UpdateHotelSceneBookItemShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->updateHotelSceneBookReqShrink_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline UpdateHotelSceneBookItemShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // updateHotelSceneBookReqShrink Field Functions 
    bool hasUpdateHotelSceneBookReqShrink() const { return this->updateHotelSceneBookReqShrink_ != nullptr;};
    void deleteUpdateHotelSceneBookReqShrink() { this->updateHotelSceneBookReqShrink_ = nullptr;};
    inline string getUpdateHotelSceneBookReqShrink() const { DARABONBA_PTR_GET_DEFAULT(updateHotelSceneBookReqShrink_, "") };
    inline UpdateHotelSceneBookItemShrinkRequest& setUpdateHotelSceneBookReqShrink(string updateHotelSceneBookReqShrink) { DARABONBA_PTR_SET_VALUE(updateHotelSceneBookReqShrink_, updateHotelSceneBookReqShrink) };


  protected:
    // hotelID
    // 
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // updateHotelSceneBookReq
    // 
    // This parameter is required.
    shared_ptr<string> updateHotelSceneBookReqShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
