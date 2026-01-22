// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class RegionalSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionalSummary& obj) { 
        DARABONBA_PTR_TO_JSON(LockingCount, lockingCount_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RunningCount, runningCount_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, RegionalSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(LockingCount, lockingCount_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RunningCount, runningCount_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      RegionalSummary() = default ;
      RegionalSummary(const RegionalSummary &) = default ;
      RegionalSummary(RegionalSummary &&) = default ;
      RegionalSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionalSummary() = default ;
      RegionalSummary& operator=(const RegionalSummary &) = default ;
      RegionalSummary& operator=(RegionalSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->lockingCount_ == nullptr
        && this->regionId_ == nullptr && this->runningCount_ == nullptr && this->total_ == nullptr; };
      // lockingCount Field Functions 
      bool hasLockingCount() const { return this->lockingCount_ != nullptr;};
      void deleteLockingCount() { this->lockingCount_ = nullptr;};
      inline int32_t getLockingCount() const { DARABONBA_PTR_GET_DEFAULT(lockingCount_, 0) };
      inline RegionalSummary& setLockingCount(int32_t lockingCount) { DARABONBA_PTR_SET_VALUE(lockingCount_, lockingCount) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RegionalSummary& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // runningCount Field Functions 
      bool hasRunningCount() const { return this->runningCount_ != nullptr;};
      void deleteRunningCount() { this->runningCount_ = nullptr;};
      inline int32_t getRunningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0) };
      inline RegionalSummary& setRunningCount(int32_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline RegionalSummary& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int32_t> lockingCount_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<int32_t> runningCount_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->lockingCount_ == nullptr
        && this->regionalSummary_ == nullptr && this->requestId_ == nullptr && this->runningCount_ == nullptr && this->total_ == nullptr; };
    // lockingCount Field Functions 
    bool hasLockingCount() const { return this->lockingCount_ != nullptr;};
    void deleteLockingCount() { this->lockingCount_ = nullptr;};
    inline int32_t getLockingCount() const { DARABONBA_PTR_GET_DEFAULT(lockingCount_, 0) };
    inline GetInstanceSummaryResponseBody& setLockingCount(int32_t lockingCount) { DARABONBA_PTR_SET_VALUE(lockingCount_, lockingCount) };


    // regionalSummary Field Functions 
    bool hasRegionalSummary() const { return this->regionalSummary_ != nullptr;};
    void deleteRegionalSummary() { this->regionalSummary_ = nullptr;};
    inline const vector<GetInstanceSummaryResponseBody::RegionalSummary> & getRegionalSummary() const { DARABONBA_PTR_GET_CONST(regionalSummary_, vector<GetInstanceSummaryResponseBody::RegionalSummary>) };
    inline vector<GetInstanceSummaryResponseBody::RegionalSummary> getRegionalSummary() { DARABONBA_PTR_GET(regionalSummary_, vector<GetInstanceSummaryResponseBody::RegionalSummary>) };
    inline GetInstanceSummaryResponseBody& setRegionalSummary(const vector<GetInstanceSummaryResponseBody::RegionalSummary> & regionalSummary) { DARABONBA_PTR_SET_VALUE(regionalSummary_, regionalSummary) };
    inline GetInstanceSummaryResponseBody& setRegionalSummary(vector<GetInstanceSummaryResponseBody::RegionalSummary> && regionalSummary) { DARABONBA_PTR_SET_RVALUE(regionalSummary_, regionalSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningCount Field Functions 
    bool hasRunningCount() const { return this->runningCount_ != nullptr;};
    void deleteRunningCount() { this->runningCount_ = nullptr;};
    inline int32_t getRunningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0) };
    inline GetInstanceSummaryResponseBody& setRunningCount(int32_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetInstanceSummaryResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<int32_t> lockingCount_ {};
    shared_ptr<vector<GetInstanceSummaryResponseBody::RegionalSummary>> regionalSummary_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> runningCount_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
