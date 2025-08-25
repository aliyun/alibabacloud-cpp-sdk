// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUsersResponseBodyDataListPersonalOutboundNumberList.hpp>
#include <alibabacloud/models/ListUsersResponseBodyDataListSkillLevelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListUsersResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceExt, deviceExt_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(DeviceState, deviceState_);
      DARABONBA_PTR_TO_JSON(DisplayId, displayId_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(LoginName, loginName_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(PersonalOutboundNumberList, personalOutboundNumberList_);
      DARABONBA_PTR_TO_JSON(Primary, primary_);
      DARABONBA_PTR_TO_JSON(PrimaryAccount, primaryAccount_);
      DARABONBA_PTR_TO_JSON(RamId, ramId_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(SkillLevelList, skillLevelList_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceExt, deviceExt_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(DeviceState, deviceState_);
      DARABONBA_PTR_FROM_JSON(DisplayId, displayId_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(PersonalOutboundNumberList, personalOutboundNumberList_);
      DARABONBA_PTR_FROM_JSON(Primary, primary_);
      DARABONBA_PTR_FROM_JSON(PrimaryAccount, primaryAccount_);
      DARABONBA_PTR_FROM_JSON(RamId, ramId_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(SkillLevelList, skillLevelList_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
    };
    ListUsersResponseBodyDataList() = default ;
    ListUsersResponseBodyDataList(const ListUsersResponseBodyDataList &) = default ;
    ListUsersResponseBodyDataList(ListUsersResponseBodyDataList &&) = default ;
    ListUsersResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBodyDataList() = default ;
    ListUsersResponseBodyDataList& operator=(const ListUsersResponseBodyDataList &) = default ;
    ListUsersResponseBodyDataList& operator=(ListUsersResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceExt_ != nullptr
        && this->deviceId_ != nullptr && this->deviceState_ != nullptr && this->displayId_ != nullptr && this->displayName_ != nullptr && this->email_ != nullptr
        && this->extension_ != nullptr && this->loginName_ != nullptr && this->mobile_ != nullptr && this->personalOutboundNumberList_ != nullptr && this->primary_ != nullptr
        && this->primaryAccount_ != nullptr && this->ramId_ != nullptr && this->roleId_ != nullptr && this->roleName_ != nullptr && this->skillLevelList_ != nullptr
        && this->userId_ != nullptr && this->workMode_ != nullptr; };
    // deviceExt Field Functions 
    bool hasDeviceExt() const { return this->deviceExt_ != nullptr;};
    void deleteDeviceExt() { this->deviceExt_ = nullptr;};
    inline string deviceExt() const { DARABONBA_PTR_GET_DEFAULT(deviceExt_, "") };
    inline ListUsersResponseBodyDataList& setDeviceExt(string deviceExt) { DARABONBA_PTR_SET_VALUE(deviceExt_, deviceExt) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline ListUsersResponseBodyDataList& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // deviceState Field Functions 
    bool hasDeviceState() const { return this->deviceState_ != nullptr;};
    void deleteDeviceState() { this->deviceState_ = nullptr;};
    inline string deviceState() const { DARABONBA_PTR_GET_DEFAULT(deviceState_, "") };
    inline ListUsersResponseBodyDataList& setDeviceState(string deviceState) { DARABONBA_PTR_SET_VALUE(deviceState_, deviceState) };


    // displayId Field Functions 
    bool hasDisplayId() const { return this->displayId_ != nullptr;};
    void deleteDisplayId() { this->displayId_ = nullptr;};
    inline string displayId() const { DARABONBA_PTR_GET_DEFAULT(displayId_, "") };
    inline ListUsersResponseBodyDataList& setDisplayId(string displayId) { DARABONBA_PTR_SET_VALUE(displayId_, displayId) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListUsersResponseBodyDataList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ListUsersResponseBodyDataList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline ListUsersResponseBodyDataList& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string loginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline ListUsersResponseBodyDataList& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline ListUsersResponseBodyDataList& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // personalOutboundNumberList Field Functions 
    bool hasPersonalOutboundNumberList() const { return this->personalOutboundNumberList_ != nullptr;};
    void deletePersonalOutboundNumberList() { this->personalOutboundNumberList_ = nullptr;};
    inline const vector<Models::ListUsersResponseBodyDataListPersonalOutboundNumberList> & personalOutboundNumberList() const { DARABONBA_PTR_GET_CONST(personalOutboundNumberList_, vector<Models::ListUsersResponseBodyDataListPersonalOutboundNumberList>) };
    inline vector<Models::ListUsersResponseBodyDataListPersonalOutboundNumberList> personalOutboundNumberList() { DARABONBA_PTR_GET(personalOutboundNumberList_, vector<Models::ListUsersResponseBodyDataListPersonalOutboundNumberList>) };
    inline ListUsersResponseBodyDataList& setPersonalOutboundNumberList(const vector<Models::ListUsersResponseBodyDataListPersonalOutboundNumberList> & personalOutboundNumberList) { DARABONBA_PTR_SET_VALUE(personalOutboundNumberList_, personalOutboundNumberList) };
    inline ListUsersResponseBodyDataList& setPersonalOutboundNumberList(vector<Models::ListUsersResponseBodyDataListPersonalOutboundNumberList> && personalOutboundNumberList) { DARABONBA_PTR_SET_RVALUE(personalOutboundNumberList_, personalOutboundNumberList) };


    // primary Field Functions 
    bool hasPrimary() const { return this->primary_ != nullptr;};
    void deletePrimary() { this->primary_ = nullptr;};
    inline bool primary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
    inline ListUsersResponseBodyDataList& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


    // primaryAccount Field Functions 
    bool hasPrimaryAccount() const { return this->primaryAccount_ != nullptr;};
    void deletePrimaryAccount() { this->primaryAccount_ = nullptr;};
    inline bool primaryAccount() const { DARABONBA_PTR_GET_DEFAULT(primaryAccount_, false) };
    inline ListUsersResponseBodyDataList& setPrimaryAccount(bool primaryAccount) { DARABONBA_PTR_SET_VALUE(primaryAccount_, primaryAccount) };


    // ramId Field Functions 
    bool hasRamId() const { return this->ramId_ != nullptr;};
    void deleteRamId() { this->ramId_ = nullptr;};
    inline int64_t ramId() const { DARABONBA_PTR_GET_DEFAULT(ramId_, 0L) };
    inline ListUsersResponseBodyDataList& setRamId(int64_t ramId) { DARABONBA_PTR_SET_VALUE(ramId_, ramId) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline ListUsersResponseBodyDataList& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline ListUsersResponseBodyDataList& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // skillLevelList Field Functions 
    bool hasSkillLevelList() const { return this->skillLevelList_ != nullptr;};
    void deleteSkillLevelList() { this->skillLevelList_ = nullptr;};
    inline const vector<Models::ListUsersResponseBodyDataListSkillLevelList> & skillLevelList() const { DARABONBA_PTR_GET_CONST(skillLevelList_, vector<Models::ListUsersResponseBodyDataListSkillLevelList>) };
    inline vector<Models::ListUsersResponseBodyDataListSkillLevelList> skillLevelList() { DARABONBA_PTR_GET(skillLevelList_, vector<Models::ListUsersResponseBodyDataListSkillLevelList>) };
    inline ListUsersResponseBodyDataList& setSkillLevelList(const vector<Models::ListUsersResponseBodyDataListSkillLevelList> & skillLevelList) { DARABONBA_PTR_SET_VALUE(skillLevelList_, skillLevelList) };
    inline ListUsersResponseBodyDataList& setSkillLevelList(vector<Models::ListUsersResponseBodyDataListSkillLevelList> && skillLevelList) { DARABONBA_PTR_SET_RVALUE(skillLevelList_, skillLevelList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListUsersResponseBodyDataList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline string workMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
    inline ListUsersResponseBodyDataList& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    std::shared_ptr<string> deviceExt_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> deviceState_ = nullptr;
    std::shared_ptr<string> displayId_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<string> loginName_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<vector<Models::ListUsersResponseBodyDataListPersonalOutboundNumberList>> personalOutboundNumberList_ = nullptr;
    std::shared_ptr<bool> primary_ = nullptr;
    std::shared_ptr<bool> primaryAccount_ = nullptr;
    std::shared_ptr<int64_t> ramId_ = nullptr;
    std::shared_ptr<string> roleId_ = nullptr;
    std::shared_ptr<string> roleName_ = nullptr;
    std::shared_ptr<vector<Models::ListUsersResponseBodyDataListSkillLevelList>> skillLevelList_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
