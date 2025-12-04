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
        && return this->allowDatabases_ == nullptr && return this->allowDictionaries_ == nullptr && return this->ddlAuthority_ == nullptr && return this->dmlAuthority_ == nullptr && return this->requestId_ == nullptr
        && return this->totalDatabases_ == nullptr && return this->totalDictionaries_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAccountAuthorityResponseBody& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // allowDatabases Field Functions 
    bool hasAllowDatabases() const { return this->allowDatabases_ != nullptr;};
    void deleteAllowDatabases() { this->allowDatabases_ = nullptr;};
    inline const vector<string> & allowDatabases() const { DARABONBA_PTR_GET_CONST(allowDatabases_, vector<string>) };
    inline vector<string> allowDatabases() { DARABONBA_PTR_GET(allowDatabases_, vector<string>) };
    inline DescribeAccountAuthorityResponseBody& setAllowDatabases(const vector<string> & allowDatabases) { DARABONBA_PTR_SET_VALUE(allowDatabases_, allowDatabases) };
    inline DescribeAccountAuthorityResponseBody& setAllowDatabases(vector<string> && allowDatabases) { DARABONBA_PTR_SET_RVALUE(allowDatabases_, allowDatabases) };


    // allowDictionaries Field Functions 
    bool hasAllowDictionaries() const { return this->allowDictionaries_ != nullptr;};
    void deleteAllowDictionaries() { this->allowDictionaries_ = nullptr;};
    inline const vector<string> & allowDictionaries() const { DARABONBA_PTR_GET_CONST(allowDictionaries_, vector<string>) };
    inline vector<string> allowDictionaries() { DARABONBA_PTR_GET(allowDictionaries_, vector<string>) };
    inline DescribeAccountAuthorityResponseBody& setAllowDictionaries(const vector<string> & allowDictionaries) { DARABONBA_PTR_SET_VALUE(allowDictionaries_, allowDictionaries) };
    inline DescribeAccountAuthorityResponseBody& setAllowDictionaries(vector<string> && allowDictionaries) { DARABONBA_PTR_SET_RVALUE(allowDictionaries_, allowDictionaries) };


    // ddlAuthority Field Functions 
    bool hasDdlAuthority() const { return this->ddlAuthority_ != nullptr;};
    void deleteDdlAuthority() { this->ddlAuthority_ = nullptr;};
    inline bool ddlAuthority() const { DARABONBA_PTR_GET_DEFAULT(ddlAuthority_, false) };
    inline DescribeAccountAuthorityResponseBody& setDdlAuthority(bool ddlAuthority) { DARABONBA_PTR_SET_VALUE(ddlAuthority_, ddlAuthority) };


    // dmlAuthority Field Functions 
    bool hasDmlAuthority() const { return this->dmlAuthority_ != nullptr;};
    void deleteDmlAuthority() { this->dmlAuthority_ = nullptr;};
    inline string dmlAuthority() const { DARABONBA_PTR_GET_DEFAULT(dmlAuthority_, "") };
    inline DescribeAccountAuthorityResponseBody& setDmlAuthority(string dmlAuthority) { DARABONBA_PTR_SET_VALUE(dmlAuthority_, dmlAuthority) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountAuthorityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalDatabases Field Functions 
    bool hasTotalDatabases() const { return this->totalDatabases_ != nullptr;};
    void deleteTotalDatabases() { this->totalDatabases_ = nullptr;};
    inline const vector<string> & totalDatabases() const { DARABONBA_PTR_GET_CONST(totalDatabases_, vector<string>) };
    inline vector<string> totalDatabases() { DARABONBA_PTR_GET(totalDatabases_, vector<string>) };
    inline DescribeAccountAuthorityResponseBody& setTotalDatabases(const vector<string> & totalDatabases) { DARABONBA_PTR_SET_VALUE(totalDatabases_, totalDatabases) };
    inline DescribeAccountAuthorityResponseBody& setTotalDatabases(vector<string> && totalDatabases) { DARABONBA_PTR_SET_RVALUE(totalDatabases_, totalDatabases) };


    // totalDictionaries Field Functions 
    bool hasTotalDictionaries() const { return this->totalDictionaries_ != nullptr;};
    void deleteTotalDictionaries() { this->totalDictionaries_ = nullptr;};
    inline const vector<string> & totalDictionaries() const { DARABONBA_PTR_GET_CONST(totalDictionaries_, vector<string>) };
    inline vector<string> totalDictionaries() { DARABONBA_PTR_GET(totalDictionaries_, vector<string>) };
    inline DescribeAccountAuthorityResponseBody& setTotalDictionaries(const vector<string> & totalDictionaries) { DARABONBA_PTR_SET_VALUE(totalDictionaries_, totalDictionaries) };
    inline DescribeAccountAuthorityResponseBody& setTotalDictionaries(vector<string> && totalDictionaries) { DARABONBA_PTR_SET_RVALUE(totalDictionaries_, totalDictionaries) };


  protected:
    // The name of the database account.
    std::shared_ptr<string> accountName_ = nullptr;
    // Databases to which permissions have been granted.
    std::shared_ptr<vector<string>> allowDatabases_ = nullptr;
    // Dictionaries to which permissions have been granted.
    std::shared_ptr<vector<string>> allowDictionaries_ = nullptr;
    // Indicates whether the database account has DDL permissions. Valid values:
    // 
    // *   **true**: has DDL permissions.
    // *   **false**: does not have DDL permissions.
    std::shared_ptr<bool> ddlAuthority_ = nullptr;
    // Indicates whether the database account has DML permissions. Valid values:
    // 
    // *   **all**
    // *   **readOnly,modify**
    std::shared_ptr<string> dmlAuthority_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // All databases.
    std::shared_ptr<vector<string>> totalDatabases_ = nullptr;
    // All dictionaries.
    std::shared_ptr<vector<string>> totalDictionaries_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
