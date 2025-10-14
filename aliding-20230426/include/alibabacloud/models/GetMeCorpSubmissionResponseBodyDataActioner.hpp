// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMECORPSUBMISSIONRESPONSEBODYDATAACTIONER_HPP_
#define ALIBABACLOUD_MODELS_GETMECORPSUBMISSIONRESPONSEBODYDATAACTIONER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMeCorpSubmissionResponseBodyDataActioner : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMeCorpSubmissionResponseBodyDataActioner& obj) { 
      DARABONBA_PTR_TO_JSON(BuName, buName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EmployeeType, employeeType_);
      DARABONBA_PTR_TO_JSON(EmployeeTypeInformation, employeeTypeInformation_);
      DARABONBA_PTR_TO_JSON(HumanResourceGroupWorkNumber, humanResourceGroupWorkNumber_);
      DARABONBA_PTR_TO_JSON(IsSystemAdmin, isSystemAdmin_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_TO_JSON(PersonalPhoto, personalPhoto_);
      DARABONBA_PTR_TO_JSON(PersonalPhotoUrl, personalPhotoUrl_);
      DARABONBA_PTR_TO_JSON(PinyinNameAll, pinyinNameAll_);
      DARABONBA_PTR_TO_JSON(PinyinNickName, pinyinNickName_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(SuperUserId, superUserId_);
      DARABONBA_PTR_TO_JSON(TbWang, tbWang_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMeCorpSubmissionResponseBodyDataActioner& obj) { 
      DARABONBA_PTR_FROM_JSON(BuName, buName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EmployeeType, employeeType_);
      DARABONBA_PTR_FROM_JSON(EmployeeTypeInformation, employeeTypeInformation_);
      DARABONBA_PTR_FROM_JSON(HumanResourceGroupWorkNumber, humanResourceGroupWorkNumber_);
      DARABONBA_PTR_FROM_JSON(IsSystemAdmin, isSystemAdmin_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_FROM_JSON(PersonalPhoto, personalPhoto_);
      DARABONBA_PTR_FROM_JSON(PersonalPhotoUrl, personalPhotoUrl_);
      DARABONBA_PTR_FROM_JSON(PinyinNameAll, pinyinNameAll_);
      DARABONBA_PTR_FROM_JSON(PinyinNickName, pinyinNickName_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(SuperUserId, superUserId_);
      DARABONBA_PTR_FROM_JSON(TbWang, tbWang_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetMeCorpSubmissionResponseBodyDataActioner() = default ;
    GetMeCorpSubmissionResponseBodyDataActioner(const GetMeCorpSubmissionResponseBodyDataActioner &) = default ;
    GetMeCorpSubmissionResponseBodyDataActioner(GetMeCorpSubmissionResponseBodyDataActioner &&) = default ;
    GetMeCorpSubmissionResponseBodyDataActioner(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMeCorpSubmissionResponseBodyDataActioner() = default ;
    GetMeCorpSubmissionResponseBodyDataActioner& operator=(const GetMeCorpSubmissionResponseBodyDataActioner &) = default ;
    GetMeCorpSubmissionResponseBodyDataActioner& operator=(GetMeCorpSubmissionResponseBodyDataActioner &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buName_ == nullptr
        && return this->email_ == nullptr && return this->employeeType_ == nullptr && return this->employeeTypeInformation_ == nullptr && return this->humanResourceGroupWorkNumber_ == nullptr && return this->isSystemAdmin_ == nullptr
        && return this->level_ == nullptr && return this->name_ == nullptr && return this->nickName_ == nullptr && return this->orderNumber_ == nullptr && return this->personalPhoto_ == nullptr
        && return this->personalPhotoUrl_ == nullptr && return this->pinyinNameAll_ == nullptr && return this->pinyinNickName_ == nullptr && return this->state_ == nullptr && return this->superUserId_ == nullptr
        && return this->tbWang_ == nullptr && return this->userId_ == nullptr; };
    // buName Field Functions 
    bool hasBuName() const { return this->buName_ != nullptr;};
    void deleteBuName() { this->buName_ = nullptr;};
    inline string buName() const { DARABONBA_PTR_GET_DEFAULT(buName_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setBuName(string buName) { DARABONBA_PTR_SET_VALUE(buName_, buName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // employeeType Field Functions 
    bool hasEmployeeType() const { return this->employeeType_ != nullptr;};
    void deleteEmployeeType() { this->employeeType_ = nullptr;};
    inline string employeeType() const { DARABONBA_PTR_GET_DEFAULT(employeeType_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setEmployeeType(string employeeType) { DARABONBA_PTR_SET_VALUE(employeeType_, employeeType) };


    // employeeTypeInformation Field Functions 
    bool hasEmployeeTypeInformation() const { return this->employeeTypeInformation_ != nullptr;};
    void deleteEmployeeTypeInformation() { this->employeeTypeInformation_ = nullptr;};
    inline string employeeTypeInformation() const { DARABONBA_PTR_GET_DEFAULT(employeeTypeInformation_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setEmployeeTypeInformation(string employeeTypeInformation) { DARABONBA_PTR_SET_VALUE(employeeTypeInformation_, employeeTypeInformation) };


    // humanResourceGroupWorkNumber Field Functions 
    bool hasHumanResourceGroupWorkNumber() const { return this->humanResourceGroupWorkNumber_ != nullptr;};
    void deleteHumanResourceGroupWorkNumber() { this->humanResourceGroupWorkNumber_ = nullptr;};
    inline string humanResourceGroupWorkNumber() const { DARABONBA_PTR_GET_DEFAULT(humanResourceGroupWorkNumber_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setHumanResourceGroupWorkNumber(string humanResourceGroupWorkNumber) { DARABONBA_PTR_SET_VALUE(humanResourceGroupWorkNumber_, humanResourceGroupWorkNumber) };


    // isSystemAdmin Field Functions 
    bool hasIsSystemAdmin() const { return this->isSystemAdmin_ != nullptr;};
    void deleteIsSystemAdmin() { this->isSystemAdmin_ = nullptr;};
    inline bool isSystemAdmin() const { DARABONBA_PTR_GET_DEFAULT(isSystemAdmin_, false) };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setIsSystemAdmin(bool isSystemAdmin) { DARABONBA_PTR_SET_VALUE(isSystemAdmin_, isSystemAdmin) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // orderNumber Field Functions 
    bool hasOrderNumber() const { return this->orderNumber_ != nullptr;};
    void deleteOrderNumber() { this->orderNumber_ = nullptr;};
    inline string orderNumber() const { DARABONBA_PTR_GET_DEFAULT(orderNumber_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setOrderNumber(string orderNumber) { DARABONBA_PTR_SET_VALUE(orderNumber_, orderNumber) };


    // personalPhoto Field Functions 
    bool hasPersonalPhoto() const { return this->personalPhoto_ != nullptr;};
    void deletePersonalPhoto() { this->personalPhoto_ = nullptr;};
    inline string personalPhoto() const { DARABONBA_PTR_GET_DEFAULT(personalPhoto_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setPersonalPhoto(string personalPhoto) { DARABONBA_PTR_SET_VALUE(personalPhoto_, personalPhoto) };


    // personalPhotoUrl Field Functions 
    bool hasPersonalPhotoUrl() const { return this->personalPhotoUrl_ != nullptr;};
    void deletePersonalPhotoUrl() { this->personalPhotoUrl_ = nullptr;};
    inline string personalPhotoUrl() const { DARABONBA_PTR_GET_DEFAULT(personalPhotoUrl_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setPersonalPhotoUrl(string personalPhotoUrl) { DARABONBA_PTR_SET_VALUE(personalPhotoUrl_, personalPhotoUrl) };


    // pinyinNameAll Field Functions 
    bool hasPinyinNameAll() const { return this->pinyinNameAll_ != nullptr;};
    void deletePinyinNameAll() { this->pinyinNameAll_ = nullptr;};
    inline string pinyinNameAll() const { DARABONBA_PTR_GET_DEFAULT(pinyinNameAll_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setPinyinNameAll(string pinyinNameAll) { DARABONBA_PTR_SET_VALUE(pinyinNameAll_, pinyinNameAll) };


    // pinyinNickName Field Functions 
    bool hasPinyinNickName() const { return this->pinyinNickName_ != nullptr;};
    void deletePinyinNickName() { this->pinyinNickName_ = nullptr;};
    inline string pinyinNickName() const { DARABONBA_PTR_GET_DEFAULT(pinyinNickName_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setPinyinNickName(string pinyinNickName) { DARABONBA_PTR_SET_VALUE(pinyinNickName_, pinyinNickName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // superUserId Field Functions 
    bool hasSuperUserId() const { return this->superUserId_ != nullptr;};
    void deleteSuperUserId() { this->superUserId_ = nullptr;};
    inline string superUserId() const { DARABONBA_PTR_GET_DEFAULT(superUserId_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setSuperUserId(string superUserId) { DARABONBA_PTR_SET_VALUE(superUserId_, superUserId) };


    // tbWang Field Functions 
    bool hasTbWang() const { return this->tbWang_ != nullptr;};
    void deleteTbWang() { this->tbWang_ = nullptr;};
    inline string tbWang() const { DARABONBA_PTR_GET_DEFAULT(tbWang_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setTbWang(string tbWang) { DARABONBA_PTR_SET_VALUE(tbWang_, tbWang) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetMeCorpSubmissionResponseBodyDataActioner& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> buName_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> employeeType_ = nullptr;
    std::shared_ptr<string> employeeTypeInformation_ = nullptr;
    std::shared_ptr<string> humanResourceGroupWorkNumber_ = nullptr;
    std::shared_ptr<bool> isSystemAdmin_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<string> orderNumber_ = nullptr;
    std::shared_ptr<string> personalPhoto_ = nullptr;
    std::shared_ptr<string> personalPhotoUrl_ = nullptr;
    std::shared_ptr<string> pinyinNameAll_ = nullptr;
    std::shared_ptr<string> pinyinNickName_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> superUserId_ = nullptr;
    std::shared_ptr<string> tbWang_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
