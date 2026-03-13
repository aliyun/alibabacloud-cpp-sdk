// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISVUSERSAVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ISVUSERSAVEREQUEST_HPP_
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
  class IsvUserSaveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IsvUserSaveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(user_list, userList_);
    };
    friend void from_json(const Darabonba::Json& j, IsvUserSaveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(user_list, userList_);
    };
    IsvUserSaveRequest() = default ;
    IsvUserSaveRequest(const IsvUserSaveRequest &) = default ;
    IsvUserSaveRequest(IsvUserSaveRequest &&) = default ;
    IsvUserSaveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IsvUserSaveRequest() = default ;
    IsvUserSaveRequest& operator=(const IsvUserSaveRequest &) = default ;
    IsvUserSaveRequest& operator=(IsvUserSaveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, UserList& obj) { 
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
      UserList() = default ;
      UserList(const UserList &) = default ;
      UserList(UserList &&) = default ;
      UserList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserList() = default ;
      UserList& operator=(const UserList &) = default ;
      UserList& operator=(UserList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CertList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CertList& obj) { 
          DARABONBA_PTR_TO_JSON(cert_expired_time, certExpiredTime_);
          DARABONBA_PTR_TO_JSON(cert_nation, certNation_);
          DARABONBA_PTR_TO_JSON(cert_no, certNo_);
          DARABONBA_PTR_TO_JSON(cert_type, certType_);
          DARABONBA_PTR_TO_JSON(nationality, nationality_);
        };
        friend void from_json(const Darabonba::Json& j, CertList& obj) { 
          DARABONBA_PTR_FROM_JSON(cert_expired_time, certExpiredTime_);
          DARABONBA_PTR_FROM_JSON(cert_nation, certNation_);
          DARABONBA_PTR_FROM_JSON(cert_no, certNo_);
          DARABONBA_PTR_FROM_JSON(cert_type, certType_);
          DARABONBA_PTR_FROM_JSON(nationality, nationality_);
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
        virtual bool empty() const override { return this->certExpiredTime_ == nullptr
        && this->certNation_ == nullptr && this->certNo_ == nullptr && this->certType_ == nullptr && this->nationality_ == nullptr; };
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


        // nationality Field Functions 
        bool hasNationality() const { return this->nationality_ != nullptr;};
        void deleteNationality() { this->nationality_ = nullptr;};
        inline string getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
        inline CertList& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


      protected:
        shared_ptr<string> certExpiredTime_ {};
        shared_ptr<string> certNation_ {};
        shared_ptr<string> certNo_ {};
        shared_ptr<int32_t> certType_ {};
        shared_ptr<string> nationality_ {};
      };

      virtual bool empty() const override { return this->baseCityCode_ == nullptr
        && this->birthday_ == nullptr && this->certList_ == nullptr && this->departId_ == nullptr && this->email_ == nullptr && this->gender_ == nullptr
        && this->isAdmin_ == nullptr && this->jobNo_ == nullptr && this->leaveStatus_ == nullptr && this->managerUserId_ == nullptr && this->phone_ == nullptr
        && this->position_ == nullptr && this->positionLevel_ == nullptr && this->realNameEn_ == nullptr && this->roleIdList_ == nullptr && this->thirdDepartId_ == nullptr
        && this->thirdDepartIdList_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr && this->userNick_ == nullptr; };
      // baseCityCode Field Functions 
      bool hasBaseCityCode() const { return this->baseCityCode_ != nullptr;};
      void deleteBaseCityCode() { this->baseCityCode_ = nullptr;};
      inline string getBaseCityCode() const { DARABONBA_PTR_GET_DEFAULT(baseCityCode_, "") };
      inline UserList& setBaseCityCode(string baseCityCode) { DARABONBA_PTR_SET_VALUE(baseCityCode_, baseCityCode) };


      // birthday Field Functions 
      bool hasBirthday() const { return this->birthday_ != nullptr;};
      void deleteBirthday() { this->birthday_ = nullptr;};
      inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
      inline UserList& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


      // certList Field Functions 
      bool hasCertList() const { return this->certList_ != nullptr;};
      void deleteCertList() { this->certList_ = nullptr;};
      inline const vector<UserList::CertList> & getCertList() const { DARABONBA_PTR_GET_CONST(certList_, vector<UserList::CertList>) };
      inline vector<UserList::CertList> getCertList() { DARABONBA_PTR_GET(certList_, vector<UserList::CertList>) };
      inline UserList& setCertList(const vector<UserList::CertList> & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
      inline UserList& setCertList(vector<UserList::CertList> && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


      // departId Field Functions 
      bool hasDepartId() const { return this->departId_ != nullptr;};
      void deleteDepartId() { this->departId_ = nullptr;};
      inline int64_t getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, 0L) };
      inline UserList& setDepartId(int64_t departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline UserList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // gender Field Functions 
      bool hasGender() const { return this->gender_ != nullptr;};
      void deleteGender() { this->gender_ = nullptr;};
      inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
      inline UserList& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


      // isAdmin Field Functions 
      bool hasIsAdmin() const { return this->isAdmin_ != nullptr;};
      void deleteIsAdmin() { this->isAdmin_ = nullptr;};
      inline bool getIsAdmin() const { DARABONBA_PTR_GET_DEFAULT(isAdmin_, false) };
      inline UserList& setIsAdmin(bool isAdmin) { DARABONBA_PTR_SET_VALUE(isAdmin_, isAdmin) };


      // jobNo Field Functions 
      bool hasJobNo() const { return this->jobNo_ != nullptr;};
      void deleteJobNo() { this->jobNo_ = nullptr;};
      inline string getJobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
      inline UserList& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


      // leaveStatus Field Functions 
      bool hasLeaveStatus() const { return this->leaveStatus_ != nullptr;};
      void deleteLeaveStatus() { this->leaveStatus_ = nullptr;};
      inline int32_t getLeaveStatus() const { DARABONBA_PTR_GET_DEFAULT(leaveStatus_, 0) };
      inline UserList& setLeaveStatus(int32_t leaveStatus) { DARABONBA_PTR_SET_VALUE(leaveStatus_, leaveStatus) };


      // managerUserId Field Functions 
      bool hasManagerUserId() const { return this->managerUserId_ != nullptr;};
      void deleteManagerUserId() { this->managerUserId_ = nullptr;};
      inline string getManagerUserId() const { DARABONBA_PTR_GET_DEFAULT(managerUserId_, "") };
      inline UserList& setManagerUserId(string managerUserId) { DARABONBA_PTR_SET_VALUE(managerUserId_, managerUserId) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline UserList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // position Field Functions 
      bool hasPosition() const { return this->position_ != nullptr;};
      void deletePosition() { this->position_ = nullptr;};
      inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
      inline UserList& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


      // positionLevel Field Functions 
      bool hasPositionLevel() const { return this->positionLevel_ != nullptr;};
      void deletePositionLevel() { this->positionLevel_ = nullptr;};
      inline string getPositionLevel() const { DARABONBA_PTR_GET_DEFAULT(positionLevel_, "") };
      inline UserList& setPositionLevel(string positionLevel) { DARABONBA_PTR_SET_VALUE(positionLevel_, positionLevel) };


      // realNameEn Field Functions 
      bool hasRealNameEn() const { return this->realNameEn_ != nullptr;};
      void deleteRealNameEn() { this->realNameEn_ = nullptr;};
      inline string getRealNameEn() const { DARABONBA_PTR_GET_DEFAULT(realNameEn_, "") };
      inline UserList& setRealNameEn(string realNameEn) { DARABONBA_PTR_SET_VALUE(realNameEn_, realNameEn) };


      // roleIdList Field Functions 
      bool hasRoleIdList() const { return this->roleIdList_ != nullptr;};
      void deleteRoleIdList() { this->roleIdList_ = nullptr;};
      inline const vector<string> & getRoleIdList() const { DARABONBA_PTR_GET_CONST(roleIdList_, vector<string>) };
      inline vector<string> getRoleIdList() { DARABONBA_PTR_GET(roleIdList_, vector<string>) };
      inline UserList& setRoleIdList(const vector<string> & roleIdList) { DARABONBA_PTR_SET_VALUE(roleIdList_, roleIdList) };
      inline UserList& setRoleIdList(vector<string> && roleIdList) { DARABONBA_PTR_SET_RVALUE(roleIdList_, roleIdList) };


      // thirdDepartId Field Functions 
      bool hasThirdDepartId() const { return this->thirdDepartId_ != nullptr;};
      void deleteThirdDepartId() { this->thirdDepartId_ = nullptr;};
      inline string getThirdDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdDepartId_, "") };
      inline UserList& setThirdDepartId(string thirdDepartId) { DARABONBA_PTR_SET_VALUE(thirdDepartId_, thirdDepartId) };


      // thirdDepartIdList Field Functions 
      bool hasThirdDepartIdList() const { return this->thirdDepartIdList_ != nullptr;};
      void deleteThirdDepartIdList() { this->thirdDepartIdList_ = nullptr;};
      inline const vector<string> & getThirdDepartIdList() const { DARABONBA_PTR_GET_CONST(thirdDepartIdList_, vector<string>) };
      inline vector<string> getThirdDepartIdList() { DARABONBA_PTR_GET(thirdDepartIdList_, vector<string>) };
      inline UserList& setThirdDepartIdList(const vector<string> & thirdDepartIdList) { DARABONBA_PTR_SET_VALUE(thirdDepartIdList_, thirdDepartIdList) };
      inline UserList& setThirdDepartIdList(vector<string> && thirdDepartIdList) { DARABONBA_PTR_SET_RVALUE(thirdDepartIdList_, thirdDepartIdList) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline UserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline UserList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // userNick Field Functions 
      bool hasUserNick() const { return this->userNick_ != nullptr;};
      void deleteUserNick() { this->userNick_ = nullptr;};
      inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
      inline UserList& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


    protected:
      shared_ptr<string> baseCityCode_ {};
      shared_ptr<string> birthday_ {};
      shared_ptr<vector<UserList::CertList>> certList_ {};
      shared_ptr<int64_t> departId_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> gender_ {};
      shared_ptr<bool> isAdmin_ {};
      shared_ptr<string> jobNo_ {};
      shared_ptr<int32_t> leaveStatus_ {};
      shared_ptr<string> managerUserId_ {};
      shared_ptr<string> phone_ {};
      shared_ptr<string> position_ {};
      shared_ptr<string> positionLevel_ {};
      shared_ptr<string> realNameEn_ {};
      shared_ptr<vector<string>> roleIdList_ {};
      shared_ptr<string> thirdDepartId_ {};
      shared_ptr<vector<string>> thirdDepartIdList_ {};
      // This parameter is required.
      shared_ptr<string> userId_ {};
      // This parameter is required.
      shared_ptr<string> userName_ {};
      shared_ptr<string> userNick_ {};
    };

    virtual bool empty() const override { return this->userList_ == nullptr; };
    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<IsvUserSaveRequest::UserList> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<IsvUserSaveRequest::UserList>) };
    inline vector<IsvUserSaveRequest::UserList> getUserList() { DARABONBA_PTR_GET(userList_, vector<IsvUserSaveRequest::UserList>) };
    inline IsvUserSaveRequest& setUserList(const vector<IsvUserSaveRequest::UserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline IsvUserSaveRequest& setUserList(vector<IsvUserSaveRequest::UserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    shared_ptr<vector<IsvUserSaveRequest::UserList>> userList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
