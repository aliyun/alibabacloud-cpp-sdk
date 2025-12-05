// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHHOSTGROUPACCOUNTSFROMUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHHOSTGROUPACCOUNTSFROMUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachHostGroupAccountsFromUserResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DetachHostGroupAccountsFromUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachHostGroupAccountsFromUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, DetachHostGroupAccountsFromUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    DetachHostGroupAccountsFromUserResponseBody() = default ;
    DetachHostGroupAccountsFromUserResponseBody(const DetachHostGroupAccountsFromUserResponseBody &) = default ;
    DetachHostGroupAccountsFromUserResponseBody(DetachHostGroupAccountsFromUserResponseBody &&) = default ;
    DetachHostGroupAccountsFromUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachHostGroupAccountsFromUserResponseBody() = default ;
    DetachHostGroupAccountsFromUserResponseBody& operator=(const DetachHostGroupAccountsFromUserResponseBody &) = default ;
    DetachHostGroupAccountsFromUserResponseBody& operator=(DetachHostGroupAccountsFromUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachHostGroupAccountsFromUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<DetachHostGroupAccountsFromUserResponseBodyResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<DetachHostGroupAccountsFromUserResponseBodyResults>) };
    inline vector<DetachHostGroupAccountsFromUserResponseBodyResults> results() { DARABONBA_PTR_GET(results_, vector<DetachHostGroupAccountsFromUserResponseBodyResults>) };
    inline DetachHostGroupAccountsFromUserResponseBody& setResults(const vector<DetachHostGroupAccountsFromUserResponseBodyResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DetachHostGroupAccountsFromUserResponseBody& setResults(vector<DetachHostGroupAccountsFromUserResponseBodyResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of the call.
    std::shared_ptr<vector<DetachHostGroupAccountsFromUserResponseBodyResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
