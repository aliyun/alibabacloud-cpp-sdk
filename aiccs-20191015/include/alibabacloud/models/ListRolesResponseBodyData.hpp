// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListRolesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRolesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BuId, buId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RoleGroupId, roleGroupId_);
      DARABONBA_PTR_TO_JSON(RoleGroupName, roleGroupName_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListRolesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BuId, buId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RoleGroupId, roleGroupId_);
      DARABONBA_PTR_FROM_JSON(RoleGroupName, roleGroupName_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListRolesResponseBodyData() = default ;
    ListRolesResponseBodyData(const ListRolesResponseBodyData &) = default ;
    ListRolesResponseBodyData(ListRolesResponseBodyData &&) = default ;
    ListRolesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRolesResponseBodyData() = default ;
    ListRolesResponseBodyData& operator=(const ListRolesResponseBodyData &) = default ;
    ListRolesResponseBodyData& operator=(ListRolesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buId_ == nullptr
        && return this->code_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->roleGroupId_ == nullptr && return this->roleGroupName_ == nullptr
        && return this->roleId_ == nullptr && return this->title_ == nullptr; };
    // buId Field Functions 
    bool hasBuId() const { return this->buId_ != nullptr;};
    void deleteBuId() { this->buId_ = nullptr;};
    inline int64_t buId() const { DARABONBA_PTR_GET_DEFAULT(buId_, 0L) };
    inline ListRolesResponseBodyData& setBuId(int64_t buId) { DARABONBA_PTR_SET_VALUE(buId_, buId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRolesResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListRolesResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListRolesResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // roleGroupId Field Functions 
    bool hasRoleGroupId() const { return this->roleGroupId_ != nullptr;};
    void deleteRoleGroupId() { this->roleGroupId_ = nullptr;};
    inline int64_t roleGroupId() const { DARABONBA_PTR_GET_DEFAULT(roleGroupId_, 0L) };
    inline ListRolesResponseBodyData& setRoleGroupId(int64_t roleGroupId) { DARABONBA_PTR_SET_VALUE(roleGroupId_, roleGroupId) };


    // roleGroupName Field Functions 
    bool hasRoleGroupName() const { return this->roleGroupName_ != nullptr;};
    void deleteRoleGroupName() { this->roleGroupName_ = nullptr;};
    inline string roleGroupName() const { DARABONBA_PTR_GET_DEFAULT(roleGroupName_, "") };
    inline ListRolesResponseBodyData& setRoleGroupName(string roleGroupName) { DARABONBA_PTR_SET_VALUE(roleGroupName_, roleGroupName) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline ListRolesResponseBodyData& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListRolesResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<int64_t> buId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> roleGroupId_ = nullptr;
    std::shared_ptr<string> roleGroupName_ = nullptr;
    std::shared_ptr<int64_t> roleId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
