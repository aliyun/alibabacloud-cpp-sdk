// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WITHDRAWALLUSERGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WITHDRAWALLUSERGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class WithdrawAllUserGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WithdrawAllUserGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, WithdrawAllUserGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    WithdrawAllUserGroupsRequest() = default ;
    WithdrawAllUserGroupsRequest(const WithdrawAllUserGroupsRequest &) = default ;
    WithdrawAllUserGroupsRequest(WithdrawAllUserGroupsRequest &&) = default ;
    WithdrawAllUserGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WithdrawAllUserGroupsRequest() = default ;
    WithdrawAllUserGroupsRequest& operator=(const WithdrawAllUserGroupsRequest &) = default ;
    WithdrawAllUserGroupsRequest& operator=(WithdrawAllUserGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userId_ != nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline WithdrawAllUserGroupsRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the user. The UserID of the Quick BI is used instead of the UID of Alibaba Cloud.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
