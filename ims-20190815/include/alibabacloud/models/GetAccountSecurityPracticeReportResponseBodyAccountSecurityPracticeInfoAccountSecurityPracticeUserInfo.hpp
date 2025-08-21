// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTSECURITYPRACTICEREPORTRESPONSEBODYACCOUNTSECURITYPRACTICEINFOACCOUNTSECURITYPRACTICEUSERINFO_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTSECURITYPRACTICEREPORTRESPONSEBODYACCOUNTSECURITYPRACTICEINFOACCOUNTSECURITYPRACTICEUSERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BindMfa, bindMfa_);
      DARABONBA_PTR_TO_JSON(OldAkNum, oldAkNum_);
      DARABONBA_PTR_TO_JSON(RootWithAccessKey, rootWithAccessKey_);
      DARABONBA_PTR_TO_JSON(SubUser, subUser_);
      DARABONBA_PTR_TO_JSON(SubUserBindMfa, subUserBindMfa_);
      DARABONBA_PTR_TO_JSON(SubUserPwdLevel, subUserPwdLevel_);
      DARABONBA_PTR_TO_JSON(SubUserWithOldAccessKey, subUserWithOldAccessKey_);
      DARABONBA_PTR_TO_JSON(SubUserWithUnusedAccessKey, subUserWithUnusedAccessKey_);
      DARABONBA_PTR_TO_JSON(UnusedAkNum, unusedAkNum_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BindMfa, bindMfa_);
      DARABONBA_PTR_FROM_JSON(OldAkNum, oldAkNum_);
      DARABONBA_PTR_FROM_JSON(RootWithAccessKey, rootWithAccessKey_);
      DARABONBA_PTR_FROM_JSON(SubUser, subUser_);
      DARABONBA_PTR_FROM_JSON(SubUserBindMfa, subUserBindMfa_);
      DARABONBA_PTR_FROM_JSON(SubUserPwdLevel, subUserPwdLevel_);
      DARABONBA_PTR_FROM_JSON(SubUserWithOldAccessKey, subUserWithOldAccessKey_);
      DARABONBA_PTR_FROM_JSON(SubUserWithUnusedAccessKey, subUserWithUnusedAccessKey_);
      DARABONBA_PTR_FROM_JSON(UnusedAkNum, unusedAkNum_);
    };
    GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo() = default ;
    GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo(const GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo &) = default ;
    GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo(GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo &&) = default ;
    GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo() = default ;
    GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo& operator=(const GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo &) = default ;
    GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo& operator=(GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindMfa_ != nullptr
        && this->oldAkNum_ != nullptr && this->rootWithAccessKey_ != nullptr && this->subUser_ != nullptr && this->subUserBindMfa_ != nullptr && this->subUserPwdLevel_ != nullptr
        && this->subUserWithOldAccessKey_ != nullptr && this->subUserWithUnusedAccessKey_ != nullptr && this->unusedAkNum_ != nullptr; };
    // bindMfa Field Functions 
    bool hasBindMfa() const { return this->bindMfa_ != nullptr;};
    void deleteBindMfa() { this->bindMfa_ = nullptr;};
    inline bool bindMfa() const { DARABONBA_PTR_GET_DEFAULT(bindMfa_, false) };
    inline GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo& setBindMfa(bool bindMfa) { DARABONBA_PTR_SET_VALUE(bindMfa_, bindMfa) };


    // oldAkNum Field Functions 
    bool hasOldAkNum() const { return this->oldAkNum_ != nullptr;};
    void deleteOldAkNum() { this->oldAkNum_ = nullptr;};
    inline int32_t oldAkNum() const { DARABONBA_PTR_GET_DEFAULT(oldAkNum_, 0) };
    inline GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo& setOldAkNum(int32_t oldAkNum) { DARABONBA_PTR_SET_VALUE(oldAkNum_, oldAkNum) };


    // rootWithAccessKey Field Functions 
    bool hasRootWithAccessKey() const { return this->rootWithAccessKey_ != nullptr;};
    void deleteRootWithAccessKey() { this->rootWithAccessKey_ = nullptr;};
    inline int32_t rootWithAccessKey() const { DARABONBA_PTR_GET_DEFAULT(rootWithAccessKey_, 0) };
    inline GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo& setRootWithAccessKey(int32_t rootWithAccessKey) { DARABONBA_PTR_SET_VALUE(rootWithAccessKey_, rootWithAccessKey) };


    // subUser Field Functions 
    bool hasSubUser() const { return this->subUser_ != nullptr;};
    void deleteSubUser() { this->subUser_ = nullptr;};
    inline int32_t subUser() const { DARABONBA_PTR_GET_DEFAULT(subUser_, 0) };
    inline GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo& setSubUser(int32_t subUser) { DARABONBA_PTR_SET_VALUE(subUser_, subUser) };


    // subUserBindMfa Field Functions 
    bool hasSubUserBindMfa() const { return this->subUserBindMfa_ != nullptr;};
    void deleteSubUserBindMfa() { this->subUserBindMfa_ = nullptr;};
    inline int32_t subUserBindMfa() const { DARABONBA_PTR_GET_DEFAULT(subUserBindMfa_, 0) };
    inline GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo& setSubUserBindMfa(int32_t subUserBindMfa) { DARABONBA_PTR_SET_VALUE(subUserBindMfa_, subUserBindMfa) };


    // subUserPwdLevel Field Functions 
    bool hasSubUserPwdLevel() const { return this->subUserPwdLevel_ != nullptr;};
    void deleteSubUserPwdLevel() { this->subUserPwdLevel_ = nullptr;};
    inline string subUserPwdLevel() const { DARABONBA_PTR_GET_DEFAULT(subUserPwdLevel_, "") };
    inline GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo& setSubUserPwdLevel(string subUserPwdLevel) { DARABONBA_PTR_SET_VALUE(subUserPwdLevel_, subUserPwdLevel) };


    // subUserWithOldAccessKey Field Functions 
    bool hasSubUserWithOldAccessKey() const { return this->subUserWithOldAccessKey_ != nullptr;};
    void deleteSubUserWithOldAccessKey() { this->subUserWithOldAccessKey_ = nullptr;};
    inline int32_t subUserWithOldAccessKey() const { DARABONBA_PTR_GET_DEFAULT(subUserWithOldAccessKey_, 0) };
    inline GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo& setSubUserWithOldAccessKey(int32_t subUserWithOldAccessKey) { DARABONBA_PTR_SET_VALUE(subUserWithOldAccessKey_, subUserWithOldAccessKey) };


    // subUserWithUnusedAccessKey Field Functions 
    bool hasSubUserWithUnusedAccessKey() const { return this->subUserWithUnusedAccessKey_ != nullptr;};
    void deleteSubUserWithUnusedAccessKey() { this->subUserWithUnusedAccessKey_ = nullptr;};
    inline int32_t subUserWithUnusedAccessKey() const { DARABONBA_PTR_GET_DEFAULT(subUserWithUnusedAccessKey_, 0) };
    inline GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo& setSubUserWithUnusedAccessKey(int32_t subUserWithUnusedAccessKey) { DARABONBA_PTR_SET_VALUE(subUserWithUnusedAccessKey_, subUserWithUnusedAccessKey) };


    // unusedAkNum Field Functions 
    bool hasUnusedAkNum() const { return this->unusedAkNum_ != nullptr;};
    void deleteUnusedAkNum() { this->unusedAkNum_ = nullptr;};
    inline int32_t unusedAkNum() const { DARABONBA_PTR_GET_DEFAULT(unusedAkNum_, 0) };
    inline GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo& setUnusedAkNum(int32_t unusedAkNum) { DARABONBA_PTR_SET_VALUE(unusedAkNum_, unusedAkNum) };


  protected:
    // Indicates whether multi-factor authentication (MFA) is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> bindMfa_ = nullptr;
    // The number of old AccessKey pairs for the Alibaba Cloud account.
    std::shared_ptr<int32_t> oldAkNum_ = nullptr;
    // The number of AccessKey pairs for the Alibaba Cloud account.
    std::shared_ptr<int32_t> rootWithAccessKey_ = nullptr;
    // The number of RAM users within the Alibaba Cloud account.
    std::shared_ptr<int32_t> subUser_ = nullptr;
    // The number of RAM users that have MFA devices bound.
    std::shared_ptr<int32_t> subUserBindMfa_ = nullptr;
    // The complexity level of the password for the RAM user. Valid values:
    // 
    // *   low
    // *   mid
    // *   high
    std::shared_ptr<string> subUserPwdLevel_ = nullptr;
    // The number of RAM users that use the old AccessKey pairs.
    std::shared_ptr<int32_t> subUserWithOldAccessKey_ = nullptr;
    // The number of Resource Access Management (RAM) users that have unused AccessKey pairs.
    std::shared_ptr<int32_t> subUserWithUnusedAccessKey_ = nullptr;
    // The number of AccessKey pairs that are not used for the Alibaba Cloud account.
    std::shared_ptr<int32_t> unusedAkNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
