// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTAUTHORITYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTAUTHORITYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyAccountAuthorityResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountAuthorityResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountAuthorityResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    ModifyAccountAuthorityResponseBodyData() = default ;
    ModifyAccountAuthorityResponseBodyData(const ModifyAccountAuthorityResponseBodyData &) = default ;
    ModifyAccountAuthorityResponseBodyData(ModifyAccountAuthorityResponseBodyData &&) = default ;
    ModifyAccountAuthorityResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountAuthorityResponseBodyData() = default ;
    ModifyAccountAuthorityResponseBodyData& operator=(const ModifyAccountAuthorityResponseBodyData &) = default ;
    ModifyAccountAuthorityResponseBodyData& operator=(ModifyAccountAuthorityResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->account_ != nullptr
        && this->DBInstanceId_ != nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline ModifyAccountAuthorityResponseBodyData& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyAccountAuthorityResponseBodyData& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    // The name of the database account.
    std::shared_ptr<string> account_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
