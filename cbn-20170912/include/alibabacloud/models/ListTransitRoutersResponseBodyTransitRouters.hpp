// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERSRESPONSEBODYTRANSITROUTERS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERSRESPONSEBODYTRANSITROUTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRoutersResponseBodyTransitRoutersTags.hpp>
#include <alibabacloud/models/ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRoutersResponseBodyTransitRouters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRoutersResponseBodyTransitRouters& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportMulticast, supportMulticast_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TransitRouterCidrList, transitRouterCidrList_);
      DARABONBA_PTR_TO_JSON(TransitRouterDescription, transitRouterDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterName, transitRouterName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRoutersResponseBodyTransitRouters& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportMulticast, supportMulticast_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TransitRouterCidrList, transitRouterCidrList_);
      DARABONBA_PTR_FROM_JSON(TransitRouterDescription, transitRouterDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterName, transitRouterName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListTransitRoutersResponseBodyTransitRouters() = default ;
    ListTransitRoutersResponseBodyTransitRouters(const ListTransitRoutersResponseBodyTransitRouters &) = default ;
    ListTransitRoutersResponseBodyTransitRouters(ListTransitRoutersResponseBodyTransitRouters &&) = default ;
    ListTransitRoutersResponseBodyTransitRouters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRoutersResponseBodyTransitRouters() = default ;
    ListTransitRoutersResponseBodyTransitRouters& operator=(const ListTransitRoutersResponseBodyTransitRouters &) = default ;
    ListTransitRoutersResponseBodyTransitRouters& operator=(ListTransitRoutersResponseBodyTransitRouters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->cenId_ != nullptr && this->creationTime_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr && this->supportMulticast_ != nullptr
        && this->tags_ != nullptr && this->transitRouterCidrList_ != nullptr && this->transitRouterDescription_ != nullptr && this->transitRouterId_ != nullptr && this->transitRouterName_ != nullptr
        && this->type_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListTransitRoutersResponseBodyTransitRouters& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ListTransitRoutersResponseBodyTransitRouters& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListTransitRoutersResponseBodyTransitRouters& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTransitRoutersResponseBodyTransitRouters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransitRoutersResponseBodyTransitRouters& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportMulticast Field Functions 
    bool hasSupportMulticast() const { return this->supportMulticast_ != nullptr;};
    void deleteSupportMulticast() { this->supportMulticast_ = nullptr;};
    inline bool supportMulticast() const { DARABONBA_PTR_GET_DEFAULT(supportMulticast_, false) };
    inline ListTransitRoutersResponseBodyTransitRouters& setSupportMulticast(bool supportMulticast) { DARABONBA_PTR_SET_VALUE(supportMulticast_, supportMulticast) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTransitRoutersResponseBodyTransitRoutersTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTransitRoutersResponseBodyTransitRoutersTags>) };
    inline vector<Models::ListTransitRoutersResponseBodyTransitRoutersTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTransitRoutersResponseBodyTransitRoutersTags>) };
    inline ListTransitRoutersResponseBodyTransitRouters& setTags(const vector<Models::ListTransitRoutersResponseBodyTransitRoutersTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTransitRoutersResponseBodyTransitRouters& setTags(vector<Models::ListTransitRoutersResponseBodyTransitRoutersTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transitRouterCidrList Field Functions 
    bool hasTransitRouterCidrList() const { return this->transitRouterCidrList_ != nullptr;};
    void deleteTransitRouterCidrList() { this->transitRouterCidrList_ = nullptr;};
    inline const vector<Models::ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList> & transitRouterCidrList() const { DARABONBA_PTR_GET_CONST(transitRouterCidrList_, vector<Models::ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList>) };
    inline vector<Models::ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList> transitRouterCidrList() { DARABONBA_PTR_GET(transitRouterCidrList_, vector<Models::ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList>) };
    inline ListTransitRoutersResponseBodyTransitRouters& setTransitRouterCidrList(const vector<Models::ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList> & transitRouterCidrList) { DARABONBA_PTR_SET_VALUE(transitRouterCidrList_, transitRouterCidrList) };
    inline ListTransitRoutersResponseBodyTransitRouters& setTransitRouterCidrList(vector<Models::ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList> && transitRouterCidrList) { DARABONBA_PTR_SET_RVALUE(transitRouterCidrList_, transitRouterCidrList) };


    // transitRouterDescription Field Functions 
    bool hasTransitRouterDescription() const { return this->transitRouterDescription_ != nullptr;};
    void deleteTransitRouterDescription() { this->transitRouterDescription_ = nullptr;};
    inline string transitRouterDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterDescription_, "") };
    inline ListTransitRoutersResponseBodyTransitRouters& setTransitRouterDescription(string transitRouterDescription) { DARABONBA_PTR_SET_VALUE(transitRouterDescription_, transitRouterDescription) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTransitRoutersResponseBodyTransitRouters& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterName Field Functions 
    bool hasTransitRouterName() const { return this->transitRouterName_ != nullptr;};
    void deleteTransitRouterName() { this->transitRouterName_ = nullptr;};
    inline string transitRouterName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterName_, "") };
    inline ListTransitRoutersResponseBodyTransitRouters& setTransitRouterName(string transitRouterName) { DARABONBA_PTR_SET_VALUE(transitRouterName_, transitRouterName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListTransitRoutersResponseBodyTransitRouters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the Alibaba Cloud account to which the CEN instance belongs.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The time when the transit router was created.
    // 
    // The time follows the ISO8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the region where the transit router is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the transit router. Valid values:
    // 
    // *   **Creating**: The transit router is being created.
    // *   **Active**: The transit router is available.
    // *   **Modifying**: The transit router is being modified
    // *   **Deleting**: The transit router is being deleted.
    // *   **Upgrading**: The transit router is being upgraded.
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether multicast is enabled for the transit router. Valid values:
    // 
    // *   **true**: enabled
    // *   **false**: disabled
    std::shared_ptr<bool> supportMulticast_ = nullptr;
    // A list of tags.
    std::shared_ptr<vector<Models::ListTransitRoutersResponseBodyTransitRoutersTags>> tags_ = nullptr;
    // The CIDR blocks of the transit router.
    std::shared_ptr<vector<Models::ListTransitRoutersResponseBodyTransitRoutersTransitRouterCidrList>> transitRouterCidrList_ = nullptr;
    // The description of the transit router.
    std::shared_ptr<string> transitRouterDescription_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The name of the transit router.
    std::shared_ptr<string> transitRouterName_ = nullptr;
    // The edition of the transit router. Valid values:
    // 
    // *   **Enterprise**: Enhance Edition
    // *   **Basic**: Basic Edition
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
