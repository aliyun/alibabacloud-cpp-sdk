// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEGROUPREQUEST_HPP_
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
  class RemoveGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
    };
    RemoveGroupRequest() = default ;
    RemoveGroupRequest(const RemoveGroupRequest &) = default ;
    RemoveGroupRequest(RemoveGroupRequest &&) = default ;
    RemoveGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveGroupRequest() = default ;
    RemoveGroupRequest& operator=(const RemoveGroupRequest &) = default ;
    RemoveGroupRequest& operator=(RemoveGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->groupIds_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline RemoveGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline const vector<string> & groupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<string>) };
    inline vector<string> groupIds() { DARABONBA_PTR_GET(groupIds_, vector<string>) };
    inline RemoveGroupRequest& setGroupIds(const vector<string> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
    inline RemoveGroupRequest& setGroupIds(vector<string> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


  protected:
    // The ID of the user group to be deleted.
    std::shared_ptr<string> groupId_ = nullptr;
    // The IDs of the user groups to be deleted.
    std::shared_ptr<vector<string>> groupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
