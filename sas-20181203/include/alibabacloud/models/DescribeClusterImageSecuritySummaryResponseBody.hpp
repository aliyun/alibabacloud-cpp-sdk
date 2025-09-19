// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERIMAGESECURITYSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERIMAGESECURITYSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterImageSecuritySummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterImageSecuritySummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterImageEvent, clusterImageEvent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterImageSecuritySummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterImageEvent, clusterImageEvent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterImageSecuritySummaryResponseBody() = default ;
    DescribeClusterImageSecuritySummaryResponseBody(const DescribeClusterImageSecuritySummaryResponseBody &) = default ;
    DescribeClusterImageSecuritySummaryResponseBody(DescribeClusterImageSecuritySummaryResponseBody &&) = default ;
    DescribeClusterImageSecuritySummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterImageSecuritySummaryResponseBody() = default ;
    DescribeClusterImageSecuritySummaryResponseBody& operator=(const DescribeClusterImageSecuritySummaryResponseBody &) = default ;
    DescribeClusterImageSecuritySummaryResponseBody& operator=(DescribeClusterImageSecuritySummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterImageEvent_ != nullptr
        && this->requestId_ != nullptr; };
    // clusterImageEvent Field Functions 
    bool hasClusterImageEvent() const { return this->clusterImageEvent_ != nullptr;};
    void deleteClusterImageEvent() { this->clusterImageEvent_ = nullptr;};
    inline const DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent & clusterImageEvent() const { DARABONBA_PTR_GET_CONST(clusterImageEvent_, DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent) };
    inline DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent clusterImageEvent() { DARABONBA_PTR_GET(clusterImageEvent_, DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent) };
    inline DescribeClusterImageSecuritySummaryResponseBody& setClusterImageEvent(const DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent & clusterImageEvent) { DARABONBA_PTR_SET_VALUE(clusterImageEvent_, clusterImageEvent) };
    inline DescribeClusterImageSecuritySummaryResponseBody& setClusterImageEvent(DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent && clusterImageEvent) { DARABONBA_PTR_SET_RVALUE(clusterImageEvent_, clusterImageEvent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterImageSecuritySummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the image-related security events.
    std::shared_ptr<DescribeClusterImageSecuritySummaryResponseBodyClusterImageEvent> clusterImageEvent_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
