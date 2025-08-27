// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDEMPLOYEESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDEMPLOYEESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AddEmployeeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddEmployeeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(account_email, accountEmail_);
      DARABONBA_PTR_TO_JSON(account_phone, accountPhone_);
      DARABONBA_PTR_TO_JSON(attribute, attribute_);
      DARABONBA_PTR_TO_JSON(avatar, avatar_);
      DARABONBA_PTR_TO_JSON(base_city_code_list, baseCityCodeListShrink_);
      DARABONBA_PTR_TO_JSON(base_location_list, baseLocationListShrink_);
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(cert_list, certListShrink_);
      DARABONBA_PTR_TO_JSON(custom_role_code_list, customRoleCodeListShrink_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(is_admin, isAdmin_);
      DARABONBA_PTR_TO_JSON(is_boss, isBoss_);
      DARABONBA_PTR_TO_JSON(is_dept_leader, isDeptLeader_);
      DARABONBA_PTR_TO_JSON(job_no, jobNo_);
      DARABONBA_PTR_TO_JSON(manager_user_id, managerUserId_);
      DARABONBA_PTR_TO_JSON(out_dept_id_list, outDeptIdListShrink_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(position_level, positionLevel_);
      DARABONBA_PTR_TO_JSON(real_name, realName_);
      DARABONBA_PTR_TO_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_TO_JSON(union_id, unionId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_nick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, AddEmployeeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(account_email, accountEmail_);
      DARABONBA_PTR_FROM_JSON(account_phone, accountPhone_);
      DARABONBA_PTR_FROM_JSON(attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(base_city_code_list, baseCityCodeListShrink_);
      DARABONBA_PTR_FROM_JSON(base_location_list, baseLocationListShrink_);
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(cert_list, certListShrink_);
      DARABONBA_PTR_FROM_JSON(custom_role_code_list, customRoleCodeListShrink_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(is_admin, isAdmin_);
      DARABONBA_PTR_FROM_JSON(is_boss, isBoss_);
      DARABONBA_PTR_FROM_JSON(is_dept_leader, isDeptLeader_);
      DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
      DARABONBA_PTR_FROM_JSON(manager_user_id, managerUserId_);
      DARABONBA_PTR_FROM_JSON(out_dept_id_list, outDeptIdListShrink_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(position_level, positionLevel_);
      DARABONBA_PTR_FROM_JSON(real_name, realName_);
      DARABONBA_PTR_FROM_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_FROM_JSON(union_id, unionId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_nick, userNick_);
    };
    AddEmployeeShrinkRequest() = default ;
    AddEmployeeShrinkRequest(const AddEmployeeShrinkRequest &) = default ;
    AddEmployeeShrinkRequest(AddEmployeeShrinkRequest &&) = default ;
    AddEmployeeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddEmployeeShrinkRequest() = default ;
    AddEmployeeShrinkRequest& operator=(const AddEmployeeShrinkRequest &) = default ;
    AddEmployeeShrinkRequest& operator=(AddEmployeeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountEmail_ != nullptr
        && this->accountPhone_ != nullptr && this->attribute_ != nullptr && this->avatar_ != nullptr && this->baseCityCodeListShrink_ != nullptr && this->baseLocationListShrink_ != nullptr
        && this->birthday_ != nullptr && this->certListShrink_ != nullptr && this->customRoleCodeListShrink_ != nullptr && this->email_ != nullptr && this->gender_ != nullptr
        && this->isAdmin_ != nullptr && this->isBoss_ != nullptr && this->isDeptLeader_ != nullptr && this->jobNo_ != nullptr && this->managerUserId_ != nullptr
        && this->outDeptIdListShrink_ != nullptr && this->phone_ != nullptr && this->positionLevel_ != nullptr && this->realName_ != nullptr && this->realNameEn_ != nullptr
        && this->unionId_ != nullptr && this->userId_ != nullptr && this->userNick_ != nullptr; };
    // accountEmail Field Functions 
    bool hasAccountEmail() const { return this->accountEmail_ != nullptr;};
    void deleteAccountEmail() { this->accountEmail_ = nullptr;};
    inline string accountEmail() const { DARABONBA_PTR_GET_DEFAULT(accountEmail_, "") };
    inline AddEmployeeShrinkRequest& setAccountEmail(string accountEmail) { DARABONBA_PTR_SET_VALUE(accountEmail_, accountEmail) };


    // accountPhone Field Functions 
    bool hasAccountPhone() const { return this->accountPhone_ != nullptr;};
    void deleteAccountPhone() { this->accountPhone_ = nullptr;};
    inline string accountPhone() const { DARABONBA_PTR_GET_DEFAULT(accountPhone_, "") };
    inline AddEmployeeShrinkRequest& setAccountPhone(string accountPhone) { DARABONBA_PTR_SET_VALUE(accountPhone_, accountPhone) };


    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline AddEmployeeShrinkRequest& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline AddEmployeeShrinkRequest& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // baseCityCodeListShrink Field Functions 
    bool hasBaseCityCodeListShrink() const { return this->baseCityCodeListShrink_ != nullptr;};
    void deleteBaseCityCodeListShrink() { this->baseCityCodeListShrink_ = nullptr;};
    inline string baseCityCodeListShrink() const { DARABONBA_PTR_GET_DEFAULT(baseCityCodeListShrink_, "") };
    inline AddEmployeeShrinkRequest& setBaseCityCodeListShrink(string baseCityCodeListShrink) { DARABONBA_PTR_SET_VALUE(baseCityCodeListShrink_, baseCityCodeListShrink) };


    // baseLocationListShrink Field Functions 
    bool hasBaseLocationListShrink() const { return this->baseLocationListShrink_ != nullptr;};
    void deleteBaseLocationListShrink() { this->baseLocationListShrink_ = nullptr;};
    inline string baseLocationListShrink() const { DARABONBA_PTR_GET_DEFAULT(baseLocationListShrink_, "") };
    inline AddEmployeeShrinkRequest& setBaseLocationListShrink(string baseLocationListShrink) { DARABONBA_PTR_SET_VALUE(baseLocationListShrink_, baseLocationListShrink) };


    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string birthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline AddEmployeeShrinkRequest& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // certListShrink Field Functions 
    bool hasCertListShrink() const { return this->certListShrink_ != nullptr;};
    void deleteCertListShrink() { this->certListShrink_ = nullptr;};
    inline string certListShrink() const { DARABONBA_PTR_GET_DEFAULT(certListShrink_, "") };
    inline AddEmployeeShrinkRequest& setCertListShrink(string certListShrink) { DARABONBA_PTR_SET_VALUE(certListShrink_, certListShrink) };


    // customRoleCodeListShrink Field Functions 
    bool hasCustomRoleCodeListShrink() const { return this->customRoleCodeListShrink_ != nullptr;};
    void deleteCustomRoleCodeListShrink() { this->customRoleCodeListShrink_ = nullptr;};
    inline string customRoleCodeListShrink() const { DARABONBA_PTR_GET_DEFAULT(customRoleCodeListShrink_, "") };
    inline AddEmployeeShrinkRequest& setCustomRoleCodeListShrink(string customRoleCodeListShrink) { DARABONBA_PTR_SET_VALUE(customRoleCodeListShrink_, customRoleCodeListShrink) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline AddEmployeeShrinkRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline AddEmployeeShrinkRequest& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // isAdmin Field Functions 
    bool hasIsAdmin() const { return this->isAdmin_ != nullptr;};
    void deleteIsAdmin() { this->isAdmin_ = nullptr;};
    inline bool isAdmin() const { DARABONBA_PTR_GET_DEFAULT(isAdmin_, false) };
    inline AddEmployeeShrinkRequest& setIsAdmin(bool isAdmin) { DARABONBA_PTR_SET_VALUE(isAdmin_, isAdmin) };


    // isBoss Field Functions 
    bool hasIsBoss() const { return this->isBoss_ != nullptr;};
    void deleteIsBoss() { this->isBoss_ = nullptr;};
    inline bool isBoss() const { DARABONBA_PTR_GET_DEFAULT(isBoss_, false) };
    inline AddEmployeeShrinkRequest& setIsBoss(bool isBoss) { DARABONBA_PTR_SET_VALUE(isBoss_, isBoss) };


    // isDeptLeader Field Functions 
    bool hasIsDeptLeader() const { return this->isDeptLeader_ != nullptr;};
    void deleteIsDeptLeader() { this->isDeptLeader_ = nullptr;};
    inline bool isDeptLeader() const { DARABONBA_PTR_GET_DEFAULT(isDeptLeader_, false) };
    inline AddEmployeeShrinkRequest& setIsDeptLeader(bool isDeptLeader) { DARABONBA_PTR_SET_VALUE(isDeptLeader_, isDeptLeader) };


    // jobNo Field Functions 
    bool hasJobNo() const { return this->jobNo_ != nullptr;};
    void deleteJobNo() { this->jobNo_ = nullptr;};
    inline string jobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
    inline AddEmployeeShrinkRequest& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


    // managerUserId Field Functions 
    bool hasManagerUserId() const { return this->managerUserId_ != nullptr;};
    void deleteManagerUserId() { this->managerUserId_ = nullptr;};
    inline string managerUserId() const { DARABONBA_PTR_GET_DEFAULT(managerUserId_, "") };
    inline AddEmployeeShrinkRequest& setManagerUserId(string managerUserId) { DARABONBA_PTR_SET_VALUE(managerUserId_, managerUserId) };


    // outDeptIdListShrink Field Functions 
    bool hasOutDeptIdListShrink() const { return this->outDeptIdListShrink_ != nullptr;};
    void deleteOutDeptIdListShrink() { this->outDeptIdListShrink_ = nullptr;};
    inline string outDeptIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(outDeptIdListShrink_, "") };
    inline AddEmployeeShrinkRequest& setOutDeptIdListShrink(string outDeptIdListShrink) { DARABONBA_PTR_SET_VALUE(outDeptIdListShrink_, outDeptIdListShrink) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline AddEmployeeShrinkRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // positionLevel Field Functions 
    bool hasPositionLevel() const { return this->positionLevel_ != nullptr;};
    void deletePositionLevel() { this->positionLevel_ = nullptr;};
    inline string positionLevel() const { DARABONBA_PTR_GET_DEFAULT(positionLevel_, "") };
    inline AddEmployeeShrinkRequest& setPositionLevel(string positionLevel) { DARABONBA_PTR_SET_VALUE(positionLevel_, positionLevel) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string realName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline AddEmployeeShrinkRequest& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


    // realNameEn Field Functions 
    bool hasRealNameEn() const { return this->realNameEn_ != nullptr;};
    void deleteRealNameEn() { this->realNameEn_ = nullptr;};
    inline string realNameEn() const { DARABONBA_PTR_GET_DEFAULT(realNameEn_, "") };
    inline AddEmployeeShrinkRequest& setRealNameEn(string realNameEn) { DARABONBA_PTR_SET_VALUE(realNameEn_, realNameEn) };


    // unionId Field Functions 
    bool hasUnionId() const { return this->unionId_ != nullptr;};
    void deleteUnionId() { this->unionId_ = nullptr;};
    inline string unionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
    inline AddEmployeeShrinkRequest& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddEmployeeShrinkRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline AddEmployeeShrinkRequest& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    std::shared_ptr<string> accountEmail_ = nullptr;
    std::shared_ptr<string> accountPhone_ = nullptr;
    std::shared_ptr<string> attribute_ = nullptr;
    std::shared_ptr<string> avatar_ = nullptr;
    std::shared_ptr<string> baseCityCodeListShrink_ = nullptr;
    std::shared_ptr<string> baseLocationListShrink_ = nullptr;
    std::shared_ptr<string> birthday_ = nullptr;
    std::shared_ptr<string> certListShrink_ = nullptr;
    std::shared_ptr<string> customRoleCodeListShrink_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<bool> isAdmin_ = nullptr;
    std::shared_ptr<bool> isBoss_ = nullptr;
    std::shared_ptr<bool> isDeptLeader_ = nullptr;
    std::shared_ptr<string> jobNo_ = nullptr;
    std::shared_ptr<string> managerUserId_ = nullptr;
    std::shared_ptr<string> outDeptIdListShrink_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> positionLevel_ = nullptr;
    std::shared_ptr<string> realName_ = nullptr;
    std::shared_ptr<string> realNameEn_ = nullptr;
    std::shared_ptr<string> unionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userNick_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
