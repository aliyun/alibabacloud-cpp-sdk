// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDEMPLOYEEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDEMPLOYEEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddEmployeeRequestBaseLocationList.hpp>
#include <alibabacloud/models/AddEmployeeRequestCertList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AddEmployeeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddEmployeeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(account_email, accountEmail_);
      DARABONBA_PTR_TO_JSON(account_phone, accountPhone_);
      DARABONBA_PTR_TO_JSON(attribute, attribute_);
      DARABONBA_PTR_TO_JSON(avatar, avatar_);
      DARABONBA_PTR_TO_JSON(base_city_code_list, baseCityCodeList_);
      DARABONBA_PTR_TO_JSON(base_location_list, baseLocationList_);
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(cert_list, certList_);
      DARABONBA_PTR_TO_JSON(custom_role_code_list, customRoleCodeList_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(is_admin, isAdmin_);
      DARABONBA_PTR_TO_JSON(is_boss, isBoss_);
      DARABONBA_PTR_TO_JSON(is_dept_leader, isDeptLeader_);
      DARABONBA_PTR_TO_JSON(job_no, jobNo_);
      DARABONBA_PTR_TO_JSON(manager_user_id, managerUserId_);
      DARABONBA_PTR_TO_JSON(out_dept_id_list, outDeptIdList_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(position_level, positionLevel_);
      DARABONBA_PTR_TO_JSON(real_name, realName_);
      DARABONBA_PTR_TO_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_TO_JSON(union_id, unionId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_nick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, AddEmployeeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(account_email, accountEmail_);
      DARABONBA_PTR_FROM_JSON(account_phone, accountPhone_);
      DARABONBA_PTR_FROM_JSON(attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(base_city_code_list, baseCityCodeList_);
      DARABONBA_PTR_FROM_JSON(base_location_list, baseLocationList_);
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(cert_list, certList_);
      DARABONBA_PTR_FROM_JSON(custom_role_code_list, customRoleCodeList_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(is_admin, isAdmin_);
      DARABONBA_PTR_FROM_JSON(is_boss, isBoss_);
      DARABONBA_PTR_FROM_JSON(is_dept_leader, isDeptLeader_);
      DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
      DARABONBA_PTR_FROM_JSON(manager_user_id, managerUserId_);
      DARABONBA_PTR_FROM_JSON(out_dept_id_list, outDeptIdList_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(position_level, positionLevel_);
      DARABONBA_PTR_FROM_JSON(real_name, realName_);
      DARABONBA_PTR_FROM_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_FROM_JSON(union_id, unionId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_nick, userNick_);
    };
    AddEmployeeRequest() = default ;
    AddEmployeeRequest(const AddEmployeeRequest &) = default ;
    AddEmployeeRequest(AddEmployeeRequest &&) = default ;
    AddEmployeeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddEmployeeRequest() = default ;
    AddEmployeeRequest& operator=(const AddEmployeeRequest &) = default ;
    AddEmployeeRequest& operator=(AddEmployeeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountEmail_ != nullptr
        && this->accountPhone_ != nullptr && this->attribute_ != nullptr && this->avatar_ != nullptr && this->baseCityCodeList_ != nullptr && this->baseLocationList_ != nullptr
        && this->birthday_ != nullptr && this->certList_ != nullptr && this->customRoleCodeList_ != nullptr && this->email_ != nullptr && this->gender_ != nullptr
        && this->isAdmin_ != nullptr && this->isBoss_ != nullptr && this->isDeptLeader_ != nullptr && this->jobNo_ != nullptr && this->managerUserId_ != nullptr
        && this->outDeptIdList_ != nullptr && this->phone_ != nullptr && this->positionLevel_ != nullptr && this->realName_ != nullptr && this->realNameEn_ != nullptr
        && this->unionId_ != nullptr && this->userId_ != nullptr && this->userNick_ != nullptr; };
    // accountEmail Field Functions 
    bool hasAccountEmail() const { return this->accountEmail_ != nullptr;};
    void deleteAccountEmail() { this->accountEmail_ = nullptr;};
    inline string accountEmail() const { DARABONBA_PTR_GET_DEFAULT(accountEmail_, "") };
    inline AddEmployeeRequest& setAccountEmail(string accountEmail) { DARABONBA_PTR_SET_VALUE(accountEmail_, accountEmail) };


    // accountPhone Field Functions 
    bool hasAccountPhone() const { return this->accountPhone_ != nullptr;};
    void deleteAccountPhone() { this->accountPhone_ = nullptr;};
    inline string accountPhone() const { DARABONBA_PTR_GET_DEFAULT(accountPhone_, "") };
    inline AddEmployeeRequest& setAccountPhone(string accountPhone) { DARABONBA_PTR_SET_VALUE(accountPhone_, accountPhone) };


    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline AddEmployeeRequest& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline AddEmployeeRequest& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // baseCityCodeList Field Functions 
    bool hasBaseCityCodeList() const { return this->baseCityCodeList_ != nullptr;};
    void deleteBaseCityCodeList() { this->baseCityCodeList_ = nullptr;};
    inline const vector<string> & baseCityCodeList() const { DARABONBA_PTR_GET_CONST(baseCityCodeList_, vector<string>) };
    inline vector<string> baseCityCodeList() { DARABONBA_PTR_GET(baseCityCodeList_, vector<string>) };
    inline AddEmployeeRequest& setBaseCityCodeList(const vector<string> & baseCityCodeList) { DARABONBA_PTR_SET_VALUE(baseCityCodeList_, baseCityCodeList) };
    inline AddEmployeeRequest& setBaseCityCodeList(vector<string> && baseCityCodeList) { DARABONBA_PTR_SET_RVALUE(baseCityCodeList_, baseCityCodeList) };


    // baseLocationList Field Functions 
    bool hasBaseLocationList() const { return this->baseLocationList_ != nullptr;};
    void deleteBaseLocationList() { this->baseLocationList_ = nullptr;};
    inline const vector<AddEmployeeRequestBaseLocationList> & baseLocationList() const { DARABONBA_PTR_GET_CONST(baseLocationList_, vector<AddEmployeeRequestBaseLocationList>) };
    inline vector<AddEmployeeRequestBaseLocationList> baseLocationList() { DARABONBA_PTR_GET(baseLocationList_, vector<AddEmployeeRequestBaseLocationList>) };
    inline AddEmployeeRequest& setBaseLocationList(const vector<AddEmployeeRequestBaseLocationList> & baseLocationList) { DARABONBA_PTR_SET_VALUE(baseLocationList_, baseLocationList) };
    inline AddEmployeeRequest& setBaseLocationList(vector<AddEmployeeRequestBaseLocationList> && baseLocationList) { DARABONBA_PTR_SET_RVALUE(baseLocationList_, baseLocationList) };


    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string birthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline AddEmployeeRequest& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // certList Field Functions 
    bool hasCertList() const { return this->certList_ != nullptr;};
    void deleteCertList() { this->certList_ = nullptr;};
    inline const vector<AddEmployeeRequestCertList> & certList() const { DARABONBA_PTR_GET_CONST(certList_, vector<AddEmployeeRequestCertList>) };
    inline vector<AddEmployeeRequestCertList> certList() { DARABONBA_PTR_GET(certList_, vector<AddEmployeeRequestCertList>) };
    inline AddEmployeeRequest& setCertList(const vector<AddEmployeeRequestCertList> & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
    inline AddEmployeeRequest& setCertList(vector<AddEmployeeRequestCertList> && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


    // customRoleCodeList Field Functions 
    bool hasCustomRoleCodeList() const { return this->customRoleCodeList_ != nullptr;};
    void deleteCustomRoleCodeList() { this->customRoleCodeList_ = nullptr;};
    inline const vector<string> & customRoleCodeList() const { DARABONBA_PTR_GET_CONST(customRoleCodeList_, vector<string>) };
    inline vector<string> customRoleCodeList() { DARABONBA_PTR_GET(customRoleCodeList_, vector<string>) };
    inline AddEmployeeRequest& setCustomRoleCodeList(const vector<string> & customRoleCodeList) { DARABONBA_PTR_SET_VALUE(customRoleCodeList_, customRoleCodeList) };
    inline AddEmployeeRequest& setCustomRoleCodeList(vector<string> && customRoleCodeList) { DARABONBA_PTR_SET_RVALUE(customRoleCodeList_, customRoleCodeList) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline AddEmployeeRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline AddEmployeeRequest& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // isAdmin Field Functions 
    bool hasIsAdmin() const { return this->isAdmin_ != nullptr;};
    void deleteIsAdmin() { this->isAdmin_ = nullptr;};
    inline bool isAdmin() const { DARABONBA_PTR_GET_DEFAULT(isAdmin_, false) };
    inline AddEmployeeRequest& setIsAdmin(bool isAdmin) { DARABONBA_PTR_SET_VALUE(isAdmin_, isAdmin) };


    // isBoss Field Functions 
    bool hasIsBoss() const { return this->isBoss_ != nullptr;};
    void deleteIsBoss() { this->isBoss_ = nullptr;};
    inline bool isBoss() const { DARABONBA_PTR_GET_DEFAULT(isBoss_, false) };
    inline AddEmployeeRequest& setIsBoss(bool isBoss) { DARABONBA_PTR_SET_VALUE(isBoss_, isBoss) };


    // isDeptLeader Field Functions 
    bool hasIsDeptLeader() const { return this->isDeptLeader_ != nullptr;};
    void deleteIsDeptLeader() { this->isDeptLeader_ = nullptr;};
    inline bool isDeptLeader() const { DARABONBA_PTR_GET_DEFAULT(isDeptLeader_, false) };
    inline AddEmployeeRequest& setIsDeptLeader(bool isDeptLeader) { DARABONBA_PTR_SET_VALUE(isDeptLeader_, isDeptLeader) };


    // jobNo Field Functions 
    bool hasJobNo() const { return this->jobNo_ != nullptr;};
    void deleteJobNo() { this->jobNo_ = nullptr;};
    inline string jobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
    inline AddEmployeeRequest& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


    // managerUserId Field Functions 
    bool hasManagerUserId() const { return this->managerUserId_ != nullptr;};
    void deleteManagerUserId() { this->managerUserId_ = nullptr;};
    inline string managerUserId() const { DARABONBA_PTR_GET_DEFAULT(managerUserId_, "") };
    inline AddEmployeeRequest& setManagerUserId(string managerUserId) { DARABONBA_PTR_SET_VALUE(managerUserId_, managerUserId) };


    // outDeptIdList Field Functions 
    bool hasOutDeptIdList() const { return this->outDeptIdList_ != nullptr;};
    void deleteOutDeptIdList() { this->outDeptIdList_ = nullptr;};
    inline const vector<string> & outDeptIdList() const { DARABONBA_PTR_GET_CONST(outDeptIdList_, vector<string>) };
    inline vector<string> outDeptIdList() { DARABONBA_PTR_GET(outDeptIdList_, vector<string>) };
    inline AddEmployeeRequest& setOutDeptIdList(const vector<string> & outDeptIdList) { DARABONBA_PTR_SET_VALUE(outDeptIdList_, outDeptIdList) };
    inline AddEmployeeRequest& setOutDeptIdList(vector<string> && outDeptIdList) { DARABONBA_PTR_SET_RVALUE(outDeptIdList_, outDeptIdList) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline AddEmployeeRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // positionLevel Field Functions 
    bool hasPositionLevel() const { return this->positionLevel_ != nullptr;};
    void deletePositionLevel() { this->positionLevel_ = nullptr;};
    inline string positionLevel() const { DARABONBA_PTR_GET_DEFAULT(positionLevel_, "") };
    inline AddEmployeeRequest& setPositionLevel(string positionLevel) { DARABONBA_PTR_SET_VALUE(positionLevel_, positionLevel) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string realName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline AddEmployeeRequest& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


    // realNameEn Field Functions 
    bool hasRealNameEn() const { return this->realNameEn_ != nullptr;};
    void deleteRealNameEn() { this->realNameEn_ = nullptr;};
    inline string realNameEn() const { DARABONBA_PTR_GET_DEFAULT(realNameEn_, "") };
    inline AddEmployeeRequest& setRealNameEn(string realNameEn) { DARABONBA_PTR_SET_VALUE(realNameEn_, realNameEn) };


    // unionId Field Functions 
    bool hasUnionId() const { return this->unionId_ != nullptr;};
    void deleteUnionId() { this->unionId_ = nullptr;};
    inline string unionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
    inline AddEmployeeRequest& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddEmployeeRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline AddEmployeeRequest& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    std::shared_ptr<string> accountEmail_ = nullptr;
    std::shared_ptr<string> accountPhone_ = nullptr;
    std::shared_ptr<string> attribute_ = nullptr;
    std::shared_ptr<string> avatar_ = nullptr;
    std::shared_ptr<vector<string>> baseCityCodeList_ = nullptr;
    std::shared_ptr<vector<AddEmployeeRequestBaseLocationList>> baseLocationList_ = nullptr;
    std::shared_ptr<string> birthday_ = nullptr;
    std::shared_ptr<vector<AddEmployeeRequestCertList>> certList_ = nullptr;
    std::shared_ptr<vector<string>> customRoleCodeList_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<bool> isAdmin_ = nullptr;
    std::shared_ptr<bool> isBoss_ = nullptr;
    std::shared_ptr<bool> isDeptLeader_ = nullptr;
    std::shared_ptr<string> jobNo_ = nullptr;
    std::shared_ptr<string> managerUserId_ = nullptr;
    std::shared_ptr<vector<string>> outDeptIdList_ = nullptr;
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
