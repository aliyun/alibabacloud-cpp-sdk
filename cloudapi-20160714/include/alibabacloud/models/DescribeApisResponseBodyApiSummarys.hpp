// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISRESPONSEBODYAPISUMMARYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISRESPONSEBODYAPISUMMARYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApisResponseBodyApiSummarysApiSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisResponseBodyApiSummarys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisResponseBodyApiSummarys& obj) { 
      DARABONBA_PTR_TO_JSON(ApiSummary, apiSummary_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisResponseBodyApiSummarys& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiSummary, apiSummary_);
    };
    DescribeApisResponseBodyApiSummarys() = default ;
    DescribeApisResponseBodyApiSummarys(const DescribeApisResponseBodyApiSummarys &) = default ;
    DescribeApisResponseBodyApiSummarys(DescribeApisResponseBodyApiSummarys &&) = default ;
    DescribeApisResponseBodyApiSummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisResponseBodyApiSummarys() = default ;
    DescribeApisResponseBodyApiSummarys& operator=(const DescribeApisResponseBodyApiSummarys &) = default ;
    DescribeApisResponseBodyApiSummarys& operator=(DescribeApisResponseBodyApiSummarys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiSummary_ == nullptr; };
    // apiSummary Field Functions 
    bool hasApiSummary() const { return this->apiSummary_ != nullptr;};
    void deleteApiSummary() { this->apiSummary_ = nullptr;};
    inline const vector<Models::DescribeApisResponseBodyApiSummarysApiSummary> & apiSummary() const { DARABONBA_PTR_GET_CONST(apiSummary_, vector<Models::DescribeApisResponseBodyApiSummarysApiSummary>) };
    inline vector<Models::DescribeApisResponseBodyApiSummarysApiSummary> apiSummary() { DARABONBA_PTR_GET(apiSummary_, vector<Models::DescribeApisResponseBodyApiSummarysApiSummary>) };
    inline DescribeApisResponseBodyApiSummarys& setApiSummary(const vector<Models::DescribeApisResponseBodyApiSummarysApiSummary> & apiSummary) { DARABONBA_PTR_SET_VALUE(apiSummary_, apiSummary) };
    inline DescribeApisResponseBodyApiSummarys& setApiSummary(vector<Models::DescribeApisResponseBodyApiSummarysApiSummary> && apiSummary) { DARABONBA_PTR_SET_RVALUE(apiSummary_, apiSummary) };


  protected:
    std::shared_ptr<vector<Models::DescribeApisResponseBodyApiSummarysApiSummary>> apiSummary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
