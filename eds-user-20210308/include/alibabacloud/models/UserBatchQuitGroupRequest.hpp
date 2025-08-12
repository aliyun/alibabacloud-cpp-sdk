// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERBATCHQUITGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_USERBATCHQUITGROUPREQUEST_HPP_
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
  class UserBatchQuitGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserBatchQuitGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, UserBatchQuitGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
    };
    UserBatchQuitGroupRequest() = default ;
    UserBatchQuitGroupRequest(const UserBatchQuitGroupRequest &) = default ;
    UserBatchQuitGroupRequest(UserBatchQuitGroupRequest &&) = default ;
    UserBatchQuitGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserBatchQuitGroupRequest() = default ;
    UserBatchQuitGroupRequest& operator=(const UserBatchQuitGroupRequest &) = default ;
    UserBatchQuitGroupRequest& operator=(UserBatchQuitGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endUserIds_ != nullptr
        && this->groupId_ != nullptr; };
    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & endUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> endUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline UserBatchQuitGroupRequest& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline UserBatchQuitGroupRequest& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UserBatchQuitGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    std::shared_ptr<vector<string>> endUserIds_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
