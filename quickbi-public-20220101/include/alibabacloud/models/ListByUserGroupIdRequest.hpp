// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBYUSERGROUPIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBYUSERGROUPIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListByUserGroupIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListByUserGroupIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListByUserGroupIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
    };
    ListByUserGroupIdRequest() = default ;
    ListByUserGroupIdRequest(const ListByUserGroupIdRequest &) = default ;
    ListByUserGroupIdRequest(ListByUserGroupIdRequest &&) = default ;
    ListByUserGroupIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListByUserGroupIdRequest() = default ;
    ListByUserGroupIdRequest& operator=(const ListByUserGroupIdRequest &) = default ;
    ListByUserGroupIdRequest& operator=(ListByUserGroupIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userGroupIds_ != nullptr; };
    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline string userGroupIds() const { DARABONBA_PTR_GET_DEFAULT(userGroupIds_, "") };
    inline ListByUserGroupIdRequest& setUserGroupIds(string userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };


  protected:
    // The ID of the user group that you want to query. Separate multiple user groups with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> userGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
