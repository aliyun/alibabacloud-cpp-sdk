// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYERRORCODESAMPLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYERRORCODESAMPLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBodyErrorCodeSamples : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBodyErrorCodeSamples& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCodeSample, errorCodeSample_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBodyErrorCodeSamples& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCodeSample, errorCodeSample_);
    };
    DescribeDeployedApiResponseBodyErrorCodeSamples() = default ;
    DescribeDeployedApiResponseBodyErrorCodeSamples(const DescribeDeployedApiResponseBodyErrorCodeSamples &) = default ;
    DescribeDeployedApiResponseBodyErrorCodeSamples(DescribeDeployedApiResponseBodyErrorCodeSamples &&) = default ;
    DescribeDeployedApiResponseBodyErrorCodeSamples(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBodyErrorCodeSamples() = default ;
    DescribeDeployedApiResponseBodyErrorCodeSamples& operator=(const DescribeDeployedApiResponseBodyErrorCodeSamples &) = default ;
    DescribeDeployedApiResponseBodyErrorCodeSamples& operator=(DescribeDeployedApiResponseBodyErrorCodeSamples &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCodeSample_ == nullptr; };
    // errorCodeSample Field Functions 
    bool hasErrorCodeSample() const { return this->errorCodeSample_ != nullptr;};
    void deleteErrorCodeSample() { this->errorCodeSample_ = nullptr;};
    inline const vector<Models::DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample> & errorCodeSample() const { DARABONBA_PTR_GET_CONST(errorCodeSample_, vector<Models::DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample>) };
    inline vector<Models::DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample> errorCodeSample() { DARABONBA_PTR_GET(errorCodeSample_, vector<Models::DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample>) };
    inline DescribeDeployedApiResponseBodyErrorCodeSamples& setErrorCodeSample(const vector<Models::DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample> & errorCodeSample) { DARABONBA_PTR_SET_VALUE(errorCodeSample_, errorCodeSample) };
    inline DescribeDeployedApiResponseBodyErrorCodeSamples& setErrorCodeSample(vector<Models::DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample> && errorCodeSample) { DARABONBA_PTR_SET_RVALUE(errorCodeSample_, errorCodeSample) };


  protected:
    std::shared_ptr<vector<Models::DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample>> errorCodeSample_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
