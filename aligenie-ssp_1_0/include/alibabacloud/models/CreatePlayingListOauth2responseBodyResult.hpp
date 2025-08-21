// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLAYINGLISTOAUTH2RESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLAYINGLISTOAUTH2RESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePlayingListOAuth2ResponseBodyResultCover.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreatePlayingListOAuth2ResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePlayingListOAuth2ResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AlbumName, albumName_);
      DARABONBA_PTR_TO_JSON(AlbumRawId, albumRawId_);
      DARABONBA_PTR_TO_JSON(AudioLength, audioLength_);
      DARABONBA_PTR_TO_JSON(Copyright, copyright_);
      DARABONBA_PTR_TO_JSON(Cover, cover_);
      DARABONBA_PTR_TO_JSON(DefaultPlayOrder, defaultPlayOrder_);
      DARABONBA_PTR_TO_JSON(ItemUrl, itemUrl_);
      DARABONBA_PTR_TO_JSON(Liked, liked_);
      DARABONBA_PTR_TO_JSON(LyricUrl, lyricUrl_);
      DARABONBA_PTR_TO_JSON(PlayMode, playMode_);
      DARABONBA_PTR_TO_JSON(Pos, pos_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RawId, rawId_);
      DARABONBA_PTR_TO_JSON(Singer, singer_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Valid, valid_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePlayingListOAuth2ResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbumName, albumName_);
      DARABONBA_PTR_FROM_JSON(AlbumRawId, albumRawId_);
      DARABONBA_PTR_FROM_JSON(AudioLength, audioLength_);
      DARABONBA_PTR_FROM_JSON(Copyright, copyright_);
      DARABONBA_PTR_FROM_JSON(Cover, cover_);
      DARABONBA_PTR_FROM_JSON(DefaultPlayOrder, defaultPlayOrder_);
      DARABONBA_PTR_FROM_JSON(ItemUrl, itemUrl_);
      DARABONBA_PTR_FROM_JSON(Liked, liked_);
      DARABONBA_PTR_FROM_JSON(LyricUrl, lyricUrl_);
      DARABONBA_PTR_FROM_JSON(PlayMode, playMode_);
      DARABONBA_PTR_FROM_JSON(Pos, pos_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RawId, rawId_);
      DARABONBA_PTR_FROM_JSON(Singer, singer_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Valid, valid_);
    };
    CreatePlayingListOAuth2ResponseBodyResult() = default ;
    CreatePlayingListOAuth2ResponseBodyResult(const CreatePlayingListOAuth2ResponseBodyResult &) = default ;
    CreatePlayingListOAuth2ResponseBodyResult(CreatePlayingListOAuth2ResponseBodyResult &&) = default ;
    CreatePlayingListOAuth2ResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePlayingListOAuth2ResponseBodyResult() = default ;
    CreatePlayingListOAuth2ResponseBodyResult& operator=(const CreatePlayingListOAuth2ResponseBodyResult &) = default ;
    CreatePlayingListOAuth2ResponseBodyResult& operator=(CreatePlayingListOAuth2ResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albumName_ != nullptr
        && this->albumRawId_ != nullptr && this->audioLength_ != nullptr && this->copyright_ != nullptr && this->cover_ != nullptr && this->defaultPlayOrder_ != nullptr
        && this->itemUrl_ != nullptr && this->liked_ != nullptr && this->lyricUrl_ != nullptr && this->playMode_ != nullptr && this->pos_ != nullptr
        && this->progress_ != nullptr && this->rawId_ != nullptr && this->singer_ != nullptr && this->source_ != nullptr && this->title_ != nullptr
        && this->type_ != nullptr && this->valid_ != nullptr; };
    // albumName Field Functions 
    bool hasAlbumName() const { return this->albumName_ != nullptr;};
    void deleteAlbumName() { this->albumName_ = nullptr;};
    inline string albumName() const { DARABONBA_PTR_GET_DEFAULT(albumName_, "") };
    inline CreatePlayingListOAuth2ResponseBodyResult& setAlbumName(string albumName) { DARABONBA_PTR_SET_VALUE(albumName_, albumName) };


    // albumRawId Field Functions 
    bool hasAlbumRawId() const { return this->albumRawId_ != nullptr;};
    void deleteAlbumRawId() { this->albumRawId_ = nullptr;};
    inline string albumRawId() const { DARABONBA_PTR_GET_DEFAULT(albumRawId_, "") };
    inline CreatePlayingListOAuth2ResponseBodyResult& setAlbumRawId(string albumRawId) { DARABONBA_PTR_SET_VALUE(albumRawId_, albumRawId) };


    // audioLength Field Functions 
    bool hasAudioLength() const { return this->audioLength_ != nullptr;};
    void deleteAudioLength() { this->audioLength_ = nullptr;};
    inline int32_t audioLength() const { DARABONBA_PTR_GET_DEFAULT(audioLength_, 0) };
    inline CreatePlayingListOAuth2ResponseBodyResult& setAudioLength(int32_t audioLength) { DARABONBA_PTR_SET_VALUE(audioLength_, audioLength) };


    // copyright Field Functions 
    bool hasCopyright() const { return this->copyright_ != nullptr;};
    void deleteCopyright() { this->copyright_ = nullptr;};
    inline int32_t copyright() const { DARABONBA_PTR_GET_DEFAULT(copyright_, 0) };
    inline CreatePlayingListOAuth2ResponseBodyResult& setCopyright(int32_t copyright) { DARABONBA_PTR_SET_VALUE(copyright_, copyright) };


    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline const Models::CreatePlayingListOAuth2ResponseBodyResultCover & cover() const { DARABONBA_PTR_GET_CONST(cover_, Models::CreatePlayingListOAuth2ResponseBodyResultCover) };
    inline Models::CreatePlayingListOAuth2ResponseBodyResultCover cover() { DARABONBA_PTR_GET(cover_, Models::CreatePlayingListOAuth2ResponseBodyResultCover) };
    inline CreatePlayingListOAuth2ResponseBodyResult& setCover(const Models::CreatePlayingListOAuth2ResponseBodyResultCover & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
    inline CreatePlayingListOAuth2ResponseBodyResult& setCover(Models::CreatePlayingListOAuth2ResponseBodyResultCover && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


    // defaultPlayOrder Field Functions 
    bool hasDefaultPlayOrder() const { return this->defaultPlayOrder_ != nullptr;};
    void deleteDefaultPlayOrder() { this->defaultPlayOrder_ = nullptr;};
    inline int32_t defaultPlayOrder() const { DARABONBA_PTR_GET_DEFAULT(defaultPlayOrder_, 0) };
    inline CreatePlayingListOAuth2ResponseBodyResult& setDefaultPlayOrder(int32_t defaultPlayOrder) { DARABONBA_PTR_SET_VALUE(defaultPlayOrder_, defaultPlayOrder) };


    // itemUrl Field Functions 
    bool hasItemUrl() const { return this->itemUrl_ != nullptr;};
    void deleteItemUrl() { this->itemUrl_ = nullptr;};
    inline string itemUrl() const { DARABONBA_PTR_GET_DEFAULT(itemUrl_, "") };
    inline CreatePlayingListOAuth2ResponseBodyResult& setItemUrl(string itemUrl) { DARABONBA_PTR_SET_VALUE(itemUrl_, itemUrl) };


    // liked Field Functions 
    bool hasLiked() const { return this->liked_ != nullptr;};
    void deleteLiked() { this->liked_ = nullptr;};
    inline bool liked() const { DARABONBA_PTR_GET_DEFAULT(liked_, false) };
    inline CreatePlayingListOAuth2ResponseBodyResult& setLiked(bool liked) { DARABONBA_PTR_SET_VALUE(liked_, liked) };


    // lyricUrl Field Functions 
    bool hasLyricUrl() const { return this->lyricUrl_ != nullptr;};
    void deleteLyricUrl() { this->lyricUrl_ = nullptr;};
    inline string lyricUrl() const { DARABONBA_PTR_GET_DEFAULT(lyricUrl_, "") };
    inline CreatePlayingListOAuth2ResponseBodyResult& setLyricUrl(string lyricUrl) { DARABONBA_PTR_SET_VALUE(lyricUrl_, lyricUrl) };


    // playMode Field Functions 
    bool hasPlayMode() const { return this->playMode_ != nullptr;};
    void deletePlayMode() { this->playMode_ = nullptr;};
    inline string playMode() const { DARABONBA_PTR_GET_DEFAULT(playMode_, "") };
    inline CreatePlayingListOAuth2ResponseBodyResult& setPlayMode(string playMode) { DARABONBA_PTR_SET_VALUE(playMode_, playMode) };


    // pos Field Functions 
    bool hasPos() const { return this->pos_ != nullptr;};
    void deletePos() { this->pos_ = nullptr;};
    inline int32_t pos() const { DARABONBA_PTR_GET_DEFAULT(pos_, 0) };
    inline CreatePlayingListOAuth2ResponseBodyResult& setPos(int32_t pos) { DARABONBA_PTR_SET_VALUE(pos_, pos) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline CreatePlayingListOAuth2ResponseBodyResult& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // rawId Field Functions 
    bool hasRawId() const { return this->rawId_ != nullptr;};
    void deleteRawId() { this->rawId_ = nullptr;};
    inline string rawId() const { DARABONBA_PTR_GET_DEFAULT(rawId_, "") };
    inline CreatePlayingListOAuth2ResponseBodyResult& setRawId(string rawId) { DARABONBA_PTR_SET_VALUE(rawId_, rawId) };


    // singer Field Functions 
    bool hasSinger() const { return this->singer_ != nullptr;};
    void deleteSinger() { this->singer_ = nullptr;};
    inline string singer() const { DARABONBA_PTR_GET_DEFAULT(singer_, "") };
    inline CreatePlayingListOAuth2ResponseBodyResult& setSinger(string singer) { DARABONBA_PTR_SET_VALUE(singer_, singer) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreatePlayingListOAuth2ResponseBodyResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreatePlayingListOAuth2ResponseBodyResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreatePlayingListOAuth2ResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // valid Field Functions 
    bool hasValid() const { return this->valid_ != nullptr;};
    void deleteValid() { this->valid_ = nullptr;};
    inline string valid() const { DARABONBA_PTR_GET_DEFAULT(valid_, "") };
    inline CreatePlayingListOAuth2ResponseBodyResult& setValid(string valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


  protected:
    std::shared_ptr<string> albumName_ = nullptr;
    std::shared_ptr<string> albumRawId_ = nullptr;
    std::shared_ptr<int32_t> audioLength_ = nullptr;
    std::shared_ptr<int32_t> copyright_ = nullptr;
    std::shared_ptr<Models::CreatePlayingListOAuth2ResponseBodyResultCover> cover_ = nullptr;
    std::shared_ptr<int32_t> defaultPlayOrder_ = nullptr;
    std::shared_ptr<string> itemUrl_ = nullptr;
    std::shared_ptr<bool> liked_ = nullptr;
    std::shared_ptr<string> lyricUrl_ = nullptr;
    std::shared_ptr<string> playMode_ = nullptr;
    std::shared_ptr<int32_t> pos_ = nullptr;
    std::shared_ptr<int32_t> progress_ = nullptr;
    std::shared_ptr<string> rawId_ = nullptr;
    std::shared_ptr<string> singer_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> valid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
