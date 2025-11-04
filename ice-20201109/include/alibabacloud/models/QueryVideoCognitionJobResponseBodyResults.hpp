// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVIDEOCOGNITIONJOBRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_QUERYVIDEOCOGNITIONJOBRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryVideoCognitionJobResponseBodyResultsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryVideoCognitionJobResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVideoCognitionJobResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVideoCognitionJobResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    QueryVideoCognitionJobResponseBodyResults() = default ;
    QueryVideoCognitionJobResponseBodyResults(const QueryVideoCognitionJobResponseBodyResults &) = default ;
    QueryVideoCognitionJobResponseBodyResults(QueryVideoCognitionJobResponseBodyResults &&) = default ;
    QueryVideoCognitionJobResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVideoCognitionJobResponseBodyResults() = default ;
    QueryVideoCognitionJobResponseBodyResults& operator=(const QueryVideoCognitionJobResponseBodyResults &) = default ;
    QueryVideoCognitionJobResponseBodyResults& operator=(QueryVideoCognitionJobResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::QueryVideoCognitionJobResponseBodyResultsResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::QueryVideoCognitionJobResponseBodyResultsResult>) };
    inline vector<Models::QueryVideoCognitionJobResponseBodyResultsResult> result() { DARABONBA_PTR_GET(result_, vector<Models::QueryVideoCognitionJobResponseBodyResultsResult>) };
    inline QueryVideoCognitionJobResponseBodyResults& setResult(const vector<Models::QueryVideoCognitionJobResponseBodyResultsResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryVideoCognitionJobResponseBodyResults& setResult(vector<Models::QueryVideoCognitionJobResponseBodyResultsResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<vector<Models::QueryVideoCognitionJobResponseBodyResultsResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
