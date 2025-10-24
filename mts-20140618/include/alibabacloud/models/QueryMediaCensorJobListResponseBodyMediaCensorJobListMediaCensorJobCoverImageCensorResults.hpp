// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYMEDIACENSORJOBLISTMEDIACENSORJOBCOVERIMAGECENSORRESULTS_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYMEDIACENSORJOBLISTMEDIACENSORJOBCOVERIMAGECENSORRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults& obj) { 
      DARABONBA_PTR_TO_JSON(CoverImageCensorResult, coverImageCensorResult_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults& obj) { 
      DARABONBA_PTR_FROM_JSON(CoverImageCensorResult, coverImageCensorResult_);
    };
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults() = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults(const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults &) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults(QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults &&) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults() = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults& operator=(const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults &) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults& operator=(QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coverImageCensorResult_ == nullptr; };
    // coverImageCensorResult Field Functions 
    bool hasCoverImageCensorResult() const { return this->coverImageCensorResult_ != nullptr;};
    void deleteCoverImageCensorResult() { this->coverImageCensorResult_ = nullptr;};
    inline const vector<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult> & coverImageCensorResult() const { DARABONBA_PTR_GET_CONST(coverImageCensorResult_, vector<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult>) };
    inline vector<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult> coverImageCensorResult() { DARABONBA_PTR_GET(coverImageCensorResult_, vector<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult>) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults& setCoverImageCensorResult(const vector<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult> & coverImageCensorResult) { DARABONBA_PTR_SET_VALUE(coverImageCensorResult_, coverImageCensorResult) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResults& setCoverImageCensorResult(vector<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult> && coverImageCensorResult) { DARABONBA_PTR_SET_RVALUE(coverImageCensorResult_, coverImageCensorResult) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobCoverImageCensorResultsCoverImageCensorResult>> coverImageCensorResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
