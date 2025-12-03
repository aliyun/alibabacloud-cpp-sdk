// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPDATEBACKENDTASKRESPONSEBODYAPIUPDATEBACKENDRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPDATEBACKENDTASKRESPONSEBODYAPIUPDATEBACKENDRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResultsApiUpdateBackendResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults& obj) { 
      DARABONBA_PTR_TO_JSON(ApiUpdateBackendResult, apiUpdateBackendResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiUpdateBackendResult, apiUpdateBackendResult_);
    };
    DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults() = default ;
    DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults(const DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults &) = default ;
    DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults(DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults &&) = default ;
    DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults() = default ;
    DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults& operator=(const DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults &) = default ;
    DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults& operator=(DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiUpdateBackendResult_ == nullptr; };
    // apiUpdateBackendResult Field Functions 
    bool hasApiUpdateBackendResult() const { return this->apiUpdateBackendResult_ != nullptr;};
    void deleteApiUpdateBackendResult() { this->apiUpdateBackendResult_ = nullptr;};
    inline const vector<Models::DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResultsApiUpdateBackendResult> & apiUpdateBackendResult() const { DARABONBA_PTR_GET_CONST(apiUpdateBackendResult_, vector<Models::DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResultsApiUpdateBackendResult>) };
    inline vector<Models::DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResultsApiUpdateBackendResult> apiUpdateBackendResult() { DARABONBA_PTR_GET(apiUpdateBackendResult_, vector<Models::DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResultsApiUpdateBackendResult>) };
    inline DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults& setApiUpdateBackendResult(const vector<Models::DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResultsApiUpdateBackendResult> & apiUpdateBackendResult) { DARABONBA_PTR_SET_VALUE(apiUpdateBackendResult_, apiUpdateBackendResult) };
    inline DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResults& setApiUpdateBackendResult(vector<Models::DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResultsApiUpdateBackendResult> && apiUpdateBackendResult) { DARABONBA_PTR_SET_RVALUE(apiUpdateBackendResult_, apiUpdateBackendResult) };


  protected:
    std::shared_ptr<vector<Models::DescribeUpdateBackendTaskResponseBodyApiUpdateBackendResultsApiUpdateBackendResult>> apiUpdateBackendResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
