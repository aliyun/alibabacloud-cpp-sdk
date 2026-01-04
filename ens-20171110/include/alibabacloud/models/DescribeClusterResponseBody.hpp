// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterResponseBody() = default ;
    DescribeClusterResponseBody(const DescribeClusterResponseBody &) = default ;
    DescribeClusterResponseBody(DescribeClusterResponseBody &&) = default ;
    DescribeClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResponseBody() = default ;
    DescribeClusterResponseBody& operator=(const DescribeClusterResponseBody &) = default ;
    DescribeClusterResponseBody& operator=(DescribeClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Clusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Clusters& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NextVersion, nextVersion_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Clusters& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NextVersion, nextVersion_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Clusters() = default ;
      Clusters(const Clusters &) = default ;
      Clusters(Clusters &&) = default ;
      Clusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Clusters() = default ;
      Clusters& operator=(const Clusters &) = default ;
      Clusters& operator=(Clusters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->currentVersion_ == nullptr && this->name_ == nullptr && this->nextVersion_ == nullptr && this->status_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Clusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // currentVersion Field Functions 
      bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
      void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
      inline string getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
      inline Clusters& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Clusters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nextVersion Field Functions 
      bool hasNextVersion() const { return this->nextVersion_ != nullptr;};
      void deleteNextVersion() { this->nextVersion_ = nullptr;};
      inline string getNextVersion() const { DARABONBA_PTR_GET_DEFAULT(nextVersion_, "") };
      inline Clusters& setNextVersion(string nextVersion) { DARABONBA_PTR_SET_VALUE(nextVersion_, nextVersion) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Clusters& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The version of the cluster.
      shared_ptr<string> currentVersion_ {};
      // The cluster name.
      shared_ptr<string> name_ {};
      // The next version of the cluster.
      shared_ptr<string> nextVersion_ {};
      // The health status of the instance.
      // 
      // Valid values:
      // 
      // *   healthy
      // *   unhealthy
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->clusters_ == nullptr
        && this->requestId_ == nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<DescribeClusterResponseBody::Clusters> & getClusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<DescribeClusterResponseBody::Clusters>) };
    inline vector<DescribeClusterResponseBody::Clusters> getClusters() { DARABONBA_PTR_GET(clusters_, vector<DescribeClusterResponseBody::Clusters>) };
    inline DescribeClusterResponseBody& setClusters(const vector<DescribeClusterResponseBody::Clusters> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline DescribeClusterResponseBody& setClusters(vector<DescribeClusterResponseBody::Clusters> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about clusters.
    shared_ptr<vector<DescribeClusterResponseBody::Clusters>> clusters_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
