// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDtsJobConfigResponseBodyParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDtsJobConfigResponseBody() = default ;
    DescribeDtsJobConfigResponseBody(const DescribeDtsJobConfigResponseBody &) = default ;
    DescribeDtsJobConfigResponseBody(DescribeDtsJobConfigResponseBody &&) = default ;
    DescribeDtsJobConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobConfigResponseBody() = default ;
    DescribeDtsJobConfigResponseBody& operator=(const DescribeDtsJobConfigResponseBody &) = default ;
    DescribeDtsJobConfigResponseBody& operator=(DescribeDtsJobConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameters_ != nullptr
        && this->requestId_ != nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<DescribeDtsJobConfigResponseBodyParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<DescribeDtsJobConfigResponseBodyParameters>) };
    inline vector<DescribeDtsJobConfigResponseBodyParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<DescribeDtsJobConfigResponseBodyParameters>) };
    inline DescribeDtsJobConfigResponseBody& setParameters(const vector<DescribeDtsJobConfigResponseBodyParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeDtsJobConfigResponseBody& setParameters(vector<DescribeDtsJobConfigResponseBodyParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDtsJobConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeDtsJobConfigResponseBodyParameters>> parameters_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
