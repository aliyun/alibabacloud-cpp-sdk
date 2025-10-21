// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTDESCRIPTIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTDESCRIPTIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyAccountDescriptionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountDescriptionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountDescriptionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    ModifyAccountDescriptionResponseBodyData() = default ;
    ModifyAccountDescriptionResponseBodyData(const ModifyAccountDescriptionResponseBodyData &) = default ;
    ModifyAccountDescriptionResponseBodyData(ModifyAccountDescriptionResponseBodyData &&) = default ;
    ModifyAccountDescriptionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountDescriptionResponseBodyData() = default ;
    ModifyAccountDescriptionResponseBodyData& operator=(const ModifyAccountDescriptionResponseBodyData &) = default ;
    ModifyAccountDescriptionResponseBodyData& operator=(ModifyAccountDescriptionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->DBInstanceId_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline ModifyAccountDescriptionResponseBodyData& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyAccountDescriptionResponseBodyData& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


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
