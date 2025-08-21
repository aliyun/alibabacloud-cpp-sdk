// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATATASKSRESPONSEBODYRESULTSINKCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_LISTDATATASKSRESPONSEBODYRESULTSINKCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDataTasksResponseBodyResultSinkCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataTasksResponseBodyResultSinkCluster& obj) { 
      DARABONBA_PTR_TO_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(vpcInstanceId, vpcInstanceId_);
      DARABONBA_PTR_TO_JSON(vpcInstancePort, vpcInstancePort_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataTasksResponseBodyResultSinkCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(vpcInstanceId, vpcInstanceId_);
      DARABONBA_PTR_FROM_JSON(vpcInstancePort, vpcInstancePort_);
    };
    ListDataTasksResponseBodyResultSinkCluster() = default ;
    ListDataTasksResponseBodyResultSinkCluster(const ListDataTasksResponseBodyResultSinkCluster &) = default ;
    ListDataTasksResponseBodyResultSinkCluster(ListDataTasksResponseBodyResultSinkCluster &&) = default ;
    ListDataTasksResponseBodyResultSinkCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataTasksResponseBodyResultSinkCluster() = default ;
    ListDataTasksResponseBodyResultSinkCluster& operator=(const ListDataTasksResponseBodyResultSinkCluster &) = default ;
    ListDataTasksResponseBodyResultSinkCluster& operator=(ListDataTasksResponseBodyResultSinkCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceType_ != nullptr
        && this->endpoint_ != nullptr && this->index_ != nullptr && this->type_ != nullptr && this->vpcId_ != nullptr && this->vpcInstanceId_ != nullptr
        && this->vpcInstancePort_ != nullptr; };
    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ListDataTasksResponseBodyResultSinkCluster& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ListDataTasksResponseBodyResultSinkCluster& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline ListDataTasksResponseBodyResultSinkCluster& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDataTasksResponseBodyResultSinkCluster& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListDataTasksResponseBodyResultSinkCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline ListDataTasksResponseBodyResultSinkCluster& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


    // vpcInstancePort Field Functions 
    bool hasVpcInstancePort() const { return this->vpcInstancePort_ != nullptr;};
    void deleteVpcInstancePort() { this->vpcInstancePort_ = nullptr;};
    inline string vpcInstancePort() const { DARABONBA_PTR_GET_DEFAULT(vpcInstancePort_, "") };
    inline ListDataTasksResponseBodyResultSinkCluster& setVpcInstancePort(string vpcInstancePort) { DARABONBA_PTR_SET_VALUE(vpcInstancePort_, vpcInstancePort) };


  protected:
    // The type of the target cluster. Default value: elasticsearch.
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The public network access address of the target cluster.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The target index.
    std::shared_ptr<string> index_ = nullptr;
    // The type of the destination index.
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the VPC to which the cluster belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The instance ID or Server Load Balancer (SLB) ID of the current cluster.
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
    // The access port number of the cluster.
    std::shared_ptr<string> vpcInstancePort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
