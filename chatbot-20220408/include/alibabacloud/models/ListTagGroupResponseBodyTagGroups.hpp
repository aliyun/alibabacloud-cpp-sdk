// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGGROUPRESPONSEBODYTAGGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGGROUPRESPONSEBODYTAGGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListTagGroupResponseBodyTagGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagGroupResponseBodyTagGroups& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(DefaultTagId, defaultTagId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUserId, modifyUserId_);
      DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagGroupResponseBodyTagGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(DefaultTagId, defaultTagId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUserId, modifyUserId_);
      DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
    };
    ListTagGroupResponseBodyTagGroups() = default ;
    ListTagGroupResponseBodyTagGroups(const ListTagGroupResponseBodyTagGroups &) = default ;
    ListTagGroupResponseBodyTagGroups(ListTagGroupResponseBodyTagGroups &&) = default ;
    ListTagGroupResponseBodyTagGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagGroupResponseBodyTagGroups() = default ;
    ListTagGroupResponseBodyTagGroups& operator=(const ListTagGroupResponseBodyTagGroups &) = default ;
    ListTagGroupResponseBodyTagGroups& operator=(ListTagGroupResponseBodyTagGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->createUserId_ == nullptr && return this->createUserName_ == nullptr && return this->defaultTagId_ == nullptr && return this->groupName_ == nullptr && return this->id_ == nullptr
        && return this->modifyTime_ == nullptr && return this->modifyUserId_ == nullptr && return this->modifyUserName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListTagGroupResponseBodyTagGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline int64_t createUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, 0L) };
    inline ListTagGroupResponseBodyTagGroups& setCreateUserId(int64_t createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline ListTagGroupResponseBodyTagGroups& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // defaultTagId Field Functions 
    bool hasDefaultTagId() const { return this->defaultTagId_ != nullptr;};
    void deleteDefaultTagId() { this->defaultTagId_ = nullptr;};
    inline int64_t defaultTagId() const { DARABONBA_PTR_GET_DEFAULT(defaultTagId_, 0L) };
    inline ListTagGroupResponseBodyTagGroups& setDefaultTagId(int64_t defaultTagId) { DARABONBA_PTR_SET_VALUE(defaultTagId_, defaultTagId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListTagGroupResponseBodyTagGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListTagGroupResponseBodyTagGroups& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListTagGroupResponseBodyTagGroups& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUserId Field Functions 
    bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
    void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
    inline int64_t modifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, 0L) };
    inline ListTagGroupResponseBodyTagGroups& setModifyUserId(int64_t modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string modifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline ListTagGroupResponseBodyTagGroups& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> createUserId_ = nullptr;
    std::shared_ptr<string> createUserName_ = nullptr;
    std::shared_ptr<int64_t> defaultTagId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<int64_t> modifyUserId_ = nullptr;
    std::shared_ptr<string> modifyUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
