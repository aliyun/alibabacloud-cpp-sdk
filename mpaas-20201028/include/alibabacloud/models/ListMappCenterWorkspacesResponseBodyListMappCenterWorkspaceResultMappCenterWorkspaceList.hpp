// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMAPPCENTERWORKSPACESRESPONSEBODYLISTMAPPCENTERWORKSPACERESULTMAPPCENTERWORKSPACELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMAPPCENTERWORKSPACESRESPONSEBODYLISTMAPPCENTERWORKSPACERESULTMAPPCENTERWORKSPACELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& obj) { 
      DARABONBA_PTR_TO_JSON(CompatibleId, compatibleId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& obj) { 
      DARABONBA_PTR_FROM_JSON(CompatibleId, compatibleId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList() = default ;
    ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList(const ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList &) = default ;
    ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList(ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList &&) = default ;
    ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList() = default ;
    ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& operator=(const ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList &) = default ;
    ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& operator=(ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->compatibleId_ != nullptr
        && this->createTime_ != nullptr && this->displayName_ != nullptr && this->id_ != nullptr && this->region_ != nullptr && this->status_ != nullptr
        && this->tenantId_ != nullptr && this->type_ != nullptr && this->uid_ != nullptr && this->updateTime_ != nullptr && this->workspaceId_ != nullptr
        && this->zones_ != nullptr; };
    // compatibleId Field Functions 
    bool hasCompatibleId() const { return this->compatibleId_ != nullptr;};
    void deleteCompatibleId() { this->compatibleId_ = nullptr;};
    inline string compatibleId() const { DARABONBA_PTR_GET_DEFAULT(compatibleId_, "") };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& setCompatibleId(string compatibleId) { DARABONBA_PTR_SET_VALUE(compatibleId_, compatibleId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline string zones() const { DARABONBA_PTR_GET_DEFAULT(zones_, "") };
    inline ListMappCenterWorkspacesResponseBodyListMappCenterWorkspaceResultMappCenterWorkspaceList& setZones(string zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };


  protected:
    std::shared_ptr<string> compatibleId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int64_t> uid_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
