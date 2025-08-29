// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAMPLECONSISTENCYJOBDIFFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAMPLECONSISTENCYJOBDIFFERENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram.hpp>
#include <alibabacloud/models/QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences.hpp>
#include <alibabacloud/models/QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QuerySampleConsistencyJobDifferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySampleConsistencyJobDifferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DifferenceHistogram, differenceHistogram_);
      DARABONBA_PTR_TO_JSON(NumberFeatureDifferences, numberFeatureDifferences_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StringFeatureDifferences, stringFeatureDifferences_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySampleConsistencyJobDifferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DifferenceHistogram, differenceHistogram_);
      DARABONBA_PTR_FROM_JSON(NumberFeatureDifferences, numberFeatureDifferences_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StringFeatureDifferences, stringFeatureDifferences_);
    };
    QuerySampleConsistencyJobDifferenceResponseBody() = default ;
    QuerySampleConsistencyJobDifferenceResponseBody(const QuerySampleConsistencyJobDifferenceResponseBody &) = default ;
    QuerySampleConsistencyJobDifferenceResponseBody(QuerySampleConsistencyJobDifferenceResponseBody &&) = default ;
    QuerySampleConsistencyJobDifferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySampleConsistencyJobDifferenceResponseBody() = default ;
    QuerySampleConsistencyJobDifferenceResponseBody& operator=(const QuerySampleConsistencyJobDifferenceResponseBody &) = default ;
    QuerySampleConsistencyJobDifferenceResponseBody& operator=(QuerySampleConsistencyJobDifferenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->differenceHistogram_ != nullptr
        && this->numberFeatureDifferences_ != nullptr && this->requestId_ != nullptr && this->stringFeatureDifferences_ != nullptr; };
    // differenceHistogram Field Functions 
    bool hasDifferenceHistogram() const { return this->differenceHistogram_ != nullptr;};
    void deleteDifferenceHistogram() { this->differenceHistogram_ = nullptr;};
    inline const vector<QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram> & differenceHistogram() const { DARABONBA_PTR_GET_CONST(differenceHistogram_, vector<QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram>) };
    inline vector<QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram> differenceHistogram() { DARABONBA_PTR_GET(differenceHistogram_, vector<QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram>) };
    inline QuerySampleConsistencyJobDifferenceResponseBody& setDifferenceHistogram(const vector<QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram> & differenceHistogram) { DARABONBA_PTR_SET_VALUE(differenceHistogram_, differenceHistogram) };
    inline QuerySampleConsistencyJobDifferenceResponseBody& setDifferenceHistogram(vector<QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram> && differenceHistogram) { DARABONBA_PTR_SET_RVALUE(differenceHistogram_, differenceHistogram) };


    // numberFeatureDifferences Field Functions 
    bool hasNumberFeatureDifferences() const { return this->numberFeatureDifferences_ != nullptr;};
    void deleteNumberFeatureDifferences() { this->numberFeatureDifferences_ = nullptr;};
    inline const vector<QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences> & numberFeatureDifferences() const { DARABONBA_PTR_GET_CONST(numberFeatureDifferences_, vector<QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences>) };
    inline vector<QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences> numberFeatureDifferences() { DARABONBA_PTR_GET(numberFeatureDifferences_, vector<QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences>) };
    inline QuerySampleConsistencyJobDifferenceResponseBody& setNumberFeatureDifferences(const vector<QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences> & numberFeatureDifferences) { DARABONBA_PTR_SET_VALUE(numberFeatureDifferences_, numberFeatureDifferences) };
    inline QuerySampleConsistencyJobDifferenceResponseBody& setNumberFeatureDifferences(vector<QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences> && numberFeatureDifferences) { DARABONBA_PTR_SET_RVALUE(numberFeatureDifferences_, numberFeatureDifferences) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySampleConsistencyJobDifferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stringFeatureDifferences Field Functions 
    bool hasStringFeatureDifferences() const { return this->stringFeatureDifferences_ != nullptr;};
    void deleteStringFeatureDifferences() { this->stringFeatureDifferences_ = nullptr;};
    inline const vector<QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences> & stringFeatureDifferences() const { DARABONBA_PTR_GET_CONST(stringFeatureDifferences_, vector<QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences>) };
    inline vector<QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences> stringFeatureDifferences() { DARABONBA_PTR_GET(stringFeatureDifferences_, vector<QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences>) };
    inline QuerySampleConsistencyJobDifferenceResponseBody& setStringFeatureDifferences(const vector<QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences> & stringFeatureDifferences) { DARABONBA_PTR_SET_VALUE(stringFeatureDifferences_, stringFeatureDifferences) };
    inline QuerySampleConsistencyJobDifferenceResponseBody& setStringFeatureDifferences(vector<QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences> && stringFeatureDifferences) { DARABONBA_PTR_SET_RVALUE(stringFeatureDifferences_, stringFeatureDifferences) };


  protected:
    std::shared_ptr<vector<QuerySampleConsistencyJobDifferenceResponseBodyDifferenceHistogram>> differenceHistogram_ = nullptr;
    std::shared_ptr<vector<QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences>> numberFeatureDifferences_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences>> stringFeatureDifferences_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
