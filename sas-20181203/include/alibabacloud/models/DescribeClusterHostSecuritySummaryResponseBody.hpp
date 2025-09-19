// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERHOSTSECURITYSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERHOSTSECURITYSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterHostSecuritySummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterHostSecuritySummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterHostEvent, clusterHostEvent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterHostSecuritySummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterHostEvent, clusterHostEvent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterHostSecuritySummaryResponseBody() = default ;
    DescribeClusterHostSecuritySummaryResponseBody(const DescribeClusterHostSecuritySummaryResponseBody &) = default ;
    DescribeClusterHostSecuritySummaryResponseBody(DescribeClusterHostSecuritySummaryResponseBody &&) = default ;
    DescribeClusterHostSecuritySummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterHostSecuritySummaryResponseBody() = default ;
    DescribeClusterHostSecuritySummaryResponseBody& operator=(const DescribeClusterHostSecuritySummaryResponseBody &) = default ;
    DescribeClusterHostSecuritySummaryResponseBody& operator=(DescribeClusterHostSecuritySummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterHostEvent_ != nullptr
        && this->requestId_ != nullptr; };
    // clusterHostEvent Field Functions 
    bool hasClusterHostEvent() const { return this->clusterHostEvent_ != nullptr;};
    void deleteClusterHostEvent() { this->clusterHostEvent_ = nullptr;};
    inline const DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent & clusterHostEvent() const { DARABONBA_PTR_GET_CONST(clusterHostEvent_, DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent) };
    inline DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent clusterHostEvent() { DARABONBA_PTR_GET(clusterHostEvent_, DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent) };
    inline DescribeClusterHostSecuritySummaryResponseBody& setClusterHostEvent(const DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent & clusterHostEvent) { DARABONBA_PTR_SET_VALUE(clusterHostEvent_, clusterHostEvent) };
    inline DescribeClusterHostSecuritySummaryResponseBody& setClusterHostEvent(DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent && clusterHostEvent) { DARABONBA_PTR_SET_RVALUE(clusterHostEvent_, clusterHostEvent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterHostSecuritySummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The alert details of the hosts.
    std::shared_ptr<DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent> clusterHostEvent_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
