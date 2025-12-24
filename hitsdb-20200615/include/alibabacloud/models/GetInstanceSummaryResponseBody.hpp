// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceSummaryResponseBodyRegionalSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetInstanceSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LockingCount, lockingCount_);
      DARABONBA_PTR_TO_JSON(RegionalSummary, regionalSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunningCount, runningCount_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LockingCount, lockingCount_);
      DARABONBA_PTR_FROM_JSON(RegionalSummary, regionalSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunningCount, runningCount_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetInstanceSummaryResponseBody() = default ;
    GetInstanceSummaryResponseBody(const GetInstanceSummaryResponseBody &) = default ;
    GetInstanceSummaryResponseBody(GetInstanceSummaryResponseBody &&) = default ;
    GetInstanceSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceSummaryResponseBody() = default ;
    GetInstanceSummaryResponseBody& operator=(const GetInstanceSummaryResponseBody &) = default ;
    GetInstanceSummaryResponseBody& operator=(GetInstanceSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lockingCount_ == nullptr
        && return this->regionalSummary_ == nullptr && return this->requestId_ == nullptr && return this->runningCount_ == nullptr && return this->total_ == nullptr; };
    // lockingCount Field Functions 
    bool hasLockingCount() const { return this->lockingCount_ != nullptr;};
    void deleteLockingCount() { this->lockingCount_ = nullptr;};
    inline int32_t lockingCount() const { DARABONBA_PTR_GET_DEFAULT(lockingCount_, 0) };
    inline GetInstanceSummaryResponseBody& setLockingCount(int32_t lockingCount) { DARABONBA_PTR_SET_VALUE(lockingCount_, lockingCount) };


    // regionalSummary Field Functions 
    bool hasRegionalSummary() const { return this->regionalSummary_ != nullptr;};
    void deleteRegionalSummary() { this->regionalSummary_ = nullptr;};
    inline const vector<GetInstanceSummaryResponseBodyRegionalSummary> & regionalSummary() const { DARABONBA_PTR_GET_CONST(regionalSummary_, vector<GetInstanceSummaryResponseBodyRegionalSummary>) };
    inline vector<GetInstanceSummaryResponseBodyRegionalSummary> regionalSummary() { DARABONBA_PTR_GET(regionalSummary_, vector<GetInstanceSummaryResponseBodyRegionalSummary>) };
    inline GetInstanceSummaryResponseBody& setRegionalSummary(const vector<GetInstanceSummaryResponseBodyRegionalSummary> & regionalSummary) { DARABONBA_PTR_SET_VALUE(regionalSummary_, regionalSummary) };
    inline GetInstanceSummaryResponseBody& setRegionalSummary(vector<GetInstanceSummaryResponseBodyRegionalSummary> && regionalSummary) { DARABONBA_PTR_SET_RVALUE(regionalSummary_, regionalSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningCount Field Functions 
    bool hasRunningCount() const { return this->runningCount_ != nullptr;};
    void deleteRunningCount() { this->runningCount_ = nullptr;};
    inline int32_t runningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0) };
    inline GetInstanceSummaryResponseBody& setRunningCount(int32_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetInstanceSummaryResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int32_t> lockingCount_ = nullptr;
    std::shared_ptr<vector<GetInstanceSummaryResponseBodyRegionalSummary>> regionalSummary_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> runningCount_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
