// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GROUPUSERSAVESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GROUPUSERSAVESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class GroupUserSaveShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GroupUserSaveShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(base_city_code, baseCityCode_);
      DARABONBA_PTR_TO_JSON(birthday, birthday_);
      DARABONBA_PTR_TO_JSON(cert_list, certListShrink_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(job_no, jobNo_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_TO_JSON(sub_corp_id_list, subCorpIdListShrink_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, GroupUserSaveShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(base_city_code, baseCityCode_);
      DARABONBA_PTR_FROM_JSON(birthday, birthday_);
      DARABONBA_PTR_FROM_JSON(cert_list, certListShrink_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(real_name_en, realNameEn_);
      DARABONBA_PTR_FROM_JSON(sub_corp_id_list, subCorpIdListShrink_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    GroupUserSaveShrinkRequest() = default ;
    GroupUserSaveShrinkRequest(const GroupUserSaveShrinkRequest &) = default ;
    GroupUserSaveShrinkRequest(GroupUserSaveShrinkRequest &&) = default ;
    GroupUserSaveShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GroupUserSaveShrinkRequest() = default ;
    GroupUserSaveShrinkRequest& operator=(const GroupUserSaveShrinkRequest &) = default ;
    GroupUserSaveShrinkRequest& operator=(GroupUserSaveShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseCityCode_ == nullptr
        && this->birthday_ == nullptr && this->certListShrink_ == nullptr && this->gender_ == nullptr && this->jobNo_ == nullptr && this->phone_ == nullptr
        && this->realNameEn_ == nullptr && this->subCorpIdListShrink_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
    // baseCityCode Field Functions 
    bool hasBaseCityCode() const { return this->baseCityCode_ != nullptr;};
    void deleteBaseCityCode() { this->baseCityCode_ = nullptr;};
    inline string getBaseCityCode() const { DARABONBA_PTR_GET_DEFAULT(baseCityCode_, "") };
    inline GroupUserSaveShrinkRequest& setBaseCityCode(string baseCityCode) { DARABONBA_PTR_SET_VALUE(baseCityCode_, baseCityCode) };


    // birthday Field Functions 
    bool hasBirthday() const { return this->birthday_ != nullptr;};
    void deleteBirthday() { this->birthday_ = nullptr;};
    inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
    inline GroupUserSaveShrinkRequest& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


    // certListShrink Field Functions 
    bool hasCertListShrink() const { return this->certListShrink_ != nullptr;};
    void deleteCertListShrink() { this->certListShrink_ = nullptr;};
    inline string getCertListShrink() const { DARABONBA_PTR_GET_DEFAULT(certListShrink_, "") };
    inline GroupUserSaveShrinkRequest& setCertListShrink(string certListShrink) { DARABONBA_PTR_SET_VALUE(certListShrink_, certListShrink) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline GroupUserSaveShrinkRequest& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // jobNo Field Functions 
    bool hasJobNo() const { return this->jobNo_ != nullptr;};
    void deleteJobNo() { this->jobNo_ = nullptr;};
    inline string getJobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
    inline GroupUserSaveShrinkRequest& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline GroupUserSaveShrinkRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // realNameEn Field Functions 
    bool hasRealNameEn() const { return this->realNameEn_ != nullptr;};
    void deleteRealNameEn() { this->realNameEn_ = nullptr;};
    inline string getRealNameEn() const { DARABONBA_PTR_GET_DEFAULT(realNameEn_, "") };
    inline GroupUserSaveShrinkRequest& setRealNameEn(string realNameEn) { DARABONBA_PTR_SET_VALUE(realNameEn_, realNameEn) };


    // subCorpIdListShrink Field Functions 
    bool hasSubCorpIdListShrink() const { return this->subCorpIdListShrink_ != nullptr;};
    void deleteSubCorpIdListShrink() { this->subCorpIdListShrink_ = nullptr;};
    inline string getSubCorpIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(subCorpIdListShrink_, "") };
    inline GroupUserSaveShrinkRequest& setSubCorpIdListShrink(string subCorpIdListShrink) { DARABONBA_PTR_SET_VALUE(subCorpIdListShrink_, subCorpIdListShrink) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GroupUserSaveShrinkRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GroupUserSaveShrinkRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<string> baseCityCode_ {};
    shared_ptr<string> birthday_ {};
    shared_ptr<string> certListShrink_ {};
    shared_ptr<string> gender_ {};
    shared_ptr<string> jobNo_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<string> realNameEn_ {};
    // This parameter is required.
    shared_ptr<string> subCorpIdListShrink_ {};
    // This parameter is required.
    shared_ptr<string> userId_ {};
    // This parameter is required.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
