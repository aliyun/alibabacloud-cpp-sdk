// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCClustersResponseBodyClusters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCClustersResponseBody() = default ;
    DescribeRCClustersResponseBody(const DescribeRCClustersResponseBody &) = default ;
    DescribeRCClustersResponseBody(DescribeRCClustersResponseBody &&) = default ;
    DescribeRCClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCClustersResponseBody() = default ;
    DescribeRCClustersResponseBody& operator=(const DescribeRCClustersResponseBody &) = default ;
    DescribeRCClustersResponseBody& operator=(DescribeRCClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusters_ == nullptr
        && return this->requestId_ == nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<DescribeRCClustersResponseBodyClusters> & clusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<DescribeRCClustersResponseBodyClusters>) };
    inline vector<DescribeRCClustersResponseBodyClusters> clusters() { DARABONBA_PTR_GET(clusters_, vector<DescribeRCClustersResponseBodyClusters>) };
    inline DescribeRCClustersResponseBody& setClusters(const vector<DescribeRCClustersResponseBodyClusters> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline DescribeRCClustersResponseBody& setClusters(vector<DescribeRCClustersResponseBodyClusters> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the clusters.
    std::shared_ptr<vector<DescribeRCClustersResponseBodyClusters>> clusters_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
