// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISVUSERSAVEREQUESTUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_ISVUSERSAVEREQUESTUSERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IsvUserSaveRequestUserListCertList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IsvUserSaveRequestUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IsvUserSaveRequestUserList& obj) { 
      DARABONBA_PTR_TO_JSON(base_city_code, baseCityCode_);
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(cert_list, certList_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(is_admin, isAdmin_);
      DARABONBA_PTR_TO_JSON(job_no, jobNo_);
      DARABONBA_PTR_TO_JSON(leave_status, leaveStatus_);
      DARABONBA_PTR_TO_JSON(manager_user_id, managerUserId_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(position, position_);
      DARABONBA_PTR_TO_JSON(position_level, positionLevel_);
      DARABONBA_PTR_TO_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_TO_JSON(role_id_list, roleIdList_);
      DARABONBA_PTR_TO_JSON(third_depart_id, thirdDepartId_);
      DARABONBA_PTR_TO_JSON(third_depart_id_list, thirdDepartIdList_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
      DARABONBA_PTR_TO_JSON(user_nick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, IsvUserSaveRequestUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(base_city_code, baseCityCode_);
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(cert_list, certList_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(is_admin, isAdmin_);
      DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
      DARABONBA_PTR_FROM_JSON(leave_status, leaveStatus_);
      DARABONBA_PTR_FROM_JSON(manager_user_id, managerUserId_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(position, position_);
      DARABONBA_PTR_FROM_JSON(position_level, positionLevel_);
      DARABONBA_PTR_FROM_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_FROM_JSON(role_id_list, roleIdList_);
      DARABONBA_PTR_FROM_JSON(third_depart_id, thirdDepartId_);
      DARABONBA_PTR_FROM_JSON(third_depart_id_list, thirdDepartIdList_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
      DARABONBA_PTR_FROM_JSON(user_nick, userNick_);
    };
    IsvUserSaveRequestUserList() = default ;
    IsvUserSaveRequestUserList(const IsvUserSaveRequestUserList &) = default ;
    IsvUserSaveRequestUserList(IsvUserSaveRequestUserList &&) = default ;
    IsvUserSaveRequestUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IsvUserSaveRequestUserList() = default ;
    IsvUserSaveRequestUserList& operator=(const IsvUserSaveRequestUserList &) = default ;
    IsvUserSaveRequestUserList& operator=(IsvUserSaveRequestUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseCityCode_ != nullptr
        && this->birthday_ != nullptr && this->certList_ != nullptr && this->departId_ != nullptr && this->email_ != nullptr && this->gender_ != nullptr
        && this->isAdmin_ != nullptr && this->jobNo_ != nullptr && this->leaveStatus_ != nullptr && this->managerUserId_ != nullptr && this->phone_ != nullptr
        && this->position_ != nullptr && this->positionLevel_ != nullptr && this->realNameEn_ != nullptr && this->roleIdList_ != nullptr && this->thirdDepartId_ != nullptr
        && this->thirdDepartIdList_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr && this->userNick_ != nullptr; };
    // baseCityCode Field Functions 
    bool hasBaseCityCode() const { return this->baseCityCode_ != nullptr;};
    void deleteBaseCityCode() { this->baseCityCode_ = nullptr;};
    inline string baseCityCode() const { DARABONBA_PTR_GET_DEFAULT(baseCityCode_, "") };
    inline IsvUserSaveRequestUserList& setBaseCityCode(string baseCityCode) { DARABONBA_PTR_SET_VALUE(baseCityCode_, baseCityCode) };


    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string birthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline IsvUserSaveRequestUserList& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // certList Field Functions 
    bool hasCertList() const { return this->certList_ != nullptr;};
    void deleteCertList() { this->certList_ = nullptr;};
    inline const vector<Models::IsvUserSaveRequestUserListCertList> & certList() const { DARABONBA_PTR_GET_CONST(certList_, vector<Models::IsvUserSaveRequestUserListCertList>) };
    inline vector<Models::IsvUserSaveRequestUserListCertList> certList() { DARABONBA_PTR_GET(certList_, vector<Models::IsvUserSaveRequestUserListCertList>) };
    inline IsvUserSaveRequestUserList& setCertList(const vector<Models::IsvUserSaveRequestUserListCertList> & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
    inline IsvUserSaveRequestUserList& setCertList(vector<Models::IsvUserSaveRequestUserListCertList> && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline int64_t departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, 0L) };
    inline IsvUserSaveRequestUserList& setDepartId(int64_t departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline IsvUserSaveRequestUserList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline IsvUserSaveRequestUserList& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // isAdmin Field Functions 
    bool hasIsAdmin() const { return this->isAdmin_ != nullptr;};
    void deleteIsAdmin() { this->isAdmin_ = nullptr;};
    inline bool isAdmin() const { DARABONBA_PTR_GET_DEFAULT(isAdmin_, false) };
    inline IsvUserSaveRequestUserList& setIsAdmin(bool isAdmin) { DARABONBA_PTR_SET_VALUE(isAdmin_, isAdmin) };


    // jobNo Field Functions 
    bool hasJobNo() const { return this->jobNo_ != nullptr;};
    void deleteJobNo() { this->jobNo_ = nullptr;};
    inline string jobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
    inline IsvUserSaveRequestUserList& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


    // leaveStatus Field Functions 
    bool hasLeaveStatus() const { return this->leaveStatus_ != nullptr;};
    void deleteLeaveStatus() { this->leaveStatus_ = nullptr;};
    inline int32_t leaveStatus() const { DARABONBA_PTR_GET_DEFAULT(leaveStatus_, 0) };
    inline IsvUserSaveRequestUserList& setLeaveStatus(int32_t leaveStatus) { DARABONBA_PTR_SET_VALUE(leaveStatus_, leaveStatus) };


    // managerUserId Field Functions 
    bool hasManagerUserId() const { return this->managerUserId_ != nullptr;};
    void deleteManagerUserId() { this->managerUserId_ = nullptr;};
    inline string managerUserId() const { DARABONBA_PTR_GET_DEFAULT(managerUserId_, "") };
    inline IsvUserSaveRequestUserList& setManagerUserId(string managerUserId) { DARABONBA_PTR_SET_VALUE(managerUserId_, managerUserId) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline IsvUserSaveRequestUserList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string position() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline IsvUserSaveRequestUserList& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // positionLevel Field Functions 
    bool hasPositionLevel() const { return this->positionLevel_ != nullptr;};
    void deletePositionLevel() { this->positionLevel_ = nullptr;};
    inline string positionLevel() const { DARABONBA_PTR_GET_DEFAULT(positionLevel_, "") };
    inline IsvUserSaveRequestUserList& setPositionLevel(string positionLevel) { DARABONBA_PTR_SET_VALUE(positionLevel_, positionLevel) };


    // realNameEn Field Functions 
    bool hasRealNameEn() const { return this->realNameEn_ != nullptr;};
    void deleteRealNameEn() { this->realNameEn_ = nullptr;};
    inline string realNameEn() const { DARABONBA_PTR_GET_DEFAULT(realNameEn_, "") };
    inline IsvUserSaveRequestUserList& setRealNameEn(string realNameEn) { DARABONBA_PTR_SET_VALUE(realNameEn_, realNameEn) };


    // roleIdList Field Functions 
    bool hasRoleIdList() const { return this->roleIdList_ != nullptr;};
    void deleteRoleIdList() { this->roleIdList_ = nullptr;};
    inline const vector<string> & roleIdList() const { DARABONBA_PTR_GET_CONST(roleIdList_, vector<string>) };
    inline vector<string> roleIdList() { DARABONBA_PTR_GET(roleIdList_, vector<string>) };
    inline IsvUserSaveRequestUserList& setRoleIdList(const vector<string> & roleIdList) { DARABONBA_PTR_SET_VALUE(roleIdList_, roleIdList) };
    inline IsvUserSaveRequestUserList& setRoleIdList(vector<string> && roleIdList) { DARABONBA_PTR_SET_RVALUE(roleIdList_, roleIdList) };


    // thirdDepartId Field Functions 
    bool hasThirdDepartId() const { return this->thirdDepartId_ != nullptr;};
    void deleteThirdDepartId() { this->thirdDepartId_ = nullptr;};
    inline string thirdDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdDepartId_, "") };
    inline IsvUserSaveRequestUserList& setThirdDepartId(string thirdDepartId) { DARABONBA_PTR_SET_VALUE(thirdDepartId_, thirdDepartId) };


    // thirdDepartIdList Field Functions 
    bool hasThirdDepartIdList() const { return this->thirdDepartIdList_ != nullptr;};
    void deleteThirdDepartIdList() { this->thirdDepartIdList_ = nullptr;};
    inline const vector<string> & thirdDepartIdList() const { DARABONBA_PTR_GET_CONST(thirdDepartIdList_, vector<string>) };
    inline vector<string> thirdDepartIdList() { DARABONBA_PTR_GET(thirdDepartIdList_, vector<string>) };
    inline IsvUserSaveRequestUserList& setThirdDepartIdList(const vector<string> & thirdDepartIdList) { DARABONBA_PTR_SET_VALUE(thirdDepartIdList_, thirdDepartIdList) };
    inline IsvUserSaveRequestUserList& setThirdDepartIdList(vector<string> && thirdDepartIdList) { DARABONBA_PTR_SET_RVALUE(thirdDepartIdList_, thirdDepartIdList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IsvUserSaveRequestUserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline IsvUserSaveRequestUserList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline IsvUserSaveRequestUserList& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    std::shared_ptr<string> baseCityCode_ = nullptr;
    std::shared_ptr<string> birthday_ = nullptr;
    std::shared_ptr<vector<Models::IsvUserSaveRequestUserListCertList>> certList_ = nullptr;
    std::shared_ptr<int64_t> departId_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<bool> isAdmin_ = nullptr;
    std::shared_ptr<string> jobNo_ = nullptr;
    std::shared_ptr<int32_t> leaveStatus_ = nullptr;
    std::shared_ptr<string> managerUserId_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> position_ = nullptr;
    std::shared_ptr<string> positionLevel_ = nullptr;
    std::shared_ptr<string> realNameEn_ = nullptr;
    std::shared_ptr<vector<string>> roleIdList_ = nullptr;
    std::shared_ptr<string> thirdDepartId_ = nullptr;
    std::shared_ptr<vector<string>> thirdDepartIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
    std::shared_ptr<string> userNick_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
