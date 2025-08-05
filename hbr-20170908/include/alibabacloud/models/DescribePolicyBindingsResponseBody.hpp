// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePolicyBindingsResponseBodyPolicyBindings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePolicyBindingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyBindingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyBindings, policyBindings_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyBindingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyBindings, policyBindings_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePolicyBindingsResponseBody() = default ;
    DescribePolicyBindingsResponseBody(const DescribePolicyBindingsResponseBody &) = default ;
    DescribePolicyBindingsResponseBody(DescribePolicyBindingsResponseBody &&) = default ;
    DescribePolicyBindingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyBindingsResponseBody() = default ;
    DescribePolicyBindingsResponseBody& operator=(const DescribePolicyBindingsResponseBody &) = default ;
    DescribePolicyBindingsResponseBody& operator=(DescribePolicyBindingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->maxResults_ != nullptr && this->message_ != nullptr && this->nextToken_ != nullptr && this->policyBindings_ != nullptr && this->requestId_ != nullptr
        && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePolicyBindingsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribePolicyBindingsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePolicyBindingsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePolicyBindingsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyBindings Field Functions 
    bool hasPolicyBindings() const { return this->policyBindings_ != nullptr;};
    void deletePolicyBindings() { this->policyBindings_ = nullptr;};
    inline const vector<DescribePolicyBindingsResponseBodyPolicyBindings> & policyBindings() const { DARABONBA_PTR_GET_CONST(policyBindings_, vector<DescribePolicyBindingsResponseBodyPolicyBindings>) };
    inline vector<DescribePolicyBindingsResponseBodyPolicyBindings> policyBindings() { DARABONBA_PTR_GET(policyBindings_, vector<DescribePolicyBindingsResponseBodyPolicyBindings>) };
    inline DescribePolicyBindingsResponseBody& setPolicyBindings(const vector<DescribePolicyBindingsResponseBodyPolicyBindings> & policyBindings) { DARABONBA_PTR_SET_VALUE(policyBindings_, policyBindings) };
    inline DescribePolicyBindingsResponseBody& setPolicyBindings(vector<DescribePolicyBindingsResponseBodyPolicyBindings> && policyBindings) { DARABONBA_PTR_SET_RVALUE(policyBindings_, policyBindings) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolicyBindingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribePolicyBindingsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePolicyBindingsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Return code, 200 indicates success.
    std::shared_ptr<string> code_ = nullptr;
    // The number of results per query.
    // 
    // Range: 10~100. Default: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Description of the return message. A successful response usually returns \\"successful\\", while an error will return a corresponding error message.
    std::shared_ptr<string> message_ = nullptr;
    // The token required to fetch the next page of policy and data source bindings.
    std::shared_ptr<string> nextToken_ = nullptr;
    // List of bound policies.
    std::shared_ptr<vector<DescribePolicyBindingsResponseBodyPolicyBindings>> policyBindings_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    // 
    // - true: Success
    // - false: Failure
    std::shared_ptr<bool> success_ = nullptr;
    // Total number of records.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
