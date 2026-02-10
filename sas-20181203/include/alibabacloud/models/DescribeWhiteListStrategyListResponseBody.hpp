// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListStrategyListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListStrategyListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Strategies, strategies_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListStrategyListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Strategies, strategies_);
    };
    DescribeWhiteListStrategyListResponseBody() = default ;
    DescribeWhiteListStrategyListResponseBody(const DescribeWhiteListStrategyListResponseBody &) = default ;
    DescribeWhiteListStrategyListResponseBody(DescribeWhiteListStrategyListResponseBody &&) = default ;
    DescribeWhiteListStrategyListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListStrategyListResponseBody() = default ;
    DescribeWhiteListStrategyListResponseBody& operator=(const DescribeWhiteListStrategyListResponseBody &) = default ;
    DescribeWhiteListStrategyListResponseBody& operator=(DescribeWhiteListStrategyListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Strategies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Strategies& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_TO_JSON(StudyTime, studyTime_);
      };
      friend void from_json(const Darabonba::Json& j, Strategies& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_FROM_JSON(StudyTime, studyTime_);
      };
      Strategies() = default ;
      Strategies(const Strategies &) = default ;
      Strategies(Strategies &&) = default ;
      Strategies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Strategies() = default ;
      Strategies& operator=(const Strategies &) = default ;
      Strategies& operator=(Strategies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->strategyId_ == nullptr && this->strategyName_ == nullptr && this->studyTime_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Strategies& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // strategyId Field Functions 
      bool hasStrategyId() const { return this->strategyId_ != nullptr;};
      void deleteStrategyId() { this->strategyId_ = nullptr;};
      inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
      inline Strategies& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


      // strategyName Field Functions 
      bool hasStrategyName() const { return this->strategyName_ != nullptr;};
      void deleteStrategyName() { this->strategyName_ = nullptr;};
      inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
      inline Strategies& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


      // studyTime Field Functions 
      bool hasStudyTime() const { return this->studyTime_ != nullptr;};
      void deleteStudyTime() { this->studyTime_ = nullptr;};
      inline int32_t getStudyTime() const { DARABONBA_PTR_GET_DEFAULT(studyTime_, 0) };
      inline Strategies& setStudyTime(int32_t studyTime) { DARABONBA_PTR_SET_VALUE(studyTime_, studyTime) };


    protected:
      // The status of the policy. Valid values:
      // 
      // *   **0**: disabled
      // *   **1**: learning
      // *   **2**: paused
      // *   **3**: learning completed
      // *   **4**: enabled
      shared_ptr<int32_t> status_ {};
      // The ID of the policy.
      shared_ptr<int64_t> strategyId_ {};
      // The name of the policy.
      shared_ptr<string> strategyName_ {};
      // The intelligent learning duration. Unit: hour.
      shared_ptr<int32_t> studyTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->strategies_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWhiteListStrategyListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategies Field Functions 
    bool hasStrategies() const { return this->strategies_ != nullptr;};
    void deleteStrategies() { this->strategies_ = nullptr;};
    inline const vector<DescribeWhiteListStrategyListResponseBody::Strategies> & getStrategies() const { DARABONBA_PTR_GET_CONST(strategies_, vector<DescribeWhiteListStrategyListResponseBody::Strategies>) };
    inline vector<DescribeWhiteListStrategyListResponseBody::Strategies> getStrategies() { DARABONBA_PTR_GET(strategies_, vector<DescribeWhiteListStrategyListResponseBody::Strategies>) };
    inline DescribeWhiteListStrategyListResponseBody& setStrategies(const vector<DescribeWhiteListStrategyListResponseBody::Strategies> & strategies) { DARABONBA_PTR_SET_VALUE(strategies_, strategies) };
    inline DescribeWhiteListStrategyListResponseBody& setStrategies(vector<DescribeWhiteListStrategyListResponseBody::Strategies> && strategies) { DARABONBA_PTR_SET_RVALUE(strategies_, strategies) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the policies.
    shared_ptr<vector<DescribeWhiteListStrategyListResponseBody::Strategies>> strategies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
