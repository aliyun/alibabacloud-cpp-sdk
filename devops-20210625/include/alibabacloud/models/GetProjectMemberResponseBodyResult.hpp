// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTMEMBERRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTMEMBERRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetProjectMemberResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectMemberResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_TO_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectMemberResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_FROM_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetProjectMemberResponseBodyResult() = default ;
    GetProjectMemberResponseBodyResult(const GetProjectMemberResponseBodyResult &) = default ;
    GetProjectMemberResponseBodyResult(GetProjectMemberResponseBodyResult &&) = default ;
    GetProjectMemberResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectMemberResponseBodyResult() = default ;
    GetProjectMemberResponseBodyResult& operator=(const GetProjectMemberResponseBodyResult &) = default ;
    GetProjectMemberResponseBodyResult& operator=(GetProjectMemberResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLevel_ == nullptr
        && return this->avatarUrl_ == nullptr && return this->email_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr; };
    // accessLevel Field Functions 
    bool hasAccessLevel() const { return this->accessLevel_ != nullptr;};
    void deleteAccessLevel() { this->accessLevel_ = nullptr;};
    inline int32_t accessLevel() const { DARABONBA_PTR_GET_DEFAULT(accessLevel_, 0) };
    inline GetProjectMemberResponseBodyResult& setAccessLevel(int32_t accessLevel) { DARABONBA_PTR_SET_VALUE(accessLevel_, accessLevel) };


    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline GetProjectMemberResponseBodyResult& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetProjectMemberResponseBodyResult& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetProjectMemberResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetProjectMemberResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<int32_t> accessLevel_ = nullptr;
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
