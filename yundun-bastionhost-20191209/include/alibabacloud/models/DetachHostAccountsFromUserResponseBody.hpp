// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHHOSTACCOUNTSFROMUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHHOSTACCOUNTSFROMUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachHostAccountsFromUserResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DetachHostAccountsFromUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachHostAccountsFromUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, DetachHostAccountsFromUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    DetachHostAccountsFromUserResponseBody() = default ;
    DetachHostAccountsFromUserResponseBody(const DetachHostAccountsFromUserResponseBody &) = default ;
    DetachHostAccountsFromUserResponseBody(DetachHostAccountsFromUserResponseBody &&) = default ;
    DetachHostAccountsFromUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachHostAccountsFromUserResponseBody() = default ;
    DetachHostAccountsFromUserResponseBody& operator=(const DetachHostAccountsFromUserResponseBody &) = default ;
    DetachHostAccountsFromUserResponseBody& operator=(DetachHostAccountsFromUserResponseBody &&) = default ;
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
    inline DetachHostAccountsFromUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<DetachHostAccountsFromUserResponseBodyResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<DetachHostAccountsFromUserResponseBodyResults>) };
    inline vector<DetachHostAccountsFromUserResponseBodyResults> results() { DARABONBA_PTR_GET(results_, vector<DetachHostAccountsFromUserResponseBodyResults>) };
    inline DetachHostAccountsFromUserResponseBody& setResults(const vector<DetachHostAccountsFromUserResponseBodyResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DetachHostAccountsFromUserResponseBody& setResults(vector<DetachHostAccountsFromUserResponseBodyResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of the call.
    std::shared_ptr<vector<DetachHostAccountsFromUserResponseBodyResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
