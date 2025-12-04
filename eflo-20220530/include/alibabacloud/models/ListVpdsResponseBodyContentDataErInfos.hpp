// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPDSRESPONSEBODYCONTENTDATAERINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTVPDSRESPONSEBODYCONTENTDATAERINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListVpdsResponseBodyContentDataErInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpdsResponseBodyContentDataErInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Connections, connections_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(ErName, erName_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RouteMaps, routeMaps_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpdsResponseBodyContentDataErInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Connections, connections_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(ErName, erName_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RouteMaps, routeMaps_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ListVpdsResponseBodyContentDataErInfos() = default ;
    ListVpdsResponseBodyContentDataErInfos(const ListVpdsResponseBodyContentDataErInfos &) = default ;
    ListVpdsResponseBodyContentDataErInfos(ListVpdsResponseBodyContentDataErInfos &&) = default ;
    ListVpdsResponseBodyContentDataErInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpdsResponseBodyContentDataErInfos() = default ;
    ListVpdsResponseBodyContentDataErInfos& operator=(const ListVpdsResponseBodyContentDataErInfos &) = default ;
    ListVpdsResponseBodyContentDataErInfos& operator=(ListVpdsResponseBodyContentDataErInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connections_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->erId_ == nullptr && return this->erName_ == nullptr && return this->gmtModified_ == nullptr
        && return this->masterZoneId_ == nullptr && return this->message_ == nullptr && return this->regionId_ == nullptr && return this->routeMaps_ == nullptr && return this->status_ == nullptr
        && return this->tenantId_ == nullptr; };
    // connections Field Functions 
    bool hasConnections() const { return this->connections_ != nullptr;};
    void deleteConnections() { this->connections_ = nullptr;};
    inline int64_t connections() const { DARABONBA_PTR_GET_DEFAULT(connections_, 0L) };
    inline ListVpdsResponseBodyContentDataErInfos& setConnections(int64_t connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListVpdsResponseBodyContentDataErInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListVpdsResponseBodyContentDataErInfos& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string erId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline ListVpdsResponseBodyContentDataErInfos& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // erName Field Functions 
    bool hasErName() const { return this->erName_ != nullptr;};
    void deleteErName() { this->erName_ = nullptr;};
    inline string erName() const { DARABONBA_PTR_GET_DEFAULT(erName_, "") };
    inline ListVpdsResponseBodyContentDataErInfos& setErName(string erName) { DARABONBA_PTR_SET_VALUE(erName_, erName) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListVpdsResponseBodyContentDataErInfos& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // masterZoneId Field Functions 
    bool hasMasterZoneId() const { return this->masterZoneId_ != nullptr;};
    void deleteMasterZoneId() { this->masterZoneId_ = nullptr;};
    inline string masterZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterZoneId_, "") };
    inline ListVpdsResponseBodyContentDataErInfos& setMasterZoneId(string masterZoneId) { DARABONBA_PTR_SET_VALUE(masterZoneId_, masterZoneId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVpdsResponseBodyContentDataErInfos& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpdsResponseBodyContentDataErInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // routeMaps Field Functions 
    bool hasRouteMaps() const { return this->routeMaps_ != nullptr;};
    void deleteRouteMaps() { this->routeMaps_ = nullptr;};
    inline int64_t routeMaps() const { DARABONBA_PTR_GET_DEFAULT(routeMaps_, 0L) };
    inline ListVpdsResponseBodyContentDataErInfos& setRouteMaps(int64_t routeMaps) { DARABONBA_PTR_SET_VALUE(routeMaps_, routeMaps) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListVpdsResponseBodyContentDataErInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListVpdsResponseBodyContentDataErInfos& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The number of connections.
    std::shared_ptr<int64_t> connections_ = nullptr;
    // The time when the activation code was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the synchronization task.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the Elastic Router (ER) instance.
    std::shared_ptr<string> erId_ = nullptr;
    // The name of the Lingjun HUB(ER) instance.
    std::shared_ptr<string> erName_ = nullptr;
    // The time when the O\\&M task was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The primary zone.
    std::shared_ptr<string> masterZoneId_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The supported region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of routing policy.
    std::shared_ptr<int64_t> routeMaps_ = nullptr;
    // The task status.
    std::shared_ptr<string> status_ = nullptr;
    // The tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
