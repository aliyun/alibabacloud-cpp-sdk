// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHADDITIONALSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHADDITIONALSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshAdditionalStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshAdditionalStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshAdditionalStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeServiceMeshAdditionalStatusResponseBody() = default ;
    DescribeServiceMeshAdditionalStatusResponseBody(const DescribeServiceMeshAdditionalStatusResponseBody &) = default ;
    DescribeServiceMeshAdditionalStatusResponseBody(DescribeServiceMeshAdditionalStatusResponseBody &&) = default ;
    DescribeServiceMeshAdditionalStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshAdditionalStatusResponseBody() = default ;
    DescribeServiceMeshAdditionalStatusResponseBody& operator=(const DescribeServiceMeshAdditionalStatusResponseBody &) = default ;
    DescribeServiceMeshAdditionalStatusResponseBody& operator=(DescribeServiceMeshAdditionalStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // clusterStatus Field Functions 
    bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
    void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
    inline const DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus & clusterStatus() const { DARABONBA_PTR_GET_CONST(clusterStatus_, DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus) };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus clusterStatus() { DARABONBA_PTR_GET(clusterStatus_, DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus) };
    inline DescribeServiceMeshAdditionalStatusResponseBody& setClusterStatus(const DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus & clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };
    inline DescribeServiceMeshAdditionalStatusResponseBody& setClusterStatus(DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus && clusterStatus) { DARABONBA_PTR_SET_RVALUE(clusterStatus_, clusterStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceMeshAdditionalStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cluster status.
    std::shared_ptr<DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus> clusterStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
