// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLESRESPONSEBODYTRANSITROUTERROUTETABLES_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLESRESPONSEBODYTRANSITROUTERROUTETABLES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesRouteTableOptions.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RouteTableOptions, routeTableOptions_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableDescription, transitRouterRouteTableDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableName, transitRouterRouteTableName_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableStatus, transitRouterRouteTableStatus_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableType, transitRouterRouteTableType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RouteTableOptions, routeTableOptions_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableDescription, transitRouterRouteTableDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableName, transitRouterRouteTableName_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableStatus, transitRouterRouteTableStatus_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableType, transitRouterRouteTableType_);
    };
    ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables() = default ;
    ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables(const ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables &) = default ;
    ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables(ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables &&) = default ;
    ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables() = default ;
    ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& operator=(const ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables &) = default ;
    ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& operator=(ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->regionId_ != nullptr && this->routeTableOptions_ != nullptr && this->tags_ != nullptr && this->transitRouterId_ != nullptr && this->transitRouterRouteTableDescription_ != nullptr
        && this->transitRouterRouteTableId_ != nullptr && this->transitRouterRouteTableName_ != nullptr && this->transitRouterRouteTableStatus_ != nullptr && this->transitRouterRouteTableType_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // routeTableOptions Field Functions 
    bool hasRouteTableOptions() const { return this->routeTableOptions_ != nullptr;};
    void deleteRouteTableOptions() { this->routeTableOptions_ = nullptr;};
    inline const Models::ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesRouteTableOptions & routeTableOptions() const { DARABONBA_PTR_GET_CONST(routeTableOptions_, Models::ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesRouteTableOptions) };
    inline Models::ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesRouteTableOptions routeTableOptions() { DARABONBA_PTR_GET(routeTableOptions_, Models::ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesRouteTableOptions) };
    inline ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& setRouteTableOptions(const Models::ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesRouteTableOptions & routeTableOptions) { DARABONBA_PTR_SET_VALUE(routeTableOptions_, routeTableOptions) };
    inline ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& setRouteTableOptions(Models::ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesRouteTableOptions && routeTableOptions) { DARABONBA_PTR_SET_RVALUE(routeTableOptions_, routeTableOptions) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesTags>) };
    inline vector<Models::ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesTags>) };
    inline ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& setTags(const vector<Models::ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& setTags(vector<Models::ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterRouteTableDescription Field Functions 
    bool hasTransitRouterRouteTableDescription() const { return this->transitRouterRouteTableDescription_ != nullptr;};
    void deleteTransitRouterRouteTableDescription() { this->transitRouterRouteTableDescription_ = nullptr;};
    inline string transitRouterRouteTableDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableDescription_, "") };
    inline ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& setTransitRouterRouteTableDescription(string transitRouterRouteTableDescription) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableDescription_, transitRouterRouteTableDescription) };


    // transitRouterRouteTableId Field Functions 
    bool hasTransitRouterRouteTableId() const { return this->transitRouterRouteTableId_ != nullptr;};
    void deleteTransitRouterRouteTableId() { this->transitRouterRouteTableId_ = nullptr;};
    inline string transitRouterRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableId_, "") };
    inline ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& setTransitRouterRouteTableId(string transitRouterRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableId_, transitRouterRouteTableId) };


    // transitRouterRouteTableName Field Functions 
    bool hasTransitRouterRouteTableName() const { return this->transitRouterRouteTableName_ != nullptr;};
    void deleteTransitRouterRouteTableName() { this->transitRouterRouteTableName_ = nullptr;};
    inline string transitRouterRouteTableName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableName_, "") };
    inline ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& setTransitRouterRouteTableName(string transitRouterRouteTableName) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableName_, transitRouterRouteTableName) };


    // transitRouterRouteTableStatus Field Functions 
    bool hasTransitRouterRouteTableStatus() const { return this->transitRouterRouteTableStatus_ != nullptr;};
    void deleteTransitRouterRouteTableStatus() { this->transitRouterRouteTableStatus_ = nullptr;};
    inline string transitRouterRouteTableStatus() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableStatus_, "") };
    inline ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& setTransitRouterRouteTableStatus(string transitRouterRouteTableStatus) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableStatus_, transitRouterRouteTableStatus) };


    // transitRouterRouteTableType Field Functions 
    bool hasTransitRouterRouteTableType() const { return this->transitRouterRouteTableType_ != nullptr;};
    void deleteTransitRouterRouteTableType() { this->transitRouterRouteTableType_ = nullptr;};
    inline string transitRouterRouteTableType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableType_, "") };
    inline ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables& setTransitRouterRouteTableType(string transitRouterRouteTableType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableType_, transitRouterRouteTableType) };


  protected:
    // The time when the route table was created.
    // 
    // The time follows the ISO8601 standard in the YYYY-MM-DDThh:mmZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The region ID of the Enterprise Edition transit router.
    std::shared_ptr<string> regionId_ = nullptr;
    // The features of the route table.
    std::shared_ptr<Models::ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesRouteTableOptions> routeTableOptions_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTablesTags>> tags_ = nullptr;
    // The transit router ID.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The description of the route table.
    std::shared_ptr<string> transitRouterRouteTableDescription_ = nullptr;
    // The ID of the route table.
    std::shared_ptr<string> transitRouterRouteTableId_ = nullptr;
    // The name of the route table.
    std::shared_ptr<string> transitRouterRouteTableName_ = nullptr;
    // The status of the route table. Valid values:
    // 
    // *   **Creating**
    // *   **Deleting**
    // *   **Active**
    std::shared_ptr<string> transitRouterRouteTableStatus_ = nullptr;
    // The type of the route table. Valid values:
    // 
    // *   **Custom**
    // *   **System**
    std::shared_ptr<string> transitRouterRouteTableType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
