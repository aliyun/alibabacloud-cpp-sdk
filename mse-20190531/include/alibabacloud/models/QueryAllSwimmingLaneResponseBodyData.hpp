// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAllSwimmingLaneResponseBodyDataEntryRules.hpp>
#include <alibabacloud/models/QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryAllSwimmingLaneResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAllSwimmingLaneResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EntryRules, entryRules_);
      DARABONBA_PTR_TO_JSON(GatewaySwimmingLaneRoute, gatewaySwimmingLaneRoute_);
      DARABONBA_PTR_TO_JSON(GatewaySwimmingLaneRouteJson, gatewaySwimmingLaneRouteJson_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MessageQueueFilterSide, messageQueueFilterSide_);
      DARABONBA_PTR_TO_JSON(MessageQueueGrayEnable, messageQueueGrayEnable_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PathIndependentPercentageEnable, pathIndependentPercentageEnable_);
      DARABONBA_PTR_TO_JSON(RecordCanaryDetail, recordCanaryDetail_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(enableRules, enableRules_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAllSwimmingLaneResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EntryRules, entryRules_);
      DARABONBA_PTR_FROM_JSON(GatewaySwimmingLaneRoute, gatewaySwimmingLaneRoute_);
      DARABONBA_PTR_FROM_JSON(GatewaySwimmingLaneRouteJson, gatewaySwimmingLaneRouteJson_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MessageQueueFilterSide, messageQueueFilterSide_);
      DARABONBA_PTR_FROM_JSON(MessageQueueGrayEnable, messageQueueGrayEnable_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PathIndependentPercentageEnable, pathIndependentPercentageEnable_);
      DARABONBA_PTR_FROM_JSON(RecordCanaryDetail, recordCanaryDetail_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(enableRules, enableRules_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
    };
    QueryAllSwimmingLaneResponseBodyData() = default ;
    QueryAllSwimmingLaneResponseBodyData(const QueryAllSwimmingLaneResponseBodyData &) = default ;
    QueryAllSwimmingLaneResponseBodyData(QueryAllSwimmingLaneResponseBodyData &&) = default ;
    QueryAllSwimmingLaneResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAllSwimmingLaneResponseBodyData() = default ;
    QueryAllSwimmingLaneResponseBodyData& operator=(const QueryAllSwimmingLaneResponseBodyData &) = default ;
    QueryAllSwimmingLaneResponseBodyData& operator=(QueryAllSwimmingLaneResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->entryRules_ != nullptr && this->gatewaySwimmingLaneRoute_ != nullptr && this->gatewaySwimmingLaneRouteJson_ != nullptr && this->groupId_ != nullptr && this->id_ != nullptr
        && this->messageQueueFilterSide_ != nullptr && this->messageQueueGrayEnable_ != nullptr && this->name_ != nullptr && this->namespace_ != nullptr && this->pathIndependentPercentageEnable_ != nullptr
        && this->recordCanaryDetail_ != nullptr && this->regionId_ != nullptr && this->tag_ != nullptr && this->userId_ != nullptr && this->enableRules_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline QueryAllSwimmingLaneResponseBodyData& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // entryRules Field Functions 
    bool hasEntryRules() const { return this->entryRules_ != nullptr;};
    void deleteEntryRules() { this->entryRules_ = nullptr;};
    inline const vector<Models::QueryAllSwimmingLaneResponseBodyDataEntryRules> & entryRules() const { DARABONBA_PTR_GET_CONST(entryRules_, vector<Models::QueryAllSwimmingLaneResponseBodyDataEntryRules>) };
    inline vector<Models::QueryAllSwimmingLaneResponseBodyDataEntryRules> entryRules() { DARABONBA_PTR_GET(entryRules_, vector<Models::QueryAllSwimmingLaneResponseBodyDataEntryRules>) };
    inline QueryAllSwimmingLaneResponseBodyData& setEntryRules(const vector<Models::QueryAllSwimmingLaneResponseBodyDataEntryRules> & entryRules) { DARABONBA_PTR_SET_VALUE(entryRules_, entryRules) };
    inline QueryAllSwimmingLaneResponseBodyData& setEntryRules(vector<Models::QueryAllSwimmingLaneResponseBodyDataEntryRules> && entryRules) { DARABONBA_PTR_SET_RVALUE(entryRules_, entryRules) };


    // gatewaySwimmingLaneRoute Field Functions 
    bool hasGatewaySwimmingLaneRoute() const { return this->gatewaySwimmingLaneRoute_ != nullptr;};
    void deleteGatewaySwimmingLaneRoute() { this->gatewaySwimmingLaneRoute_ = nullptr;};
    inline const Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute & gatewaySwimmingLaneRoute() const { DARABONBA_PTR_GET_CONST(gatewaySwimmingLaneRoute_, Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute) };
    inline Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute gatewaySwimmingLaneRoute() { DARABONBA_PTR_GET(gatewaySwimmingLaneRoute_, Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute) };
    inline QueryAllSwimmingLaneResponseBodyData& setGatewaySwimmingLaneRoute(const Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute & gatewaySwimmingLaneRoute) { DARABONBA_PTR_SET_VALUE(gatewaySwimmingLaneRoute_, gatewaySwimmingLaneRoute) };
    inline QueryAllSwimmingLaneResponseBodyData& setGatewaySwimmingLaneRoute(Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute && gatewaySwimmingLaneRoute) { DARABONBA_PTR_SET_RVALUE(gatewaySwimmingLaneRoute_, gatewaySwimmingLaneRoute) };


    // gatewaySwimmingLaneRouteJson Field Functions 
    bool hasGatewaySwimmingLaneRouteJson() const { return this->gatewaySwimmingLaneRouteJson_ != nullptr;};
    void deleteGatewaySwimmingLaneRouteJson() { this->gatewaySwimmingLaneRouteJson_ = nullptr;};
    inline string gatewaySwimmingLaneRouteJson() const { DARABONBA_PTR_GET_DEFAULT(gatewaySwimmingLaneRouteJson_, "") };
    inline QueryAllSwimmingLaneResponseBodyData& setGatewaySwimmingLaneRouteJson(string gatewaySwimmingLaneRouteJson) { DARABONBA_PTR_SET_VALUE(gatewaySwimmingLaneRouteJson_, gatewaySwimmingLaneRouteJson) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline QueryAllSwimmingLaneResponseBodyData& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryAllSwimmingLaneResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // messageQueueFilterSide Field Functions 
    bool hasMessageQueueFilterSide() const { return this->messageQueueFilterSide_ != nullptr;};
    void deleteMessageQueueFilterSide() { this->messageQueueFilterSide_ = nullptr;};
    inline string messageQueueFilterSide() const { DARABONBA_PTR_GET_DEFAULT(messageQueueFilterSide_, "") };
    inline QueryAllSwimmingLaneResponseBodyData& setMessageQueueFilterSide(string messageQueueFilterSide) { DARABONBA_PTR_SET_VALUE(messageQueueFilterSide_, messageQueueFilterSide) };


    // messageQueueGrayEnable Field Functions 
    bool hasMessageQueueGrayEnable() const { return this->messageQueueGrayEnable_ != nullptr;};
    void deleteMessageQueueGrayEnable() { this->messageQueueGrayEnable_ = nullptr;};
    inline bool messageQueueGrayEnable() const { DARABONBA_PTR_GET_DEFAULT(messageQueueGrayEnable_, false) };
    inline QueryAllSwimmingLaneResponseBodyData& setMessageQueueGrayEnable(bool messageQueueGrayEnable) { DARABONBA_PTR_SET_VALUE(messageQueueGrayEnable_, messageQueueGrayEnable) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryAllSwimmingLaneResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline QueryAllSwimmingLaneResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pathIndependentPercentageEnable Field Functions 
    bool hasPathIndependentPercentageEnable() const { return this->pathIndependentPercentageEnable_ != nullptr;};
    void deletePathIndependentPercentageEnable() { this->pathIndependentPercentageEnable_ = nullptr;};
    inline bool pathIndependentPercentageEnable() const { DARABONBA_PTR_GET_DEFAULT(pathIndependentPercentageEnable_, false) };
    inline QueryAllSwimmingLaneResponseBodyData& setPathIndependentPercentageEnable(bool pathIndependentPercentageEnable) { DARABONBA_PTR_SET_VALUE(pathIndependentPercentageEnable_, pathIndependentPercentageEnable) };


    // recordCanaryDetail Field Functions 
    bool hasRecordCanaryDetail() const { return this->recordCanaryDetail_ != nullptr;};
    void deleteRecordCanaryDetail() { this->recordCanaryDetail_ = nullptr;};
    inline bool recordCanaryDetail() const { DARABONBA_PTR_GET_DEFAULT(recordCanaryDetail_, false) };
    inline QueryAllSwimmingLaneResponseBodyData& setRecordCanaryDetail(bool recordCanaryDetail) { DARABONBA_PTR_SET_VALUE(recordCanaryDetail_, recordCanaryDetail) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryAllSwimmingLaneResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline QueryAllSwimmingLaneResponseBodyData& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryAllSwimmingLaneResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // enableRules Field Functions 
    bool hasEnableRules() const { return this->enableRules_ != nullptr;};
    void deleteEnableRules() { this->enableRules_ = nullptr;};
    inline bool enableRules() const { DARABONBA_PTR_GET_DEFAULT(enableRules_, false) };
    inline QueryAllSwimmingLaneResponseBodyData& setEnableRules(bool enableRules) { DARABONBA_PTR_SET_VALUE(enableRules_, enableRules) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryAllSwimmingLaneResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryAllSwimmingLaneResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


  protected:
    std::shared_ptr<string> enable_ = nullptr;
    std::shared_ptr<vector<Models::QueryAllSwimmingLaneResponseBodyDataEntryRules>> entryRules_ = nullptr;
    std::shared_ptr<Models::QueryAllSwimmingLaneResponseBodyDataGatewaySwimmingLaneRoute> gatewaySwimmingLaneRoute_ = nullptr;
    std::shared_ptr<string> gatewaySwimmingLaneRouteJson_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> messageQueueFilterSide_ = nullptr;
    std::shared_ptr<bool> messageQueueGrayEnable_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<bool> pathIndependentPercentageEnable_ = nullptr;
    std::shared_ptr<bool> recordCanaryDetail_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<bool> enableRules_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
