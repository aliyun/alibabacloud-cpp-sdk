// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGELOGINRESPONSEBODYLOGININFO_HPP_
#define ALIBABACLOUD_MODELS_MANAGELOGINRESPONSEBODYLOGININFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ManageLoginResponseBodyLoginInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageLoginResponseBodyLoginInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AdbLoginPort, adbLoginPort_);
      DARABONBA_PTR_TO_JSON(LoginHostname, loginHostname_);
      DARABONBA_PTR_TO_JSON(LoginPort, loginPort_);
    };
    friend void from_json(const Darabonba::Json& j, ManageLoginResponseBodyLoginInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AdbLoginPort, adbLoginPort_);
      DARABONBA_PTR_FROM_JSON(LoginHostname, loginHostname_);
      DARABONBA_PTR_FROM_JSON(LoginPort, loginPort_);
    };
    ManageLoginResponseBodyLoginInfo() = default ;
    ManageLoginResponseBodyLoginInfo(const ManageLoginResponseBodyLoginInfo &) = default ;
    ManageLoginResponseBodyLoginInfo(ManageLoginResponseBodyLoginInfo &&) = default ;
    ManageLoginResponseBodyLoginInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageLoginResponseBodyLoginInfo() = default ;
    ManageLoginResponseBodyLoginInfo& operator=(const ManageLoginResponseBodyLoginInfo &) = default ;
    ManageLoginResponseBodyLoginInfo& operator=(ManageLoginResponseBodyLoginInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adbLoginPort_ != nullptr
        && this->loginHostname_ != nullptr && this->loginPort_ != nullptr; };
    // adbLoginPort Field Functions 
    bool hasAdbLoginPort() const { return this->adbLoginPort_ != nullptr;};
    void deleteAdbLoginPort() { this->adbLoginPort_ = nullptr;};
    inline int32_t adbLoginPort() const { DARABONBA_PTR_GET_DEFAULT(adbLoginPort_, 0) };
    inline ManageLoginResponseBodyLoginInfo& setAdbLoginPort(int32_t adbLoginPort) { DARABONBA_PTR_SET_VALUE(adbLoginPort_, adbLoginPort) };


    // loginHostname Field Functions 
    bool hasLoginHostname() const { return this->loginHostname_ != nullptr;};
    void deleteLoginHostname() { this->loginHostname_ = nullptr;};
    inline string loginHostname() const { DARABONBA_PTR_GET_DEFAULT(loginHostname_, "") };
    inline ManageLoginResponseBodyLoginInfo& setLoginHostname(string loginHostname) { DARABONBA_PTR_SET_VALUE(loginHostname_, loginHostname) };


    // loginPort Field Functions 
    bool hasLoginPort() const { return this->loginPort_ != nullptr;};
    void deleteLoginPort() { this->loginPort_ = nullptr;};
    inline int32_t loginPort() const { DARABONBA_PTR_GET_DEFAULT(loginPort_, 0) };
    inline ManageLoginResponseBodyLoginInfo& setLoginPort(int32_t loginPort) { DARABONBA_PTR_SET_VALUE(loginPort_, loginPort) };


  protected:
    std::shared_ptr<int32_t> adbLoginPort_ = nullptr;
    std::shared_ptr<string> loginHostname_ = nullptr;
    std::shared_ptr<int32_t> loginPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
