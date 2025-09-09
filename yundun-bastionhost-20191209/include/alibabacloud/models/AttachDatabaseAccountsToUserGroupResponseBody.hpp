// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachDatabaseAccountsToUserGroupResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachDatabaseAccountsToUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachDatabaseAccountsToUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, AttachDatabaseAccountsToUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    AttachDatabaseAccountsToUserGroupResponseBody() = default ;
    AttachDatabaseAccountsToUserGroupResponseBody(const AttachDatabaseAccountsToUserGroupResponseBody &) = default ;
    AttachDatabaseAccountsToUserGroupResponseBody(AttachDatabaseAccountsToUserGroupResponseBody &&) = default ;
    AttachDatabaseAccountsToUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachDatabaseAccountsToUserGroupResponseBody() = default ;
    AttachDatabaseAccountsToUserGroupResponseBody& operator=(const AttachDatabaseAccountsToUserGroupResponseBody &) = default ;
    AttachDatabaseAccountsToUserGroupResponseBody& operator=(AttachDatabaseAccountsToUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->results_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachDatabaseAccountsToUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<AttachDatabaseAccountsToUserGroupResponseBodyResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<AttachDatabaseAccountsToUserGroupResponseBodyResults>) };
    inline vector<AttachDatabaseAccountsToUserGroupResponseBodyResults> results() { DARABONBA_PTR_GET(results_, vector<AttachDatabaseAccountsToUserGroupResponseBodyResults>) };
    inline AttachDatabaseAccountsToUserGroupResponseBody& setResults(const vector<AttachDatabaseAccountsToUserGroupResponseBodyResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline AttachDatabaseAccountsToUserGroupResponseBody& setResults(vector<AttachDatabaseAccountsToUserGroupResponseBodyResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of the call.
    std::shared_ptr<vector<AttachDatabaseAccountsToUserGroupResponseBodyResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
