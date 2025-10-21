// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTAUTHORITYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTAUTHORITYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeAccountAuthorityResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountAuthorityResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(AllowDatabases, allowDatabases_);
      DARABONBA_PTR_TO_JSON(AllowDictionaries, allowDictionaries_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DdlAuthority, ddlAuthority_);
      DARABONBA_PTR_TO_JSON(DmlAuthority, dmlAuthority_);
      DARABONBA_PTR_TO_JSON(TotalDatabases, totalDatabases_);
      DARABONBA_PTR_TO_JSON(TotalDictionaries, totalDictionaries_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountAuthorityResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(AllowDatabases, allowDatabases_);
      DARABONBA_PTR_FROM_JSON(AllowDictionaries, allowDictionaries_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DdlAuthority, ddlAuthority_);
      DARABONBA_PTR_FROM_JSON(DmlAuthority, dmlAuthority_);
      DARABONBA_PTR_FROM_JSON(TotalDatabases, totalDatabases_);
      DARABONBA_PTR_FROM_JSON(TotalDictionaries, totalDictionaries_);
    };
    DescribeAccountAuthorityResponseBodyData() = default ;
    DescribeAccountAuthorityResponseBodyData(const DescribeAccountAuthorityResponseBodyData &) = default ;
    DescribeAccountAuthorityResponseBodyData(DescribeAccountAuthorityResponseBodyData &&) = default ;
    DescribeAccountAuthorityResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountAuthorityResponseBodyData() = default ;
    DescribeAccountAuthorityResponseBodyData& operator=(const DescribeAccountAuthorityResponseBodyData &) = default ;
    DescribeAccountAuthorityResponseBodyData& operator=(DescribeAccountAuthorityResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->allowDatabases_ == nullptr && return this->allowDictionaries_ == nullptr && return this->DBInstanceId_ == nullptr && return this->ddlAuthority_ == nullptr && return this->dmlAuthority_ == nullptr
        && return this->totalDatabases_ == nullptr && return this->totalDictionaries_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline DescribeAccountAuthorityResponseBodyData& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // allowDatabases Field Functions 
    bool hasAllowDatabases() const { return this->allowDatabases_ != nullptr;};
    void deleteAllowDatabases() { this->allowDatabases_ = nullptr;};
    inline const vector<string> & allowDatabases() const { DARABONBA_PTR_GET_CONST(allowDatabases_, vector<string>) };
    inline vector<string> allowDatabases() { DARABONBA_PTR_GET(allowDatabases_, vector<string>) };
    inline DescribeAccountAuthorityResponseBodyData& setAllowDatabases(const vector<string> & allowDatabases) { DARABONBA_PTR_SET_VALUE(allowDatabases_, allowDatabases) };
    inline DescribeAccountAuthorityResponseBodyData& setAllowDatabases(vector<string> && allowDatabases) { DARABONBA_PTR_SET_RVALUE(allowDatabases_, allowDatabases) };


    // allowDictionaries Field Functions 
    bool hasAllowDictionaries() const { return this->allowDictionaries_ != nullptr;};
    void deleteAllowDictionaries() { this->allowDictionaries_ = nullptr;};
    inline const vector<string> & allowDictionaries() const { DARABONBA_PTR_GET_CONST(allowDictionaries_, vector<string>) };
    inline vector<string> allowDictionaries() { DARABONBA_PTR_GET(allowDictionaries_, vector<string>) };
    inline DescribeAccountAuthorityResponseBodyData& setAllowDictionaries(const vector<string> & allowDictionaries) { DARABONBA_PTR_SET_VALUE(allowDictionaries_, allowDictionaries) };
    inline DescribeAccountAuthorityResponseBodyData& setAllowDictionaries(vector<string> && allowDictionaries) { DARABONBA_PTR_SET_RVALUE(allowDictionaries_, allowDictionaries) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeAccountAuthorityResponseBodyData& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ddlAuthority Field Functions 
    bool hasDdlAuthority() const { return this->ddlAuthority_ != nullptr;};
    void deleteDdlAuthority() { this->ddlAuthority_ = nullptr;};
    inline bool ddlAuthority() const { DARABONBA_PTR_GET_DEFAULT(ddlAuthority_, false) };
    inline DescribeAccountAuthorityResponseBodyData& setDdlAuthority(bool ddlAuthority) { DARABONBA_PTR_SET_VALUE(ddlAuthority_, ddlAuthority) };


    // dmlAuthority Field Functions 
    bool hasDmlAuthority() const { return this->dmlAuthority_ != nullptr;};
    void deleteDmlAuthority() { this->dmlAuthority_ = nullptr;};
    inline int32_t dmlAuthority() const { DARABONBA_PTR_GET_DEFAULT(dmlAuthority_, 0) };
    inline DescribeAccountAuthorityResponseBodyData& setDmlAuthority(int32_t dmlAuthority) { DARABONBA_PTR_SET_VALUE(dmlAuthority_, dmlAuthority) };


    // totalDatabases Field Functions 
    bool hasTotalDatabases() const { return this->totalDatabases_ != nullptr;};
    void deleteTotalDatabases() { this->totalDatabases_ = nullptr;};
    inline const vector<string> & totalDatabases() const { DARABONBA_PTR_GET_CONST(totalDatabases_, vector<string>) };
    inline vector<string> totalDatabases() { DARABONBA_PTR_GET(totalDatabases_, vector<string>) };
    inline DescribeAccountAuthorityResponseBodyData& setTotalDatabases(const vector<string> & totalDatabases) { DARABONBA_PTR_SET_VALUE(totalDatabases_, totalDatabases) };
    inline DescribeAccountAuthorityResponseBodyData& setTotalDatabases(vector<string> && totalDatabases) { DARABONBA_PTR_SET_RVALUE(totalDatabases_, totalDatabases) };


    // totalDictionaries Field Functions 
    bool hasTotalDictionaries() const { return this->totalDictionaries_ != nullptr;};
    void deleteTotalDictionaries() { this->totalDictionaries_ = nullptr;};
    inline const vector<string> & totalDictionaries() const { DARABONBA_PTR_GET_CONST(totalDictionaries_, vector<string>) };
    inline vector<string> totalDictionaries() { DARABONBA_PTR_GET(totalDictionaries_, vector<string>) };
    inline DescribeAccountAuthorityResponseBodyData& setTotalDictionaries(const vector<string> & totalDictionaries) { DARABONBA_PTR_SET_VALUE(totalDictionaries_, totalDictionaries) };
    inline DescribeAccountAuthorityResponseBodyData& setTotalDictionaries(vector<string> && totalDictionaries) { DARABONBA_PTR_SET_RVALUE(totalDictionaries_, totalDictionaries) };


  protected:
    // The name of the database account.
    std::shared_ptr<string> account_ = nullptr;
    // The databases on which permissions are granted.
    std::shared_ptr<vector<string>> allowDatabases_ = nullptr;
    // The dictionaries on which permissions are granted.
    std::shared_ptr<vector<string>> allowDictionaries_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Indicates whether the DDL permissions are granted to the database account. Valid values:
    // 
    // *   **true**: The account has the permissions to execute DDL statements.
    // *   **false**: The account does not have the permissions to execute DDL statements.
    std::shared_ptr<bool> ddlAuthority_ = nullptr;
    // Indicates whether the DML permissions are granted to the database account. Valid values:
    // 
    // *   0: The account has the permissions to read data from the database, write data to the database, and modify the settings of the database.
    // *   1: The account only has the permissions to read data from the database.
    // *   2: The account only has the permissions to read data from the database and modify the settings of the database.
    std::shared_ptr<int32_t> dmlAuthority_ = nullptr;
    // All databases.
    std::shared_ptr<vector<string>> totalDatabases_ = nullptr;
    // The database.
    std::shared_ptr<vector<string>> totalDictionaries_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
