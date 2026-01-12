// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTAUTHORITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTAUTHORITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeAccountAuthorityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountAuthorityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AllowDatabases, allowDatabases_);
      DARABONBA_PTR_TO_JSON(AllowDictionaries, allowDictionaries_);
      DARABONBA_PTR_TO_JSON(DdlAuthority, ddlAuthority_);
      DARABONBA_PTR_TO_JSON(DmlAuthority, dmlAuthority_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalDatabases, totalDatabases_);
      DARABONBA_PTR_TO_JSON(TotalDictionaries, totalDictionaries_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountAuthorityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AllowDatabases, allowDatabases_);
      DARABONBA_PTR_FROM_JSON(AllowDictionaries, allowDictionaries_);
      DARABONBA_PTR_FROM_JSON(DdlAuthority, ddlAuthority_);
      DARABONBA_PTR_FROM_JSON(DmlAuthority, dmlAuthority_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalDatabases, totalDatabases_);
      DARABONBA_PTR_FROM_JSON(TotalDictionaries, totalDictionaries_);
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
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->allowDatabases_ == nullptr && this->allowDictionaries_ == nullptr && this->ddlAuthority_ == nullptr && this->dmlAuthority_ == nullptr && this->requestId_ == nullptr
        && this->totalDatabases_ == nullptr && this->totalDictionaries_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAccountAuthorityResponseBody& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // allowDatabases Field Functions 
    bool hasAllowDatabases() const { return this->allowDatabases_ != nullptr;};
    void deleteAllowDatabases() { this->allowDatabases_ = nullptr;};
    inline const vector<string> & getAllowDatabases() const { DARABONBA_PTR_GET_CONST(allowDatabases_, vector<string>) };
    inline vector<string> getAllowDatabases() { DARABONBA_PTR_GET(allowDatabases_, vector<string>) };
    inline DescribeAccountAuthorityResponseBody& setAllowDatabases(const vector<string> & allowDatabases) { DARABONBA_PTR_SET_VALUE(allowDatabases_, allowDatabases) };
    inline DescribeAccountAuthorityResponseBody& setAllowDatabases(vector<string> && allowDatabases) { DARABONBA_PTR_SET_RVALUE(allowDatabases_, allowDatabases) };


    // allowDictionaries Field Functions 
    bool hasAllowDictionaries() const { return this->allowDictionaries_ != nullptr;};
    void deleteAllowDictionaries() { this->allowDictionaries_ = nullptr;};
    inline const vector<string> & getAllowDictionaries() const { DARABONBA_PTR_GET_CONST(allowDictionaries_, vector<string>) };
    inline vector<string> getAllowDictionaries() { DARABONBA_PTR_GET(allowDictionaries_, vector<string>) };
    inline DescribeAccountAuthorityResponseBody& setAllowDictionaries(const vector<string> & allowDictionaries) { DARABONBA_PTR_SET_VALUE(allowDictionaries_, allowDictionaries) };
    inline DescribeAccountAuthorityResponseBody& setAllowDictionaries(vector<string> && allowDictionaries) { DARABONBA_PTR_SET_RVALUE(allowDictionaries_, allowDictionaries) };


    // ddlAuthority Field Functions 
    bool hasDdlAuthority() const { return this->ddlAuthority_ != nullptr;};
    void deleteDdlAuthority() { this->ddlAuthority_ = nullptr;};
    inline bool getDdlAuthority() const { DARABONBA_PTR_GET_DEFAULT(ddlAuthority_, false) };
    inline DescribeAccountAuthorityResponseBody& setDdlAuthority(bool ddlAuthority) { DARABONBA_PTR_SET_VALUE(ddlAuthority_, ddlAuthority) };


    // dmlAuthority Field Functions 
    bool hasDmlAuthority() const { return this->dmlAuthority_ != nullptr;};
    void deleteDmlAuthority() { this->dmlAuthority_ = nullptr;};
    inline string getDmlAuthority() const { DARABONBA_PTR_GET_DEFAULT(dmlAuthority_, "") };
    inline DescribeAccountAuthorityResponseBody& setDmlAuthority(string dmlAuthority) { DARABONBA_PTR_SET_VALUE(dmlAuthority_, dmlAuthority) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountAuthorityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalDatabases Field Functions 
    bool hasTotalDatabases() const { return this->totalDatabases_ != nullptr;};
    void deleteTotalDatabases() { this->totalDatabases_ = nullptr;};
    inline const vector<string> & getTotalDatabases() const { DARABONBA_PTR_GET_CONST(totalDatabases_, vector<string>) };
    inline vector<string> getTotalDatabases() { DARABONBA_PTR_GET(totalDatabases_, vector<string>) };
    inline DescribeAccountAuthorityResponseBody& setTotalDatabases(const vector<string> & totalDatabases) { DARABONBA_PTR_SET_VALUE(totalDatabases_, totalDatabases) };
    inline DescribeAccountAuthorityResponseBody& setTotalDatabases(vector<string> && totalDatabases) { DARABONBA_PTR_SET_RVALUE(totalDatabases_, totalDatabases) };


    // totalDictionaries Field Functions 
    bool hasTotalDictionaries() const { return this->totalDictionaries_ != nullptr;};
    void deleteTotalDictionaries() { this->totalDictionaries_ = nullptr;};
    inline const vector<string> & getTotalDictionaries() const { DARABONBA_PTR_GET_CONST(totalDictionaries_, vector<string>) };
    inline vector<string> getTotalDictionaries() { DARABONBA_PTR_GET(totalDictionaries_, vector<string>) };
    inline DescribeAccountAuthorityResponseBody& setTotalDictionaries(const vector<string> & totalDictionaries) { DARABONBA_PTR_SET_VALUE(totalDictionaries_, totalDictionaries) };
    inline DescribeAccountAuthorityResponseBody& setTotalDictionaries(vector<string> && totalDictionaries) { DARABONBA_PTR_SET_RVALUE(totalDictionaries_, totalDictionaries) };


  protected:
    // The name of the database account.
    shared_ptr<string> accountName_ {};
    // Databases to which permissions have been granted.
    shared_ptr<vector<string>> allowDatabases_ {};
    // Dictionaries to which permissions have been granted.
    shared_ptr<vector<string>> allowDictionaries_ {};
    // Indicates whether the database account has DDL permissions. Valid values:
    // 
    // *   **true**: has DDL permissions.
    // *   **false**: does not have DDL permissions.
    shared_ptr<bool> ddlAuthority_ {};
    // Indicates whether the database account has DML permissions. Valid values:
    // 
    // *   **all**
    // *   **readOnly,modify**
    shared_ptr<string> dmlAuthority_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // All databases.
    shared_ptr<vector<string>> totalDatabases_ {};
    // All dictionaries.
    shared_ptr<vector<string>> totalDictionaries_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
