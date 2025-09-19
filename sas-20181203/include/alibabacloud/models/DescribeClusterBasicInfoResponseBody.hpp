// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERBASICINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERBASICINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterBasicInfoResponseBodyClusterInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterBasicInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterInfo, clusterInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterInfo, clusterInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterBasicInfoResponseBody() = default ;
    DescribeClusterBasicInfoResponseBody(const DescribeClusterBasicInfoResponseBody &) = default ;
    DescribeClusterBasicInfoResponseBody(DescribeClusterBasicInfoResponseBody &&) = default ;
    DescribeClusterBasicInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterBasicInfoResponseBody() = default ;
    DescribeClusterBasicInfoResponseBody& operator=(const DescribeClusterBasicInfoResponseBody &) = default ;
    DescribeClusterBasicInfoResponseBody& operator=(DescribeClusterBasicInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // clusterInfo Field Functions 
    bool hasClusterInfo() const { return this->clusterInfo_ != nullptr;};
    void deleteClusterInfo() { this->clusterInfo_ = nullptr;};
    inline const DescribeClusterBasicInfoResponseBodyClusterInfo & clusterInfo() const { DARABONBA_PTR_GET_CONST(clusterInfo_, DescribeClusterBasicInfoResponseBodyClusterInfo) };
    inline DescribeClusterBasicInfoResponseBodyClusterInfo clusterInfo() { DARABONBA_PTR_GET(clusterInfo_, DescribeClusterBasicInfoResponseBodyClusterInfo) };
    inline DescribeClusterBasicInfoResponseBody& setClusterInfo(const DescribeClusterBasicInfoResponseBodyClusterInfo & clusterInfo) { DARABONBA_PTR_SET_VALUE(clusterInfo_, clusterInfo) };
    inline DescribeClusterBasicInfoResponseBody& setClusterInfo(DescribeClusterBasicInfoResponseBodyClusterInfo && clusterInfo) { DARABONBA_PTR_SET_RVALUE(clusterInfo_, clusterInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterBasicInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed information about the cluster.
    std::shared_ptr<DescribeClusterBasicInfoResponseBodyClusterInfo> clusterInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
