// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYXPACKRELATEDBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYXPACKRELATEDBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class QueryXpackRelateDBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryXpackRelateDBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryXpackRelateDBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryXpackRelateDBResponseBody() = default ;
    QueryXpackRelateDBResponseBody(const QueryXpackRelateDBResponseBody &) = default ;
    QueryXpackRelateDBResponseBody(QueryXpackRelateDBResponseBody &&) = default ;
    QueryXpackRelateDBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryXpackRelateDBResponseBody() = default ;
    QueryXpackRelateDBResponseBody& operator=(const QueryXpackRelateDBResponseBody &) = default ;
    QueryXpackRelateDBResponseBody& operator=(QueryXpackRelateDBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterList& obj) { 
        DARABONBA_PTR_TO_JSON(Cluster, cluster_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterList& obj) { 
        DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
      };
      ClusterList() = default ;
      ClusterList(const ClusterList &) = default ;
      ClusterList(ClusterList &&) = default ;
      ClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterList() = default ;
      ClusterList& operator=(const ClusterList &) = default ;
      ClusterList& operator=(ClusterList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Cluster : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cluster& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_TO_JSON(DBType, DBType_);
          DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
          DARABONBA_PTR_TO_JSON(IsRelated, isRelated_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Cluster& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_FROM_JSON(DBType, DBType_);
          DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
          DARABONBA_PTR_FROM_JSON(IsRelated, isRelated_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
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
        virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->isRelated_ == nullptr && this->lockMode_ == nullptr
        && this->status_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Cluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // clusterName Field Functions 
        bool hasClusterName() const { return this->clusterName_ != nullptr;};
        void deleteClusterName() { this->clusterName_ = nullptr;};
        inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
        inline Cluster& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


        // DBType Field Functions 
        bool hasDBType() const { return this->DBType_ != nullptr;};
        void deleteDBType() { this->DBType_ = nullptr;};
        inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
        inline Cluster& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


        // DBVersion Field Functions 
        bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
        void deleteDBVersion() { this->DBVersion_ = nullptr;};
        inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
        inline Cluster& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


        // isRelated Field Functions 
        bool hasIsRelated() const { return this->isRelated_ != nullptr;};
        void deleteIsRelated() { this->isRelated_ = nullptr;};
        inline bool getIsRelated() const { DARABONBA_PTR_GET_DEFAULT(isRelated_, false) };
        inline Cluster& setIsRelated(bool isRelated) { DARABONBA_PTR_SET_VALUE(isRelated_, isRelated) };


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
        inline Cluster& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Cluster& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> clusterId_ {};
        shared_ptr<string> clusterName_ {};
        shared_ptr<string> DBType_ {};
        shared_ptr<string> DBVersion_ {};
        shared_ptr<bool> isRelated_ {};
        shared_ptr<string> lockMode_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->cluster_ == nullptr; };
      // cluster Field Functions 
      bool hasCluster() const { return this->cluster_ != nullptr;};
      void deleteCluster() { this->cluster_ = nullptr;};
      inline const vector<ClusterList::Cluster> & getCluster() const { DARABONBA_PTR_GET_CONST(cluster_, vector<ClusterList::Cluster>) };
      inline vector<ClusterList::Cluster> getCluster() { DARABONBA_PTR_GET(cluster_, vector<ClusterList::Cluster>) };
      inline ClusterList& setCluster(const vector<ClusterList::Cluster> & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
      inline ClusterList& setCluster(vector<ClusterList::Cluster> && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


    protected:
      shared_ptr<vector<ClusterList::Cluster>> cluster_ {};
    };

    virtual bool empty() const override { return this->clusterList_ == nullptr
        && this->requestId_ == nullptr; };
    // clusterList Field Functions 
    bool hasClusterList() const { return this->clusterList_ != nullptr;};
    void deleteClusterList() { this->clusterList_ = nullptr;};
    inline const QueryXpackRelateDBResponseBody::ClusterList & getClusterList() const { DARABONBA_PTR_GET_CONST(clusterList_, QueryXpackRelateDBResponseBody::ClusterList) };
    inline QueryXpackRelateDBResponseBody::ClusterList getClusterList() { DARABONBA_PTR_GET(clusterList_, QueryXpackRelateDBResponseBody::ClusterList) };
    inline QueryXpackRelateDBResponseBody& setClusterList(const QueryXpackRelateDBResponseBody::ClusterList & clusterList) { DARABONBA_PTR_SET_VALUE(clusterList_, clusterList) };
    inline QueryXpackRelateDBResponseBody& setClusterList(QueryXpackRelateDBResponseBody::ClusterList && clusterList) { DARABONBA_PTR_SET_RVALUE(clusterList_, clusterList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryXpackRelateDBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryXpackRelateDBResponseBody::ClusterList> clusterList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
