// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDEVELOPERROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKDEVELOPERROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CheckDeveloperRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDeveloperRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(platform, platform_);
      DARABONBA_PTR_TO_JSON(roleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDeveloperRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(platform, platform_);
      DARABONBA_PTR_FROM_JSON(roleName, roleName_);
    };
    CheckDeveloperRoleRequest() = default ;
    CheckDeveloperRoleRequest(const CheckDeveloperRoleRequest &) = default ;
    CheckDeveloperRoleRequest(CheckDeveloperRoleRequest &&) = default ;
    CheckDeveloperRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDeveloperRoleRequest() = default ;
    CheckDeveloperRoleRequest& operator=(const CheckDeveloperRoleRequest &) = default ;
    CheckDeveloperRoleRequest& operator=(CheckDeveloperRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->companyId_ == nullptr && this->platform_ == nullptr && this->roleName_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline CheckDeveloperRoleRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline CheckDeveloperRoleRequest& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CheckDeveloperRoleRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline CheckDeveloperRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<string> platform_ {};
    shared_ptr<string> roleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
