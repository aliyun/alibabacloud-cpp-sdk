// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMSROOMSERVICE_HPP_
#define ALIBABACLOUD_MODELS_HOTELGOODSQUERYRESPONSEBODYMODULEROOMSROOMSERVICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelGoodsQueryResponseBodyModuleRoomsRoomService : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelGoodsQueryResponseBodyModuleRoomsRoomService& obj) { 
      DARABONBA_PTR_TO_JSON(color, color_);
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(highlight_color_color, highlightColorColor_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, HotelGoodsQueryResponseBodyModuleRoomsRoomService& obj) { 
      DARABONBA_PTR_FROM_JSON(color, color_);
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(highlight_color_color, highlightColorColor_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    HotelGoodsQueryResponseBodyModuleRoomsRoomService() = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRoomService(const HotelGoodsQueryResponseBodyModuleRoomsRoomService &) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRoomService(HotelGoodsQueryResponseBodyModuleRoomsRoomService &&) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRoomService(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelGoodsQueryResponseBodyModuleRoomsRoomService() = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRoomService& operator=(const HotelGoodsQueryResponseBodyModuleRoomsRoomService &) = default ;
    HotelGoodsQueryResponseBodyModuleRoomsRoomService& operator=(HotelGoodsQueryResponseBodyModuleRoomsRoomService &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->color_ != nullptr
        && this->desc_ != nullptr && this->highlightColorColor_ != nullptr && this->title_ != nullptr; };
    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRoomService& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRoomService& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // highlightColorColor Field Functions 
    bool hasHighlightColorColor() const { return this->highlightColorColor_ != nullptr;};
    void deleteHighlightColorColor() { this->highlightColorColor_ = nullptr;};
    inline string highlightColorColor() const { DARABONBA_PTR_GET_DEFAULT(highlightColorColor_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRoomService& setHighlightColorColor(string highlightColorColor) { DARABONBA_PTR_SET_VALUE(highlightColorColor_, highlightColorColor) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline HotelGoodsQueryResponseBodyModuleRoomsRoomService& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> color_ = nullptr;
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<string> highlightColorColor_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
