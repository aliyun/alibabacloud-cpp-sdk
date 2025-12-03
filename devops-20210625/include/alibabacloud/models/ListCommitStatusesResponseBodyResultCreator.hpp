// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMITSTATUSESRESPONSEBODYRESULTCREATOR_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMITSTATUSESRESPONSEBODYRESULTCREATOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListCommitStatusesResponseBodyResultCreator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommitStatusesResponseBodyResultCreator& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_TO_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(login, login_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListCommitStatusesResponseBodyResultCreator& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_FROM_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(login, login_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListCommitStatusesResponseBodyResultCreator() = default ;
    ListCommitStatusesResponseBodyResultCreator(const ListCommitStatusesResponseBodyResultCreator &) = default ;
    ListCommitStatusesResponseBodyResultCreator(ListCommitStatusesResponseBodyResultCreator &&) = default ;
    ListCommitStatusesResponseBodyResultCreator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommitStatusesResponseBodyResultCreator() = default ;
    ListCommitStatusesResponseBodyResultCreator& operator=(const ListCommitStatusesResponseBodyResultCreator &) = default ;
    ListCommitStatusesResponseBodyResultCreator& operator=(ListCommitStatusesResponseBodyResultCreator &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunPk_ == nullptr
        && return this->avatarUrl_ == nullptr && return this->login_ == nullptr && return this->type_ == nullptr; };
    // aliyunPk Field Functions 
    bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
    void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
    inline string aliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
    inline ListCommitStatusesResponseBodyResultCreator& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline ListCommitStatusesResponseBodyResultCreator& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // login Field Functions 
    bool hasLogin() const { return this->login_ != nullptr;};
    void deleteLogin() { this->login_ = nullptr;};
    inline string login() const { DARABONBA_PTR_GET_DEFAULT(login_, "") };
    inline ListCommitStatusesResponseBodyResultCreator& setLogin(string login) { DARABONBA_PTR_SET_VALUE(login_, login) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCommitStatusesResponseBodyResultCreator& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> aliyunPk_ = nullptr;
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> login_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
