// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDEMPLOYEEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDEMPLOYEEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class CertList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertList& obj) { 
        DARABONBA_PTR_TO_JSON(birthday, birthday_);
        DARABONBA_PTR_TO_JSON(cert_expired_time, certExpiredTime_);
        DARABONBA_PTR_TO_JSON(cert_nation, certNation_);
        DARABONBA_PTR_TO_JSON(cert_no, certNo_);
        DARABONBA_PTR_TO_JSON(cert_type, certType_);
        DARABONBA_PTR_TO_JSON(gender, gender_);
        DARABONBA_PTR_TO_JSON(nationality, nationality_);
        DARABONBA_PTR_TO_JSON(phone, phone_);
        DARABONBA_PTR_TO_JSON(real_name, realName_);
        DARABONBA_PTR_TO_JSON(real_name_en, realNameEn_);
      };
      friend void from_json(const Darabonba::Json& j, CertList& obj) { 
        DARABONBA_PTR_FROM_JSON(birthday, birthday_);
        DARABONBA_PTR_FROM_JSON(cert_expired_time, certExpiredTime_);
        DARABONBA_PTR_FROM_JSON(cert_nation, certNation_);
        DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
        DARABONBA_PTR_FROM_JSON(cert_type, certType_);
        DARABONBA_PTR_FROM_JSON(gender, gender_);
        DARABONBA_PTR_FROM_JSON(nationality, nationality_);
        DARABONBA_PTR_FROM_JSON(phone, phone_);
        DARABONBA_PTR_FROM_JSON(real_name, realName_);
        DARABONBA_PTR_FROM_JSON(real_name_en, realNameEn_);
      };
      CertList() = default ;
      CertList(const CertList &) = default ;
      CertList(CertList &&) = default ;
      CertList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertList() = default ;
      CertList& operator=(const CertList &) = default ;
      CertList& operator=(CertList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->birthday_ == nullptr
        && this->certExpiredTime_ == nullptr && this->certNation_ == nullptr && this->certNo_ == nullptr && this->certType_ == nullptr && this->gender_ == nullptr
        && this->nationality_ == nullptr && this->phone_ == nullptr && this->realName_ == nullptr && this->realNameEn_ == nullptr; };
      // birthday Field Functions 
      bool hasBirthday() const { return this->birthday_ != nullptr;};
      void deleteBirthday() { this->birthday_ = nullptr;};
      inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
      inline CertList& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


      // certExpiredTime Field Functions 
      bool hasCertExpiredTime() const { return this->certExpiredTime_ != nullptr;};
      void deleteCertExpiredTime() { this->certExpiredTime_ = nullptr;};
      inline string getCertExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(certExpiredTime_, "") };
      inline CertList& setCertExpiredTime(string certExpiredTime) { DARABONBA_PTR_SET_VALUE(certExpiredTime_, certExpiredTime) };


      // certNation Field Functions 
      bool hasCertNation() const { return this->certNation_ != nullptr;};
      void deleteCertNation() { this->certNation_ = nullptr;};
      inline string getCertNation() const { DARABONBA_PTR_GET_DEFAULT(certNation_, "") };
      inline CertList& setCertNation(string certNation) { DARABONBA_PTR_SET_VALUE(certNation_, certNation) };


      // certNo Field Functions 
      bool hasCertNo() const { return this->certNo_ != nullptr;};
      void deleteCertNo() { this->certNo_ = nullptr;};
      inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
      inline CertList& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


      // certType Field Functions 
      bool hasCertType() const { return this->certType_ != nullptr;};
      void deleteCertType() { this->certType_ = nullptr;};
      inline int32_t getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, 0) };
      inline CertList& setCertType(int32_t certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


      // gender Field Functions 
      bool hasGender() const { return this->gender_ != nullptr;};
      void deleteGender() { this->gender_ = nullptr;};
      inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
      inline CertList& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


      // nationality Field Functions 
      bool hasNationality() const { return this->nationality_ != nullptr;};
      void deleteNationality() { this->nationality_ = nullptr;};
      inline string getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
      inline CertList& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline CertList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // realName Field Functions 
      bool hasRealName() const { return this->realName_ != nullptr;};
      void deleteRealName() { this->realName_ = nullptr;};
      inline string getRealName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
      inline CertList& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


      // realNameEn Field Functions 
      bool hasRealNameEn() const { return this->realNameEn_ != nullptr;};
      void deleteRealNameEn() { this->realNameEn_ = nullptr;};
      inline string getRealNameEn() const { DARABONBA_PTR_GET_DEFAULT(realNameEn_, "") };
      inline CertList& setRealNameEn(string realNameEn) { DARABONBA_PTR_SET_VALUE(realNameEn_, realNameEn) };


    protected:
      // The birthday of the employee.
      // - Format: yy-MM-dd.
      shared_ptr<string> birthday_ {};
      // The expiration date of the certificate.
      // - Format: `yy-MM-dd`.
      shared_ptr<string> certExpiredTime_ {};
      // The two-letter country/region code (Country Code) of the certificate issuing country/region.
      shared_ptr<string> certNation_ {};
      // The certificate number.
      shared_ptr<string> certNo_ {};
      // The certificate type.
      shared_ptr<int32_t> certType_ {};
      // The gender of the employee, which must be consistent with the certificate information.
      shared_ptr<string> gender_ {};
      // The two-letter country/region code (Country Code) of the employee.
      shared_ptr<string> nationality_ {};
      // The mobile phone number of the employee.
      shared_ptr<string> phone_ {};
      // The name of the employee, which must be consistent with the certificate information.
      shared_ptr<string> realName_ {};
      // The English name of the employee. Follow these format requirements:
      // - Separate the last name and first name with "/", for example: LastName/FirstName.
      // - Do not include spaces between the last name and first name.
      shared_ptr<string> realNameEn_ {};
    };

    class BaseLocationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BaseLocationList& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(level, level_);
      };
      friend void from_json(const Darabonba::Json& j, BaseLocationList& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(level, level_);
      };
      BaseLocationList() = default ;
      BaseLocationList(const BaseLocationList &) = default ;
      BaseLocationList(BaseLocationList &&) = default ;
      BaseLocationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BaseLocationList() = default ;
      BaseLocationList& operator=(const BaseLocationList &) = default ;
      BaseLocationList& operator=(BaseLocationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->level_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline BaseLocationList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline BaseLocationList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    protected:
      // The 6-digit administrative division code.
      shared_ptr<string> code_ {};
      // The administrative division level: province or city.
      shared_ptr<string> level_ {};
    };

    virtual bool empty() const override { return this->accountEmail_ == nullptr
        && this->accountPhone_ == nullptr && this->attribute_ == nullptr && this->avatar_ == nullptr && this->baseCityCodeList_ == nullptr && this->baseLocationList_ == nullptr
        && this->birthday_ == nullptr && this->certList_ == nullptr && this->customRoleCodeList_ == nullptr && this->email_ == nullptr && this->gender_ == nullptr
        && this->isAdmin_ == nullptr && this->isBoss_ == nullptr && this->isDeptLeader_ == nullptr && this->jobNo_ == nullptr && this->managerUserId_ == nullptr
        && this->outDeptIdList_ == nullptr && this->phone_ == nullptr && this->positionLevel_ == nullptr && this->realName_ == nullptr && this->realNameEn_ == nullptr
        && this->unionId_ == nullptr && this->userId_ == nullptr && this->userNick_ == nullptr; };
    // accountEmail Field Functions 
    bool hasAccountEmail() const { return this->accountEmail_ != nullptr;};
    void deleteAccountEmail() { this->accountEmail_ = nullptr;};
    inline string getAccountEmail() const { DARABONBA_PTR_GET_DEFAULT(accountEmail_, "") };
    inline AddEmployeeRequest& setAccountEmail(string accountEmail) { DARABONBA_PTR_SET_VALUE(accountEmail_, accountEmail) };


    // accountPhone Field Functions 
    bool hasAccountPhone() const { return this->accountPhone_ != nullptr;};
    void deleteAccountPhone() { this->accountPhone_ = nullptr;};
    inline string getAccountPhone() const { DARABONBA_PTR_GET_DEFAULT(accountPhone_, "") };
    inline AddEmployeeRequest& setAccountPhone(string accountPhone) { DARABONBA_PTR_SET_VALUE(accountPhone_, accountPhone) };


    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline AddEmployeeRequest& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline AddEmployeeRequest& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // baseCityCodeList Field Functions 
    bool hasBaseCityCodeList() const { return this->baseCityCodeList_ != nullptr;};
    void deleteBaseCityCodeList() { this->baseCityCodeList_ = nullptr;};
    inline const vector<string> & getBaseCityCodeList() const { DARABONBA_PTR_GET_CONST(baseCityCodeList_, vector<string>) };
    inline vector<string> getBaseCityCodeList() { DARABONBA_PTR_GET(baseCityCodeList_, vector<string>) };
    inline AddEmployeeRequest& setBaseCityCodeList(const vector<string> & baseCityCodeList) { DARABONBA_PTR_SET_VALUE(baseCityCodeList_, baseCityCodeList) };
    inline AddEmployeeRequest& setBaseCityCodeList(vector<string> && baseCityCodeList) { DARABONBA_PTR_SET_RVALUE(baseCityCodeList_, baseCityCodeList) };


    // baseLocationList Field Functions 
    bool hasBaseLocationList() const { return this->baseLocationList_ != nullptr;};
    void deleteBaseLocationList() { this->baseLocationList_ = nullptr;};
    inline const vector<AddEmployeeRequest::BaseLocationList> & getBaseLocationList() const { DARABONBA_PTR_GET_CONST(baseLocationList_, vector<AddEmployeeRequest::BaseLocationList>) };
    inline vector<AddEmployeeRequest::BaseLocationList> getBaseLocationList() { DARABONBA_PTR_GET(baseLocationList_, vector<AddEmployeeRequest::BaseLocationList>) };
    inline AddEmployeeRequest& setBaseLocationList(const vector<AddEmployeeRequest::BaseLocationList> & baseLocationList) { DARABONBA_PTR_SET_VALUE(baseLocationList_, baseLocationList) };
    inline AddEmployeeRequest& setBaseLocationList(vector<AddEmployeeRequest::BaseLocationList> && baseLocationList) { DARABONBA_PTR_SET_RVALUE(baseLocationList_, baseLocationList) };


    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline AddEmployeeRequest& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // certList Field Functions 
    bool hasCertList() const { return this->certList_ != nullptr;};
    void deleteCertList() { this->certList_ = nullptr;};
    inline const vector<AddEmployeeRequest::CertList> & getCertList() const { DARABONBA_PTR_GET_CONST(certList_, vector<AddEmployeeRequest::CertList>) };
    inline vector<AddEmployeeRequest::CertList> getCertList() { DARABONBA_PTR_GET(certList_, vector<AddEmployeeRequest::CertList>) };
    inline AddEmployeeRequest& setCertList(const vector<AddEmployeeRequest::CertList> & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
    inline AddEmployeeRequest& setCertList(vector<AddEmployeeRequest::CertList> && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


    // customRoleCodeList Field Functions 
    bool hasCustomRoleCodeList() const { return this->customRoleCodeList_ != nullptr;};
    void deleteCustomRoleCodeList() { this->customRoleCodeList_ = nullptr;};
    inline const vector<string> & getCustomRoleCodeList() const { DARABONBA_PTR_GET_CONST(customRoleCodeList_, vector<string>) };
    inline vector<string> getCustomRoleCodeList() { DARABONBA_PTR_GET(customRoleCodeList_, vector<string>) };
    inline AddEmployeeRequest& setCustomRoleCodeList(const vector<string> & customRoleCodeList) { DARABONBA_PTR_SET_VALUE(customRoleCodeList_, customRoleCodeList) };
    inline AddEmployeeRequest& setCustomRoleCodeList(vector<string> && customRoleCodeList) { DARABONBA_PTR_SET_RVALUE(customRoleCodeList_, customRoleCodeList) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline AddEmployeeRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline AddEmployeeRequest& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // isAdmin Field Functions 
    bool hasIsAdmin() const { return this->isAdmin_ != nullptr;};
    void deleteIsAdmin() { this->isAdmin_ = nullptr;};
    inline bool getIsAdmin() const { DARABONBA_PTR_GET_DEFAULT(isAdmin_, false) };
    inline AddEmployeeRequest& setIsAdmin(bool isAdmin) { DARABONBA_PTR_SET_VALUE(isAdmin_, isAdmin) };


    // isBoss Field Functions 
    bool hasIsBoss() const { return this->isBoss_ != nullptr;};
    void deleteIsBoss() { this->isBoss_ = nullptr;};
    inline bool getIsBoss() const { DARABONBA_PTR_GET_DEFAULT(isBoss_, false) };
    inline AddEmployeeRequest& setIsBoss(bool isBoss) { DARABONBA_PTR_SET_VALUE(isBoss_, isBoss) };


    // isDeptLeader Field Functions 
    bool hasIsDeptLeader() const { return this->isDeptLeader_ != nullptr;};
    void deleteIsDeptLeader() { this->isDeptLeader_ = nullptr;};
    inline bool getIsDeptLeader() const { DARABONBA_PTR_GET_DEFAULT(isDeptLeader_, false) };
    inline AddEmployeeRequest& setIsDeptLeader(bool isDeptLeader) { DARABONBA_PTR_SET_VALUE(isDeptLeader_, isDeptLeader) };


    // jobNo Field Functions 
    bool hasJobNo() const { return this->jobNo_ != nullptr;};
    void deleteJobNo() { this->jobNo_ = nullptr;};
    inline string getJobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
    inline AddEmployeeRequest& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


    // managerUserId Field Functions 
    bool hasManagerUserId() const { return this->managerUserId_ != nullptr;};
    void deleteManagerUserId() { this->managerUserId_ = nullptr;};
    inline string getManagerUserId() const { DARABONBA_PTR_GET_DEFAULT(managerUserId_, "") };
    inline AddEmployeeRequest& setManagerUserId(string managerUserId) { DARABONBA_PTR_SET_VALUE(managerUserId_, managerUserId) };


    // outDeptIdList Field Functions 
    bool hasOutDeptIdList() const { return this->outDeptIdList_ != nullptr;};
    void deleteOutDeptIdList() { this->outDeptIdList_ = nullptr;};
    inline const vector<string> & getOutDeptIdList() const { DARABONBA_PTR_GET_CONST(outDeptIdList_, vector<string>) };
    inline vector<string> getOutDeptIdList() { DARABONBA_PTR_GET(outDeptIdList_, vector<string>) };
    inline AddEmployeeRequest& setOutDeptIdList(const vector<string> & outDeptIdList) { DARABONBA_PTR_SET_VALUE(outDeptIdList_, outDeptIdList) };
    inline AddEmployeeRequest& setOutDeptIdList(vector<string> && outDeptIdList) { DARABONBA_PTR_SET_RVALUE(outDeptIdList_, outDeptIdList) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline AddEmployeeRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // positionLevel Field Functions 
    bool hasPositionLevel() const { return this->positionLevel_ != nullptr;};
    void deletePositionLevel() { this->positionLevel_ = nullptr;};
    inline string getPositionLevel() const { DARABONBA_PTR_GET_DEFAULT(positionLevel_, "") };
    inline AddEmployeeRequest& setPositionLevel(string positionLevel) { DARABONBA_PTR_SET_VALUE(positionLevel_, positionLevel) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string getRealName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline AddEmployeeRequest& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


    // realNameEn Field Functions 
    bool hasRealNameEn() const { return this->realNameEn_ != nullptr;};
    void deleteRealNameEn() { this->realNameEn_ = nullptr;};
    inline string getRealNameEn() const { DARABONBA_PTR_GET_DEFAULT(realNameEn_, "") };
    inline AddEmployeeRequest& setRealNameEn(string realNameEn) { DARABONBA_PTR_SET_VALUE(realNameEn_, realNameEn) };


    // unionId Field Functions 
    bool hasUnionId() const { return this->unionId_ != nullptr;};
    void deleteUnionId() { this->unionId_ = nullptr;};
    inline string getUnionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
    inline AddEmployeeRequest& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddEmployeeRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline AddEmployeeRequest& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    // The account email address. This parameter can be specified when the enterprise activation method is email activation.
    shared_ptr<string> accountEmail_ {};
    // The account phone number. For enterprises with international phone numbers enabled, specify international numbers, Hong Kong (China), Macao (China), and Taiwan (China) numbers in the format +xx-xxxxxx.
    shared_ptr<string> accountPhone_ {};
    // The custom extension field for the employee, which supports key-value pairs.
    // 
    // - Format: JSON string.
    shared_ptr<string> attribute_ {};
    // The avatar of the employee. Specify the URL of the image.
    shared_ptr<string> avatar_ {};
    // The 6-digit administrative code of the work location.
    // - A maximum of two different administrative codes can be specified.
    shared_ptr<vector<string>> baseCityCodeList_ {};
    // The base location information of the employee.
    shared_ptr<vector<AddEmployeeRequest::BaseLocationList>> baseLocationList_ {};
    // The birthday of the employee.
    // - Format: yy-MM-dd.
    shared_ptr<string> birthday_ {};
    // The certificate information of the employee.
    shared_ptr<vector<AddEmployeeRequest::CertList>> certList_ {};
    // The collection of role IDs associated with the employee. The number of roles associated with a single employee must be less than or equal to 200. Otherwise, the employee synchronization fails.
    shared_ptr<vector<string>> customRoleCodeList_ {};
    // The email address of the employee.
    shared_ptr<string> email_ {};
    // The gender of the employee.
    shared_ptr<string> gender_ {};
    // Specifies whether the employee is an Alibaba Business Travel enterprise administrator.
    shared_ptr<bool> isAdmin_ {};
    // Specifies whether the employee is the boss.
    shared_ptr<bool> isBoss_ {};
    // Specifies whether the employee is a department manager.
    shared_ptr<bool> isDeptLeader_ {};
    // The employee number, which serves as a unique identifier for the employee along with `user_id`. Ensure that the value is unique.
    shared_ptr<string> jobNo_ {};
    // The ID of the direct manager of the employee.
    shared_ptr<string> managerUserId_ {};
    // The list of departments to which the employee belongs.
    shared_ptr<vector<string>> outDeptIdList_ {};
    // The mobile phone number of the employee.
    // - This field is commonly used for booking business travel services across various categories. **In this case, it is required.**
    // - If your enterprise is a government agency or other special enterprise, call 400-800-5890 to contact an Alibaba Business Travel customer service representative.
    shared_ptr<string> phone_ {};
    // The position level of the employee, which is commonly used to match different travel standards.
    shared_ptr<string> positionLevel_ {};
    // The name of the employee.
    shared_ptr<string> realName_ {};
    // The English name of the employee. Follow these format requirements:
    // - Separate the last name and first name with "/", for example: LastName/FirstName.
    // - Do not include spaces between the last name and first name.
    shared_ptr<string> realNameEn_ {};
    // The unique identifier of the same employee across multiple enterprises (parent and subsidiary enterprises).
    shared_ptr<string> unionId_ {};
    // The employee ID, which is the unique identifier of the employee within the enterprise. Ensure that this value is unique.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
    // The nickname of the employee.
    // 
    // This parameter is required.
    shared_ptr<string> userNick_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
