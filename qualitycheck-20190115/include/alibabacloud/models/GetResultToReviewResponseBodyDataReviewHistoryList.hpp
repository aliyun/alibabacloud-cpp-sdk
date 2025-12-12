// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAREVIEWHISTORYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAREVIEWHISTORYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataReviewHistoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataReviewHistoryList& obj) { 
      DARABONBA_PTR_TO_JSON(ReviewHistory, reviewHistory_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataReviewHistoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(ReviewHistory, reviewHistory_);
    };
    GetResultToReviewResponseBodyDataReviewHistoryList() = default ;
    GetResultToReviewResponseBodyDataReviewHistoryList(const GetResultToReviewResponseBodyDataReviewHistoryList &) = default ;
    GetResultToReviewResponseBodyDataReviewHistoryList(GetResultToReviewResponseBodyDataReviewHistoryList &&) = default ;
    GetResultToReviewResponseBodyDataReviewHistoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataReviewHistoryList() = default ;
    GetResultToReviewResponseBodyDataReviewHistoryList& operator=(const GetResultToReviewResponseBodyDataReviewHistoryList &) = default ;
    GetResultToReviewResponseBodyDataReviewHistoryList& operator=(GetResultToReviewResponseBodyDataReviewHistoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reviewHistory_ == nullptr; };
    // reviewHistory Field Functions 
    bool hasReviewHistory() const { return this->reviewHistory_ != nullptr;};
    void deleteReviewHistory() { this->reviewHistory_ = nullptr;};
    inline const vector<Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory> & reviewHistory() const { DARABONBA_PTR_GET_CONST(reviewHistory_, vector<Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory>) };
    inline vector<Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory> reviewHistory() { DARABONBA_PTR_GET(reviewHistory_, vector<Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory>) };
    inline GetResultToReviewResponseBodyDataReviewHistoryList& setReviewHistory(const vector<Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory> & reviewHistory) { DARABONBA_PTR_SET_VALUE(reviewHistory_, reviewHistory) };
    inline GetResultToReviewResponseBodyDataReviewHistoryList& setReviewHistory(vector<Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory> && reviewHistory) { DARABONBA_PTR_SET_RVALUE(reviewHistory_, reviewHistory) };


  protected:
    std::shared_ptr<vector<Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory>> reviewHistory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
