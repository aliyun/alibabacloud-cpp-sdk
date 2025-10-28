// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODYRESOURCEGROUPLISTRESGROUPENTITY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODYRESOURCEGROUPLISTRESGROUPENTITY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList.hpp>
#include <alibabacloud/models/ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListResourceGroupResponseBodyResourceGroupListResGroupEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupResponseBodyResourceGroupListResGroupEntity& obj) { 
      DARABONBA_PTR_TO_JSON(AdminUserId, adminUserId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlbList, slbList_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(ecsList, ecsList_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupResponseBodyResourceGroupListResGroupEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminUserId, adminUserId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlbList, slbList_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(ecsList, ecsList_);
    };
    ListResourceGroupResponseBodyResourceGroupListResGroupEntity() = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntity(const ListResourceGroupResponseBodyResourceGroupListResGroupEntity &) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntity(ListResourceGroupResponseBodyResourceGroupListResGroupEntity &&) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupResponseBodyResourceGroupListResGroupEntity() = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntity& operator=(const ListResourceGroupResponseBodyResourceGroupListResGroupEntity &) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntity& operator=(ListResourceGroupResponseBodyResourceGroupListResGroupEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminUserId_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr
        && return this->slbList_ == nullptr && return this->updateTime_ == nullptr && return this->ecsList_ == nullptr; };
    // adminUserId Field Functions 
    bool hasAdminUserId() const { return this->adminUserId_ != nullptr;};
    void deleteAdminUserId() { this->adminUserId_ = nullptr;};
    inline string adminUserId() const { DARABONBA_PTR_GET_DEFAULT(adminUserId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntity& setAdminUserId(string adminUserId) { DARABONBA_PTR_SET_VALUE(adminUserId_, adminUserId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntity& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntity& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntity& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntity& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slbList Field Functions 
    bool hasSlbList() const { return this->slbList_ != nullptr;};
    void deleteSlbList() { this->slbList_ = nullptr;};
    inline const Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList & slbList() const { DARABONBA_PTR_GET_CONST(slbList_, Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList) };
    inline Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList slbList() { DARABONBA_PTR_GET(slbList_, Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntity& setSlbList(const Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList & slbList) { DARABONBA_PTR_SET_VALUE(slbList_, slbList) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntity& setSlbList(Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList && slbList) { DARABONBA_PTR_SET_RVALUE(slbList_, slbList) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntity& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // ecsList Field Functions 
    bool hasEcsList() const { return this->ecsList_ != nullptr;};
    void deleteEcsList() { this->ecsList_ = nullptr;};
    inline const Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList & ecsList() const { DARABONBA_PTR_GET_CONST(ecsList_, Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList) };
    inline Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList ecsList() { DARABONBA_PTR_GET(ecsList_, Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntity& setEcsList(const Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList & ecsList) { DARABONBA_PTR_SET_VALUE(ecsList_, ecsList) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntity& setEcsList(Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList && ecsList) { DARABONBA_PTR_SET_RVALUE(ecsList_, ecsList) };


  protected:
    // The UID of the Alibaba Cloud account.
    std::shared_ptr<string> adminUserId_ = nullptr;
    // The time when the resource group was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the resource group.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region where the resource group belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The Server Load Balancer (SLB) instances.
    std::shared_ptr<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbList> slbList_ = nullptr;
    // The time when the resource group was updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The Elastic Compute Service (ECS) instances.
    std::shared_ptr<Models::ListResourceGroupResponseBodyResourceGroupListResGroupEntityEcsList> ecsList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
