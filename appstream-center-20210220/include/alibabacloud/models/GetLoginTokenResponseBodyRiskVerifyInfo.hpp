// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINTOKENRESPONSEBODYRISKVERIFYINFO_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINTOKENRESPONSEBODYRISKVERIFYINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{
namespace Models
{
  class GetLoginTokenResponseBodyRiskVerifyInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginTokenResponseBodyRiskVerifyInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(LastLockDuration, lastLockDuration_);
      DARABONBA_PTR_TO_JSON(Locked, locked_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginTokenResponseBodyRiskVerifyInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(LastLockDuration, lastLockDuration_);
      DARABONBA_PTR_FROM_JSON(Locked, locked_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
    };
    GetLoginTokenResponseBodyRiskVerifyInfo() = default ;
    GetLoginTokenResponseBodyRiskVerifyInfo(const GetLoginTokenResponseBodyRiskVerifyInfo &) = default ;
    GetLoginTokenResponseBodyRiskVerifyInfo(GetLoginTokenResponseBodyRiskVerifyInfo &&) = default ;
    GetLoginTokenResponseBodyRiskVerifyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginTokenResponseBodyRiskVerifyInfo() = default ;
    GetLoginTokenResponseBodyRiskVerifyInfo& operator=(const GetLoginTokenResponseBodyRiskVerifyInfo &) = default ;
    GetLoginTokenResponseBodyRiskVerifyInfo& operator=(GetLoginTokenResponseBodyRiskVerifyInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->email_ != nullptr
        && this->lastLockDuration_ != nullptr && this->locked_ != nullptr && this->phone_ != nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetLoginTokenResponseBodyRiskVerifyInfo& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // lastLockDuration Field Functions 
    bool hasLastLockDuration() const { return this->lastLockDuration_ != nullptr;};
    void deleteLastLockDuration() { this->lastLockDuration_ = nullptr;};
    inline int64_t lastLockDuration() const { DARABONBA_PTR_GET_DEFAULT(lastLockDuration_, 0L) };
    inline GetLoginTokenResponseBodyRiskVerifyInfo& setLastLockDuration(int64_t lastLockDuration) { DARABONBA_PTR_SET_VALUE(lastLockDuration_, lastLockDuration) };


    // locked Field Functions 
    bool hasLocked() const { return this->locked_ != nullptr;};
    void deleteLocked() { this->locked_ = nullptr;};
    inline bool locked() const { DARABONBA_PTR_GET_DEFAULT(locked_, false) };
    inline GetLoginTokenResponseBodyRiskVerifyInfo& setLocked(bool locked) { DARABONBA_PTR_SET_VALUE(locked_, locked) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline GetLoginTokenResponseBodyRiskVerifyInfo& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


  protected:
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<int64_t> lastLockDuration_ = nullptr;
    std::shared_ptr<bool> locked_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
