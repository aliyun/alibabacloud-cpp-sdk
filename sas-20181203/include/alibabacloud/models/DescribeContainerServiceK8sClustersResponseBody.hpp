// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeContainerServiceK8sClustersResponseBodyK8sClusters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerServiceK8sClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerServiceK8sClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(K8sClusters, k8sClusters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerServiceK8sClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(K8sClusters, k8sClusters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeContainerServiceK8sClustersResponseBody() = default ;
    DescribeContainerServiceK8sClustersResponseBody(const DescribeContainerServiceK8sClustersResponseBody &) = default ;
    DescribeContainerServiceK8sClustersResponseBody(DescribeContainerServiceK8sClustersResponseBody &&) = default ;
    DescribeContainerServiceK8sClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerServiceK8sClustersResponseBody() = default ;
    DescribeContainerServiceK8sClustersResponseBody& operator=(const DescribeContainerServiceK8sClustersResponseBody &) = default ;
    DescribeContainerServiceK8sClustersResponseBody& operator=(DescribeContainerServiceK8sClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->k8sClusters_ != nullptr
        && this->requestId_ != nullptr; };
    // k8sClusters Field Functions 
    bool hasK8sClusters() const { return this->k8sClusters_ != nullptr;};
    void deleteK8sClusters() { this->k8sClusters_ = nullptr;};
    inline const vector<DescribeContainerServiceK8sClustersResponseBodyK8sClusters> & k8sClusters() const { DARABONBA_PTR_GET_CONST(k8sClusters_, vector<DescribeContainerServiceK8sClustersResponseBodyK8sClusters>) };
    inline vector<DescribeContainerServiceK8sClustersResponseBodyK8sClusters> k8sClusters() { DARABONBA_PTR_GET(k8sClusters_, vector<DescribeContainerServiceK8sClustersResponseBodyK8sClusters>) };
    inline DescribeContainerServiceK8sClustersResponseBody& setK8sClusters(const vector<DescribeContainerServiceK8sClustersResponseBodyK8sClusters> & k8sClusters) { DARABONBA_PTR_SET_VALUE(k8sClusters_, k8sClusters) };
    inline DescribeContainerServiceK8sClustersResponseBody& setK8sClusters(vector<DescribeContainerServiceK8sClustersResponseBodyK8sClusters> && k8sClusters) { DARABONBA_PTR_SET_RVALUE(k8sClusters_, k8sClusters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerServiceK8sClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the clusters.
    std::shared_ptr<vector<DescribeContainerServiceK8sClustersResponseBodyK8sClusters>> k8sClusters_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
