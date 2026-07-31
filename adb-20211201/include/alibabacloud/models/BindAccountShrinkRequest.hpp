// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDACCOUNTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDACCOUNTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class BindAccountShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAccountShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RamUser, ramUser_);
      DARABONBA_PTR_TO_JSON(RamUserList, ramUserListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BindAccountShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RamUser, ramUser_);
      DARABONBA_PTR_FROM_JSON(RamUserList, ramUserListShrink_);
    };
    BindAccountShrinkRequest() = default ;
    BindAccountShrinkRequest(const BindAccountShrinkRequest &) = default ;
    BindAccountShrinkRequest(BindAccountShrinkRequest &&) = default ;
    BindAccountShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAccountShrinkRequest() = default ;
    BindAccountShrinkRequest& operator=(const BindAccountShrinkRequest &) = default ;
    BindAccountShrinkRequest& operator=(BindAccountShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->DBClusterId_ == nullptr && this->ramUser_ == nullptr && this->ramUserListShrink_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline BindAccountShrinkRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline BindAccountShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ramUser Field Functions 
    bool hasRamUser() const { return this->ramUser_ != nullptr;};
    void deleteRamUser() { this->ramUser_ = nullptr;};
    inline string getRamUser() const { DARABONBA_PTR_GET_DEFAULT(ramUser_, "") };
    inline BindAccountShrinkRequest& setRamUser(string ramUser) { DARABONBA_PTR_SET_VALUE(ramUser_, ramUser) };


    // ramUserListShrink Field Functions 
    bool hasRamUserListShrink() const { return this->ramUserListShrink_ != nullptr;};
    void deleteRamUserListShrink() { this->ramUserListShrink_ = nullptr;};
    inline string getRamUserListShrink() const { DARABONBA_PTR_GET_DEFAULT(ramUserListShrink_, "") };
    inline BindAccountShrinkRequest& setRamUserListShrink(string ramUserListShrink) { DARABONBA_PTR_SET_VALUE(ramUserListShrink_, ramUserListShrink) };


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
    shared_ptr<string> ramUserListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
