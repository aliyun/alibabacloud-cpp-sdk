// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODYMEDIACENSORJOBDETAILVENSORCENSORRESULTCENSORRESULTS_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODYMEDIACENSORJOBDETAILVENSORCENSORRESULTCENSORRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResultsCensorResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults& obj) { 
      DARABONBA_PTR_TO_JSON(CensorResult, censorResult_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults& obj) { 
      DARABONBA_PTR_FROM_JSON(CensorResult, censorResult_);
    };
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults() = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults(const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults &) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults(QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults &&) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults() = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults& operator=(const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults &) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults& operator=(QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->censorResult_ == nullptr; };
    // censorResult Field Functions 
    bool hasCensorResult() const { return this->censorResult_ != nullptr;};
    void deleteCensorResult() { this->censorResult_ = nullptr;};
    inline const vector<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResultsCensorResult> & censorResult() const { DARABONBA_PTR_GET_CONST(censorResult_, vector<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResultsCensorResult>) };
    inline vector<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResultsCensorResult> censorResult() { DARABONBA_PTR_GET(censorResult_, vector<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResultsCensorResult>) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults& setCensorResult(const vector<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResultsCensorResult> & censorResult) { DARABONBA_PTR_SET_VALUE(censorResult_, censorResult) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResults& setCensorResult(vector<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResultsCensorResult> && censorResult) { DARABONBA_PTR_SET_RVALUE(censorResult_, censorResult) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVensorCensorResultCensorResultsCensorResult>> censorResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
