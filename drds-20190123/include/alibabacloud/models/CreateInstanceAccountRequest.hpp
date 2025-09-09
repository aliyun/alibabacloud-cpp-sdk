// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateInstanceAccountRequestDbPrivilege.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class CreateInstanceAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DbPrivilege, dbPrivilege_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DbPrivilege, dbPrivilege_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
    };
    CreateInstanceAccountRequest() = default ;
    CreateInstanceAccountRequest(const CreateInstanceAccountRequest &) = default ;
    CreateInstanceAccountRequest(CreateInstanceAccountRequest &&) = default ;
    CreateInstanceAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceAccountRequest() = default ;
    CreateInstanceAccountRequest& operator=(const CreateInstanceAccountRequest &) = default ;
    CreateInstanceAccountRequest& operator=(CreateInstanceAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->dbPrivilege_ != nullptr && this->drdsInstanceId_ != nullptr && this->password_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateInstanceAccountRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // dbPrivilege Field Functions 
    bool hasDbPrivilege() const { return this->dbPrivilege_ != nullptr;};
    void deleteDbPrivilege() { this->dbPrivilege_ = nullptr;};
    inline const vector<CreateInstanceAccountRequestDbPrivilege> & dbPrivilege() const { DARABONBA_PTR_GET_CONST(dbPrivilege_, vector<CreateInstanceAccountRequestDbPrivilege>) };
    inline vector<CreateInstanceAccountRequestDbPrivilege> dbPrivilege() { DARABONBA_PTR_GET(dbPrivilege_, vector<CreateInstanceAccountRequestDbPrivilege>) };
    inline CreateInstanceAccountRequest& setDbPrivilege(const vector<CreateInstanceAccountRequestDbPrivilege> & dbPrivilege) { DARABONBA_PTR_SET_VALUE(dbPrivilege_, dbPrivilege) };
    inline CreateInstanceAccountRequest& setDbPrivilege(vector<CreateInstanceAccountRequestDbPrivilege> && dbPrivilege) { DARABONBA_PTR_SET_RVALUE(dbPrivilege_, dbPrivilege) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline CreateInstanceAccountRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateInstanceAccountRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


  protected:
    // The username of the account you want to create.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateInstanceAccountRequestDbPrivilege>> dbPrivilege_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance for which you want to create the account.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The password of the account you want to create.
    // 
    // This parameter is required.
    std::shared_ptr<string> password_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
