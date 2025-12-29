// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELSCENEITEMSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELSCENEITEMSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelSceneItemsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelSceneItemsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(ListHotelSceneReq, listHotelSceneReqShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelSceneItemsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(ListHotelSceneReq, listHotelSceneReqShrink_);
    };
    ListHotelSceneItemsShrinkRequest() = default ;
    ListHotelSceneItemsShrinkRequest(const ListHotelSceneItemsShrinkRequest &) = default ;
    ListHotelSceneItemsShrinkRequest(ListHotelSceneItemsShrinkRequest &&) = default ;
    ListHotelSceneItemsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelSceneItemsShrinkRequest() = default ;
    ListHotelSceneItemsShrinkRequest& operator=(const ListHotelSceneItemsShrinkRequest &) = default ;
    ListHotelSceneItemsShrinkRequest& operator=(ListHotelSceneItemsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->listHotelSceneReqShrink_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ListHotelSceneItemsShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // listHotelSceneReqShrink Field Functions 
    bool hasListHotelSceneReqShrink() const { return this->listHotelSceneReqShrink_ != nullptr;};
    void deleteListHotelSceneReqShrink() { this->listHotelSceneReqShrink_ = nullptr;};
    inline string getListHotelSceneReqShrink() const { DARABONBA_PTR_GET_DEFAULT(listHotelSceneReqShrink_, "") };
    inline ListHotelSceneItemsShrinkRequest& setListHotelSceneReqShrink(string listHotelSceneReqShrink) { DARABONBA_PTR_SET_VALUE(listHotelSceneReqShrink_, listHotelSceneReqShrink) };


  protected:
    // hotelID
    // 
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // ListHotelSceneReq
    // 
    // This parameter is required.
    shared_ptr<string> listHotelSceneReqShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
