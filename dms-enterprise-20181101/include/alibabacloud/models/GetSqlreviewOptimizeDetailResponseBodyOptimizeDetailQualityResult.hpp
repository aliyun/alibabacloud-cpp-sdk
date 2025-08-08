// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLREVIEWOPTIMIZEDETAILRESPONSEBODYOPTIMIZEDETAILQUALITYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSQLREVIEWOPTIMIZEDETAILRESPONSEBODYOPTIMIZEDETAILQUALITYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(OccurError, occurError_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(OccurError, occurError_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult() = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult(const GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult &) = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult(GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult &&) = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult() = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult& operator=(const GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult &) = default ;
    GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult& operator=(GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMessage_ != nullptr
        && this->occurError_ != nullptr && this->results_ != nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // occurError Field Functions 
    bool hasOccurError() const { return this->occurError_ != nullptr;};
    void deleteOccurError() { this->occurError_ = nullptr;};
    inline bool occurError() const { DARABONBA_PTR_GET_DEFAULT(occurError_, false) };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult& setOccurError(bool occurError) { DARABONBA_PTR_SET_VALUE(occurError_, occurError) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults>) };
    inline vector<Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults> results() { DARABONBA_PTR_GET(results_, vector<Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults>) };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult& setResults(const vector<Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResult& setResults(vector<Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The error message returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // Indicates whether an error occurs. Valid values:
    // 
    // *   **true**: An error occurs.
    // *   **false**: No error occurs.
    std::shared_ptr<bool> occurError_ = nullptr;
    // The review results based on rules.
    std::shared_ptr<vector<Models::GetSQLReviewOptimizeDetailResponseBodyOptimizeDetailQualityResultResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
