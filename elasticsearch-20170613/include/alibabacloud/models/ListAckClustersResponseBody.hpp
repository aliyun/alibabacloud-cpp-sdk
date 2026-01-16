// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACKCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACKCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListAckClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAckClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListAckClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListAckClustersResponseBody() = default ;
    ListAckClustersResponseBody(const ListAckClustersResponseBody &) = default ;
    ListAckClustersResponseBody(ListAckClustersResponseBody &&) = default ;
    ListAckClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAckClustersResponseBody() = default ;
    ListAckClustersResponseBody& operator=(const ListAckClustersResponseBody &) = default ;
    ListAckClustersResponseBody& operator=(ListAckClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(clusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(clusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterType_ == nullptr && this->name_ == nullptr && this->vpcId_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Result& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline Result& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Result& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The ID of cluster.
      shared_ptr<string> clusterId_ {};
      // The type of the cluster. The value is fixed as ManagedKubernetes.
      shared_ptr<string> clusterType_ {};
      // The name of the cluster.
      shared_ptr<string> name_ {};
      // The ID of the VPC to which the cluster belongs.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAckClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListAckClustersResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListAckClustersResponseBody::Result>) };
    inline vector<ListAckClustersResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListAckClustersResponseBody::Result>) };
    inline ListAckClustersResponseBody& setResult(const vector<ListAckClustersResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAckClustersResponseBody& setResult(vector<ListAckClustersResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<vector<ListAckClustersResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
