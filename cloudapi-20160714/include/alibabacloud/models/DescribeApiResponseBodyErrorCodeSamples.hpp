// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYERRORCODESAMPLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYERRORCODESAMPLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiResponseBodyErrorCodeSamples : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBodyErrorCodeSamples& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCodeSample, errorCodeSample_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBodyErrorCodeSamples& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCodeSample, errorCodeSample_);
    };
    DescribeApiResponseBodyErrorCodeSamples() = default ;
    DescribeApiResponseBodyErrorCodeSamples(const DescribeApiResponseBodyErrorCodeSamples &) = default ;
    DescribeApiResponseBodyErrorCodeSamples(DescribeApiResponseBodyErrorCodeSamples &&) = default ;
    DescribeApiResponseBodyErrorCodeSamples(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBodyErrorCodeSamples() = default ;
    DescribeApiResponseBodyErrorCodeSamples& operator=(const DescribeApiResponseBodyErrorCodeSamples &) = default ;
    DescribeApiResponseBodyErrorCodeSamples& operator=(DescribeApiResponseBodyErrorCodeSamples &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCodeSample_ == nullptr; };
    // errorCodeSample Field Functions 
    bool hasErrorCodeSample() const { return this->errorCodeSample_ != nullptr;};
    void deleteErrorCodeSample() { this->errorCodeSample_ = nullptr;};
    inline const vector<Models::DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample> & errorCodeSample() const { DARABONBA_PTR_GET_CONST(errorCodeSample_, vector<Models::DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample>) };
    inline vector<Models::DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample> errorCodeSample() { DARABONBA_PTR_GET(errorCodeSample_, vector<Models::DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample>) };
    inline DescribeApiResponseBodyErrorCodeSamples& setErrorCodeSample(const vector<Models::DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample> & errorCodeSample) { DARABONBA_PTR_SET_VALUE(errorCodeSample_, errorCodeSample) };
    inline DescribeApiResponseBodyErrorCodeSamples& setErrorCodeSample(vector<Models::DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample> && errorCodeSample) { DARABONBA_PTR_SET_RVALUE(errorCodeSample_, errorCodeSample) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample>> errorCodeSample_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
