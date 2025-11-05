// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEDICATEDBLOCKSTORAGECLUSTERINVENTORYDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEDICATEDBLOCKSTORAGECLUSTERINVENTORYDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorItems, monitorItems_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorItems, monitorItems_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData() = default ;
    QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData(const QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData &) = default ;
    QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData(QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData &&) = default ;
    QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData() = default ;
    QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData& operator=(const QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData &) = default ;
    QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData& operator=(QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorItems_ == nullptr
        && return this->resourceId_ == nullptr && return this->timestamp_ == nullptr; };
    // monitorItems Field Functions 
    bool hasMonitorItems() const { return this->monitorItems_ != nullptr;};
    void deleteMonitorItems() { this->monitorItems_ = nullptr;};
    inline const Models::QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems & monitorItems() const { DARABONBA_PTR_GET_CONST(monitorItems_, Models::QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems) };
    inline Models::QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems monitorItems() { DARABONBA_PTR_GET(monitorItems_, Models::QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems) };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData& setMonitorItems(const Models::QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems & monitorItems) { DARABONBA_PTR_SET_VALUE(monitorItems_, monitorItems) };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData& setMonitorItems(Models::QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems && monitorItems) { DARABONBA_PTR_SET_RVALUE(monitorItems_, monitorItems) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBodyData& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The returned metrics.
    std::shared_ptr<Models::QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems> monitorItems_ = nullptr;
    // The ID list of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The timestamp when the data is collected.
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
