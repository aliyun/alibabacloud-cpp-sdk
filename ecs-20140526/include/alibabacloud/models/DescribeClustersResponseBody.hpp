// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClustersResponseBody() = default ;
    DescribeClustersResponseBody(const DescribeClustersResponseBody &) = default ;
    DescribeClustersResponseBody(DescribeClustersResponseBody &&) = default ;
    DescribeClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersResponseBody() = default ;
    DescribeClustersResponseBody& operator=(const DescribeClustersResponseBody &) = default ;
    DescribeClustersResponseBody& operator=(DescribeClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Clusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Clusters& obj) { 
        DARABONBA_PTR_TO_JSON(Cluster, cluster_);
      };
      friend void from_json(const Darabonba::Json& j, Clusters& obj) { 
        DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
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
      class Cluster : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cluster& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        };
        friend void from_json(const Darabonba::Json& j, Cluster& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        };
        Cluster() = default ;
        Cluster(const Cluster &) = default ;
        Cluster(Cluster &&) = default ;
        Cluster(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cluster() = default ;
        Cluster& operator=(const Cluster &) = default ;
        Cluster& operator=(Cluster &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterId_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Cluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      protected:
        shared_ptr<string> clusterId_ {};
      };

      virtual bool empty() const override { return this->cluster_ == nullptr; };
      // cluster Field Functions 
      bool hasCluster() const { return this->cluster_ != nullptr;};
      void deleteCluster() { this->cluster_ = nullptr;};
      inline const vector<Clusters::Cluster> & getCluster() const { DARABONBA_PTR_GET_CONST(cluster_, vector<Clusters::Cluster>) };
      inline vector<Clusters::Cluster> getCluster() { DARABONBA_PTR_GET(cluster_, vector<Clusters::Cluster>) };
      inline Clusters& setCluster(const vector<Clusters::Cluster> & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
      inline Clusters& setCluster(vector<Clusters::Cluster> && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


    protected:
      shared_ptr<vector<Clusters::Cluster>> cluster_ {};
    };

    virtual bool empty() const override { return this->clusters_ == nullptr
        && this->requestId_ == nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const DescribeClustersResponseBody::Clusters & getClusters() const { DARABONBA_PTR_GET_CONST(clusters_, DescribeClustersResponseBody::Clusters) };
    inline DescribeClustersResponseBody::Clusters getClusters() { DARABONBA_PTR_GET(clusters_, DescribeClustersResponseBody::Clusters) };
    inline DescribeClustersResponseBody& setClusters(const DescribeClustersResponseBody::Clusters & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline DescribeClustersResponseBody& setClusters(DescribeClustersResponseBody::Clusters && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeClustersResponseBody::Clusters> clusters_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
