// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCONTENTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCONTENTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchContentResponseBodyResultAuthors.hpp>
#include <alibabacloud/models/SearchContentResponseBodyResultCover.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class SearchContentResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchContentResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AlbumId, albumId_);
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(Audition, audition_);
      DARABONBA_PTR_TO_JSON(Authors, authors_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Charge, charge_);
      DARABONBA_PTR_TO_JSON(CommCateId, commCateId_);
      DARABONBA_PTR_TO_JSON(Cover, cover_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(HotScore, hotScore_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ItemType, itemType_);
      DARABONBA_PTR_TO_JSON(Lyric, lyric_);
      DARABONBA_PTR_TO_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Styles, styles_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Valid, valid_);
    };
    friend void from_json(const Darabonba::Json& j, SearchContentResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbumId, albumId_);
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(Audition, audition_);
      DARABONBA_PTR_FROM_JSON(Authors, authors_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Charge, charge_);
      DARABONBA_PTR_FROM_JSON(CommCateId, commCateId_);
      DARABONBA_PTR_FROM_JSON(Cover, cover_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(HotScore, hotScore_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ItemType, itemType_);
      DARABONBA_PTR_FROM_JSON(Lyric, lyric_);
      DARABONBA_PTR_FROM_JSON(OrderIndex, orderIndex_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Styles, styles_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Valid, valid_);
    };
    SearchContentResponseBodyResult() = default ;
    SearchContentResponseBodyResult(const SearchContentResponseBodyResult &) = default ;
    SearchContentResponseBodyResult(SearchContentResponseBodyResult &&) = default ;
    SearchContentResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchContentResponseBodyResult() = default ;
    SearchContentResponseBodyResult& operator=(const SearchContentResponseBodyResult &) = default ;
    SearchContentResponseBodyResult& operator=(SearchContentResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albumId_ != nullptr
        && this->alias_ != nullptr && this->audition_ != nullptr && this->authors_ != nullptr && this->category_ != nullptr && this->charge_ != nullptr
        && this->commCateId_ != nullptr && this->cover_ != nullptr && this->description_ != nullptr && this->duration_ != nullptr && this->hotScore_ != nullptr
        && this->id_ != nullptr && this->itemType_ != nullptr && this->lyric_ != nullptr && this->orderIndex_ != nullptr && this->source_ != nullptr
        && this->styles_ != nullptr && this->title_ != nullptr && this->type_ != nullptr && this->valid_ != nullptr; };
    // albumId Field Functions 
    bool hasAlbumId() const { return this->albumId_ != nullptr;};
    void deleteAlbumId() { this->albumId_ = nullptr;};
    inline string albumId() const { DARABONBA_PTR_GET_DEFAULT(albumId_, "") };
    inline SearchContentResponseBodyResult& setAlbumId(string albumId) { DARABONBA_PTR_SET_VALUE(albumId_, albumId) };


    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline const vector<string> & alias() const { DARABONBA_PTR_GET_CONST(alias_, vector<string>) };
    inline vector<string> alias() { DARABONBA_PTR_GET(alias_, vector<string>) };
    inline SearchContentResponseBodyResult& setAlias(const vector<string> & alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };
    inline SearchContentResponseBodyResult& setAlias(vector<string> && alias) { DARABONBA_PTR_SET_RVALUE(alias_, alias) };


    // audition Field Functions 
    bool hasAudition() const { return this->audition_ != nullptr;};
    void deleteAudition() { this->audition_ = nullptr;};
    inline bool audition() const { DARABONBA_PTR_GET_DEFAULT(audition_, false) };
    inline SearchContentResponseBodyResult& setAudition(bool audition) { DARABONBA_PTR_SET_VALUE(audition_, audition) };


    // authors Field Functions 
    bool hasAuthors() const { return this->authors_ != nullptr;};
    void deleteAuthors() { this->authors_ = nullptr;};
    inline const vector<Models::SearchContentResponseBodyResultAuthors> & authors() const { DARABONBA_PTR_GET_CONST(authors_, vector<Models::SearchContentResponseBodyResultAuthors>) };
    inline vector<Models::SearchContentResponseBodyResultAuthors> authors() { DARABONBA_PTR_GET(authors_, vector<Models::SearchContentResponseBodyResultAuthors>) };
    inline SearchContentResponseBodyResult& setAuthors(const vector<Models::SearchContentResponseBodyResultAuthors> & authors) { DARABONBA_PTR_SET_VALUE(authors_, authors) };
    inline SearchContentResponseBodyResult& setAuthors(vector<Models::SearchContentResponseBodyResultAuthors> && authors) { DARABONBA_PTR_SET_RVALUE(authors_, authors) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline SearchContentResponseBodyResult& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // charge Field Functions 
    bool hasCharge() const { return this->charge_ != nullptr;};
    void deleteCharge() { this->charge_ = nullptr;};
    inline bool charge() const { DARABONBA_PTR_GET_DEFAULT(charge_, false) };
    inline SearchContentResponseBodyResult& setCharge(bool charge) { DARABONBA_PTR_SET_VALUE(charge_, charge) };


    // commCateId Field Functions 
    bool hasCommCateId() const { return this->commCateId_ != nullptr;};
    void deleteCommCateId() { this->commCateId_ = nullptr;};
    inline int64_t commCateId() const { DARABONBA_PTR_GET_DEFAULT(commCateId_, 0L) };
    inline SearchContentResponseBodyResult& setCommCateId(int64_t commCateId) { DARABONBA_PTR_SET_VALUE(commCateId_, commCateId) };


    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline const Models::SearchContentResponseBodyResultCover & cover() const { DARABONBA_PTR_GET_CONST(cover_, Models::SearchContentResponseBodyResultCover) };
    inline Models::SearchContentResponseBodyResultCover cover() { DARABONBA_PTR_GET(cover_, Models::SearchContentResponseBodyResultCover) };
    inline SearchContentResponseBodyResult& setCover(const Models::SearchContentResponseBodyResultCover & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
    inline SearchContentResponseBodyResult& setCover(Models::SearchContentResponseBodyResultCover && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SearchContentResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline SearchContentResponseBodyResult& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // hotScore Field Functions 
    bool hasHotScore() const { return this->hotScore_ != nullptr;};
    void deleteHotScore() { this->hotScore_ = nullptr;};
    inline double hotScore() const { DARABONBA_PTR_GET_DEFAULT(hotScore_, 0.0) };
    inline SearchContentResponseBodyResult& setHotScore(double hotScore) { DARABONBA_PTR_SET_VALUE(hotScore_, hotScore) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline SearchContentResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // itemType Field Functions 
    bool hasItemType() const { return this->itemType_ != nullptr;};
    void deleteItemType() { this->itemType_ = nullptr;};
    inline string itemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
    inline SearchContentResponseBodyResult& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


    // lyric Field Functions 
    bool hasLyric() const { return this->lyric_ != nullptr;};
    void deleteLyric() { this->lyric_ = nullptr;};
    inline string lyric() const { DARABONBA_PTR_GET_DEFAULT(lyric_, "") };
    inline SearchContentResponseBodyResult& setLyric(string lyric) { DARABONBA_PTR_SET_VALUE(lyric_, lyric) };


    // orderIndex Field Functions 
    bool hasOrderIndex() const { return this->orderIndex_ != nullptr;};
    void deleteOrderIndex() { this->orderIndex_ = nullptr;};
    inline string orderIndex() const { DARABONBA_PTR_GET_DEFAULT(orderIndex_, "") };
    inline SearchContentResponseBodyResult& setOrderIndex(string orderIndex) { DARABONBA_PTR_SET_VALUE(orderIndex_, orderIndex) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline SearchContentResponseBodyResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // styles Field Functions 
    bool hasStyles() const { return this->styles_ != nullptr;};
    void deleteStyles() { this->styles_ = nullptr;};
    inline const vector<string> & styles() const { DARABONBA_PTR_GET_CONST(styles_, vector<string>) };
    inline vector<string> styles() { DARABONBA_PTR_GET(styles_, vector<string>) };
    inline SearchContentResponseBodyResult& setStyles(const vector<string> & styles) { DARABONBA_PTR_SET_VALUE(styles_, styles) };
    inline SearchContentResponseBodyResult& setStyles(vector<string> && styles) { DARABONBA_PTR_SET_RVALUE(styles_, styles) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SearchContentResponseBodyResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SearchContentResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // valid Field Functions 
    bool hasValid() const { return this->valid_ != nullptr;};
    void deleteValid() { this->valid_ = nullptr;};
    inline string valid() const { DARABONBA_PTR_GET_DEFAULT(valid_, "") };
    inline SearchContentResponseBodyResult& setValid(string valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


  protected:
    std::shared_ptr<string> albumId_ = nullptr;
    std::shared_ptr<vector<string>> alias_ = nullptr;
    std::shared_ptr<bool> audition_ = nullptr;
    std::shared_ptr<vector<Models::SearchContentResponseBodyResultAuthors>> authors_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<bool> charge_ = nullptr;
    std::shared_ptr<int64_t> commCateId_ = nullptr;
    std::shared_ptr<Models::SearchContentResponseBodyResultCover> cover_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<double> hotScore_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> itemType_ = nullptr;
    std::shared_ptr<string> lyric_ = nullptr;
    std::shared_ptr<string> orderIndex_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<vector<string>> styles_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> valid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
