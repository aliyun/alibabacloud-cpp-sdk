// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURESUGGESTIONRESPONSEBODYSUGGESTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURESUGGESTIONRESPONSEBODYSUGGESTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecureSuggestionResponseBodySuggestionsDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecureSuggestionResponseBodySuggestions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecureSuggestionResponseBodySuggestions& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Points, points_);
      DARABONBA_PTR_TO_JSON(SuggestType, suggestType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecureSuggestionResponseBodySuggestions& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Points, points_);
      DARABONBA_PTR_FROM_JSON(SuggestType, suggestType_);
    };
    DescribeSecureSuggestionResponseBodySuggestions() = default ;
    DescribeSecureSuggestionResponseBodySuggestions(const DescribeSecureSuggestionResponseBodySuggestions &) = default ;
    DescribeSecureSuggestionResponseBodySuggestions(DescribeSecureSuggestionResponseBodySuggestions &&) = default ;
    DescribeSecureSuggestionResponseBodySuggestions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecureSuggestionResponseBodySuggestions() = default ;
    DescribeSecureSuggestionResponseBodySuggestions& operator=(const DescribeSecureSuggestionResponseBodySuggestions &) = default ;
    DescribeSecureSuggestionResponseBodySuggestions& operator=(DescribeSecureSuggestionResponseBodySuggestions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && return this->points_ == nullptr && return this->suggestType_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const vector<Models::DescribeSecureSuggestionResponseBodySuggestionsDetail> & detail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Models::DescribeSecureSuggestionResponseBodySuggestionsDetail>) };
    inline vector<Models::DescribeSecureSuggestionResponseBodySuggestionsDetail> detail() { DARABONBA_PTR_GET(detail_, vector<Models::DescribeSecureSuggestionResponseBodySuggestionsDetail>) };
    inline DescribeSecureSuggestionResponseBodySuggestions& setDetail(const vector<Models::DescribeSecureSuggestionResponseBodySuggestionsDetail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline DescribeSecureSuggestionResponseBodySuggestions& setDetail(vector<Models::DescribeSecureSuggestionResponseBodySuggestionsDetail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // points Field Functions 
    bool hasPoints() const { return this->points_ != nullptr;};
    void deletePoints() { this->points_ = nullptr;};
    inline int32_t points() const { DARABONBA_PTR_GET_DEFAULT(points_, 0) };
    inline DescribeSecureSuggestionResponseBodySuggestions& setPoints(int32_t points) { DARABONBA_PTR_SET_VALUE(points_, points) };


    // suggestType Field Functions 
    bool hasSuggestType() const { return this->suggestType_ != nullptr;};
    void deleteSuggestType() { this->suggestType_ = nullptr;};
    inline string suggestType() const { DARABONBA_PTR_GET_DEFAULT(suggestType_, "") };
    inline DescribeSecureSuggestionResponseBodySuggestions& setSuggestType(string suggestType) { DARABONBA_PTR_SET_VALUE(suggestType_, suggestType) };


  protected:
    // The details of the suggestion.
    std::shared_ptr<vector<Models::DescribeSecureSuggestionResponseBodySuggestionsDetail>> detail_ = nullptr;
    // The penalty point of a deduction item.
    std::shared_ptr<int32_t> points_ = nullptr;
    // The type of the unhandled risk. Valid values:
    // 
    // *   **SS_REINFORCE**: missing configuration of key features, such as malicious behavior defense
    // *   **SS_ALARM**: unhandled alerts
    // *   **SS_VUL**: unfixed vulnerabilities
    // *   **SS_HC**: baseline risks
    // *   **SS_AK**: AccessKey pair leaks
    // *   **SS_CLOUD_HC**: configuration risks of cloud services
    // *   **OTHER**: others
    std::shared_ptr<string> suggestType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
