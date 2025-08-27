// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSUGGESTV2RESPONSEBODYMODULEPOPULARSUGGESTINFOSPOPULARINFOS_HPP_
#define ALIBABACLOUD_MODELS_HOTELSUGGESTV2RESPONSEBODYMODULEPOPULARSUGGESTINFOSPOPULARINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos& obj) { 
      DARABONBA_PTR_TO_JSON(display_name, displayName_);
    };
    friend void from_json(const Darabonba::Json& j, HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(display_name, displayName_);
    };
    HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos() = default ;
    HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos(const HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos &) = default ;
    HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos(HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos &&) = default ;
    HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos() = default ;
    HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos& operator=(const HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos &) = default ;
    HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos& operator=(HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayName_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
