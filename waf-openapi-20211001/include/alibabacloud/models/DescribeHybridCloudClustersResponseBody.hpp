// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridCloudClustersResponseBodyClusterInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterInfos, clusterInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterInfos, clusterInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHybridCloudClustersResponseBody() = default ;
    DescribeHybridCloudClustersResponseBody(const DescribeHybridCloudClustersResponseBody &) = default ;
    DescribeHybridCloudClustersResponseBody(DescribeHybridCloudClustersResponseBody &&) = default ;
    DescribeHybridCloudClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudClustersResponseBody() = default ;
    DescribeHybridCloudClustersResponseBody& operator=(const DescribeHybridCloudClustersResponseBody &) = default ;
    DescribeHybridCloudClustersResponseBody& operator=(DescribeHybridCloudClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterInfos_ == nullptr
        && return this->requestId_ == nullptr; };
    // clusterInfos Field Functions 
    bool hasClusterInfos() const { return this->clusterInfos_ != nullptr;};
    void deleteClusterInfos() { this->clusterInfos_ = nullptr;};
    inline const vector<DescribeHybridCloudClustersResponseBodyClusterInfos> & clusterInfos() const { DARABONBA_PTR_GET_CONST(clusterInfos_, vector<DescribeHybridCloudClustersResponseBodyClusterInfos>) };
    inline vector<DescribeHybridCloudClustersResponseBodyClusterInfos> clusterInfos() { DARABONBA_PTR_GET(clusterInfos_, vector<DescribeHybridCloudClustersResponseBodyClusterInfos>) };
    inline DescribeHybridCloudClustersResponseBody& setClusterInfos(const vector<DescribeHybridCloudClustersResponseBodyClusterInfos> & clusterInfos) { DARABONBA_PTR_SET_VALUE(clusterInfos_, clusterInfos) };
    inline DescribeHybridCloudClustersResponseBody& setClusterInfos(vector<DescribeHybridCloudClustersResponseBodyClusterInfos> && clusterInfos) { DARABONBA_PTR_SET_RVALUE(clusterInfos_, clusterInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the clusters.
    std::shared_ptr<vector<DescribeHybridCloudClustersResponseBodyClusterInfos>> clusterInfos_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
