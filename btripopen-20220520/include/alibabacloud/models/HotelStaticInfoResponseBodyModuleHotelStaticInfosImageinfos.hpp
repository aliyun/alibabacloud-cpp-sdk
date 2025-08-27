// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSTATICINFORESPONSEBODYMODULEHOTELSTATICINFOSIMAGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_HOTELSTATICINFORESPONSEBODYMODULEHOTELSTATICINFOSIMAGEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos() = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos(const HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos &) = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos(HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos &&) = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos() = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos& operator=(const HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos &) = default ;
    HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos& operator=(HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->tag_ != nullptr && this->url_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline int32_t tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, 0) };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos& setTag(int32_t tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline HotelStaticInfoResponseBodyModuleHotelStaticInfosImageinfos& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<int32_t> tag_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
