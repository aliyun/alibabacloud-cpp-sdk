// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTAUTHORITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTAUTHORITYRESPONSEBODY_HPP_
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
  class DescribeAccountAuthorityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountAuthorityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountAuthorityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAccountAuthorityResponseBody() = default ;
    DescribeAccountAuthorityResponseBody(const DescribeAccountAuthorityResponseBody &) = default ;
    DescribeAccountAuthorityResponseBody(DescribeAccountAuthorityResponseBody &&) = default ;
    DescribeAccountAuthorityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountAuthorityResponseBody() = default ;
    DescribeAccountAuthorityResponseBody& operator=(const DescribeAccountAuthorityResponseBody &) = default ;
    DescribeAccountAuthorityResponseBody& operator=(DescribeAccountAuthorityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Account, account_);
        DARABONBA_PTR_TO_JSON(AllowDatabases, allowDatabases_);
        DARABONBA_PTR_TO_JSON(AllowDictionaries, allowDictionaries_);
        DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_TO_JSON(DdlAuthority, ddlAuthority_);
        DARABONBA_PTR_TO_JSON(DmlAuthority, dmlAuthority_);
        DARABONBA_PTR_TO_JSON(TotalDatabases, totalDatabases_);
        DARABONBA_PTR_TO_JSON(TotalDictionaries, totalDictionaries_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
        DARABONBA_PTR_FROM_JSON(AllowDatabases, allowDatabases_);
        DARABONBA_PTR_FROM_JSON(AllowDictionaries, allowDictionaries_);
        DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_FROM_JSON(DdlAuthority, ddlAuthority_);
        DARABONBA_PTR_FROM_JSON(DmlAuthority, dmlAuthority_);
        DARABONBA_PTR_FROM_JSON(TotalDatabases, totalDatabases_);
        DARABONBA_PTR_FROM_JSON(TotalDictionaries, totalDictionaries_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->account_ == nullptr
        && this->allowDatabases_ == nullptr && this->allowDictionaries_ == nullptr && this->DBInstanceId_ == nullptr && this->ddlAuthority_ == nullptr && this->dmlAuthority_ == nullptr
        && this->totalDatabases_ == nullptr && this->totalDictionaries_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
      inline Data& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


      // allowDatabases Field Functions 
      bool hasAllowDatabases() const { return this->allowDatabases_ != nullptr;};
      void deleteAllowDatabases() { this->allowDatabases_ = nullptr;};
      inline const vector<string> & getAllowDatabases() const { DARABONBA_PTR_GET_CONST(allowDatabases_, vector<string>) };
      inline vector<string> getAllowDatabases() { DARABONBA_PTR_GET(allowDatabases_, vector<string>) };
      inline Data& setAllowDatabases(const vector<string> & allowDatabases) { DARABONBA_PTR_SET_VALUE(allowDatabases_, allowDatabases) };
      inline Data& setAllowDatabases(vector<string> && allowDatabases) { DARABONBA_PTR_SET_RVALUE(allowDatabases_, allowDatabases) };


      // allowDictionaries Field Functions 
      bool hasAllowDictionaries() const { return this->allowDictionaries_ != nullptr;};
      void deleteAllowDictionaries() { this->allowDictionaries_ = nullptr;};
      inline const vector<string> & getAllowDictionaries() const { DARABONBA_PTR_GET_CONST(allowDictionaries_, vector<string>) };
      inline vector<string> getAllowDictionaries() { DARABONBA_PTR_GET(allowDictionaries_, vector<string>) };
      inline Data& setAllowDictionaries(const vector<string> & allowDictionaries) { DARABONBA_PTR_SET_VALUE(allowDictionaries_, allowDictionaries) };
      inline Data& setAllowDictionaries(vector<string> && allowDictionaries) { DARABONBA_PTR_SET_RVALUE(allowDictionaries_, allowDictionaries) };


      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline Data& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // ddlAuthority Field Functions 
      bool hasDdlAuthority() const { return this->ddlAuthority_ != nullptr;};
      void deleteDdlAuthority() { this->ddlAuthority_ = nullptr;};
      inline bool getDdlAuthority() const { DARABONBA_PTR_GET_DEFAULT(ddlAuthority_, false) };
      inline Data& setDdlAuthority(bool ddlAuthority) { DARABONBA_PTR_SET_VALUE(ddlAuthority_, ddlAuthority) };


      // dmlAuthority Field Functions 
      bool hasDmlAuthority() const { return this->dmlAuthority_ != nullptr;};
      void deleteDmlAuthority() { this->dmlAuthority_ = nullptr;};
      inline int32_t getDmlAuthority() const { DARABONBA_PTR_GET_DEFAULT(dmlAuthority_, 0) };
      inline Data& setDmlAuthority(int32_t dmlAuthority) { DARABONBA_PTR_SET_VALUE(dmlAuthority_, dmlAuthority) };


      // totalDatabases Field Functions 
      bool hasTotalDatabases() const { return this->totalDatabases_ != nullptr;};
      void deleteTotalDatabases() { this->totalDatabases_ = nullptr;};
      inline const vector<string> & getTotalDatabases() const { DARABONBA_PTR_GET_CONST(totalDatabases_, vector<string>) };
      inline vector<string> getTotalDatabases() { DARABONBA_PTR_GET(totalDatabases_, vector<string>) };
      inline Data& setTotalDatabases(const vector<string> & totalDatabases) { DARABONBA_PTR_SET_VALUE(totalDatabases_, totalDatabases) };
      inline Data& setTotalDatabases(vector<string> && totalDatabases) { DARABONBA_PTR_SET_RVALUE(totalDatabases_, totalDatabases) };


      // totalDictionaries Field Functions 
      bool hasTotalDictionaries() const { return this->totalDictionaries_ != nullptr;};
      void deleteTotalDictionaries() { this->totalDictionaries_ = nullptr;};
      inline const vector<string> & getTotalDictionaries() const { DARABONBA_PTR_GET_CONST(totalDictionaries_, vector<string>) };
      inline vector<string> getTotalDictionaries() { DARABONBA_PTR_GET(totalDictionaries_, vector<string>) };
      inline Data& setTotalDictionaries(const vector<string> & totalDictionaries) { DARABONBA_PTR_SET_VALUE(totalDictionaries_, totalDictionaries) };
      inline Data& setTotalDictionaries(vector<string> && totalDictionaries) { DARABONBA_PTR_SET_RVALUE(totalDictionaries_, totalDictionaries) };


    protected:
      // The name of the database account.
      shared_ptr<string> account_ {};
      // The databases on which permissions are granted.
      shared_ptr<vector<string>> allowDatabases_ {};
      // The dictionaries on which permissions are granted.
      shared_ptr<vector<string>> allowDictionaries_ {};
      // The cluster ID.
      shared_ptr<string> DBInstanceId_ {};
      // Indicates whether the DDL permissions are granted to the database account. Valid values:
      // 
      // *   **true**: The account has the permissions to execute DDL statements.
      // *   **false**: The account does not have the permissions to execute DDL statements.
      shared_ptr<bool> ddlAuthority_ {};
      // Indicates whether the DML permissions are granted to the database account. Valid values:
      // 
      // *   0: The account has the permissions to read data from the database, write data to the database, and modify the settings of the database.
      // *   1: The account only has the permissions to read data from the database.
      // *   2: The account only has the permissions to read data from the database and modify the settings of the database.
      shared_ptr<int32_t> dmlAuthority_ {};
      // All databases.
      shared_ptr<vector<string>> totalDatabases_ {};
      // The database.
      shared_ptr<vector<string>> totalDictionaries_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAccountAuthorityResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAccountAuthorityResponseBody::Data) };
    inline DescribeAccountAuthorityResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAccountAuthorityResponseBody::Data) };
    inline DescribeAccountAuthorityResponseBody& setData(const DescribeAccountAuthorityResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAccountAuthorityResponseBody& setData(DescribeAccountAuthorityResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountAuthorityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    shared_ptr<DescribeAccountAuthorityResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
