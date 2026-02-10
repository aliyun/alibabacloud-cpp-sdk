// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class K8sClusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const K8sClusters& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, K8sClusters& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      K8sClusters() = default ;
      K8sClusters(const K8sClusters &) = default ;
      K8sClusters(K8sClusters &&) = default ;
      K8sClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~K8sClusters() = default ;
      K8sClusters& operator=(const K8sClusters &) = default ;
      K8sClusters& operator=(K8sClusters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->name_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline K8sClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline K8sClusters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->k8sClusters_ == nullptr
        && this->requestId_ == nullptr; };
    // k8sClusters Field Functions 
    bool hasK8sClusters() const { return this->k8sClusters_ != nullptr;};
    void deleteK8sClusters() { this->k8sClusters_ = nullptr;};
    inline const vector<DescribeContainerServiceK8sClustersResponseBody::K8sClusters> & getK8sClusters() const { DARABONBA_PTR_GET_CONST(k8sClusters_, vector<DescribeContainerServiceK8sClustersResponseBody::K8sClusters>) };
    inline vector<DescribeContainerServiceK8sClustersResponseBody::K8sClusters> getK8sClusters() { DARABONBA_PTR_GET(k8sClusters_, vector<DescribeContainerServiceK8sClustersResponseBody::K8sClusters>) };
    inline DescribeContainerServiceK8sClustersResponseBody& setK8sClusters(const vector<DescribeContainerServiceK8sClustersResponseBody::K8sClusters> & k8sClusters) { DARABONBA_PTR_SET_VALUE(k8sClusters_, k8sClusters) };
    inline DescribeContainerServiceK8sClustersResponseBody& setK8sClusters(vector<DescribeContainerServiceK8sClustersResponseBody::K8sClusters> && k8sClusters) { DARABONBA_PTR_SET_RVALUE(k8sClusters_, k8sClusters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerServiceK8sClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the clusters.
    shared_ptr<vector<DescribeContainerServiceK8sClustersResponseBody::K8sClusters>> k8sClusters_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
