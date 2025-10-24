// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySmarttagJobResponseBodyResultsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QuerySmarttagJobResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmarttagJobResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmarttagJobResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    QuerySmarttagJobResponseBodyResults() = default ;
    QuerySmarttagJobResponseBodyResults(const QuerySmarttagJobResponseBodyResults &) = default ;
    QuerySmarttagJobResponseBodyResults(QuerySmarttagJobResponseBodyResults &&) = default ;
    QuerySmarttagJobResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmarttagJobResponseBodyResults() = default ;
    QuerySmarttagJobResponseBodyResults& operator=(const QuerySmarttagJobResponseBodyResults &) = default ;
    QuerySmarttagJobResponseBodyResults& operator=(QuerySmarttagJobResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::QuerySmarttagJobResponseBodyResultsResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::QuerySmarttagJobResponseBodyResultsResult>) };
    inline vector<Models::QuerySmarttagJobResponseBodyResultsResult> result() { DARABONBA_PTR_GET(result_, vector<Models::QuerySmarttagJobResponseBodyResultsResult>) };
    inline QuerySmarttagJobResponseBodyResults& setResult(const vector<Models::QuerySmarttagJobResponseBodyResultsResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QuerySmarttagJobResponseBodyResults& setResult(vector<Models::QuerySmarttagJobResponseBodyResultsResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<vector<Models::QuerySmarttagJobResponseBodyResultsResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
