// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURESUGGESTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURESUGGESTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecureSuggestionResponseBodySuggestions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecureSuggestionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecureSuggestionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CalTime, calTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Suggestions, suggestions_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecureSuggestionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CalTime, calTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Suggestions, suggestions_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSecureSuggestionResponseBody() = default ;
    DescribeSecureSuggestionResponseBody(const DescribeSecureSuggestionResponseBody &) = default ;
    DescribeSecureSuggestionResponseBody(DescribeSecureSuggestionResponseBody &&) = default ;
    DescribeSecureSuggestionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecureSuggestionResponseBody() = default ;
    DescribeSecureSuggestionResponseBody& operator=(const DescribeSecureSuggestionResponseBody &) = default ;
    DescribeSecureSuggestionResponseBody& operator=(DescribeSecureSuggestionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calTime_ == nullptr
        && return this->requestId_ == nullptr && return this->suggestions_ == nullptr && return this->totalCount_ == nullptr; };
    // calTime Field Functions 
    bool hasCalTime() const { return this->calTime_ != nullptr;};
    void deleteCalTime() { this->calTime_ = nullptr;};
    inline int64_t calTime() const { DARABONBA_PTR_GET_DEFAULT(calTime_, 0L) };
    inline DescribeSecureSuggestionResponseBody& setCalTime(int64_t calTime) { DARABONBA_PTR_SET_VALUE(calTime_, calTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecureSuggestionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suggestions Field Functions 
    bool hasSuggestions() const { return this->suggestions_ != nullptr;};
    void deleteSuggestions() { this->suggestions_ = nullptr;};
    inline const vector<DescribeSecureSuggestionResponseBodySuggestions> & suggestions() const { DARABONBA_PTR_GET_CONST(suggestions_, vector<DescribeSecureSuggestionResponseBodySuggestions>) };
    inline vector<DescribeSecureSuggestionResponseBodySuggestions> suggestions() { DARABONBA_PTR_GET(suggestions_, vector<DescribeSecureSuggestionResponseBodySuggestions>) };
    inline DescribeSecureSuggestionResponseBody& setSuggestions(const vector<DescribeSecureSuggestionResponseBodySuggestions> & suggestions) { DARABONBA_PTR_SET_VALUE(suggestions_, suggestions) };
    inline DescribeSecureSuggestionResponseBody& setSuggestions(vector<DescribeSecureSuggestionResponseBodySuggestions> && suggestions) { DARABONBA_PTR_SET_RVALUE(suggestions_, suggestions) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSecureSuggestionResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int64_t> calTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeSecureSuggestionResponseBodySuggestions>> suggestions_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
