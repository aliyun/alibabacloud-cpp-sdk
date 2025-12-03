// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMPORTOASTASKRESPONSEBODYAPIRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMPORTOASTASKRESPONSEBODYAPIRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImportOASTaskResponseBodyApiResultsApiResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeImportOASTaskResponseBodyApiResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImportOASTaskResponseBodyApiResults& obj) { 
      DARABONBA_PTR_TO_JSON(ApiResult, apiResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImportOASTaskResponseBodyApiResults& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiResult, apiResult_);
    };
    DescribeImportOASTaskResponseBodyApiResults() = default ;
    DescribeImportOASTaskResponseBodyApiResults(const DescribeImportOASTaskResponseBodyApiResults &) = default ;
    DescribeImportOASTaskResponseBodyApiResults(DescribeImportOASTaskResponseBodyApiResults &&) = default ;
    DescribeImportOASTaskResponseBodyApiResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImportOASTaskResponseBodyApiResults() = default ;
    DescribeImportOASTaskResponseBodyApiResults& operator=(const DescribeImportOASTaskResponseBodyApiResults &) = default ;
    DescribeImportOASTaskResponseBodyApiResults& operator=(DescribeImportOASTaskResponseBodyApiResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiResult_ == nullptr; };
    // apiResult Field Functions 
    bool hasApiResult() const { return this->apiResult_ != nullptr;};
    void deleteApiResult() { this->apiResult_ = nullptr;};
    inline const vector<Models::DescribeImportOASTaskResponseBodyApiResultsApiResult> & apiResult() const { DARABONBA_PTR_GET_CONST(apiResult_, vector<Models::DescribeImportOASTaskResponseBodyApiResultsApiResult>) };
    inline vector<Models::DescribeImportOASTaskResponseBodyApiResultsApiResult> apiResult() { DARABONBA_PTR_GET(apiResult_, vector<Models::DescribeImportOASTaskResponseBodyApiResultsApiResult>) };
    inline DescribeImportOASTaskResponseBodyApiResults& setApiResult(const vector<Models::DescribeImportOASTaskResponseBodyApiResultsApiResult> & apiResult) { DARABONBA_PTR_SET_VALUE(apiResult_, apiResult) };
    inline DescribeImportOASTaskResponseBodyApiResults& setApiResult(vector<Models::DescribeImportOASTaskResponseBodyApiResultsApiResult> && apiResult) { DARABONBA_PTR_SET_RVALUE(apiResult_, apiResult) };


  protected:
    std::shared_ptr<vector<Models::DescribeImportOASTaskResponseBodyApiResultsApiResult>> apiResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
