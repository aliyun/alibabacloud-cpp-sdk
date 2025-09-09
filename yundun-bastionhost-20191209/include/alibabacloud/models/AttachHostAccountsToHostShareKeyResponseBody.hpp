// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHHOSTACCOUNTSTOHOSTSHAREKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHHOSTACCOUNTSTOHOSTSHAREKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachHostAccountsToHostShareKeyResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachHostAccountsToHostShareKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachHostAccountsToHostShareKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, AttachHostAccountsToHostShareKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    AttachHostAccountsToHostShareKeyResponseBody() = default ;
    AttachHostAccountsToHostShareKeyResponseBody(const AttachHostAccountsToHostShareKeyResponseBody &) = default ;
    AttachHostAccountsToHostShareKeyResponseBody(AttachHostAccountsToHostShareKeyResponseBody &&) = default ;
    AttachHostAccountsToHostShareKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachHostAccountsToHostShareKeyResponseBody() = default ;
    AttachHostAccountsToHostShareKeyResponseBody& operator=(const AttachHostAccountsToHostShareKeyResponseBody &) = default ;
    AttachHostAccountsToHostShareKeyResponseBody& operator=(AttachHostAccountsToHostShareKeyResponseBody &&) = default ;
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
    inline AttachHostAccountsToHostShareKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<AttachHostAccountsToHostShareKeyResponseBodyResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<AttachHostAccountsToHostShareKeyResponseBodyResults>) };
    inline vector<AttachHostAccountsToHostShareKeyResponseBodyResults> results() { DARABONBA_PTR_GET(results_, vector<AttachHostAccountsToHostShareKeyResponseBodyResults>) };
    inline AttachHostAccountsToHostShareKeyResponseBody& setResults(const vector<AttachHostAccountsToHostShareKeyResponseBodyResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline AttachHostAccountsToHostShareKeyResponseBody& setResults(vector<AttachHostAccountsToHostShareKeyResponseBodyResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of the call.
    std::shared_ptr<vector<AttachHostAccountsToHostShareKeyResponseBodyResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
