// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALBUMRESPONSEBODYRESULTAUTHORS_HPP_
#define ALIBABACLOUD_MODELS_GETALBUMRESPONSEBODYRESULTAUTHORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetAlbumResponseBodyResultAuthors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlbumResponseBodyResultAuthors& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorTypes, authorTypes_);
      DARABONBA_PTR_TO_JSON(Gender, gender_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlbumResponseBodyResultAuthors& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorTypes, authorTypes_);
      DARABONBA_PTR_FROM_JSON(Gender, gender_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetAlbumResponseBodyResultAuthors() = default ;
    GetAlbumResponseBodyResultAuthors(const GetAlbumResponseBodyResultAuthors &) = default ;
    GetAlbumResponseBodyResultAuthors(GetAlbumResponseBodyResultAuthors &&) = default ;
    GetAlbumResponseBodyResultAuthors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlbumResponseBodyResultAuthors() = default ;
    GetAlbumResponseBodyResultAuthors& operator=(const GetAlbumResponseBodyResultAuthors &) = default ;
    GetAlbumResponseBodyResultAuthors& operator=(GetAlbumResponseBodyResultAuthors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorTypes_ != nullptr
        && this->gender_ != nullptr && this->id_ != nullptr && this->online_ != nullptr && this->source_ != nullptr && this->title_ != nullptr; };
    // authorTypes Field Functions 
    bool hasAuthorTypes() const { return this->authorTypes_ != nullptr;};
    void deleteAuthorTypes() { this->authorTypes_ = nullptr;};
    inline const vector<string> & authorTypes() const { DARABONBA_PTR_GET_CONST(authorTypes_, vector<string>) };
    inline vector<string> authorTypes() { DARABONBA_PTR_GET(authorTypes_, vector<string>) };
    inline GetAlbumResponseBodyResultAuthors& setAuthorTypes(const vector<string> & authorTypes) { DARABONBA_PTR_SET_VALUE(authorTypes_, authorTypes) };
    inline GetAlbumResponseBodyResultAuthors& setAuthorTypes(vector<string> && authorTypes) { DARABONBA_PTR_SET_RVALUE(authorTypes_, authorTypes) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline GetAlbumResponseBodyResultAuthors& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetAlbumResponseBodyResultAuthors& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline GetAlbumResponseBodyResultAuthors& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetAlbumResponseBodyResultAuthors& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetAlbumResponseBodyResultAuthors& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<string>> authorTypes_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<bool> online_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
