// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONGROUPBILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONGROUPBILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class DescribeApplicationGroupBillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationGroupBillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationGroupConsume, applicationGroupConsume_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationGroupBillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationGroupConsume, applicationGroupConsume_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApplicationGroupBillResponseBody() = default ;
    DescribeApplicationGroupBillResponseBody(const DescribeApplicationGroupBillResponseBody &) = default ;
    DescribeApplicationGroupBillResponseBody(DescribeApplicationGroupBillResponseBody &&) = default ;
    DescribeApplicationGroupBillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationGroupBillResponseBody() = default ;
    DescribeApplicationGroupBillResponseBody& operator=(const DescribeApplicationGroupBillResponseBody &) = default ;
    DescribeApplicationGroupBillResponseBody& operator=(DescribeApplicationGroupBillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationGroupConsume : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationGroupConsume& obj) { 
        DARABONBA_PTR_TO_JSON(Amount, amount_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Optimization, optimization_);
        DARABONBA_PTR_TO_JSON(PeakType, peakType_);
        DARABONBA_PTR_TO_JSON(Performance, performance_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationGroupConsume& obj) { 
        DARABONBA_PTR_FROM_JSON(Amount, amount_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Optimization, optimization_);
        DARABONBA_PTR_FROM_JSON(PeakType, peakType_);
        DARABONBA_PTR_FROM_JSON(Performance, performance_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ApplicationGroupConsume() = default ;
      ApplicationGroupConsume(const ApplicationGroupConsume &) = default ;
      ApplicationGroupConsume(ApplicationGroupConsume &&) = default ;
      ApplicationGroupConsume(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationGroupConsume() = default ;
      ApplicationGroupConsume& operator=(const ApplicationGroupConsume &) = default ;
      ApplicationGroupConsume& operator=(ApplicationGroupConsume &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->amount_ == nullptr
        && this->creationTime_ == nullptr && this->currency_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr
        && this->optimization_ == nullptr && this->peakType_ == nullptr && this->performance_ == nullptr && this->status_ == nullptr; };
      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline float getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
      inline ApplicationGroupConsume& setAmount(float amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline ApplicationGroupConsume& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline ApplicationGroupConsume& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ApplicationGroupConsume& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline ApplicationGroupConsume& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline ApplicationGroupConsume& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // optimization Field Functions 
      bool hasOptimization() const { return this->optimization_ != nullptr;};
      void deleteOptimization() { this->optimization_ = nullptr;};
      inline string getOptimization() const { DARABONBA_PTR_GET_DEFAULT(optimization_, "") };
      inline ApplicationGroupConsume& setOptimization(string optimization) { DARABONBA_PTR_SET_VALUE(optimization_, optimization) };


      // peakType Field Functions 
      bool hasPeakType() const { return this->peakType_ != nullptr;};
      void deletePeakType() { this->peakType_ = nullptr;};
      inline string getPeakType() const { DARABONBA_PTR_GET_DEFAULT(peakType_, "") };
      inline ApplicationGroupConsume& setPeakType(string peakType) { DARABONBA_PTR_SET_VALUE(peakType_, peakType) };


      // performance Field Functions 
      bool hasPerformance() const { return this->performance_ != nullptr;};
      void deletePerformance() { this->performance_ = nullptr;};
      inline string getPerformance() const { DARABONBA_PTR_GET_DEFAULT(performance_, "") };
      inline ApplicationGroupConsume& setPerformance(string performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ApplicationGroupConsume& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The amount consumed by the instance.
      shared_ptr<float> amount_ {};
      // The time when the instance was created.
      shared_ptr<string> creationTime_ {};
      // The currency unit.
      shared_ptr<string> currency_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The instance type.
      shared_ptr<string> instanceType_ {};
      // Optimization suggestions.
      shared_ptr<string> optimization_ {};
      // The peak type.
      shared_ptr<string> peakType_ {};
      // The performance of the data synchronization instance.
      shared_ptr<string> performance_ {};
      // The status of instance.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->applicationGroupConsume_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // applicationGroupConsume Field Functions 
    bool hasApplicationGroupConsume() const { return this->applicationGroupConsume_ != nullptr;};
    void deleteApplicationGroupConsume() { this->applicationGroupConsume_ = nullptr;};
    inline const vector<DescribeApplicationGroupBillResponseBody::ApplicationGroupConsume> & getApplicationGroupConsume() const { DARABONBA_PTR_GET_CONST(applicationGroupConsume_, vector<DescribeApplicationGroupBillResponseBody::ApplicationGroupConsume>) };
    inline vector<DescribeApplicationGroupBillResponseBody::ApplicationGroupConsume> getApplicationGroupConsume() { DARABONBA_PTR_GET(applicationGroupConsume_, vector<DescribeApplicationGroupBillResponseBody::ApplicationGroupConsume>) };
    inline DescribeApplicationGroupBillResponseBody& setApplicationGroupConsume(const vector<DescribeApplicationGroupBillResponseBody::ApplicationGroupConsume> & applicationGroupConsume) { DARABONBA_PTR_SET_VALUE(applicationGroupConsume_, applicationGroupConsume) };
    inline DescribeApplicationGroupBillResponseBody& setApplicationGroupConsume(vector<DescribeApplicationGroupBillResponseBody::ApplicationGroupConsume> && applicationGroupConsume) { DARABONBA_PTR_SET_RVALUE(applicationGroupConsume_, applicationGroupConsume) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeApplicationGroupBillResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeApplicationGroupBillResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationGroupBillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The consume of application group.
    shared_ptr<vector<DescribeApplicationGroupBillResponseBody::ApplicationGroupConsume>> applicationGroupConsume_ {};
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
