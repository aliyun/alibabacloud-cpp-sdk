// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSITORYMEMBERWITHINHERITEDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSITORYMEMBERWITHINHERITEDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRepositoryMemberWithInheritedResponseBodyResultInherited.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListRepositoryMemberWithInheritedResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepositoryMemberWithInheritedResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_TO_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(inherited, inherited_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepositoryMemberWithInheritedResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_FROM_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(inherited, inherited_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    ListRepositoryMemberWithInheritedResponseBodyResult() = default ;
    ListRepositoryMemberWithInheritedResponseBodyResult(const ListRepositoryMemberWithInheritedResponseBodyResult &) = default ;
    ListRepositoryMemberWithInheritedResponseBodyResult(ListRepositoryMemberWithInheritedResponseBodyResult &&) = default ;
    ListRepositoryMemberWithInheritedResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepositoryMemberWithInheritedResponseBodyResult() = default ;
    ListRepositoryMemberWithInheritedResponseBodyResult& operator=(const ListRepositoryMemberWithInheritedResponseBodyResult &) = default ;
    ListRepositoryMemberWithInheritedResponseBodyResult& operator=(ListRepositoryMemberWithInheritedResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLevel_ == nullptr
        && return this->avatarUrl_ == nullptr && return this->email_ == nullptr && return this->id_ == nullptr && return this->inherited_ == nullptr && return this->name_ == nullptr
        && return this->state_ == nullptr && return this->username_ == nullptr; };
    // accessLevel Field Functions 
    bool hasAccessLevel() const { return this->accessLevel_ != nullptr;};
    void deleteAccessLevel() { this->accessLevel_ = nullptr;};
    inline int32_t accessLevel() const { DARABONBA_PTR_GET_DEFAULT(accessLevel_, 0) };
    inline ListRepositoryMemberWithInheritedResponseBodyResult& setAccessLevel(int32_t accessLevel) { DARABONBA_PTR_SET_VALUE(accessLevel_, accessLevel) };


    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline ListRepositoryMemberWithInheritedResponseBodyResult& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListRepositoryMemberWithInheritedResponseBodyResult& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListRepositoryMemberWithInheritedResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inherited Field Functions 
    bool hasInherited() const { return this->inherited_ != nullptr;};
    void deleteInherited() { this->inherited_ = nullptr;};
    inline const Models::ListRepositoryMemberWithInheritedResponseBodyResultInherited & inherited() const { DARABONBA_PTR_GET_CONST(inherited_, Models::ListRepositoryMemberWithInheritedResponseBodyResultInherited) };
    inline Models::ListRepositoryMemberWithInheritedResponseBodyResultInherited inherited() { DARABONBA_PTR_GET(inherited_, Models::ListRepositoryMemberWithInheritedResponseBodyResultInherited) };
    inline ListRepositoryMemberWithInheritedResponseBodyResult& setInherited(const Models::ListRepositoryMemberWithInheritedResponseBodyResultInherited & inherited) { DARABONBA_PTR_SET_VALUE(inherited_, inherited) };
    inline ListRepositoryMemberWithInheritedResponseBodyResult& setInherited(Models::ListRepositoryMemberWithInheritedResponseBodyResultInherited && inherited) { DARABONBA_PTR_SET_RVALUE(inherited_, inherited) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRepositoryMemberWithInheritedResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListRepositoryMemberWithInheritedResponseBodyResult& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListRepositoryMemberWithInheritedResponseBodyResult& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<int32_t> accessLevel_ = nullptr;
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<Models::ListRepositoryMemberWithInheritedResponseBodyResultInherited> inherited_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
