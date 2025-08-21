// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICQPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICQPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeElasticQpsResponseBodyElasticQps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeElasticQpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticQpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticQps, elasticQps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticQpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticQps, elasticQps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElasticQpsResponseBody() = default ;
    DescribeElasticQpsResponseBody(const DescribeElasticQpsResponseBody &) = default ;
    DescribeElasticQpsResponseBody(DescribeElasticQpsResponseBody &&) = default ;
    DescribeElasticQpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticQpsResponseBody() = default ;
    DescribeElasticQpsResponseBody& operator=(const DescribeElasticQpsResponseBody &) = default ;
    DescribeElasticQpsResponseBody& operator=(DescribeElasticQpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticQps_ != nullptr
        && this->requestId_ != nullptr; };
    // elasticQps Field Functions 
    bool hasElasticQps() const { return this->elasticQps_ != nullptr;};
    void deleteElasticQps() { this->elasticQps_ = nullptr;};
    inline const vector<DescribeElasticQpsResponseBodyElasticQps> & elasticQps() const { DARABONBA_PTR_GET_CONST(elasticQps_, vector<DescribeElasticQpsResponseBodyElasticQps>) };
    inline vector<DescribeElasticQpsResponseBodyElasticQps> elasticQps() { DARABONBA_PTR_GET(elasticQps_, vector<DescribeElasticQpsResponseBodyElasticQps>) };
    inline DescribeElasticQpsResponseBody& setElasticQps(const vector<DescribeElasticQpsResponseBodyElasticQps> & elasticQps) { DARABONBA_PTR_SET_VALUE(elasticQps_, elasticQps) };
    inline DescribeElasticQpsResponseBody& setElasticQps(vector<DescribeElasticQpsResponseBodyElasticQps> && elasticQps) { DARABONBA_PTR_SET_RVALUE(elasticQps_, elasticQps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticQpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the burstable QPS.
    std::shared_ptr<vector<DescribeElasticQpsResponseBodyElasticQps>> elasticQps_ = nullptr;
    // The request ID, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
