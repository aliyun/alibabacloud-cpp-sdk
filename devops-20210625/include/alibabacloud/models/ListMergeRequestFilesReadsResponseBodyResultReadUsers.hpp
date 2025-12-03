// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMERGEREQUESTFILESREADSRESPONSEBODYRESULTREADUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTMERGEREQUESTFILESREADSRESPONSEBODYRESULTREADUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListMergeRequestFilesReadsResponseBodyResultReadUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMergeRequestFilesReadsResponseBodyResultReadUsers& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_TO_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListMergeRequestFilesReadsResponseBodyResultReadUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_FROM_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    ListMergeRequestFilesReadsResponseBodyResultReadUsers() = default ;
    ListMergeRequestFilesReadsResponseBodyResultReadUsers(const ListMergeRequestFilesReadsResponseBodyResultReadUsers &) = default ;
    ListMergeRequestFilesReadsResponseBodyResultReadUsers(ListMergeRequestFilesReadsResponseBodyResultReadUsers &&) = default ;
    ListMergeRequestFilesReadsResponseBodyResultReadUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMergeRequestFilesReadsResponseBodyResultReadUsers() = default ;
    ListMergeRequestFilesReadsResponseBodyResultReadUsers& operator=(const ListMergeRequestFilesReadsResponseBodyResultReadUsers &) = default ;
    ListMergeRequestFilesReadsResponseBodyResultReadUsers& operator=(ListMergeRequestFilesReadsResponseBodyResultReadUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunPk_ == nullptr
        && return this->avatarUrl_ == nullptr && return this->email_ == nullptr && return this->name_ == nullptr && return this->state_ == nullptr && return this->username_ == nullptr; };
    // aliyunPk Field Functions 
    bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
    void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
    inline string aliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
    inline ListMergeRequestFilesReadsResponseBodyResultReadUsers& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline ListMergeRequestFilesReadsResponseBodyResultReadUsers& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListMergeRequestFilesReadsResponseBodyResultReadUsers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMergeRequestFilesReadsResponseBodyResultReadUsers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListMergeRequestFilesReadsResponseBodyResultReadUsers& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListMergeRequestFilesReadsResponseBodyResultReadUsers& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> aliyunPk_ = nullptr;
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
