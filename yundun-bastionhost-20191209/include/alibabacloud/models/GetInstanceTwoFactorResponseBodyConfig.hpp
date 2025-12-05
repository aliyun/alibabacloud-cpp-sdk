// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCETWOFACTORRESPONSEBODYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCETWOFACTORRESPONSEBODYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetInstanceTwoFactorResponseBodyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceTwoFactorResponseBodyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EnableTwoFactor, enableTwoFactor_);
      DARABONBA_PTR_TO_JSON(SkipTwoFactorTime, skipTwoFactorTime_);
      DARABONBA_PTR_TO_JSON(TwoFactorMethods, twoFactorMethods_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceTwoFactorResponseBodyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableTwoFactor, enableTwoFactor_);
      DARABONBA_PTR_FROM_JSON(SkipTwoFactorTime, skipTwoFactorTime_);
      DARABONBA_PTR_FROM_JSON(TwoFactorMethods, twoFactorMethods_);
    };
    GetInstanceTwoFactorResponseBodyConfig() = default ;
    GetInstanceTwoFactorResponseBodyConfig(const GetInstanceTwoFactorResponseBodyConfig &) = default ;
    GetInstanceTwoFactorResponseBodyConfig(GetInstanceTwoFactorResponseBodyConfig &&) = default ;
    GetInstanceTwoFactorResponseBodyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceTwoFactorResponseBodyConfig() = default ;
    GetInstanceTwoFactorResponseBodyConfig& operator=(const GetInstanceTwoFactorResponseBodyConfig &) = default ;
    GetInstanceTwoFactorResponseBodyConfig& operator=(GetInstanceTwoFactorResponseBodyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableTwoFactor_ == nullptr
        && return this->skipTwoFactorTime_ == nullptr && return this->twoFactorMethods_ == nullptr; };
    // enableTwoFactor Field Functions 
    bool hasEnableTwoFactor() const { return this->enableTwoFactor_ != nullptr;};
    void deleteEnableTwoFactor() { this->enableTwoFactor_ = nullptr;};
    inline bool enableTwoFactor() const { DARABONBA_PTR_GET_DEFAULT(enableTwoFactor_, false) };
    inline GetInstanceTwoFactorResponseBodyConfig& setEnableTwoFactor(bool enableTwoFactor) { DARABONBA_PTR_SET_VALUE(enableTwoFactor_, enableTwoFactor) };


    // skipTwoFactorTime Field Functions 
    bool hasSkipTwoFactorTime() const { return this->skipTwoFactorTime_ != nullptr;};
    void deleteSkipTwoFactorTime() { this->skipTwoFactorTime_ = nullptr;};
    inline int64_t skipTwoFactorTime() const { DARABONBA_PTR_GET_DEFAULT(skipTwoFactorTime_, 0L) };
    inline GetInstanceTwoFactorResponseBodyConfig& setSkipTwoFactorTime(int64_t skipTwoFactorTime) { DARABONBA_PTR_SET_VALUE(skipTwoFactorTime_, skipTwoFactorTime) };


    // twoFactorMethods Field Functions 
    bool hasTwoFactorMethods() const { return this->twoFactorMethods_ != nullptr;};
    void deleteTwoFactorMethods() { this->twoFactorMethods_ = nullptr;};
    inline const vector<string> & twoFactorMethods() const { DARABONBA_PTR_GET_CONST(twoFactorMethods_, vector<string>) };
    inline vector<string> twoFactorMethods() { DARABONBA_PTR_GET(twoFactorMethods_, vector<string>) };
    inline GetInstanceTwoFactorResponseBodyConfig& setTwoFactorMethods(const vector<string> & twoFactorMethods) { DARABONBA_PTR_SET_VALUE(twoFactorMethods_, twoFactorMethods) };
    inline GetInstanceTwoFactorResponseBodyConfig& setTwoFactorMethods(vector<string> && twoFactorMethods) { DARABONBA_PTR_SET_RVALUE(twoFactorMethods_, twoFactorMethods) };


  protected:
    // Indicates whether two-factor authentication is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableTwoFactor_ = nullptr;
    // The duration within which two-factor authentication is not required after a local user passes two-factor authentication. Valid values: `0 to 168`. Unit: hours.
    // 
    // > If 0 is returned, a local user must pass two-factor authentication every time the local user logs on to the bastion host.
    std::shared_ptr<int64_t> skipTwoFactorTime_ = nullptr;
    // The two-factor authentication methods.
    std::shared_ptr<vector<string>> twoFactorMethods_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
