// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETACCOUNTPASSWORDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RESETACCOUNTPASSWORDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ResetAccountPasswordResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetAccountPasswordResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetAccountPasswordResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    ResetAccountPasswordResponseBodyData() = default ;
    ResetAccountPasswordResponseBodyData(const ResetAccountPasswordResponseBodyData &) = default ;
    ResetAccountPasswordResponseBodyData(ResetAccountPasswordResponseBodyData &&) = default ;
    ResetAccountPasswordResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetAccountPasswordResponseBodyData() = default ;
    ResetAccountPasswordResponseBodyData& operator=(const ResetAccountPasswordResponseBodyData &) = default ;
    ResetAccountPasswordResponseBodyData& operator=(ResetAccountPasswordResponseBodyData &&) = default ;
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
    inline ResetAccountPasswordResponseBodyData& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ResetAccountPasswordResponseBodyData& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    // The name of the account.
    std::shared_ptr<string> account_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
