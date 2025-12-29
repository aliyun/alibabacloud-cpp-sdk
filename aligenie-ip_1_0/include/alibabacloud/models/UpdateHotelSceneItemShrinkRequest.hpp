// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHOTELSCENEITEMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHOTELSCENEITEMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class UpdateHotelSceneItemShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHotelSceneItemShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(UpdateHotelSceneOperateReq, updateHotelSceneOperateReqShrink_);
      DARABONBA_PTR_TO_JSON(UpdateHotelSceneReq, updateHotelSceneReqShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHotelSceneItemShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(UpdateHotelSceneOperateReq, updateHotelSceneOperateReqShrink_);
      DARABONBA_PTR_FROM_JSON(UpdateHotelSceneReq, updateHotelSceneReqShrink_);
    };
    UpdateHotelSceneItemShrinkRequest() = default ;
    UpdateHotelSceneItemShrinkRequest(const UpdateHotelSceneItemShrinkRequest &) = default ;
    UpdateHotelSceneItemShrinkRequest(UpdateHotelSceneItemShrinkRequest &&) = default ;
    UpdateHotelSceneItemShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHotelSceneItemShrinkRequest() = default ;
    UpdateHotelSceneItemShrinkRequest& operator=(const UpdateHotelSceneItemShrinkRequest &) = default ;
    UpdateHotelSceneItemShrinkRequest& operator=(UpdateHotelSceneItemShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->updateHotelSceneOperateReqShrink_ == nullptr && this->updateHotelSceneReqShrink_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline UpdateHotelSceneItemShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // updateHotelSceneOperateReqShrink Field Functions 
    bool hasUpdateHotelSceneOperateReqShrink() const { return this->updateHotelSceneOperateReqShrink_ != nullptr;};
    void deleteUpdateHotelSceneOperateReqShrink() { this->updateHotelSceneOperateReqShrink_ = nullptr;};
    inline string getUpdateHotelSceneOperateReqShrink() const { DARABONBA_PTR_GET_DEFAULT(updateHotelSceneOperateReqShrink_, "") };
    inline UpdateHotelSceneItemShrinkRequest& setUpdateHotelSceneOperateReqShrink(string updateHotelSceneOperateReqShrink) { DARABONBA_PTR_SET_VALUE(updateHotelSceneOperateReqShrink_, updateHotelSceneOperateReqShrink) };


    // updateHotelSceneReqShrink Field Functions 
    bool hasUpdateHotelSceneReqShrink() const { return this->updateHotelSceneReqShrink_ != nullptr;};
    void deleteUpdateHotelSceneReqShrink() { this->updateHotelSceneReqShrink_ = nullptr;};
    inline string getUpdateHotelSceneReqShrink() const { DARABONBA_PTR_GET_DEFAULT(updateHotelSceneReqShrink_, "") };
    inline UpdateHotelSceneItemShrinkRequest& setUpdateHotelSceneReqShrink(string updateHotelSceneReqShrink) { DARABONBA_PTR_SET_VALUE(updateHotelSceneReqShrink_, updateHotelSceneReqShrink) };


  protected:
    // hotelID
    // 
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // updateHotelSceneReq
    // 
    // This parameter is required.
    shared_ptr<string> updateHotelSceneOperateReqShrink_ {};
    // UpdateHotelSceneReq
    // 
    // This parameter is required.
    shared_ptr<string> updateHotelSceneReqShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
