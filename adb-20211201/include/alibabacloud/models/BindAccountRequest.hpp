// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    };
    friend void from_json(const Darabonba::Json& j, BindAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RamUser, ramUser_);
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
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->DBClusterId_ != nullptr && this->ramUser_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline BindAccountRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline BindAccountRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ramUser Field Functions 
    bool hasRamUser() const { return this->ramUser_ != nullptr;};
    void deleteRamUser() { this->ramUser_ = nullptr;};
    inline string ramUser() const { DARABONBA_PTR_GET_DEFAULT(ramUser_, "") };
    inline BindAccountRequest& setRamUser(string ramUser) { DARABONBA_PTR_SET_VALUE(ramUser_, ramUser) };


  protected:
    // The standard account of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The ID of the RAM user.
    // 
    // This parameter is required.
    std::shared_ptr<string> ramUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
