// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHADOOPCLUSTERSINSAMENETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHADOOPCLUSTERSINSAMENETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHadoopClustersInSameNetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHadoopClustersInSameNetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHadoopClustersInSameNetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHadoopClustersInSameNetResponseBody() = default ;
    DescribeHadoopClustersInSameNetResponseBody(const DescribeHadoopClustersInSameNetResponseBody &) = default ;
    DescribeHadoopClustersInSameNetResponseBody(DescribeHadoopClustersInSameNetResponseBody &&) = default ;
    DescribeHadoopClustersInSameNetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHadoopClustersInSameNetResponseBody() = default ;
    DescribeHadoopClustersInSameNetResponseBody& operator=(const DescribeHadoopClustersInSameNetResponseBody &) = default ;
    DescribeHadoopClustersInSameNetResponseBody& operator=(DescribeHadoopClustersInSameNetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusters_ == nullptr
        && this->requestId_ == nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<string> & getClusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<string>) };
    inline vector<string> getClusters() { DARABONBA_PTR_GET(clusters_, vector<string>) };
    inline DescribeHadoopClustersInSameNetResponseBody& setClusters(const vector<string> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline DescribeHadoopClustersInSameNetResponseBody& setClusters(vector<string> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHadoopClustersInSameNetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<string>> clusters_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
