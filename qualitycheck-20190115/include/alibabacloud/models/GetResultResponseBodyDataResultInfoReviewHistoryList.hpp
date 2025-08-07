// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOREVIEWHISTORYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOREVIEWHISTORYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoReviewHistoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoReviewHistoryList& obj) { 
      DARABONBA_PTR_TO_JSON(ReviewHistory, reviewHistory_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoReviewHistoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(ReviewHistory, reviewHistory_);
    };
    GetResultResponseBodyDataResultInfoReviewHistoryList() = default ;
    GetResultResponseBodyDataResultInfoReviewHistoryList(const GetResultResponseBodyDataResultInfoReviewHistoryList &) = default ;
    GetResultResponseBodyDataResultInfoReviewHistoryList(GetResultResponseBodyDataResultInfoReviewHistoryList &&) = default ;
    GetResultResponseBodyDataResultInfoReviewHistoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoReviewHistoryList() = default ;
    GetResultResponseBodyDataResultInfoReviewHistoryList& operator=(const GetResultResponseBodyDataResultInfoReviewHistoryList &) = default ;
    GetResultResponseBodyDataResultInfoReviewHistoryList& operator=(GetResultResponseBodyDataResultInfoReviewHistoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reviewHistory_ != nullptr; };
    // reviewHistory Field Functions 
    bool hasReviewHistory() const { return this->reviewHistory_ != nullptr;};
    void deleteReviewHistory() { this->reviewHistory_ = nullptr;};
    inline const vector<Models::GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistory> & reviewHistory() const { DARABONBA_PTR_GET_CONST(reviewHistory_, vector<Models::GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistory>) };
    inline vector<Models::GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistory> reviewHistory() { DARABONBA_PTR_GET(reviewHistory_, vector<Models::GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistory>) };
    inline GetResultResponseBodyDataResultInfoReviewHistoryList& setReviewHistory(const vector<Models::GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistory> & reviewHistory) { DARABONBA_PTR_SET_VALUE(reviewHistory_, reviewHistory) };
    inline GetResultResponseBodyDataResultInfoReviewHistoryList& setReviewHistory(vector<Models::GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistory> && reviewHistory) { DARABONBA_PTR_SET_RVALUE(reviewHistory_, reviewHistory) };


  protected:
    std::shared_ptr<vector<Models::GetResultResponseBodyDataResultInfoReviewHistoryListReviewHistory>> reviewHistory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
