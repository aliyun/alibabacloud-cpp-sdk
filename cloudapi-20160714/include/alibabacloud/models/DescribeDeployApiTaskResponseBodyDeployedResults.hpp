// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYAPITASKRESPONSEBODYDEPLOYEDRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYAPITASKRESPONSEBODYDEPLOYEDRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployApiTaskResponseBodyDeployedResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployApiTaskResponseBodyDeployedResults& obj) { 
      DARABONBA_PTR_TO_JSON(DeployedResult, deployedResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployApiTaskResponseBodyDeployedResults& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployedResult, deployedResult_);
    };
    DescribeDeployApiTaskResponseBodyDeployedResults() = default ;
    DescribeDeployApiTaskResponseBodyDeployedResults(const DescribeDeployApiTaskResponseBodyDeployedResults &) = default ;
    DescribeDeployApiTaskResponseBodyDeployedResults(DescribeDeployApiTaskResponseBodyDeployedResults &&) = default ;
    DescribeDeployApiTaskResponseBodyDeployedResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployApiTaskResponseBodyDeployedResults() = default ;
    DescribeDeployApiTaskResponseBodyDeployedResults& operator=(const DescribeDeployApiTaskResponseBodyDeployedResults &) = default ;
    DescribeDeployApiTaskResponseBodyDeployedResults& operator=(DescribeDeployApiTaskResponseBodyDeployedResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployedResult_ == nullptr; };
    // deployedResult Field Functions 
    bool hasDeployedResult() const { return this->deployedResult_ != nullptr;};
    void deleteDeployedResult() { this->deployedResult_ = nullptr;};
    inline const vector<Models::DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult> & deployedResult() const { DARABONBA_PTR_GET_CONST(deployedResult_, vector<Models::DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult>) };
    inline vector<Models::DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult> deployedResult() { DARABONBA_PTR_GET(deployedResult_, vector<Models::DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult>) };
    inline DescribeDeployApiTaskResponseBodyDeployedResults& setDeployedResult(const vector<Models::DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult> & deployedResult) { DARABONBA_PTR_SET_VALUE(deployedResult_, deployedResult) };
    inline DescribeDeployApiTaskResponseBodyDeployedResults& setDeployedResult(vector<Models::DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult> && deployedResult) { DARABONBA_PTR_SET_RVALUE(deployedResult_, deployedResult) };


  protected:
    std::shared_ptr<vector<Models::DescribeDeployApiTaskResponseBodyDeployedResultsDeployedResult>> deployedResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
