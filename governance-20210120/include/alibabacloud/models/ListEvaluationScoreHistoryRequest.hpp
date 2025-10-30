// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONSCOREHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONSCOREHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationScoreHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationScoreHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationScoreHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    ListEvaluationScoreHistoryRequest() = default ;
    ListEvaluationScoreHistoryRequest(const ListEvaluationScoreHistoryRequest &) = default ;
    ListEvaluationScoreHistoryRequest(ListEvaluationScoreHistoryRequest &&) = default ;
    ListEvaluationScoreHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationScoreHistoryRequest() = default ;
    ListEvaluationScoreHistoryRequest& operator=(const ListEvaluationScoreHistoryRequest &) = default ;
    ListEvaluationScoreHistoryRequest& operator=(ListEvaluationScoreHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->endDate_ == nullptr && return this->regionId_ == nullptr && return this->startDate_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListEvaluationScoreHistoryRequest& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ListEvaluationScoreHistoryRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEvaluationScoreHistoryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ListEvaluationScoreHistoryRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The Alibaba Cloud account ID of the member. This parameter takes effect only when a multi-account governance maturity check is performed.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The end of the time range to query. Specify the time in the YYYY-MM-DD format.
    // 
    // By default, the historical scores that were generated in the seven days before the current date are queried.
    std::shared_ptr<string> endDate_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The beginning of the time range to query. Specify the time in the YYYY-MM-DD format.
    // 
    // You can query the historical scores within the previous 180 days.
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
