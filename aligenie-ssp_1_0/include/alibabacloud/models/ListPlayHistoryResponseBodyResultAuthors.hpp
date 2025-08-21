// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLAYHISTORYRESPONSEBODYRESULTAUTHORS_HPP_
#define ALIBABACLOUD_MODELS_LISTPLAYHISTORYRESPONSEBODYRESULTAUTHORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPlayHistoryResponseBodyResultAuthorsCover.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListPlayHistoryResponseBodyResultAuthors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlayHistoryResponseBodyResultAuthors& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorTypes, authorTypes_);
      DARABONBA_PTR_TO_JSON(Cover, cover_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Gender, gender_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(RawId, rawId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlayHistoryResponseBodyResultAuthors& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorTypes, authorTypes_);
      DARABONBA_PTR_FROM_JSON(Cover, cover_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Gender, gender_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(RawId, rawId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListPlayHistoryResponseBodyResultAuthors() = default ;
    ListPlayHistoryResponseBodyResultAuthors(const ListPlayHistoryResponseBodyResultAuthors &) = default ;
    ListPlayHistoryResponseBodyResultAuthors(ListPlayHistoryResponseBodyResultAuthors &&) = default ;
    ListPlayHistoryResponseBodyResultAuthors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlayHistoryResponseBodyResultAuthors() = default ;
    ListPlayHistoryResponseBodyResultAuthors& operator=(const ListPlayHistoryResponseBodyResultAuthors &) = default ;
    ListPlayHistoryResponseBodyResultAuthors& operator=(ListPlayHistoryResponseBodyResultAuthors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorTypes_ != nullptr
        && this->cover_ != nullptr && this->description_ != nullptr && this->gender_ != nullptr && this->id_ != nullptr && this->online_ != nullptr
        && this->rawId_ != nullptr && this->source_ != nullptr && this->title_ != nullptr; };
    // authorTypes Field Functions 
    bool hasAuthorTypes() const { return this->authorTypes_ != nullptr;};
    void deleteAuthorTypes() { this->authorTypes_ = nullptr;};
    inline const vector<string> & authorTypes() const { DARABONBA_PTR_GET_CONST(authorTypes_, vector<string>) };
    inline vector<string> authorTypes() { DARABONBA_PTR_GET(authorTypes_, vector<string>) };
    inline ListPlayHistoryResponseBodyResultAuthors& setAuthorTypes(const vector<string> & authorTypes) { DARABONBA_PTR_SET_VALUE(authorTypes_, authorTypes) };
    inline ListPlayHistoryResponseBodyResultAuthors& setAuthorTypes(vector<string> && authorTypes) { DARABONBA_PTR_SET_RVALUE(authorTypes_, authorTypes) };


    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline const Models::ListPlayHistoryResponseBodyResultAuthorsCover & cover() const { DARABONBA_PTR_GET_CONST(cover_, Models::ListPlayHistoryResponseBodyResultAuthorsCover) };
    inline Models::ListPlayHistoryResponseBodyResultAuthorsCover cover() { DARABONBA_PTR_GET(cover_, Models::ListPlayHistoryResponseBodyResultAuthorsCover) };
    inline ListPlayHistoryResponseBodyResultAuthors& setCover(const Models::ListPlayHistoryResponseBodyResultAuthorsCover & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
    inline ListPlayHistoryResponseBodyResultAuthors& setCover(Models::ListPlayHistoryResponseBodyResultAuthorsCover && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPlayHistoryResponseBodyResultAuthors& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline ListPlayHistoryResponseBodyResultAuthors& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListPlayHistoryResponseBodyResultAuthors& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline ListPlayHistoryResponseBodyResultAuthors& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // rawId Field Functions 
    bool hasRawId() const { return this->rawId_ != nullptr;};
    void deleteRawId() { this->rawId_ = nullptr;};
    inline string rawId() const { DARABONBA_PTR_GET_DEFAULT(rawId_, "") };
    inline ListPlayHistoryResponseBodyResultAuthors& setRawId(string rawId) { DARABONBA_PTR_SET_VALUE(rawId_, rawId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListPlayHistoryResponseBodyResultAuthors& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListPlayHistoryResponseBodyResultAuthors& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<string>> authorTypes_ = nullptr;
    std::shared_ptr<Models::ListPlayHistoryResponseBodyResultAuthorsCover> cover_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<bool> online_ = nullptr;
    std::shared_ptr<string> rawId_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
