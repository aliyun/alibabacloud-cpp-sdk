// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMERGEREQUESTCOMMENTSRESPONSEBODYRESULTCHILDCOMMENTSFINALCHILDCOMMENTSAUTHOR_HPP_
#define ALIBABACLOUD_MODELS_LISTMERGEREQUESTCOMMENTSRESPONSEBODYRESULTCHILDCOMMENTSFINALCHILDCOMMENTSAUTHOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_TO_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_FROM_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor() = default ;
    ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor(const ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor &) = default ;
    ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor(ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor &&) = default ;
    ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor() = default ;
    ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor& operator=(const ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor &) = default ;
    ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor& operator=(ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunPk_ == nullptr
        && return this->avatarUrl_ == nullptr && return this->email_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->state_ == nullptr
        && return this->username_ == nullptr; };
    // aliyunPk Field Functions 
    bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
    void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
    inline string aliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
    inline ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListMergeRequestCommentsResponseBodyResultChildCommentsFinalChildCommentsAuthor& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> aliyunPk_ = nullptr;
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
