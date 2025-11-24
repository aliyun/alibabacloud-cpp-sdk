// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERPROMETHEUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERPROMETHEUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeClusterPrometheusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterPrometheusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Prometheus, prometheus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterPrometheusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Prometheus, prometheus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterPrometheusResponseBody() = default ;
    DescribeClusterPrometheusResponseBody(const DescribeClusterPrometheusResponseBody &) = default ;
    DescribeClusterPrometheusResponseBody(DescribeClusterPrometheusResponseBody &&) = default ;
    DescribeClusterPrometheusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterPrometheusResponseBody() = default ;
    DescribeClusterPrometheusResponseBody& operator=(const DescribeClusterPrometheusResponseBody &) = default ;
    DescribeClusterPrometheusResponseBody& operator=(DescribeClusterPrometheusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prometheus_ == nullptr
        && return this->requestId_ == nullptr; };
    // prometheus Field Functions 
    bool hasPrometheus() const { return this->prometheus_ != nullptr;};
    void deletePrometheus() { this->prometheus_ = nullptr;};
    inline string prometheus() const { DARABONBA_PTR_GET_DEFAULT(prometheus_, "") };
    inline DescribeClusterPrometheusResponseBody& setPrometheus(string prometheus) { DARABONBA_PTR_SET_VALUE(prometheus_, prometheus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterPrometheusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The public endpoint of the Prometheus service that is used to monitor a cluster in the ASM instance.
    std::shared_ptr<string> prometheus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
