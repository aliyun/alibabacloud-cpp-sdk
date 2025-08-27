// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELROOMINFORESPONSEBODYMODULEROOMIMAGES_HPP_
#define ALIBABACLOUD_MODELS_HOTELROOMINFORESPONSEBODYMODULEROOMIMAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelRoomInfoResponseBodyModuleRoomImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelRoomInfoResponseBodyModuleRoomImages& obj) { 
      DARABONBA_PTR_TO_JSON(bed_infos2, bedInfos2_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, HotelRoomInfoResponseBodyModuleRoomImages& obj) { 
      DARABONBA_PTR_FROM_JSON(bed_infos2, bedInfos2_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    HotelRoomInfoResponseBodyModuleRoomImages() = default ;
    HotelRoomInfoResponseBodyModuleRoomImages(const HotelRoomInfoResponseBodyModuleRoomImages &) = default ;
    HotelRoomInfoResponseBodyModuleRoomImages(HotelRoomInfoResponseBodyModuleRoomImages &&) = default ;
    HotelRoomInfoResponseBodyModuleRoomImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelRoomInfoResponseBodyModuleRoomImages() = default ;
    HotelRoomInfoResponseBodyModuleRoomImages& operator=(const HotelRoomInfoResponseBodyModuleRoomImages &) = default ;
    HotelRoomInfoResponseBodyModuleRoomImages& operator=(HotelRoomInfoResponseBodyModuleRoomImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bedInfos2_ != nullptr
        && this->tag_ != nullptr && this->url_ != nullptr; };
    // bedInfos2 Field Functions 
    bool hasBedInfos2() const { return this->bedInfos2_ != nullptr;};
    void deleteBedInfos2() { this->bedInfos2_ = nullptr;};
    inline string bedInfos2() const { DARABONBA_PTR_GET_DEFAULT(bedInfos2_, "") };
    inline HotelRoomInfoResponseBodyModuleRoomImages& setBedInfos2(string bedInfos2) { DARABONBA_PTR_SET_VALUE(bedInfos2_, bedInfos2) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline int32_t tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, 0) };
    inline HotelRoomInfoResponseBodyModuleRoomImages& setTag(int32_t tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline HotelRoomInfoResponseBodyModuleRoomImages& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> bedInfos2_ = nullptr;
    std::shared_ptr<int32_t> tag_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
