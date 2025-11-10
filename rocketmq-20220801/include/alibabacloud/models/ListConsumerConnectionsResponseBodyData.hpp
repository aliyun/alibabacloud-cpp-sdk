// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERCONNECTIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERCONNECTIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConsumerConnectionsResponseBodyDataConnections.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListConsumerConnectionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerConnectionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(connections, connections_);
      DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerConnectionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(connections, connections_);
      DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    ListConsumerConnectionsResponseBodyData() = default ;
    ListConsumerConnectionsResponseBodyData(const ListConsumerConnectionsResponseBodyData &) = default ;
    ListConsumerConnectionsResponseBodyData(ListConsumerConnectionsResponseBodyData &&) = default ;
    ListConsumerConnectionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerConnectionsResponseBodyData() = default ;
    ListConsumerConnectionsResponseBodyData& operator=(const ListConsumerConnectionsResponseBodyData &) = default ;
    ListConsumerConnectionsResponseBodyData& operator=(ListConsumerConnectionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connections_ == nullptr
        && return this->consumerGroupId_ == nullptr && return this->instanceId_ == nullptr && return this->regionId_ == nullptr; };
    // connections Field Functions 
    bool hasConnections() const { return this->connections_ != nullptr;};
    void deleteConnections() { this->connections_ = nullptr;};
    inline const vector<Models::ListConsumerConnectionsResponseBodyDataConnections> & connections() const { DARABONBA_PTR_GET_CONST(connections_, vector<Models::ListConsumerConnectionsResponseBodyDataConnections>) };
    inline vector<Models::ListConsumerConnectionsResponseBodyDataConnections> connections() { DARABONBA_PTR_GET(connections_, vector<Models::ListConsumerConnectionsResponseBodyDataConnections>) };
    inline ListConsumerConnectionsResponseBodyData& setConnections(const vector<Models::ListConsumerConnectionsResponseBodyDataConnections> & connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };
    inline ListConsumerConnectionsResponseBodyData& setConnections(vector<Models::ListConsumerConnectionsResponseBodyDataConnections> && connections) { DARABONBA_PTR_SET_RVALUE(connections_, connections) };


    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string consumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline ListConsumerConnectionsResponseBodyData& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListConsumerConnectionsResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListConsumerConnectionsResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client connection list
    std::shared_ptr<vector<Models::ListConsumerConnectionsResponseBodyDataConnections>> connections_ = nullptr;
    // The consumer group ID.
    std::shared_ptr<string> consumerGroupId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
