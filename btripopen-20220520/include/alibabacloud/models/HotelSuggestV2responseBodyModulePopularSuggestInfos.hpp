// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSUGGESTV2RESPONSEBODYMODULEPOPULARSUGGESTINFOS_HPP_
#define ALIBABACLOUD_MODELS_HOTELSUGGESTV2RESPONSEBODYMODULEPOPULARSUGGESTINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelSuggestV2ResponseBodyModulePopularSuggestInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelSuggestV2ResponseBodyModulePopularSuggestInfos& obj) { 
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(popular_infos, popularInfos_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, HotelSuggestV2ResponseBodyModulePopularSuggestInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(popular_infos, popularInfos_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    HotelSuggestV2ResponseBodyModulePopularSuggestInfos() = default ;
    HotelSuggestV2ResponseBodyModulePopularSuggestInfos(const HotelSuggestV2ResponseBodyModulePopularSuggestInfos &) = default ;
    HotelSuggestV2ResponseBodyModulePopularSuggestInfos(HotelSuggestV2ResponseBodyModulePopularSuggestInfos &&) = default ;
    HotelSuggestV2ResponseBodyModulePopularSuggestInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelSuggestV2ResponseBodyModulePopularSuggestInfos() = default ;
    HotelSuggestV2ResponseBodyModulePopularSuggestInfos& operator=(const HotelSuggestV2ResponseBodyModulePopularSuggestInfos &) = default ;
    HotelSuggestV2ResponseBodyModulePopularSuggestInfos& operator=(HotelSuggestV2ResponseBodyModulePopularSuggestInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->icon_ != nullptr
        && this->popularInfos_ != nullptr && this->title_ != nullptr; };
    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline HotelSuggestV2ResponseBodyModulePopularSuggestInfos& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // popularInfos Field Functions 
    bool hasPopularInfos() const { return this->popularInfos_ != nullptr;};
    void deletePopularInfos() { this->popularInfos_ = nullptr;};
    inline const vector<Models::HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos> & popularInfos() const { DARABONBA_PTR_GET_CONST(popularInfos_, vector<Models::HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos>) };
    inline vector<Models::HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos> popularInfos() { DARABONBA_PTR_GET(popularInfos_, vector<Models::HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos>) };
    inline HotelSuggestV2ResponseBodyModulePopularSuggestInfos& setPopularInfos(const vector<Models::HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos> & popularInfos) { DARABONBA_PTR_SET_VALUE(popularInfos_, popularInfos) };
    inline HotelSuggestV2ResponseBodyModulePopularSuggestInfos& setPopularInfos(vector<Models::HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos> && popularInfos) { DARABONBA_PTR_SET_RVALUE(popularInfos_, popularInfos) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline HotelSuggestV2ResponseBodyModulePopularSuggestInfos& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<vector<Models::HotelSuggestV2ResponseBodyModulePopularSuggestInfosPopularInfos>> popularInfos_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
