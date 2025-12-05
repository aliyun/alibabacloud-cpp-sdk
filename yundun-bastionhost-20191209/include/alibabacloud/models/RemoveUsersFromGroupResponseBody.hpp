// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERSFROMGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERSFROMGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RemoveUsersFromGroupResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class RemoveUsersFromGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUsersFromGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUsersFromGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    RemoveUsersFromGroupResponseBody() = default ;
    RemoveUsersFromGroupResponseBody(const RemoveUsersFromGroupResponseBody &) = default ;
    RemoveUsersFromGroupResponseBody(RemoveUsersFromGroupResponseBody &&) = default ;
    RemoveUsersFromGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUsersFromGroupResponseBody() = default ;
    RemoveUsersFromGroupResponseBody& operator=(const RemoveUsersFromGroupResponseBody &) = default ;
    RemoveUsersFromGroupResponseBody& operator=(RemoveUsersFromGroupResponseBody &&) = default ;
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
    inline RemoveUsersFromGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<RemoveUsersFromGroupResponseBodyResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<RemoveUsersFromGroupResponseBodyResults>) };
    inline vector<RemoveUsersFromGroupResponseBodyResults> results() { DARABONBA_PTR_GET(results_, vector<RemoveUsersFromGroupResponseBodyResults>) };
    inline RemoveUsersFromGroupResponseBody& setResults(const vector<RemoveUsersFromGroupResponseBodyResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline RemoveUsersFromGroupResponseBody& setResults(vector<RemoveUsersFromGroupResponseBodyResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of the call.
    std::shared_ptr<vector<RemoveUsersFromGroupResponseBodyResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
