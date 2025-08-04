// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDESKTOPOVERSOLDUSERGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDDESKTOPOVERSOLDUSERGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class AddDesktopOversoldUserGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDesktopOversoldUserGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDesktopOversoldUserGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    AddDesktopOversoldUserGroupResponseBodyData() = default ;
    AddDesktopOversoldUserGroupResponseBodyData(const AddDesktopOversoldUserGroupResponseBodyData &) = default ;
    AddDesktopOversoldUserGroupResponseBodyData(AddDesktopOversoldUserGroupResponseBodyData &&) = default ;
    AddDesktopOversoldUserGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDesktopOversoldUserGroupResponseBodyData() = default ;
    AddDesktopOversoldUserGroupResponseBodyData& operator=(const AddDesktopOversoldUserGroupResponseBodyData &) = default ;
    AddDesktopOversoldUserGroupResponseBodyData& operator=(AddDesktopOversoldUserGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userGroupId_ != nullptr; };
    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline AddDesktopOversoldUserGroupResponseBodyData& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
