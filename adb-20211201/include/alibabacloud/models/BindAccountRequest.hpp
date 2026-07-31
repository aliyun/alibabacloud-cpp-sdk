// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class BindAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RamUser, ramUser_);
      DARABONBA_PTR_TO_JSON(RamUserList, ramUserList_);
    };
    friend void from_json(const Darabonba::Json& j, BindAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RamUser, ramUser_);
      DARABONBA_PTR_FROM_JSON(RamUserList, ramUserList_);
    };
    BindAccountRequest() = default ;
    BindAccountRequest(const BindAccountRequest &) = default ;
    BindAccountRequest(BindAccountRequest &&) = default ;
    BindAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAccountRequest() = default ;
    BindAccountRequest& operator=(const BindAccountRequest &) = default ;
    BindAccountRequest& operator=(BindAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->DBClusterId_ == nullptr && this->ramUser_ == nullptr && this->ramUserList_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline BindAccountRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline BindAccountRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ramUser Field Functions 
    bool hasRamUser() const { return this->ramUser_ != nullptr;};
    void deleteRamUser() { this->ramUser_ = nullptr;};
    inline string getRamUser() const { DARABONBA_PTR_GET_DEFAULT(ramUser_, "") };
    inline BindAccountRequest& setRamUser(string ramUser) { DARABONBA_PTR_SET_VALUE(ramUser_, ramUser) };


    // ramUserList Field Functions 
    bool hasRamUserList() const { return this->ramUserList_ != nullptr;};
    void deleteRamUserList() { this->ramUserList_ = nullptr;};
    inline const vector<string> & getRamUserList() const { DARABONBA_PTR_GET_CONST(ramUserList_, vector<string>) };
    inline vector<string> getRamUserList() { DARABONBA_PTR_GET(ramUserList_, vector<string>) };
    inline BindAccountRequest& setRamUserList(const vector<string> & ramUserList) { DARABONBA_PTR_SET_VALUE(ramUserList_, ramUserList) };
    inline BindAccountRequest& setRamUserList(vector<string> && ramUserList) { DARABONBA_PTR_SET_RVALUE(ramUserList_, ramUserList) };


  protected:
    // A standard database account.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // ID of the cluster. Applies to Enterprise Edition, Basic Edition, or Data Lakehouse Edition clusters.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // ID of the Alibaba Cloud RAM user to bind.
    shared_ptr<string> ramUser_ {};
    // List of Alibaba Cloud RAM user IDs to bind. You can bind only one RAM user at a time. If you specify this parameter, the RamUser parameter is ignored.
    shared_ptr<vector<string>> ramUserList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
