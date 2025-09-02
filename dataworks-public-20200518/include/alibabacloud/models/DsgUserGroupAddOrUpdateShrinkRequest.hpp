// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGUSERGROUPADDORUPDATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGUSERGROUPADDORUPDATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgUserGroupAddOrUpdateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgUserGroupAddOrUpdateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroups, userGroupsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DsgUserGroupAddOrUpdateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroupsShrink_);
    };
    DsgUserGroupAddOrUpdateShrinkRequest() = default ;
    DsgUserGroupAddOrUpdateShrinkRequest(const DsgUserGroupAddOrUpdateShrinkRequest &) = default ;
    DsgUserGroupAddOrUpdateShrinkRequest(DsgUserGroupAddOrUpdateShrinkRequest &&) = default ;
    DsgUserGroupAddOrUpdateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgUserGroupAddOrUpdateShrinkRequest() = default ;
    DsgUserGroupAddOrUpdateShrinkRequest& operator=(const DsgUserGroupAddOrUpdateShrinkRequest &) = default ;
    DsgUserGroupAddOrUpdateShrinkRequest& operator=(DsgUserGroupAddOrUpdateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userGroupsShrink_ != nullptr; };
    // userGroupsShrink Field Functions 
    bool hasUserGroupsShrink() const { return this->userGroupsShrink_ != nullptr;};
    void deleteUserGroupsShrink() { this->userGroupsShrink_ = nullptr;};
    inline string userGroupsShrink() const { DARABONBA_PTR_GET_DEFAULT(userGroupsShrink_, "") };
    inline DsgUserGroupAddOrUpdateShrinkRequest& setUserGroupsShrink(string userGroupsShrink) { DARABONBA_PTR_SET_VALUE(userGroupsShrink_, userGroupsShrink) };


  protected:
    // The information about the user group.
    // 
    // This parameter is required.
    std::shared_ptr<string> userGroupsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
