// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTHOTELSCENEBOOKITEMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTHOTELSCENEBOOKITEMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class InsertHotelSceneBookItemShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertHotelSceneBookItemShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddHotelSceneItemReq, addHotelSceneItemReqShrink_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertHotelSceneBookItemShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddHotelSceneItemReq, addHotelSceneItemReqShrink_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
    };
    InsertHotelSceneBookItemShrinkRequest() = default ;
    InsertHotelSceneBookItemShrinkRequest(const InsertHotelSceneBookItemShrinkRequest &) = default ;
    InsertHotelSceneBookItemShrinkRequest(InsertHotelSceneBookItemShrinkRequest &&) = default ;
    InsertHotelSceneBookItemShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertHotelSceneBookItemShrinkRequest() = default ;
    InsertHotelSceneBookItemShrinkRequest& operator=(const InsertHotelSceneBookItemShrinkRequest &) = default ;
    InsertHotelSceneBookItemShrinkRequest& operator=(InsertHotelSceneBookItemShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addHotelSceneItemReqShrink_ == nullptr
        && this->hotelId_ == nullptr; };
    // addHotelSceneItemReqShrink Field Functions 
    bool hasAddHotelSceneItemReqShrink() const { return this->addHotelSceneItemReqShrink_ != nullptr;};
    void deleteAddHotelSceneItemReqShrink() { this->addHotelSceneItemReqShrink_ = nullptr;};
    inline string getAddHotelSceneItemReqShrink() const { DARABONBA_PTR_GET_DEFAULT(addHotelSceneItemReqShrink_, "") };
    inline InsertHotelSceneBookItemShrinkRequest& setAddHotelSceneItemReqShrink(string addHotelSceneItemReqShrink) { DARABONBA_PTR_SET_VALUE(addHotelSceneItemReqShrink_, addHotelSceneItemReqShrink) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline InsertHotelSceneBookItemShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


  protected:
    // addHotelSceneItemReq
    // 
    // This parameter is required.
    shared_ptr<string> addHotelSceneItemReqShrink_ {};
    // hotelID
    // 
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
