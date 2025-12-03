// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROTECTEDBRANCHESRESPONSEBODYRESULTALLOWMERGEUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTPROTECTEDBRANCHESRESPONSEBODYRESULTALLOWMERGEUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListProtectedBranchesResponseBodyResultAllowMergeUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProtectedBranchesResponseBodyResultAllowMergeUsers& obj) { 
      DARABONBA_PTR_TO_JSON(avatar, avatar_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListProtectedBranchesResponseBodyResultAllowMergeUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    ListProtectedBranchesResponseBodyResultAllowMergeUsers() = default ;
    ListProtectedBranchesResponseBodyResultAllowMergeUsers(const ListProtectedBranchesResponseBodyResultAllowMergeUsers &) = default ;
    ListProtectedBranchesResponseBodyResultAllowMergeUsers(ListProtectedBranchesResponseBodyResultAllowMergeUsers &&) = default ;
    ListProtectedBranchesResponseBodyResultAllowMergeUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProtectedBranchesResponseBodyResultAllowMergeUsers() = default ;
    ListProtectedBranchesResponseBodyResultAllowMergeUsers& operator=(const ListProtectedBranchesResponseBodyResultAllowMergeUsers &) = default ;
    ListProtectedBranchesResponseBodyResultAllowMergeUsers& operator=(ListProtectedBranchesResponseBodyResultAllowMergeUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatar_ == nullptr
        && return this->email_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->username_ == nullptr; };
    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline ListProtectedBranchesResponseBodyResultAllowMergeUsers& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListProtectedBranchesResponseBodyResultAllowMergeUsers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListProtectedBranchesResponseBodyResultAllowMergeUsers& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProtectedBranchesResponseBodyResultAllowMergeUsers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListProtectedBranchesResponseBodyResultAllowMergeUsers& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> avatar_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
