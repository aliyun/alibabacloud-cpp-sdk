// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILERECOMMENDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_MOBILERECOMMENDRESPONSEBODYRESULT_HPP_
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
  class MobileRecommendResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MobileRecommendResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Authors, authors_);
      DARABONBA_PTR_TO_JSON(Cover, cover_);
      DARABONBA_PTR_TO_JSON(RawId, rawId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, MobileRecommendResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Authors, authors_);
      DARABONBA_PTR_FROM_JSON(Cover, cover_);
      DARABONBA_PTR_FROM_JSON(RawId, rawId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    MobileRecommendResponseBodyResult() = default ;
    MobileRecommendResponseBodyResult(const MobileRecommendResponseBodyResult &) = default ;
    MobileRecommendResponseBodyResult(MobileRecommendResponseBodyResult &&) = default ;
    MobileRecommendResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MobileRecommendResponseBodyResult() = default ;
    MobileRecommendResponseBodyResult& operator=(const MobileRecommendResponseBodyResult &) = default ;
    MobileRecommendResponseBodyResult& operator=(MobileRecommendResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authors_ != nullptr
        && this->cover_ != nullptr && this->rawId_ != nullptr && this->source_ != nullptr && this->title_ != nullptr; };
    // authors Field Functions 
    bool hasAuthors() const { return this->authors_ != nullptr;};
    void deleteAuthors() { this->authors_ = nullptr;};
    inline const vector<string> & authors() const { DARABONBA_PTR_GET_CONST(authors_, vector<string>) };
    inline vector<string> authors() { DARABONBA_PTR_GET(authors_, vector<string>) };
    inline MobileRecommendResponseBodyResult& setAuthors(const vector<string> & authors) { DARABONBA_PTR_SET_VALUE(authors_, authors) };
    inline MobileRecommendResponseBodyResult& setAuthors(vector<string> && authors) { DARABONBA_PTR_SET_RVALUE(authors_, authors) };


    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline string cover() const { DARABONBA_PTR_GET_DEFAULT(cover_, "") };
    inline MobileRecommendResponseBodyResult& setCover(string cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };


    // rawId Field Functions 
    bool hasRawId() const { return this->rawId_ != nullptr;};
    void deleteRawId() { this->rawId_ = nullptr;};
    inline string rawId() const { DARABONBA_PTR_GET_DEFAULT(rawId_, "") };
    inline MobileRecommendResponseBodyResult& setRawId(string rawId) { DARABONBA_PTR_SET_VALUE(rawId_, rawId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline MobileRecommendResponseBodyResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline MobileRecommendResponseBodyResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<string>> authors_ = nullptr;
    std::shared_ptr<string> cover_ = nullptr;
    std::shared_ptr<string> rawId_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
