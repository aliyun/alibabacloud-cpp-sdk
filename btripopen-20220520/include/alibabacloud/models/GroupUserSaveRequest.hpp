// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GROUPUSERSAVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GROUPUSERSAVEREQUEST_HPP_
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
  class GroupUserSaveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GroupUserSaveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(base_city_code, baseCityCode_);
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(cert_list, certList_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(job_no, jobNo_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_TO_JSON(sub_corp_id_list, subCorpIdList_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, GroupUserSaveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(base_city_code, baseCityCode_);
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(cert_list, certList_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_FROM_JSON(sub_corp_id_list, subCorpIdList_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    GroupUserSaveRequest() = default ;
    GroupUserSaveRequest(const GroupUserSaveRequest &) = default ;
    GroupUserSaveRequest(GroupUserSaveRequest &&) = default ;
    GroupUserSaveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GroupUserSaveRequest() = default ;
    GroupUserSaveRequest& operator=(const GroupUserSaveRequest &) = default ;
    GroupUserSaveRequest& operator=(GroupUserSaveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubCorpIdList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubCorpIdList& obj) { 
        DARABONBA_PTR_TO_JSON(depart_ids, departIds_);
        DARABONBA_PTR_TO_JSON(email, email_);
        DARABONBA_PTR_TO_JSON(leave_status, leaveStatus_);
        DARABONBA_PTR_TO_JSON(manager_user_id, managerUserId_);
        DARABONBA_PTR_TO_JSON(position_level, positionLevel_);
        DARABONBA_PTR_TO_JSON(sub_corp_id, subCorpId_);
      };
      friend void from_json(const Darabonba::Json& j, SubCorpIdList& obj) { 
        DARABONBA_PTR_FROM_JSON(depart_ids, departIds_);
        DARABONBA_PTR_FROM_JSON(email, email_);
        DARABONBA_PTR_FROM_JSON(leave_status, leaveStatus_);
        DARABONBA_PTR_FROM_JSON(manager_user_id, managerUserId_);
        DARABONBA_PTR_FROM_JSON(position_level, positionLevel_);
        DARABONBA_PTR_FROM_JSON(sub_corp_id, subCorpId_);
      };
      SubCorpIdList() = default ;
      SubCorpIdList(const SubCorpIdList &) = default ;
      SubCorpIdList(SubCorpIdList &&) = default ;
      SubCorpIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubCorpIdList() = default ;
      SubCorpIdList& operator=(const SubCorpIdList &) = default ;
      SubCorpIdList& operator=(SubCorpIdList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->departIds_ == nullptr
        && this->email_ == nullptr && this->leaveStatus_ == nullptr && this->managerUserId_ == nullptr && this->positionLevel_ == nullptr && this->subCorpId_ == nullptr; };
      // departIds Field Functions 
      bool hasDepartIds() const { return this->departIds_ != nullptr;};
      void deleteDepartIds() { this->departIds_ = nullptr;};
      inline const vector<string> & getDepartIds() const { DARABONBA_PTR_GET_CONST(departIds_, vector<string>) };
      inline vector<string> getDepartIds() { DARABONBA_PTR_GET(departIds_, vector<string>) };
      inline SubCorpIdList& setDepartIds(const vector<string> & departIds) { DARABONBA_PTR_SET_VALUE(departIds_, departIds) };
      inline SubCorpIdList& setDepartIds(vector<string> && departIds) { DARABONBA_PTR_SET_RVALUE(departIds_, departIds) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline SubCorpIdList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // leaveStatus Field Functions 
      bool hasLeaveStatus() const { return this->leaveStatus_ != nullptr;};
      void deleteLeaveStatus() { this->leaveStatus_ = nullptr;};
      inline int32_t getLeaveStatus() const { DARABONBA_PTR_GET_DEFAULT(leaveStatus_, 0) };
      inline SubCorpIdList& setLeaveStatus(int32_t leaveStatus) { DARABONBA_PTR_SET_VALUE(leaveStatus_, leaveStatus) };


      // managerUserId Field Functions 
      bool hasManagerUserId() const { return this->managerUserId_ != nullptr;};
      void deleteManagerUserId() { this->managerUserId_ = nullptr;};
      inline string getManagerUserId() const { DARABONBA_PTR_GET_DEFAULT(managerUserId_, "") };
      inline SubCorpIdList& setManagerUserId(string managerUserId) { DARABONBA_PTR_SET_VALUE(managerUserId_, managerUserId) };


      // positionLevel Field Functions 
      bool hasPositionLevel() const { return this->positionLevel_ != nullptr;};
      void deletePositionLevel() { this->positionLevel_ = nullptr;};
      inline string getPositionLevel() const { DARABONBA_PTR_GET_DEFAULT(positionLevel_, "") };
      inline SubCorpIdList& setPositionLevel(string positionLevel) { DARABONBA_PTR_SET_VALUE(positionLevel_, positionLevel) };


      // subCorpId Field Functions 
      bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
      void deleteSubCorpId() { this->subCorpId_ = nullptr;};
      inline string getSubCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
      inline SubCorpIdList& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


    protected:
      shared_ptr<vector<string>> departIds_ {};
      shared_ptr<string> email_ {};
      // This parameter is required.
      shared_ptr<int32_t> leaveStatus_ {};
      shared_ptr<string> managerUserId_ {};
      shared_ptr<string> positionLevel_ {};
      // This parameter is required.
      shared_ptr<string> subCorpId_ {};
    };

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
        && this->birthday_ == nullptr && this->certList_ == nullptr && this->gender_ == nullptr && this->jobNo_ == nullptr && this->phone_ == nullptr
        && this->realNameEn_ == nullptr && this->subCorpIdList_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
    // baseCityCode Field Functions 
    bool hasBaseCityCode() const { return this->baseCityCode_ != nullptr;};
    void deleteBaseCityCode() { this->baseCityCode_ = nullptr;};
    inline string getBaseCityCode() const { DARABONBA_PTR_GET_DEFAULT(baseCityCode_, "") };
    inline GroupUserSaveRequest& setBaseCityCode(string baseCityCode) { DARABONBA_PTR_SET_VALUE(baseCityCode_, baseCityCode) };


    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline GroupUserSaveRequest& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // certList Field Functions 
    bool hasCertList() const { return this->certList_ != nullptr;};
    void deleteCertList() { this->certList_ = nullptr;};
    inline const vector<GroupUserSaveRequest::CertList> & getCertList() const { DARABONBA_PTR_GET_CONST(certList_, vector<GroupUserSaveRequest::CertList>) };
    inline vector<GroupUserSaveRequest::CertList> getCertList() { DARABONBA_PTR_GET(certList_, vector<GroupUserSaveRequest::CertList>) };
    inline GroupUserSaveRequest& setCertList(const vector<GroupUserSaveRequest::CertList> & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
    inline GroupUserSaveRequest& setCertList(vector<GroupUserSaveRequest::CertList> && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline GroupUserSaveRequest& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // jobNo Field Functions 
    bool hasJobNo() const { return this->jobNo_ != nullptr;};
    void deleteJobNo() { this->jobNo_ = nullptr;};
    inline string getJobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
    inline GroupUserSaveRequest& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline GroupUserSaveRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // realNameEn Field Functions 
    bool hasRealNameEn() const { return this->realNameEn_ != nullptr;};
    void deleteRealNameEn() { this->realNameEn_ = nullptr;};
    inline string getRealNameEn() const { DARABONBA_PTR_GET_DEFAULT(realNameEn_, "") };
    inline GroupUserSaveRequest& setRealNameEn(string realNameEn) { DARABONBA_PTR_SET_VALUE(realNameEn_, realNameEn) };


    // subCorpIdList Field Functions 
    bool hasSubCorpIdList() const { return this->subCorpIdList_ != nullptr;};
    void deleteSubCorpIdList() { this->subCorpIdList_ = nullptr;};
    inline const vector<GroupUserSaveRequest::SubCorpIdList> & getSubCorpIdList() const { DARABONBA_PTR_GET_CONST(subCorpIdList_, vector<GroupUserSaveRequest::SubCorpIdList>) };
    inline vector<GroupUserSaveRequest::SubCorpIdList> getSubCorpIdList() { DARABONBA_PTR_GET(subCorpIdList_, vector<GroupUserSaveRequest::SubCorpIdList>) };
    inline GroupUserSaveRequest& setSubCorpIdList(const vector<GroupUserSaveRequest::SubCorpIdList> & subCorpIdList) { DARABONBA_PTR_SET_VALUE(subCorpIdList_, subCorpIdList) };
    inline GroupUserSaveRequest& setSubCorpIdList(vector<GroupUserSaveRequest::SubCorpIdList> && subCorpIdList) { DARABONBA_PTR_SET_RVALUE(subCorpIdList_, subCorpIdList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GroupUserSaveRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GroupUserSaveRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<string> baseCityCode_ {};
    shared_ptr<string> birthday_ {};
    shared_ptr<vector<GroupUserSaveRequest::CertList>> certList_ {};
    shared_ptr<string> gender_ {};
    shared_ptr<string> jobNo_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<string> realNameEn_ {};
    // This parameter is required.
    shared_ptr<vector<GroupUserSaveRequest::SubCorpIdList>> subCorpIdList_ {};
    // This parameter is required.
    shared_ptr<string> userId_ {};
    // This parameter is required.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
