// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETERRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetErResponseBodyContentErAttachments.hpp>
#include <alibabacloud/models/GetErResponseBodyContentErRouteEntrys.hpp>
#include <alibabacloud/models/GetErResponseBodyContentErRouteMaps.hpp>
#include <alibabacloud/models/GetErResponseBodyContentTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetErResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ErAttachments, erAttachments_);
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(ErName, erName_);
      DARABONBA_PTR_TO_JSON(ErRouteEntrys, erRouteEntrys_);
      DARABONBA_PTR_TO_JSON(ErRouteMaps, erRouteMaps_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetErResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ErAttachments, erAttachments_);
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(ErName, erName_);
      DARABONBA_PTR_FROM_JSON(ErRouteEntrys, erRouteEntrys_);
      DARABONBA_PTR_FROM_JSON(ErRouteMaps, erRouteMaps_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    GetErResponseBodyContent() = default ;
    GetErResponseBodyContent(const GetErResponseBodyContent &) = default ;
    GetErResponseBodyContent(GetErResponseBodyContent &&) = default ;
    GetErResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErResponseBodyContent() = default ;
    GetErResponseBodyContent& operator=(const GetErResponseBodyContent &) = default ;
    GetErResponseBodyContent& operator=(GetErResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->erAttachments_ == nullptr && return this->erId_ == nullptr && return this->erName_ == nullptr && return this->erRouteEntrys_ == nullptr
        && return this->erRouteMaps_ == nullptr && return this->gmtModified_ == nullptr && return this->masterZoneId_ == nullptr && return this->message_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->tenantId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetErResponseBodyContent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetErResponseBodyContent& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // erAttachments Field Functions 
    bool hasErAttachments() const { return this->erAttachments_ != nullptr;};
    void deleteErAttachments() { this->erAttachments_ = nullptr;};
    inline const vector<Models::GetErResponseBodyContentErAttachments> & erAttachments() const { DARABONBA_PTR_GET_CONST(erAttachments_, vector<Models::GetErResponseBodyContentErAttachments>) };
    inline vector<Models::GetErResponseBodyContentErAttachments> erAttachments() { DARABONBA_PTR_GET(erAttachments_, vector<Models::GetErResponseBodyContentErAttachments>) };
    inline GetErResponseBodyContent& setErAttachments(const vector<Models::GetErResponseBodyContentErAttachments> & erAttachments) { DARABONBA_PTR_SET_VALUE(erAttachments_, erAttachments) };
    inline GetErResponseBodyContent& setErAttachments(vector<Models::GetErResponseBodyContentErAttachments> && erAttachments) { DARABONBA_PTR_SET_RVALUE(erAttachments_, erAttachments) };


    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string erId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline GetErResponseBodyContent& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // erName Field Functions 
    bool hasErName() const { return this->erName_ != nullptr;};
    void deleteErName() { this->erName_ = nullptr;};
    inline string erName() const { DARABONBA_PTR_GET_DEFAULT(erName_, "") };
    inline GetErResponseBodyContent& setErName(string erName) { DARABONBA_PTR_SET_VALUE(erName_, erName) };


    // erRouteEntrys Field Functions 
    bool hasErRouteEntrys() const { return this->erRouteEntrys_ != nullptr;};
    void deleteErRouteEntrys() { this->erRouteEntrys_ = nullptr;};
    inline const vector<Models::GetErResponseBodyContentErRouteEntrys> & erRouteEntrys() const { DARABONBA_PTR_GET_CONST(erRouteEntrys_, vector<Models::GetErResponseBodyContentErRouteEntrys>) };
    inline vector<Models::GetErResponseBodyContentErRouteEntrys> erRouteEntrys() { DARABONBA_PTR_GET(erRouteEntrys_, vector<Models::GetErResponseBodyContentErRouteEntrys>) };
    inline GetErResponseBodyContent& setErRouteEntrys(const vector<Models::GetErResponseBodyContentErRouteEntrys> & erRouteEntrys) { DARABONBA_PTR_SET_VALUE(erRouteEntrys_, erRouteEntrys) };
    inline GetErResponseBodyContent& setErRouteEntrys(vector<Models::GetErResponseBodyContentErRouteEntrys> && erRouteEntrys) { DARABONBA_PTR_SET_RVALUE(erRouteEntrys_, erRouteEntrys) };


    // erRouteMaps Field Functions 
    bool hasErRouteMaps() const { return this->erRouteMaps_ != nullptr;};
    void deleteErRouteMaps() { this->erRouteMaps_ = nullptr;};
    inline const vector<Models::GetErResponseBodyContentErRouteMaps> & erRouteMaps() const { DARABONBA_PTR_GET_CONST(erRouteMaps_, vector<Models::GetErResponseBodyContentErRouteMaps>) };
    inline vector<Models::GetErResponseBodyContentErRouteMaps> erRouteMaps() { DARABONBA_PTR_GET(erRouteMaps_, vector<Models::GetErResponseBodyContentErRouteMaps>) };
    inline GetErResponseBodyContent& setErRouteMaps(const vector<Models::GetErResponseBodyContentErRouteMaps> & erRouteMaps) { DARABONBA_PTR_SET_VALUE(erRouteMaps_, erRouteMaps) };
    inline GetErResponseBodyContent& setErRouteMaps(vector<Models::GetErResponseBodyContentErRouteMaps> && erRouteMaps) { DARABONBA_PTR_SET_RVALUE(erRouteMaps_, erRouteMaps) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetErResponseBodyContent& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // masterZoneId Field Functions 
    bool hasMasterZoneId() const { return this->masterZoneId_ != nullptr;};
    void deleteMasterZoneId() { this->masterZoneId_ = nullptr;};
    inline string masterZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterZoneId_, "") };
    inline GetErResponseBodyContent& setMasterZoneId(string masterZoneId) { DARABONBA_PTR_SET_VALUE(masterZoneId_, masterZoneId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetErResponseBodyContent& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetErResponseBodyContent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetErResponseBodyContent& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetErResponseBodyContent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetErResponseBodyContentTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetErResponseBodyContentTags>) };
    inline vector<Models::GetErResponseBodyContentTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetErResponseBodyContentTags>) };
    inline GetErResponseBodyContent& setTags(const vector<Models::GetErResponseBodyContentTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetErResponseBodyContent& setTags(vector<Models::GetErResponseBodyContentTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetErResponseBodyContent& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The time when the data address was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Description
    std::shared_ptr<string> description_ = nullptr;
    // Network instance information list
    std::shared_ptr<vector<Models::GetErResponseBodyContentErAttachments>> erAttachments_ = nullptr;
    // Lingjun HUB Instance ID
    std::shared_ptr<string> erId_ = nullptr;
    // Lingjun HUB Instance Name
    std::shared_ptr<string> erName_ = nullptr;
    // The list of route entry information.
    std::shared_ptr<vector<Models::GetErResponseBodyContentErRouteEntrys>> erRouteEntrys_ = nullptr;
    // routing policy information list
    std::shared_ptr<vector<Models::GetErResponseBodyContentErRouteMaps>> erRouteMaps_ = nullptr;
    // The time when the agent was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Primary Zone
    std::shared_ptr<string> masterZoneId_ = nullptr;
    // The message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group instance ID
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the intervention entry. Valid value:
    std::shared_ptr<string> status_ = nullptr;
    // List of Tags
    std::shared_ptr<vector<Models::GetErResponseBodyContentTags>> tags_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
