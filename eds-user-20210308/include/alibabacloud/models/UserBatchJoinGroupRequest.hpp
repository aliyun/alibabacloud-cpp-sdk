// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERBATCHJOINGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_USERBATCHJOINGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class UserBatchJoinGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserBatchJoinGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, UserBatchJoinGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
    };
    UserBatchJoinGroupRequest() = default ;
    UserBatchJoinGroupRequest(const UserBatchJoinGroupRequest &) = default ;
    UserBatchJoinGroupRequest(UserBatchJoinGroupRequest &&) = default ;
    UserBatchJoinGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserBatchJoinGroupRequest() = default ;
    UserBatchJoinGroupRequest& operator=(const UserBatchJoinGroupRequest &) = default ;
    UserBatchJoinGroupRequest& operator=(UserBatchJoinGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endUserIds_ == nullptr
        && return this->groupId_ == nullptr; };
    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & endUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> endUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline UserBatchJoinGroupRequest& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline UserBatchJoinGroupRequest& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UserBatchJoinGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    // The list of user IDs.
    std::shared_ptr<vector<string>> endUserIds_ = nullptr;
    // The ID of the user group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
