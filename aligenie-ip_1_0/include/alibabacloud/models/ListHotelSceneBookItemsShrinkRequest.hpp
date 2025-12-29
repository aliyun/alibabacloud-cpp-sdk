// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELSCENEBOOKITEMSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELSCENEBOOKITEMSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelSceneBookItemsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelSceneBookItemsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(Page, pageShrink_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelSceneBookItemsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(Page, pageShrink_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListHotelSceneBookItemsShrinkRequest() = default ;
    ListHotelSceneBookItemsShrinkRequest(const ListHotelSceneBookItemsShrinkRequest &) = default ;
    ListHotelSceneBookItemsShrinkRequest(ListHotelSceneBookItemsShrinkRequest &&) = default ;
    ListHotelSceneBookItemsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelSceneBookItemsShrinkRequest() = default ;
    ListHotelSceneBookItemsShrinkRequest& operator=(const ListHotelSceneBookItemsShrinkRequest &) = default ;
    ListHotelSceneBookItemsShrinkRequest& operator=(ListHotelSceneBookItemsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->pageShrink_ == nullptr && this->type_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ListHotelSceneBookItemsShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // pageShrink Field Functions 
    bool hasPageShrink() const { return this->pageShrink_ != nullptr;};
    void deletePageShrink() { this->pageShrink_ = nullptr;};
    inline string getPageShrink() const { DARABONBA_PTR_GET_DEFAULT(pageShrink_, "") };
    inline ListHotelSceneBookItemsShrinkRequest& setPageShrink(string pageShrink) { DARABONBA_PTR_SET_VALUE(pageShrink_, pageShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListHotelSceneBookItemsShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // hotelID
    // 
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> pageShrink_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
