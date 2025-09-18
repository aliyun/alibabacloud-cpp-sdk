// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListApplicationConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConfigFileName, configFileName_);
      DARABONBA_PTR_TO_JSON(ConfigItemKey, configItemKey_);
      DARABONBA_PTR_TO_JSON(ConfigItemValue, configItemValue_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConfigFileName, configFileName_);
      DARABONBA_PTR_FROM_JSON(ConfigItemKey, configItemKey_);
      DARABONBA_PTR_FROM_JSON(ConfigItemValue, configItemValue_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListApplicationConfigsRequest() = default ;
    ListApplicationConfigsRequest(const ListApplicationConfigsRequest &) = default ;
    ListApplicationConfigsRequest(ListApplicationConfigsRequest &&) = default ;
    ListApplicationConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationConfigsRequest() = default ;
    ListApplicationConfigsRequest& operator=(const ListApplicationConfigsRequest &) = default ;
    ListApplicationConfigsRequest& operator=(ListApplicationConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationName_ != nullptr
        && this->clusterId_ != nullptr && this->configFileName_ != nullptr && this->configItemKey_ != nullptr && this->configItemValue_ != nullptr && this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->nodeGroupId_ != nullptr && this->nodeId_ != nullptr && this->regionId_ != nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListApplicationConfigsRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListApplicationConfigsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // configFileName Field Functions 
    bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
    void deleteConfigFileName() { this->configFileName_ = nullptr;};
    inline string configFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
    inline ListApplicationConfigsRequest& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


    // configItemKey Field Functions 
    bool hasConfigItemKey() const { return this->configItemKey_ != nullptr;};
    void deleteConfigItemKey() { this->configItemKey_ = nullptr;};
    inline string configItemKey() const { DARABONBA_PTR_GET_DEFAULT(configItemKey_, "") };
    inline ListApplicationConfigsRequest& setConfigItemKey(string configItemKey) { DARABONBA_PTR_SET_VALUE(configItemKey_, configItemKey) };


    // configItemValue Field Functions 
    bool hasConfigItemValue() const { return this->configItemValue_ != nullptr;};
    void deleteConfigItemValue() { this->configItemValue_ = nullptr;};
    inline string configItemValue() const { DARABONBA_PTR_GET_DEFAULT(configItemValue_, "") };
    inline ListApplicationConfigsRequest& setConfigItemValue(string configItemValue) { DARABONBA_PTR_SET_VALUE(configItemValue_, configItemValue) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApplicationConfigsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApplicationConfigsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ListApplicationConfigsRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListApplicationConfigsRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListApplicationConfigsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the application.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the configuration file.
    std::shared_ptr<string> configFileName_ = nullptr;
    // The key of the configuration item.
    std::shared_ptr<string> configItemKey_ = nullptr;
    // The value of the configuration item.
    std::shared_ptr<string> configItemValue_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The page number of the next page returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the node group.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // The node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
