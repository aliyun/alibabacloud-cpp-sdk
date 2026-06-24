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
      DARABONBA_PTR_TO_JSON(EvaluationDomain, evaluationDomain_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationScoreHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(EvaluationDomain, evaluationDomain_);
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
        && this->endDate_ == nullptr && this->evaluationDomain_ == nullptr && this->regionId_ == nullptr && this->startDate_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListEvaluationScoreHistoryRequest& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ListEvaluationScoreHistoryRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // evaluationDomain Field Functions 
    bool hasEvaluationDomain() const { return this->evaluationDomain_ != nullptr;};
    void deleteEvaluationDomain() { this->evaluationDomain_ = nullptr;};
    inline string getEvaluationDomain() const { DARABONBA_PTR_GET_DEFAULT(evaluationDomain_, "") };
    inline ListEvaluationScoreHistoryRequest& setEvaluationDomain(string evaluationDomain) { DARABONBA_PTR_SET_VALUE(evaluationDomain_, evaluationDomain) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEvaluationScoreHistoryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ListEvaluationScoreHistoryRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The ID of the member accounts. This parameter is applicable only to the multi-account detection pattern.
    shared_ptr<int64_t> accountId_ {};
    // The end date of the query. Format: YYYY-MM-DD.
    // 
    // By default, the historical scores from the last 7 days are returned.
    shared_ptr<string> endDate_ {};
    shared_ptr<string> evaluationDomain_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The start date of the query. Format: YYYY-MM-DD.
    // 
    // You can query records from the last 180 days.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
