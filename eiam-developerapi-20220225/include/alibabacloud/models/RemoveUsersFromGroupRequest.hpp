// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERSFROMGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERSFROMGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class RemoveUsersFromGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUsersFromGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(userIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUsersFromGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(userIds, userIds_);
    };
    RemoveUsersFromGroupRequest() = default ;
    RemoveUsersFromGroupRequest(const RemoveUsersFromGroupRequest &) = default ;
    RemoveUsersFromGroupRequest(RemoveUsersFromGroupRequest &&) = default ;
    RemoveUsersFromGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUsersFromGroupRequest() = default ;
    RemoveUsersFromGroupRequest& operator=(const RemoveUsersFromGroupRequest &) = default ;
    RemoveUsersFromGroupRequest& operator=(RemoveUsersFromGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userIds_ == nullptr; };
    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
    inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
    inline RemoveUsersFromGroupRequest& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline RemoveUsersFromGroupRequest& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


  protected:
    // The account IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> userIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
