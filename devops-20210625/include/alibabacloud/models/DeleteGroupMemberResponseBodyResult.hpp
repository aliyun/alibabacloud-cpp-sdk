// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGROUPMEMBERRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DELETEGROUPMEMBERRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class DeleteGroupMemberResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGroupMemberResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_TO_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(memberType, memberType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGroupMemberResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_FROM_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(memberType, memberType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    DeleteGroupMemberResponseBodyResult() = default ;
    DeleteGroupMemberResponseBodyResult(const DeleteGroupMemberResponseBodyResult &) = default ;
    DeleteGroupMemberResponseBodyResult(DeleteGroupMemberResponseBodyResult &&) = default ;
    DeleteGroupMemberResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGroupMemberResponseBodyResult() = default ;
    DeleteGroupMemberResponseBodyResult& operator=(const DeleteGroupMemberResponseBodyResult &) = default ;
    DeleteGroupMemberResponseBodyResult& operator=(DeleteGroupMemberResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLevel_ == nullptr
        && return this->avatarUrl_ == nullptr && return this->id_ == nullptr && return this->memberType_ == nullptr && return this->name_ == nullptr && return this->sourceId_ == nullptr
        && return this->state_ == nullptr && return this->username_ == nullptr; };
    // accessLevel Field Functions 
    bool hasAccessLevel() const { return this->accessLevel_ != nullptr;};
    void deleteAccessLevel() { this->accessLevel_ = nullptr;};
    inline int32_t accessLevel() const { DARABONBA_PTR_GET_DEFAULT(accessLevel_, 0) };
    inline DeleteGroupMemberResponseBodyResult& setAccessLevel(int32_t accessLevel) { DARABONBA_PTR_SET_VALUE(accessLevel_, accessLevel) };


    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline DeleteGroupMemberResponseBodyResult& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteGroupMemberResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // memberType Field Functions 
    bool hasMemberType() const { return this->memberType_ != nullptr;};
    void deleteMemberType() { this->memberType_ = nullptr;};
    inline string memberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
    inline DeleteGroupMemberResponseBodyResult& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteGroupMemberResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline DeleteGroupMemberResponseBodyResult& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DeleteGroupMemberResponseBodyResult& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DeleteGroupMemberResponseBodyResult& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<int32_t> accessLevel_ = nullptr;
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> memberType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
