// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTRESULTTEXTFPSHOTSTEXTFPSHOT_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTRESULTTEXTFPSHOTSTEXTFPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot& obj) { 
      DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(Similarity, similarity_);
      DARABONBA_PTR_TO_JSON(TextFpShotSlices, textFpShotSlices_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot& obj) { 
      DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
      DARABONBA_PTR_FROM_JSON(TextFpShotSlices, textFpShotSlices_);
    };
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot &&) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot& operator=(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot& operator=(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->primaryKey_ == nullptr
        && return this->similarity_ == nullptr && return this->textFpShotSlices_ == nullptr; };
    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // similarity Field Functions 
    bool hasSimilarity() const { return this->similarity_ != nullptr;};
    void deleteSimilarity() { this->similarity_ = nullptr;};
    inline string similarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot& setSimilarity(string similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


    // textFpShotSlices Field Functions 
    bool hasTextFpShotSlices() const { return this->textFpShotSlices_ != nullptr;};
    void deleteTextFpShotSlices() { this->textFpShotSlices_ = nullptr;};
    inline const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlices & textFpShotSlices() const { DARABONBA_PTR_GET_CONST(textFpShotSlices_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlices) };
    inline Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlices textFpShotSlices() { DARABONBA_PTR_GET(textFpShotSlices_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlices) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot& setTextFpShotSlices(const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlices & textFpShotSlices) { DARABONBA_PTR_SET_VALUE(textFpShotSlices_, textFpShotSlices) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShot& setTextFpShotSlices(Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlices && textFpShotSlices) { DARABONBA_PTR_SET_RVALUE(textFpShotSlices_, textFpShotSlices) };


  protected:
    // The unique primary key of the input text.
    std::shared_ptr<string> primaryKey_ = nullptr;
    // The similarity of the input text against text snippets that have similar fingerprints to the input text in the text fingerprint library.
    std::shared_ptr<string> similarity_ = nullptr;
    // The text snippets that have similar fingerprints to the input text in the text fingerprint library.
    std::shared_ptr<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultTextFpShotsTextFpShotTextFpShotSlices> textFpShotSlices_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
