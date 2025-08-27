// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSUGGESTV2RESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELSUGGESTV2RESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelSuggestV2ResponseBodyModuleGuessSuggestInfos.hpp>
#include <alibabacloud/models/HotelSuggestV2ResponseBodyModuleKeywordSuggestInfos.hpp>
#include <alibabacloud/models/HotelSuggestV2ResponseBodyModulePopularSuggestInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelSuggestV2ResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelSuggestV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(guess_suggest_infos, guessSuggestInfos_);
      DARABONBA_PTR_TO_JSON(keyword_suggest_infos, keywordSuggestInfos_);
      DARABONBA_PTR_TO_JSON(popular_suggest_infos, popularSuggestInfos_);
      DARABONBA_PTR_TO_JSON(tips, tips_);
    };
    friend void from_json(const Darabonba::Json& j, HotelSuggestV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(guess_suggest_infos, guessSuggestInfos_);
      DARABONBA_PTR_FROM_JSON(keyword_suggest_infos, keywordSuggestInfos_);
      DARABONBA_PTR_FROM_JSON(popular_suggest_infos, popularSuggestInfos_);
      DARABONBA_PTR_FROM_JSON(tips, tips_);
    };
    HotelSuggestV2ResponseBodyModule() = default ;
    HotelSuggestV2ResponseBodyModule(const HotelSuggestV2ResponseBodyModule &) = default ;
    HotelSuggestV2ResponseBodyModule(HotelSuggestV2ResponseBodyModule &&) = default ;
    HotelSuggestV2ResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelSuggestV2ResponseBodyModule() = default ;
    HotelSuggestV2ResponseBodyModule& operator=(const HotelSuggestV2ResponseBodyModule &) = default ;
    HotelSuggestV2ResponseBodyModule& operator=(HotelSuggestV2ResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->guessSuggestInfos_ != nullptr
        && this->keywordSuggestInfos_ != nullptr && this->popularSuggestInfos_ != nullptr && this->tips_ != nullptr; };
    // guessSuggestInfos Field Functions 
    bool hasGuessSuggestInfos() const { return this->guessSuggestInfos_ != nullptr;};
    void deleteGuessSuggestInfos() { this->guessSuggestInfos_ = nullptr;};
    inline const vector<Models::HotelSuggestV2ResponseBodyModuleGuessSuggestInfos> & guessSuggestInfos() const { DARABONBA_PTR_GET_CONST(guessSuggestInfos_, vector<Models::HotelSuggestV2ResponseBodyModuleGuessSuggestInfos>) };
    inline vector<Models::HotelSuggestV2ResponseBodyModuleGuessSuggestInfos> guessSuggestInfos() { DARABONBA_PTR_GET(guessSuggestInfos_, vector<Models::HotelSuggestV2ResponseBodyModuleGuessSuggestInfos>) };
    inline HotelSuggestV2ResponseBodyModule& setGuessSuggestInfos(const vector<Models::HotelSuggestV2ResponseBodyModuleGuessSuggestInfos> & guessSuggestInfos) { DARABONBA_PTR_SET_VALUE(guessSuggestInfos_, guessSuggestInfos) };
    inline HotelSuggestV2ResponseBodyModule& setGuessSuggestInfos(vector<Models::HotelSuggestV2ResponseBodyModuleGuessSuggestInfos> && guessSuggestInfos) { DARABONBA_PTR_SET_RVALUE(guessSuggestInfos_, guessSuggestInfos) };


    // keywordSuggestInfos Field Functions 
    bool hasKeywordSuggestInfos() const { return this->keywordSuggestInfos_ != nullptr;};
    void deleteKeywordSuggestInfos() { this->keywordSuggestInfos_ = nullptr;};
    inline const vector<Models::HotelSuggestV2ResponseBodyModuleKeywordSuggestInfos> & keywordSuggestInfos() const { DARABONBA_PTR_GET_CONST(keywordSuggestInfos_, vector<Models::HotelSuggestV2ResponseBodyModuleKeywordSuggestInfos>) };
    inline vector<Models::HotelSuggestV2ResponseBodyModuleKeywordSuggestInfos> keywordSuggestInfos() { DARABONBA_PTR_GET(keywordSuggestInfos_, vector<Models::HotelSuggestV2ResponseBodyModuleKeywordSuggestInfos>) };
    inline HotelSuggestV2ResponseBodyModule& setKeywordSuggestInfos(const vector<Models::HotelSuggestV2ResponseBodyModuleKeywordSuggestInfos> & keywordSuggestInfos) { DARABONBA_PTR_SET_VALUE(keywordSuggestInfos_, keywordSuggestInfos) };
    inline HotelSuggestV2ResponseBodyModule& setKeywordSuggestInfos(vector<Models::HotelSuggestV2ResponseBodyModuleKeywordSuggestInfos> && keywordSuggestInfos) { DARABONBA_PTR_SET_RVALUE(keywordSuggestInfos_, keywordSuggestInfos) };


    // popularSuggestInfos Field Functions 
    bool hasPopularSuggestInfos() const { return this->popularSuggestInfos_ != nullptr;};
    void deletePopularSuggestInfos() { this->popularSuggestInfos_ = nullptr;};
    inline const vector<Models::HotelSuggestV2ResponseBodyModulePopularSuggestInfos> & popularSuggestInfos() const { DARABONBA_PTR_GET_CONST(popularSuggestInfos_, vector<Models::HotelSuggestV2ResponseBodyModulePopularSuggestInfos>) };
    inline vector<Models::HotelSuggestV2ResponseBodyModulePopularSuggestInfos> popularSuggestInfos() { DARABONBA_PTR_GET(popularSuggestInfos_, vector<Models::HotelSuggestV2ResponseBodyModulePopularSuggestInfos>) };
    inline HotelSuggestV2ResponseBodyModule& setPopularSuggestInfos(const vector<Models::HotelSuggestV2ResponseBodyModulePopularSuggestInfos> & popularSuggestInfos) { DARABONBA_PTR_SET_VALUE(popularSuggestInfos_, popularSuggestInfos) };
    inline HotelSuggestV2ResponseBodyModule& setPopularSuggestInfos(vector<Models::HotelSuggestV2ResponseBodyModulePopularSuggestInfos> && popularSuggestInfos) { DARABONBA_PTR_SET_RVALUE(popularSuggestInfos_, popularSuggestInfos) };


    // tips Field Functions 
    bool hasTips() const { return this->tips_ != nullptr;};
    void deleteTips() { this->tips_ = nullptr;};
    inline string tips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
    inline HotelSuggestV2ResponseBodyModule& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


  protected:
    std::shared_ptr<vector<Models::HotelSuggestV2ResponseBodyModuleGuessSuggestInfos>> guessSuggestInfos_ = nullptr;
    std::shared_ptr<vector<Models::HotelSuggestV2ResponseBodyModuleKeywordSuggestInfos>> keywordSuggestInfos_ = nullptr;
    std::shared_ptr<vector<Models::HotelSuggestV2ResponseBodyModulePopularSuggestInfos>> popularSuggestInfos_ = nullptr;
    std::shared_ptr<string> tips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
