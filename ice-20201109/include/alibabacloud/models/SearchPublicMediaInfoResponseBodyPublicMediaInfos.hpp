// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHPUBLICMEDIAINFORESPONSEBODYPUBLICMEDIAINFOS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHPUBLICMEDIAINFORESPONSEBODYPUBLICMEDIAINFOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchPublicMediaInfoResponseBodyPublicMediaInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchPublicMediaInfoResponseBodyPublicMediaInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Authorized, authorized_);
      DARABONBA_PTR_TO_JSON(Favorite, favorite_);
      DARABONBA_PTR_TO_JSON(MediaInfo, mediaInfo_);
      DARABONBA_PTR_TO_JSON(RemainingAuthTime, remainingAuthTime_);
    };
    friend void from_json(const Darabonba::Json& j, SearchPublicMediaInfoResponseBodyPublicMediaInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorized, authorized_);
      DARABONBA_PTR_FROM_JSON(Favorite, favorite_);
      DARABONBA_PTR_FROM_JSON(MediaInfo, mediaInfo_);
      DARABONBA_PTR_FROM_JSON(RemainingAuthTime, remainingAuthTime_);
    };
    SearchPublicMediaInfoResponseBodyPublicMediaInfos() = default ;
    SearchPublicMediaInfoResponseBodyPublicMediaInfos(const SearchPublicMediaInfoResponseBodyPublicMediaInfos &) = default ;
    SearchPublicMediaInfoResponseBodyPublicMediaInfos(SearchPublicMediaInfoResponseBodyPublicMediaInfos &&) = default ;
    SearchPublicMediaInfoResponseBodyPublicMediaInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchPublicMediaInfoResponseBodyPublicMediaInfos() = default ;
    SearchPublicMediaInfoResponseBodyPublicMediaInfos& operator=(const SearchPublicMediaInfoResponseBodyPublicMediaInfos &) = default ;
    SearchPublicMediaInfoResponseBodyPublicMediaInfos& operator=(SearchPublicMediaInfoResponseBodyPublicMediaInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorized_ != nullptr
        && this->favorite_ != nullptr && this->mediaInfo_ != nullptr && this->remainingAuthTime_ != nullptr; };
    // authorized Field Functions 
    bool hasAuthorized() const { return this->authorized_ != nullptr;};
    void deleteAuthorized() { this->authorized_ = nullptr;};
    inline bool authorized() const { DARABONBA_PTR_GET_DEFAULT(authorized_, false) };
    inline SearchPublicMediaInfoResponseBodyPublicMediaInfos& setAuthorized(bool authorized) { DARABONBA_PTR_SET_VALUE(authorized_, authorized) };


    // favorite Field Functions 
    bool hasFavorite() const { return this->favorite_ != nullptr;};
    void deleteFavorite() { this->favorite_ = nullptr;};
    inline bool favorite() const { DARABONBA_PTR_GET_DEFAULT(favorite_, false) };
    inline SearchPublicMediaInfoResponseBodyPublicMediaInfos& setFavorite(bool favorite) { DARABONBA_PTR_SET_VALUE(favorite_, favorite) };


    // mediaInfo Field Functions 
    bool hasMediaInfo() const { return this->mediaInfo_ != nullptr;};
    void deleteMediaInfo() { this->mediaInfo_ = nullptr;};
    inline const Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo & mediaInfo() const { DARABONBA_PTR_GET_CONST(mediaInfo_, Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo) };
    inline Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo mediaInfo() { DARABONBA_PTR_GET(mediaInfo_, Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo) };
    inline SearchPublicMediaInfoResponseBodyPublicMediaInfos& setMediaInfo(const Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo & mediaInfo) { DARABONBA_PTR_SET_VALUE(mediaInfo_, mediaInfo) };
    inline SearchPublicMediaInfoResponseBodyPublicMediaInfos& setMediaInfo(Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo && mediaInfo) { DARABONBA_PTR_SET_RVALUE(mediaInfo_, mediaInfo) };


    // remainingAuthTime Field Functions 
    bool hasRemainingAuthTime() const { return this->remainingAuthTime_ != nullptr;};
    void deleteRemainingAuthTime() { this->remainingAuthTime_ = nullptr;};
    inline string remainingAuthTime() const { DARABONBA_PTR_GET_DEFAULT(remainingAuthTime_, "") };
    inline SearchPublicMediaInfoResponseBodyPublicMediaInfos& setRemainingAuthTime(string remainingAuthTime) { DARABONBA_PTR_SET_VALUE(remainingAuthTime_, remainingAuthTime) };


  protected:
    std::shared_ptr<bool> authorized_ = nullptr;
    std::shared_ptr<bool> favorite_ = nullptr;
    std::shared_ptr<Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo> mediaInfo_ = nullptr;
    std::shared_ptr<string> remainingAuthTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
