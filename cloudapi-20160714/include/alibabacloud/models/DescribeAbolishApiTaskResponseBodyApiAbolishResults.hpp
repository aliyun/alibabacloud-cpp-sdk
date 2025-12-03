// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABOLISHAPITASKRESPONSEBODYAPIABOLISHRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABOLISHAPITASKRESPONSEBODYAPIABOLISHRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAbolishApiTaskResponseBodyApiAbolishResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAbolishApiTaskResponseBodyApiAbolishResults& obj) { 
      DARABONBA_PTR_TO_JSON(ApiAbolishResult, apiAbolishResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAbolishApiTaskResponseBodyApiAbolishResults& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiAbolishResult, apiAbolishResult_);
    };
    DescribeAbolishApiTaskResponseBodyApiAbolishResults() = default ;
    DescribeAbolishApiTaskResponseBodyApiAbolishResults(const DescribeAbolishApiTaskResponseBodyApiAbolishResults &) = default ;
    DescribeAbolishApiTaskResponseBodyApiAbolishResults(DescribeAbolishApiTaskResponseBodyApiAbolishResults &&) = default ;
    DescribeAbolishApiTaskResponseBodyApiAbolishResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAbolishApiTaskResponseBodyApiAbolishResults() = default ;
    DescribeAbolishApiTaskResponseBodyApiAbolishResults& operator=(const DescribeAbolishApiTaskResponseBodyApiAbolishResults &) = default ;
    DescribeAbolishApiTaskResponseBodyApiAbolishResults& operator=(DescribeAbolishApiTaskResponseBodyApiAbolishResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiAbolishResult_ == nullptr; };
    // apiAbolishResult Field Functions 
    bool hasApiAbolishResult() const { return this->apiAbolishResult_ != nullptr;};
    void deleteApiAbolishResult() { this->apiAbolishResult_ = nullptr;};
    inline const vector<Models::DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult> & apiAbolishResult() const { DARABONBA_PTR_GET_CONST(apiAbolishResult_, vector<Models::DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult>) };
    inline vector<Models::DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult> apiAbolishResult() { DARABONBA_PTR_GET(apiAbolishResult_, vector<Models::DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult>) };
    inline DescribeAbolishApiTaskResponseBodyApiAbolishResults& setApiAbolishResult(const vector<Models::DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult> & apiAbolishResult) { DARABONBA_PTR_SET_VALUE(apiAbolishResult_, apiAbolishResult) };
    inline DescribeAbolishApiTaskResponseBodyApiAbolishResults& setApiAbolishResult(vector<Models::DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult> && apiAbolishResult) { DARABONBA_PTR_SET_RVALUE(apiAbolishResult_, apiAbolishResult) };


  protected:
    std::shared_ptr<vector<Models::DescribeAbolishApiTaskResponseBodyApiAbolishResultsApiAbolishResult>> apiAbolishResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
