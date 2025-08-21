// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALBUMRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETALBUMRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAlbumResponseBodyResultAuthors.hpp>
#include <alibabacloud/models/GetAlbumResponseBodyResultCover.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetAlbumResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlbumResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(Audition, audition_);
      DARABONBA_PTR_TO_JSON(Authors, authors_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Charge, charge_);
      DARABONBA_PTR_TO_JSON(CommCateId, commCateId_);
      DARABONBA_PTR_TO_JSON(Cover, cover_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Finished, finished_);
      DARABONBA_PTR_TO_JSON(HotScore, hotScore_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ItemType, itemType_);
      DARABONBA_PTR_TO_JSON(RawId, rawId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(TotalEpisode, totalEpisode_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Valid, valid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlbumResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(Audition, audition_);
      DARABONBA_PTR_FROM_JSON(Authors, authors_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Charge, charge_);
      DARABONBA_PTR_FROM_JSON(CommCateId, commCateId_);
      DARABONBA_PTR_FROM_JSON(Cover, cover_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Finished, finished_);
      DARABONBA_PTR_FROM_JSON(HotScore, hotScore_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ItemType, itemType_);
      DARABONBA_PTR_FROM_JSON(RawId, rawId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(TotalEpisode, totalEpisode_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Valid, valid_);
    };
    GetAlbumResponseBodyResult() = default ;
    GetAlbumResponseBodyResult(const GetAlbumResponseBodyResult &) = default ;
    GetAlbumResponseBodyResult(GetAlbumResponseBodyResult &&) = default ;
    GetAlbumResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlbumResponseBodyResult() = default ;
    GetAlbumResponseBodyResult& operator=(const GetAlbumResponseBodyResult &) = default ;
    GetAlbumResponseBodyResult& operator=(GetAlbumResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->audition_ != nullptr && this->authors_ != nullptr && this->category_ != nullptr && this->charge_ != nullptr && this->commCateId_ != nullptr
        && this->cover_ != nullptr && this->description_ != nullptr && this->finished_ != nullptr && this->hotScore_ != nullptr && this->id_ != nullptr
        && this->itemType_ != nullptr && this->rawId_ != nullptr && this->source_ != nullptr && this->title_ != nullptr && this->totalEpisode_ != nullptr
        && this->type_ != nullptr && this->valid_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline const vector<string> & alias() const { DARABONBA_PTR_GET_CONST(alias_, vector<string>) };
    inline vector<string> alias() { DARABONBA_PTR_GET(alias_, vector<string>) };
    inline GetAlbumResponseBodyResult& setAlias(const vector<string> & alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };
    inline GetAlbumResponseBodyResult& setAlias(vector<string> && alias) { DARABONBA_PTR_SET_RVALUE(alias_, alias) };


    // audition Field Functions 
    bool hasAudition() const { return this->audition_ != nullptr;};
    void deleteAudition() { this->audition_ = nullptr;};
    inline bool audition() const { DARABONBA_PTR_GET_DEFAULT(audition_, false) };
    inline GetAlbumResponseBodyResult& setAudition(bool audition) { DARABONBA_PTR_SET_VALUE(audition_, audition) };


    // authors Field Functions 
    bool hasAuthors() const { return this->authors_ != nullptr;};
    void deleteAuthors() { this->authors_ = nullptr;};
    inline const vector<Models::GetAlbumResponseBodyResultAuthors> & authors() const { DARABONBA_PTR_GET_CONST(authors_, vector<Models::GetAlbumResponseBodyResultAuthors>) };
    inline vector<Models::GetAlbumResponseBodyResultAuthors> authors() { DARABONBA_PTR_GET(authors_, vector<Models::GetAlbumResponseBodyResultAuthors>) };
    inline GetAlbumResponseBodyResult& setAuthors(const vector<Models::GetAlbumResponseBodyResultAuthors> & authors) { DARABONBA_PTR_SET_VALUE(authors_, authors) };
    inline GetAlbumResponseBodyResult& setAuthors(vector<Models::GetAlbumResponseBodyResultAuthors> && authors) { DARABONBA_PTR_SET_RVALUE(authors_, authors) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline GetAlbumResponseBodyResult& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // charge Field Functions 
    bool hasCharge() const { return this->charge_ != nullptr;};
    void deleteCharge() { this->charge_ = nullptr;};
    inline bool charge() const { DARABONBA_PTR_GET_DEFAULT(charge_, false) };
    inline GetAlbumResponseBodyResult& setCharge(bool charge) { DARABONBA_PTR_SET_VALUE(charge_, charge) };


    // commCateId Field Functions 
    bool hasCommCateId() const { return this->commCateId_ != nullptr;};
    void deleteCommCateId() { this->commCateId_ = nullptr;};
    inline int64_t commCateId() const { DARABONBA_PTR_GET_DEFAULT(commCateId_, 0L) };
    inline GetAlbumResponseBodyResult& setCommCateId(int64_t commCateId) { DARABONBA_PTR_SET_VALUE(commCateId_, commCateId) };


    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline const Models::GetAlbumResponseBodyResultCover & cover() const { DARABONBA_PTR_GET_CONST(cover_, Models::GetAlbumResponseBodyResultCover) };
    inline Models::GetAlbumResponseBodyResultCover cover() { DARABONBA_PTR_GET(cover_, Models::GetAlbumResponseBodyResultCover) };
    inline GetAlbumResponseBodyResult& setCover(const Models::GetAlbumResponseBodyResultCover & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
    inline GetAlbumResponseBodyResult& setCover(Models::GetAlbumResponseBodyResultCover && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAlbumResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline string finished() const { DARABONBA_PTR_GET_DEFAULT(finished_, "") };
    inline GetAlbumResponseBodyResult& setFinished(string finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // hotScore Field Functions 
    bool hasHotScore() const { return this->hotScore_ != nullptr;};
    void deleteHotScore() { this->hotScore_ = nullptr;};
    inline double hotScore() const { DARABONBA_PTR_GET_DEFAULT(hotScore_, 0.0) };
    inline GetAlbumResponseBodyResult& setHotScore(double hotScore) { DARABONBA_PTR_SET_VALUE(hotScore_, hotScore) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetAlbumResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // itemType Field Functions 
    bool hasItemType() const { return this->itemType_ != nullptr;};
    void deleteItemType() { this->itemType_ = nullptr;};
    inline string itemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
    inline GetAlbumResponseBodyResult& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


    // rawId Field Functions 
    bool hasRawId() const { return this->rawId_ != nullptr;};
    void deleteRawId() { this->rawId_ = nullptr;};
    inline string rawId() const { DARABONBA_PTR_GET_DEFAULT(rawId_, "") };
    inline GetAlbumResponseBodyResult& setRawId(string rawId) { DARABONBA_PTR_SET_VALUE(rawId_, rawId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetAlbumResponseBodyResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetAlbumResponseBodyResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // totalEpisode Field Functions 
    bool hasTotalEpisode() const { return this->totalEpisode_ != nullptr;};
    void deleteTotalEpisode() { this->totalEpisode_ = nullptr;};
    inline int32_t totalEpisode() const { DARABONBA_PTR_GET_DEFAULT(totalEpisode_, 0) };
    inline GetAlbumResponseBodyResult& setTotalEpisode(int32_t totalEpisode) { DARABONBA_PTR_SET_VALUE(totalEpisode_, totalEpisode) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAlbumResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // valid Field Functions 
    bool hasValid() const { return this->valid_ != nullptr;};
    void deleteValid() { this->valid_ = nullptr;};
    inline string valid() const { DARABONBA_PTR_GET_DEFAULT(valid_, "") };
    inline GetAlbumResponseBodyResult& setValid(string valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


  protected:
    std::shared_ptr<vector<string>> alias_ = nullptr;
    std::shared_ptr<bool> audition_ = nullptr;
    std::shared_ptr<vector<Models::GetAlbumResponseBodyResultAuthors>> authors_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<bool> charge_ = nullptr;
    std::shared_ptr<int64_t> commCateId_ = nullptr;
    std::shared_ptr<Models::GetAlbumResponseBodyResultCover> cover_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> finished_ = nullptr;
    std::shared_ptr<double> hotScore_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> itemType_ = nullptr;
    std::shared_ptr<string> rawId_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int32_t> totalEpisode_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> valid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
