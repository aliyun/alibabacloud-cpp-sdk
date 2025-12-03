// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINAPISRESPONSEBODYAPISUMMARYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINAPISRESPONSEBODYAPISUMMARYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePluginApisResponseBodyApiSummarysApiPluginSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginApisResponseBodyApiSummarys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginApisResponseBodyApiSummarys& obj) { 
      DARABONBA_PTR_TO_JSON(ApiPluginSummary, apiPluginSummary_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginApisResponseBodyApiSummarys& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiPluginSummary, apiPluginSummary_);
    };
    DescribePluginApisResponseBodyApiSummarys() = default ;
    DescribePluginApisResponseBodyApiSummarys(const DescribePluginApisResponseBodyApiSummarys &) = default ;
    DescribePluginApisResponseBodyApiSummarys(DescribePluginApisResponseBodyApiSummarys &&) = default ;
    DescribePluginApisResponseBodyApiSummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginApisResponseBodyApiSummarys() = default ;
    DescribePluginApisResponseBodyApiSummarys& operator=(const DescribePluginApisResponseBodyApiSummarys &) = default ;
    DescribePluginApisResponseBodyApiSummarys& operator=(DescribePluginApisResponseBodyApiSummarys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiPluginSummary_ == nullptr; };
    // apiPluginSummary Field Functions 
    bool hasApiPluginSummary() const { return this->apiPluginSummary_ != nullptr;};
    void deleteApiPluginSummary() { this->apiPluginSummary_ = nullptr;};
    inline const vector<Models::DescribePluginApisResponseBodyApiSummarysApiPluginSummary> & apiPluginSummary() const { DARABONBA_PTR_GET_CONST(apiPluginSummary_, vector<Models::DescribePluginApisResponseBodyApiSummarysApiPluginSummary>) };
    inline vector<Models::DescribePluginApisResponseBodyApiSummarysApiPluginSummary> apiPluginSummary() { DARABONBA_PTR_GET(apiPluginSummary_, vector<Models::DescribePluginApisResponseBodyApiSummarysApiPluginSummary>) };
    inline DescribePluginApisResponseBodyApiSummarys& setApiPluginSummary(const vector<Models::DescribePluginApisResponseBodyApiSummarysApiPluginSummary> & apiPluginSummary) { DARABONBA_PTR_SET_VALUE(apiPluginSummary_, apiPluginSummary) };
    inline DescribePluginApisResponseBodyApiSummarys& setApiPluginSummary(vector<Models::DescribePluginApisResponseBodyApiSummarysApiPluginSummary> && apiPluginSummary) { DARABONBA_PTR_SET_RVALUE(apiPluginSummary_, apiPluginSummary) };


  protected:
    std::shared_ptr<vector<Models::DescribePluginApisResponseBodyApiSummarysApiPluginSummary>> apiPluginSummary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
