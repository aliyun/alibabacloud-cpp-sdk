// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServiceMeshClustersResponseBodyClusters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(NumberOfClusters, numberOfClusters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(NumberOfClusters, numberOfClusters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeServiceMeshClustersResponseBody() = default ;
    DescribeServiceMeshClustersResponseBody(const DescribeServiceMeshClustersResponseBody &) = default ;
    DescribeServiceMeshClustersResponseBody(DescribeServiceMeshClustersResponseBody &&) = default ;
    DescribeServiceMeshClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshClustersResponseBody() = default ;
    DescribeServiceMeshClustersResponseBody& operator=(const DescribeServiceMeshClustersResponseBody &) = default ;
    DescribeServiceMeshClustersResponseBody& operator=(DescribeServiceMeshClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusters_ == nullptr
        && return this->numberOfClusters_ == nullptr && return this->requestId_ == nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<DescribeServiceMeshClustersResponseBodyClusters> & clusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<DescribeServiceMeshClustersResponseBodyClusters>) };
    inline vector<DescribeServiceMeshClustersResponseBodyClusters> clusters() { DARABONBA_PTR_GET(clusters_, vector<DescribeServiceMeshClustersResponseBodyClusters>) };
    inline DescribeServiceMeshClustersResponseBody& setClusters(const vector<DescribeServiceMeshClustersResponseBodyClusters> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline DescribeServiceMeshClustersResponseBody& setClusters(vector<DescribeServiceMeshClustersResponseBodyClusters> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // numberOfClusters Field Functions 
    bool hasNumberOfClusters() const { return this->numberOfClusters_ != nullptr;};
    void deleteNumberOfClusters() { this->numberOfClusters_ = nullptr;};
    inline int64_t numberOfClusters() const { DARABONBA_PTR_GET_DEFAULT(numberOfClusters_, 0L) };
    inline DescribeServiceMeshClustersResponseBody& setNumberOfClusters(int64_t numberOfClusters) { DARABONBA_PTR_SET_VALUE(numberOfClusters_, numberOfClusters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceMeshClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried clusters.
    std::shared_ptr<vector<DescribeServiceMeshClustersResponseBodyClusters>> clusters_ = nullptr;
    // The total number of ACK clusters in the current Region.
    std::shared_ptr<int64_t> numberOfClusters_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
