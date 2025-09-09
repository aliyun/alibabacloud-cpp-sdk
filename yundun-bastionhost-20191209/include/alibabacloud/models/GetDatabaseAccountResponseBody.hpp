// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDatabaseAccountResponseBodyDatabaseAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetDatabaseAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccount, databaseAccount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccount, databaseAccount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDatabaseAccountResponseBody() = default ;
    GetDatabaseAccountResponseBody(const GetDatabaseAccountResponseBody &) = default ;
    GetDatabaseAccountResponseBody(GetDatabaseAccountResponseBody &&) = default ;
    GetDatabaseAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseAccountResponseBody() = default ;
    GetDatabaseAccountResponseBody& operator=(const GetDatabaseAccountResponseBody &) = default ;
    GetDatabaseAccountResponseBody& operator=(GetDatabaseAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseAccount_ != nullptr
        && this->requestId_ != nullptr; };
    // databaseAccount Field Functions 
    bool hasDatabaseAccount() const { return this->databaseAccount_ != nullptr;};
    void deleteDatabaseAccount() { this->databaseAccount_ = nullptr;};
    inline const GetDatabaseAccountResponseBodyDatabaseAccount & databaseAccount() const { DARABONBA_PTR_GET_CONST(databaseAccount_, GetDatabaseAccountResponseBodyDatabaseAccount) };
    inline GetDatabaseAccountResponseBodyDatabaseAccount databaseAccount() { DARABONBA_PTR_GET(databaseAccount_, GetDatabaseAccountResponseBodyDatabaseAccount) };
    inline GetDatabaseAccountResponseBody& setDatabaseAccount(const GetDatabaseAccountResponseBodyDatabaseAccount & databaseAccount) { DARABONBA_PTR_SET_VALUE(databaseAccount_, databaseAccount) };
    inline GetDatabaseAccountResponseBody& setDatabaseAccount(GetDatabaseAccountResponseBodyDatabaseAccount && databaseAccount) { DARABONBA_PTR_SET_RVALUE(databaseAccount_, databaseAccount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatabaseAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned information about the database account.
    std::shared_ptr<GetDatabaseAccountResponseBodyDatabaseAccount> databaseAccount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
