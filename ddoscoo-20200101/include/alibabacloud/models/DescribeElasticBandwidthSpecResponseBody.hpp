// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICBANDWIDTHSPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICBANDWIDTHSPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeElasticBandwidthSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticBandwidthSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticBandwidthSpec, elasticBandwidthSpec_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticBandwidthSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticBandwidthSpec, elasticBandwidthSpec_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElasticBandwidthSpecResponseBody() = default ;
    DescribeElasticBandwidthSpecResponseBody(const DescribeElasticBandwidthSpecResponseBody &) = default ;
    DescribeElasticBandwidthSpecResponseBody(DescribeElasticBandwidthSpecResponseBody &&) = default ;
    DescribeElasticBandwidthSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticBandwidthSpecResponseBody() = default ;
    DescribeElasticBandwidthSpecResponseBody& operator=(const DescribeElasticBandwidthSpecResponseBody &) = default ;
    DescribeElasticBandwidthSpecResponseBody& operator=(DescribeElasticBandwidthSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticBandwidthSpec_ != nullptr
        && this->requestId_ != nullptr; };
    // elasticBandwidthSpec Field Functions 
    bool hasElasticBandwidthSpec() const { return this->elasticBandwidthSpec_ != nullptr;};
    void deleteElasticBandwidthSpec() { this->elasticBandwidthSpec_ = nullptr;};
    inline const vector<string> & elasticBandwidthSpec() const { DARABONBA_PTR_GET_CONST(elasticBandwidthSpec_, vector<string>) };
    inline vector<string> elasticBandwidthSpec() { DARABONBA_PTR_GET(elasticBandwidthSpec_, vector<string>) };
    inline DescribeElasticBandwidthSpecResponseBody& setElasticBandwidthSpec(const vector<string> & elasticBandwidthSpec) { DARABONBA_PTR_SET_VALUE(elasticBandwidthSpec_, elasticBandwidthSpec) };
    inline DescribeElasticBandwidthSpecResponseBody& setElasticBandwidthSpec(vector<string> && elasticBandwidthSpec) { DARABONBA_PTR_SET_RVALUE(elasticBandwidthSpec_, elasticBandwidthSpec) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticBandwidthSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the available burstable protection bandwidths. Unit: Gbit/s.
    std::shared_ptr<vector<string>> elasticBandwidthSpec_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
