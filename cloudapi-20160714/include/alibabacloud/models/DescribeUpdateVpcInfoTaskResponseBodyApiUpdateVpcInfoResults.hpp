// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPDATEVPCINFOTASKRESPONSEBODYAPIUPDATEVPCINFORESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPDATEVPCINFOTASKRESPONSEBODYAPIUPDATEVPCINFORESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResultsApiUpdateVpcInfoResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults& obj) { 
      DARABONBA_PTR_TO_JSON(ApiUpdateVpcInfoResult, apiUpdateVpcInfoResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiUpdateVpcInfoResult, apiUpdateVpcInfoResult_);
    };
    DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults() = default ;
    DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults(const DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults &) = default ;
    DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults(DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults &&) = default ;
    DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults() = default ;
    DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults& operator=(const DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults &) = default ;
    DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults& operator=(DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiUpdateVpcInfoResult_ == nullptr; };
    // apiUpdateVpcInfoResult Field Functions 
    bool hasApiUpdateVpcInfoResult() const { return this->apiUpdateVpcInfoResult_ != nullptr;};
    void deleteApiUpdateVpcInfoResult() { this->apiUpdateVpcInfoResult_ = nullptr;};
    inline const vector<Models::DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResultsApiUpdateVpcInfoResult> & apiUpdateVpcInfoResult() const { DARABONBA_PTR_GET_CONST(apiUpdateVpcInfoResult_, vector<Models::DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResultsApiUpdateVpcInfoResult>) };
    inline vector<Models::DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResultsApiUpdateVpcInfoResult> apiUpdateVpcInfoResult() { DARABONBA_PTR_GET(apiUpdateVpcInfoResult_, vector<Models::DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResultsApiUpdateVpcInfoResult>) };
    inline DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults& setApiUpdateVpcInfoResult(const vector<Models::DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResultsApiUpdateVpcInfoResult> & apiUpdateVpcInfoResult) { DARABONBA_PTR_SET_VALUE(apiUpdateVpcInfoResult_, apiUpdateVpcInfoResult) };
    inline DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResults& setApiUpdateVpcInfoResult(vector<Models::DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResultsApiUpdateVpcInfoResult> && apiUpdateVpcInfoResult) { DARABONBA_PTR_SET_RVALUE(apiUpdateVpcInfoResult_, apiUpdateVpcInfoResult) };


  protected:
    std::shared_ptr<vector<Models::DescribeUpdateVpcInfoTaskResponseBodyApiUpdateVpcInfoResultsApiUpdateVpcInfoResult>> apiUpdateVpcInfoResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
