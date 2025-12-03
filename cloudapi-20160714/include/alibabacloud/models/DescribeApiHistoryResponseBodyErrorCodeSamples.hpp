// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYERRORCODESAMPLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYERRORCODESAMPLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyErrorCodeSamplesErrorCodeSample.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoryResponseBodyErrorCodeSamples : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoryResponseBodyErrorCodeSamples& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCodeSample, errorCodeSample_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoryResponseBodyErrorCodeSamples& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCodeSample, errorCodeSample_);
    };
    DescribeApiHistoryResponseBodyErrorCodeSamples() = default ;
    DescribeApiHistoryResponseBodyErrorCodeSamples(const DescribeApiHistoryResponseBodyErrorCodeSamples &) = default ;
    DescribeApiHistoryResponseBodyErrorCodeSamples(DescribeApiHistoryResponseBodyErrorCodeSamples &&) = default ;
    DescribeApiHistoryResponseBodyErrorCodeSamples(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoryResponseBodyErrorCodeSamples() = default ;
    DescribeApiHistoryResponseBodyErrorCodeSamples& operator=(const DescribeApiHistoryResponseBodyErrorCodeSamples &) = default ;
    DescribeApiHistoryResponseBodyErrorCodeSamples& operator=(DescribeApiHistoryResponseBodyErrorCodeSamples &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCodeSample_ == nullptr; };
    // errorCodeSample Field Functions 
    bool hasErrorCodeSample() const { return this->errorCodeSample_ != nullptr;};
    void deleteErrorCodeSample() { this->errorCodeSample_ = nullptr;};
    inline const vector<Models::DescribeApiHistoryResponseBodyErrorCodeSamplesErrorCodeSample> & errorCodeSample() const { DARABONBA_PTR_GET_CONST(errorCodeSample_, vector<Models::DescribeApiHistoryResponseBodyErrorCodeSamplesErrorCodeSample>) };
    inline vector<Models::DescribeApiHistoryResponseBodyErrorCodeSamplesErrorCodeSample> errorCodeSample() { DARABONBA_PTR_GET(errorCodeSample_, vector<Models::DescribeApiHistoryResponseBodyErrorCodeSamplesErrorCodeSample>) };
    inline DescribeApiHistoryResponseBodyErrorCodeSamples& setErrorCodeSample(const vector<Models::DescribeApiHistoryResponseBodyErrorCodeSamplesErrorCodeSample> & errorCodeSample) { DARABONBA_PTR_SET_VALUE(errorCodeSample_, errorCodeSample) };
    inline DescribeApiHistoryResponseBodyErrorCodeSamples& setErrorCodeSample(vector<Models::DescribeApiHistoryResponseBodyErrorCodeSamplesErrorCodeSample> && errorCodeSample) { DARABONBA_PTR_SET_RVALUE(errorCodeSample_, errorCodeSample) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiHistoryResponseBodyErrorCodeSamplesErrorCodeSample>> errorCodeSample_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
