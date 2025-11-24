// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSINSERVICEMESHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSINSERVICEMESHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClustersInServiceMeshResponseBodyClusters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeClustersInServiceMeshResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersInServiceMeshResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersInServiceMeshResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClustersInServiceMeshResponseBody() = default ;
    DescribeClustersInServiceMeshResponseBody(const DescribeClustersInServiceMeshResponseBody &) = default ;
    DescribeClustersInServiceMeshResponseBody(DescribeClustersInServiceMeshResponseBody &&) = default ;
    DescribeClustersInServiceMeshResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersInServiceMeshResponseBody() = default ;
    DescribeClustersInServiceMeshResponseBody& operator=(const DescribeClustersInServiceMeshResponseBody &) = default ;
    DescribeClustersInServiceMeshResponseBody& operator=(DescribeClustersInServiceMeshResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusters_ == nullptr
        && return this->requestId_ == nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<DescribeClustersInServiceMeshResponseBodyClusters> & clusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<DescribeClustersInServiceMeshResponseBodyClusters>) };
    inline vector<DescribeClustersInServiceMeshResponseBodyClusters> clusters() { DARABONBA_PTR_GET(clusters_, vector<DescribeClustersInServiceMeshResponseBodyClusters>) };
    inline DescribeClustersInServiceMeshResponseBody& setClusters(const vector<DescribeClustersInServiceMeshResponseBodyClusters> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline DescribeClustersInServiceMeshResponseBody& setClusters(vector<DescribeClustersInServiceMeshResponseBodyClusters> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClustersInServiceMeshResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of the clusters in the ASM instance.
    std::shared_ptr<vector<DescribeClustersInServiceMeshResponseBodyClusters>> clusters_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
