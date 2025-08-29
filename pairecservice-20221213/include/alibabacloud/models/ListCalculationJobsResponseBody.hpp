// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALCULATIONJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCALCULATIONJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCalculationJobsResponseBodyCalculationJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListCalculationJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCalculationJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CalculationJobs, calculationJobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCalculationJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CalculationJobs, calculationJobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCalculationJobsResponseBody() = default ;
    ListCalculationJobsResponseBody(const ListCalculationJobsResponseBody &) = default ;
    ListCalculationJobsResponseBody(ListCalculationJobsResponseBody &&) = default ;
    ListCalculationJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCalculationJobsResponseBody() = default ;
    ListCalculationJobsResponseBody& operator=(const ListCalculationJobsResponseBody &) = default ;
    ListCalculationJobsResponseBody& operator=(ListCalculationJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calculationJobs_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // calculationJobs Field Functions 
    bool hasCalculationJobs() const { return this->calculationJobs_ != nullptr;};
    void deleteCalculationJobs() { this->calculationJobs_ = nullptr;};
    inline const vector<ListCalculationJobsResponseBodyCalculationJobs> & calculationJobs() const { DARABONBA_PTR_GET_CONST(calculationJobs_, vector<ListCalculationJobsResponseBodyCalculationJobs>) };
    inline vector<ListCalculationJobsResponseBodyCalculationJobs> calculationJobs() { DARABONBA_PTR_GET(calculationJobs_, vector<ListCalculationJobsResponseBodyCalculationJobs>) };
    inline ListCalculationJobsResponseBody& setCalculationJobs(const vector<ListCalculationJobsResponseBodyCalculationJobs> & calculationJobs) { DARABONBA_PTR_SET_VALUE(calculationJobs_, calculationJobs) };
    inline ListCalculationJobsResponseBody& setCalculationJobs(vector<ListCalculationJobsResponseBodyCalculationJobs> && calculationJobs) { DARABONBA_PTR_SET_RVALUE(calculationJobs_, calculationJobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCalculationJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCalculationJobsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListCalculationJobsResponseBodyCalculationJobs>> calculationJobs_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
