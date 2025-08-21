// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCGSEARCHRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_SCGSEARCHRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScgSearchResponseBodyResultCover.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ScgSearchResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScgSearchResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Album, album_);
      DARABONBA_PTR_TO_JSON(AlbumRawId, albumRawId_);
      DARABONBA_PTR_TO_JSON(AlbumType, albumType_);
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(AuthorIds, authorIds_);
      DARABONBA_PTR_TO_JSON(AuthorNames, authorNames_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Cover, cover_);
      DARABONBA_PTR_TO_JSON(IsAudition, isAudition_);
      DARABONBA_PTR_TO_JSON(IsCharge, isCharge_);
      DARABONBA_PTR_TO_JSON(NeedCharge, needCharge_);
      DARABONBA_PTR_TO_JSON(RawId, rawId_);
      DARABONBA_PTR_TO_JSON(Singers, singers_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SupportAudition, supportAudition_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ScgSearchResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Album, album_);
      DARABONBA_PTR_FROM_JSON(AlbumRawId, albumRawId_);
      DARABONBA_PTR_FROM_JSON(AlbumType, albumType_);
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(AuthorIds, authorIds_);
      DARABONBA_PTR_FROM_JSON(AuthorNames, authorNames_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Cover, cover_);
      DARABONBA_PTR_FROM_JSON(IsAudition, isAudition_);
      DARABONBA_PTR_FROM_JSON(IsCharge, isCharge_);
      DARABONBA_PTR_FROM_JSON(NeedCharge, needCharge_);
      DARABONBA_PTR_FROM_JSON(RawId, rawId_);
      DARABONBA_PTR_FROM_JSON(Singers, singers_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SupportAudition, supportAudition_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ScgSearchResponseBodyResult() = default ;
    ScgSearchResponseBodyResult(const ScgSearchResponseBodyResult &) = default ;
    ScgSearchResponseBodyResult(ScgSearchResponseBodyResult &&) = default ;
    ScgSearchResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScgSearchResponseBodyResult() = default ;
    ScgSearchResponseBodyResult& operator=(const ScgSearchResponseBodyResult &) = default ;
    ScgSearchResponseBodyResult& operator=(ScgSearchResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->album_ != nullptr
        && this->albumRawId_ != nullptr && this->albumType_ != nullptr && this->alias_ != nullptr && this->authorIds_ != nullptr && this->authorNames_ != nullptr
        && this->category_ != nullptr && this->contentType_ != nullptr && this->cover_ != nullptr && this->isAudition_ != nullptr && this->isCharge_ != nullptr
        && this->needCharge_ != nullptr && this->rawId_ != nullptr && this->singers_ != nullptr && this->source_ != nullptr && this->supportAudition_ != nullptr
        && this->title_ != nullptr && this->type_ != nullptr; };
    // album Field Functions 
    bool hasAlbum() const { return this->album_ != nullptr;};
    void deleteAlbum() { this->album_ = nullptr;};
    inline bool album() const { DARABONBA_PTR_GET_DEFAULT(album_, false) };
    inline ScgSearchResponseBodyResult& setAlbum(bool album) { DARABONBA_PTR_SET_VALUE(album_, album) };


    // albumRawId Field Functions 
    bool hasAlbumRawId() const { return this->albumRawId_ != nullptr;};
    void deleteAlbumRawId() { this->albumRawId_ = nullptr;};
    inline string albumRawId() const { DARABONBA_PTR_GET_DEFAULT(albumRawId_, "") };
    inline ScgSearchResponseBodyResult& setAlbumRawId(string albumRawId) { DARABONBA_PTR_SET_VALUE(albumRawId_, albumRawId) };


    // albumType Field Functions 
    bool hasAlbumType() const { return this->albumType_ != nullptr;};
    void deleteAlbumType() { this->albumType_ = nullptr;};
    inline int32_t albumType() const { DARABONBA_PTR_GET_DEFAULT(albumType_, 0) };
    inline ScgSearchResponseBodyResult& setAlbumType(int32_t albumType) { DARABONBA_PTR_SET_VALUE(albumType_, albumType) };


    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline const vector<string> & alias() const { DARABONBA_PTR_GET_CONST(alias_, vector<string>) };
    inline vector<string> alias() { DARABONBA_PTR_GET(alias_, vector<string>) };
    inline ScgSearchResponseBodyResult& setAlias(const vector<string> & alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };
    inline ScgSearchResponseBodyResult& setAlias(vector<string> && alias) { DARABONBA_PTR_SET_RVALUE(alias_, alias) };


    // authorIds Field Functions 
    bool hasAuthorIds() const { return this->authorIds_ != nullptr;};
    void deleteAuthorIds() { this->authorIds_ = nullptr;};
    inline const vector<int64_t> & authorIds() const { DARABONBA_PTR_GET_CONST(authorIds_, vector<int64_t>) };
    inline vector<int64_t> authorIds() { DARABONBA_PTR_GET(authorIds_, vector<int64_t>) };
    inline ScgSearchResponseBodyResult& setAuthorIds(const vector<int64_t> & authorIds) { DARABONBA_PTR_SET_VALUE(authorIds_, authorIds) };
    inline ScgSearchResponseBodyResult& setAuthorIds(vector<int64_t> && authorIds) { DARABONBA_PTR_SET_RVALUE(authorIds_, authorIds) };


    // authorNames Field Functions 
    bool hasAuthorNames() const { return this->authorNames_ != nullptr;};
    void deleteAuthorNames() { this->authorNames_ = nullptr;};
    inline const vector<string> & authorNames() const { DARABONBA_PTR_GET_CONST(authorNames_, vector<string>) };
    inline vector<string> authorNames() { DARABONBA_PTR_GET(authorNames_, vector<string>) };
    inline ScgSearchResponseBodyResult& setAuthorNames(const vector<string> & authorNames) { DARABONBA_PTR_SET_VALUE(authorNames_, authorNames) };
    inline ScgSearchResponseBodyResult& setAuthorNames(vector<string> && authorNames) { DARABONBA_PTR_SET_RVALUE(authorNames_, authorNames) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ScgSearchResponseBodyResult& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline ScgSearchResponseBodyResult& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline const Models::ScgSearchResponseBodyResultCover & cover() const { DARABONBA_PTR_GET_CONST(cover_, Models::ScgSearchResponseBodyResultCover) };
    inline Models::ScgSearchResponseBodyResultCover cover() { DARABONBA_PTR_GET(cover_, Models::ScgSearchResponseBodyResultCover) };
    inline ScgSearchResponseBodyResult& setCover(const Models::ScgSearchResponseBodyResultCover & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
    inline ScgSearchResponseBodyResult& setCover(Models::ScgSearchResponseBodyResultCover && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


    // isAudition Field Functions 
    bool hasIsAudition() const { return this->isAudition_ != nullptr;};
    void deleteIsAudition() { this->isAudition_ = nullptr;};
    inline bool isAudition() const { DARABONBA_PTR_GET_DEFAULT(isAudition_, false) };
    inline ScgSearchResponseBodyResult& setIsAudition(bool isAudition) { DARABONBA_PTR_SET_VALUE(isAudition_, isAudition) };


    // isCharge Field Functions 
    bool hasIsCharge() const { return this->isCharge_ != nullptr;};
    void deleteIsCharge() { this->isCharge_ = nullptr;};
    inline string isCharge() const { DARABONBA_PTR_GET_DEFAULT(isCharge_, "") };
    inline ScgSearchResponseBodyResult& setIsCharge(string isCharge) { DARABONBA_PTR_SET_VALUE(isCharge_, isCharge) };


    // needCharge Field Functions 
    bool hasNeedCharge() const { return this->needCharge_ != nullptr;};
    void deleteNeedCharge() { this->needCharge_ = nullptr;};
    inline bool needCharge() const { DARABONBA_PTR_GET_DEFAULT(needCharge_, false) };
    inline ScgSearchResponseBodyResult& setNeedCharge(bool needCharge) { DARABONBA_PTR_SET_VALUE(needCharge_, needCharge) };


    // rawId Field Functions 
    bool hasRawId() const { return this->rawId_ != nullptr;};
    void deleteRawId() { this->rawId_ = nullptr;};
    inline string rawId() const { DARABONBA_PTR_GET_DEFAULT(rawId_, "") };
    inline ScgSearchResponseBodyResult& setRawId(string rawId) { DARABONBA_PTR_SET_VALUE(rawId_, rawId) };


    // singers Field Functions 
    bool hasSingers() const { return this->singers_ != nullptr;};
    void deleteSingers() { this->singers_ = nullptr;};
    inline string singers() const { DARABONBA_PTR_GET_DEFAULT(singers_, "") };
    inline ScgSearchResponseBodyResult& setSingers(string singers) { DARABONBA_PTR_SET_VALUE(singers_, singers) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ScgSearchResponseBodyResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // supportAudition Field Functions 
    bool hasSupportAudition() const { return this->supportAudition_ != nullptr;};
    void deleteSupportAudition() { this->supportAudition_ = nullptr;};
    inline bool supportAudition() const { DARABONBA_PTR_GET_DEFAULT(supportAudition_, false) };
    inline ScgSearchResponseBodyResult& setSupportAudition(bool supportAudition) { DARABONBA_PTR_SET_VALUE(supportAudition_, supportAudition) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ScgSearchResponseBodyResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ScgSearchResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> album_ = nullptr;
    std::shared_ptr<string> albumRawId_ = nullptr;
    std::shared_ptr<int32_t> albumType_ = nullptr;
    std::shared_ptr<vector<string>> alias_ = nullptr;
    std::shared_ptr<vector<int64_t>> authorIds_ = nullptr;
    std::shared_ptr<vector<string>> authorNames_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<Models::ScgSearchResponseBodyResultCover> cover_ = nullptr;
    std::shared_ptr<bool> isAudition_ = nullptr;
    std::shared_ptr<string> isCharge_ = nullptr;
    std::shared_ptr<bool> needCharge_ = nullptr;
    std::shared_ptr<string> rawId_ = nullptr;
    std::shared_ptr<string> singers_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<bool> supportAudition_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
