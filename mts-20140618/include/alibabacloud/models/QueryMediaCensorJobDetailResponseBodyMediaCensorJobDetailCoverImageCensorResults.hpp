// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODYMEDIACENSORJOBDETAILCOVERIMAGECENSORRESULTS_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODYMEDIACENSORJOBDETAILCOVERIMAGECENSORRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults& obj) { 
      DARABONBA_PTR_TO_JSON(CoverImageCensorResult, coverImageCensorResult_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults& obj) { 
      DARABONBA_PTR_FROM_JSON(CoverImageCensorResult, coverImageCensorResult_);
    };
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults() = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults(const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults &) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults(QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults &&) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults() = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults& operator=(const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults &) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults& operator=(QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coverImageCensorResult_ == nullptr; };
    // coverImageCensorResult Field Functions 
    bool hasCoverImageCensorResult() const { return this->coverImageCensorResult_ != nullptr;};
    void deleteCoverImageCensorResult() { this->coverImageCensorResult_ = nullptr;};
    inline const vector<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResult> & coverImageCensorResult() const { DARABONBA_PTR_GET_CONST(coverImageCensorResult_, vector<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResult>) };
    inline vector<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResult> coverImageCensorResult() { DARABONBA_PTR_GET(coverImageCensorResult_, vector<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResult>) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults& setCoverImageCensorResult(const vector<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResult> & coverImageCensorResult) { DARABONBA_PTR_SET_VALUE(coverImageCensorResult_, coverImageCensorResult) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResults& setCoverImageCensorResult(vector<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResult> && coverImageCensorResult) { DARABONBA_PTR_SET_RVALUE(coverImageCensorResult_, coverImageCensorResult) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailCoverImageCensorResultsCoverImageCensorResult>> coverImageCensorResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
