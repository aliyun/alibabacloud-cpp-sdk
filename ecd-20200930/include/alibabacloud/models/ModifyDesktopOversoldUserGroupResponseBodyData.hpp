// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPOVERSOLDUSERGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPOVERSOLDUSERGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopOversoldUserGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopOversoldUserGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopOversoldUserGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    ModifyDesktopOversoldUserGroupResponseBodyData() = default ;
    ModifyDesktopOversoldUserGroupResponseBodyData(const ModifyDesktopOversoldUserGroupResponseBodyData &) = default ;
    ModifyDesktopOversoldUserGroupResponseBodyData(ModifyDesktopOversoldUserGroupResponseBodyData &&) = default ;
    ModifyDesktopOversoldUserGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopOversoldUserGroupResponseBodyData() = default ;
    ModifyDesktopOversoldUserGroupResponseBodyData& operator=(const ModifyDesktopOversoldUserGroupResponseBodyData &) = default ;
    ModifyDesktopOversoldUserGroupResponseBodyData& operator=(ModifyDesktopOversoldUserGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userGroupId_ != nullptr; };
    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ModifyDesktopOversoldUserGroupResponseBodyData& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
