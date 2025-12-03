// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYAPITASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYAPITASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDeployApiTaskResponseBodyDeployedResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployApiTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployApiTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeployedResults, deployedResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployApiTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployedResults, deployedResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDeployApiTaskResponseBody() = default ;
    DescribeDeployApiTaskResponseBody(const DescribeDeployApiTaskResponseBody &) = default ;
    DescribeDeployApiTaskResponseBody(DescribeDeployApiTaskResponseBody &&) = default ;
    DescribeDeployApiTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployApiTaskResponseBody() = default ;
    DescribeDeployApiTaskResponseBody& operator=(const DescribeDeployApiTaskResponseBody &) = default ;
    DescribeDeployApiTaskResponseBody& operator=(DescribeDeployApiTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployedResults_ == nullptr
        && return this->requestId_ == nullptr; };
    // deployedResults Field Functions 
    bool hasDeployedResults() const { return this->deployedResults_ != nullptr;};
    void deleteDeployedResults() { this->deployedResults_ = nullptr;};
    inline const DescribeDeployApiTaskResponseBodyDeployedResults & deployedResults() const { DARABONBA_PTR_GET_CONST(deployedResults_, DescribeDeployApiTaskResponseBodyDeployedResults) };
    inline DescribeDeployApiTaskResponseBodyDeployedResults deployedResults() { DARABONBA_PTR_GET(deployedResults_, DescribeDeployApiTaskResponseBodyDeployedResults) };
    inline DescribeDeployApiTaskResponseBody& setDeployedResults(const DescribeDeployApiTaskResponseBodyDeployedResults & deployedResults) { DARABONBA_PTR_SET_VALUE(deployedResults_, deployedResults) };
    inline DescribeDeployApiTaskResponseBody& setDeployedResults(DescribeDeployApiTaskResponseBodyDeployedResults && deployedResults) { DARABONBA_PTR_SET_RVALUE(deployedResults_, deployedResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeployApiTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    std::shared_ptr<DescribeDeployApiTaskResponseBodyDeployedResults> deployedResults_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
