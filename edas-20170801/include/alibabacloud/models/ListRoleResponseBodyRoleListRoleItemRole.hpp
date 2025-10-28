// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLERESPONSEBODYROLELISTROLEITEMROLE_HPP_
#define ALIBABACLOUD_MODELS_LISTROLERESPONSEBODYROLELISTROLEITEMROLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListRoleResponseBodyRoleListRoleItemRole : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoleResponseBodyRoleListRoleItemRole& obj) { 
      DARABONBA_PTR_TO_JSON(AdminUserId, adminUserId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoleResponseBodyRoleListRoleItemRole& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminUserId, adminUserId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListRoleResponseBodyRoleListRoleItemRole() = default ;
    ListRoleResponseBodyRoleListRoleItemRole(const ListRoleResponseBodyRoleListRoleItemRole &) = default ;
    ListRoleResponseBodyRoleListRoleItemRole(ListRoleResponseBodyRoleListRoleItemRole &&) = default ;
    ListRoleResponseBodyRoleListRoleItemRole(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoleResponseBodyRoleListRoleItemRole() = default ;
    ListRoleResponseBodyRoleListRoleItemRole& operator=(const ListRoleResponseBodyRoleListRoleItemRole &) = default ;
    ListRoleResponseBodyRoleListRoleItemRole& operator=(ListRoleResponseBodyRoleListRoleItemRole &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminUserId_ == nullptr
        && return this->createTime_ == nullptr && return this->id_ == nullptr && return this->isDefault_ == nullptr && return this->name_ == nullptr && return this->updateTime_ == nullptr; };
    // adminUserId Field Functions 
    bool hasAdminUserId() const { return this->adminUserId_ != nullptr;};
    void deleteAdminUserId() { this->adminUserId_ = nullptr;};
    inline string adminUserId() const { DARABONBA_PTR_GET_DEFAULT(adminUserId_, "") };
    inline ListRoleResponseBodyRoleListRoleItemRole& setAdminUserId(string adminUserId) { DARABONBA_PTR_SET_VALUE(adminUserId_, adminUserId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListRoleResponseBodyRoleListRoleItemRole& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ListRoleResponseBodyRoleListRoleItemRole& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListRoleResponseBodyRoleListRoleItemRole& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRoleResponseBodyRoleListRoleItemRole& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListRoleResponseBodyRoleListRoleItemRole& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> adminUserId_ = nullptr;
    // The timestamp when the role was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the role.
    std::shared_ptr<int32_t> id_ = nullptr;
    // Indicates whether the role is a default role.
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The name of the role.
    std::shared_ptr<string> name_ = nullptr;
    // The timestamp when the role was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
