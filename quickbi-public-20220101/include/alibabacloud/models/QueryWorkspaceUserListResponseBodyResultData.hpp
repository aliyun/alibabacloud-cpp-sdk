// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKSPACEUSERLISTRESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKSPACEUSERLISTRESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryWorkspaceUserListResponseBodyResultDataRole.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryWorkspaceUserListResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorkspaceUserListResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorkspaceUserListResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryWorkspaceUserListResponseBodyResultData() = default ;
    QueryWorkspaceUserListResponseBodyResultData(const QueryWorkspaceUserListResponseBodyResultData &) = default ;
    QueryWorkspaceUserListResponseBodyResultData(QueryWorkspaceUserListResponseBodyResultData &&) = default ;
    QueryWorkspaceUserListResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorkspaceUserListResponseBodyResultData() = default ;
    QueryWorkspaceUserListResponseBodyResultData& operator=(const QueryWorkspaceUserListResponseBodyResultData &) = default ;
    QueryWorkspaceUserListResponseBodyResultData& operator=(QueryWorkspaceUserListResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->accountName_ != nullptr && this->nickName_ != nullptr && this->role_ != nullptr && this->userId_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline QueryWorkspaceUserListResponseBodyResultData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline QueryWorkspaceUserListResponseBodyResultData& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline QueryWorkspaceUserListResponseBodyResultData& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline const Models::QueryWorkspaceUserListResponseBodyResultDataRole & role() const { DARABONBA_PTR_GET_CONST(role_, Models::QueryWorkspaceUserListResponseBodyResultDataRole) };
    inline Models::QueryWorkspaceUserListResponseBodyResultDataRole role() { DARABONBA_PTR_GET(role_, Models::QueryWorkspaceUserListResponseBodyResultDataRole) };
    inline QueryWorkspaceUserListResponseBodyResultData& setRole(const Models::QueryWorkspaceUserListResponseBodyResultDataRole & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
    inline QueryWorkspaceUserListResponseBodyResultData& setRole(Models::QueryWorkspaceUserListResponseBodyResultDataRole && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryWorkspaceUserListResponseBodyResultData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Alibaba Cloud account ID.
    std::shared_ptr<string> accountId_ = nullptr;
    // Alibaba Cloud account name.
    std::shared_ptr<string> accountName_ = nullptr;
    // Nickname.
    std::shared_ptr<string> nickName_ = nullptr;
    // Preset role information for the workspace member.
    std::shared_ptr<Models::QueryWorkspaceUserListResponseBodyResultDataRole> role_ = nullptr;
    // Quick BI user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
