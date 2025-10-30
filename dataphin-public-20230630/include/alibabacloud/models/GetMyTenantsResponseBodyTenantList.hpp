// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMYTENANTSRESPONSEBODYTENANTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMYTENANTSRESPONSEBODYTENANTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetMyTenantsResponseBodyTenantList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMyTenantsResponseBodyTenantList& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteTime, deleteTime_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OpsTenant, opsTenant_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceLimited, resourceLimited_);
      DARABONBA_PTR_TO_JSON(TenantTypeList, tenantTypeList_);
      DARABONBA_PTR_TO_JSON(TitleType, titleType_);
      DARABONBA_PTR_TO_JSON(Visible, visible_);
    };
    friend void from_json(const Darabonba::Json& j, GetMyTenantsResponseBodyTenantList& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteTime, deleteTime_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OpsTenant, opsTenant_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceLimited, resourceLimited_);
      DARABONBA_PTR_FROM_JSON(TenantTypeList, tenantTypeList_);
      DARABONBA_PTR_FROM_JSON(TitleType, titleType_);
      DARABONBA_PTR_FROM_JSON(Visible, visible_);
    };
    GetMyTenantsResponseBodyTenantList() = default ;
    GetMyTenantsResponseBodyTenantList(const GetMyTenantsResponseBodyTenantList &) = default ;
    GetMyTenantsResponseBodyTenantList(GetMyTenantsResponseBodyTenantList &&) = default ;
    GetMyTenantsResponseBodyTenantList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMyTenantsResponseBodyTenantList() = default ;
    GetMyTenantsResponseBodyTenantList& operator=(const GetMyTenantsResponseBodyTenantList &) = default ;
    GetMyTenantsResponseBodyTenantList& operator=(GetMyTenantsResponseBodyTenantList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteTime_ == nullptr
        && return this->deleted_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->opsTenant_ == nullptr
        && return this->ownerId_ == nullptr && return this->resourceLimited_ == nullptr && return this->tenantTypeList_ == nullptr && return this->titleType_ == nullptr && return this->visible_ == nullptr; };
    // deleteTime Field Functions 
    bool hasDeleteTime() const { return this->deleteTime_ != nullptr;};
    void deleteDeleteTime() { this->deleteTime_ = nullptr;};
    inline int64_t deleteTime() const { DARABONBA_PTR_GET_DEFAULT(deleteTime_, 0L) };
    inline GetMyTenantsResponseBodyTenantList& setDeleteTime(int64_t deleteTime) { DARABONBA_PTR_SET_VALUE(deleteTime_, deleteTime) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline bool deleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
    inline GetMyTenantsResponseBodyTenantList& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMyTenantsResponseBodyTenantList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMyTenantsResponseBodyTenantList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMyTenantsResponseBodyTenantList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // opsTenant Field Functions 
    bool hasOpsTenant() const { return this->opsTenant_ != nullptr;};
    void deleteOpsTenant() { this->opsTenant_ = nullptr;};
    inline bool opsTenant() const { DARABONBA_PTR_GET_DEFAULT(opsTenant_, false) };
    inline GetMyTenantsResponseBodyTenantList& setOpsTenant(bool opsTenant) { DARABONBA_PTR_SET_VALUE(opsTenant_, opsTenant) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetMyTenantsResponseBodyTenantList& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceLimited Field Functions 
    bool hasResourceLimited() const { return this->resourceLimited_ != nullptr;};
    void deleteResourceLimited() { this->resourceLimited_ = nullptr;};
    inline bool resourceLimited() const { DARABONBA_PTR_GET_DEFAULT(resourceLimited_, false) };
    inline GetMyTenantsResponseBodyTenantList& setResourceLimited(bool resourceLimited) { DARABONBA_PTR_SET_VALUE(resourceLimited_, resourceLimited) };


    // tenantTypeList Field Functions 
    bool hasTenantTypeList() const { return this->tenantTypeList_ != nullptr;};
    void deleteTenantTypeList() { this->tenantTypeList_ = nullptr;};
    inline const vector<string> & tenantTypeList() const { DARABONBA_PTR_GET_CONST(tenantTypeList_, vector<string>) };
    inline vector<string> tenantTypeList() { DARABONBA_PTR_GET(tenantTypeList_, vector<string>) };
    inline GetMyTenantsResponseBodyTenantList& setTenantTypeList(const vector<string> & tenantTypeList) { DARABONBA_PTR_SET_VALUE(tenantTypeList_, tenantTypeList) };
    inline GetMyTenantsResponseBodyTenantList& setTenantTypeList(vector<string> && tenantTypeList) { DARABONBA_PTR_SET_RVALUE(tenantTypeList_, tenantTypeList) };


    // titleType Field Functions 
    bool hasTitleType() const { return this->titleType_ != nullptr;};
    void deleteTitleType() { this->titleType_ = nullptr;};
    inline string titleType() const { DARABONBA_PTR_GET_DEFAULT(titleType_, "") };
    inline GetMyTenantsResponseBodyTenantList& setTitleType(string titleType) { DARABONBA_PTR_SET_VALUE(titleType_, titleType) };


    // visible Field Functions 
    bool hasVisible() const { return this->visible_ != nullptr;};
    void deleteVisible() { this->visible_ = nullptr;};
    inline bool visible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
    inline GetMyTenantsResponseBodyTenantList& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


  protected:
    std::shared_ptr<int64_t> deleteTime_ = nullptr;
    std::shared_ptr<bool> deleted_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> opsTenant_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<bool> resourceLimited_ = nullptr;
    std::shared_ptr<vector<string>> tenantTypeList_ = nullptr;
    std::shared_ptr<string> titleType_ = nullptr;
    std::shared_ptr<bool> visible_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
