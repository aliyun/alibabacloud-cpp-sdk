// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICBILLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICBILLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeElasticBillsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticBillsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bills, bills_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticBillsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bills, bills_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeElasticBillsResponseBody() = default ;
    DescribeElasticBillsResponseBody(const DescribeElasticBillsResponseBody &) = default ;
    DescribeElasticBillsResponseBody(DescribeElasticBillsResponseBody &&) = default ;
    DescribeElasticBillsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticBillsResponseBody() = default ;
    DescribeElasticBillsResponseBody& operator=(const DescribeElasticBillsResponseBody &) = default ;
    DescribeElasticBillsResponseBody& operator=(DescribeElasticBillsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Bills : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Bills& obj) { 
        DARABONBA_PTR_TO_JSON(Cu, cu_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FunctionCu, functionCu_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TrafficCu, trafficCu_);
      };
      friend void from_json(const Darabonba::Json& j, Bills& obj) { 
        DARABONBA_PTR_FROM_JSON(Cu, cu_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FunctionCu, functionCu_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TrafficCu, trafficCu_);
      };
      Bills() = default ;
      Bills(const Bills &) = default ;
      Bills(Bills &&) = default ;
      Bills(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Bills() = default ;
      Bills& operator=(const Bills &) = default ;
      Bills& operator=(Bills &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cu_ == nullptr
        && this->endTime_ == nullptr && this->functionCu_ == nullptr && this->startTime_ == nullptr && this->trafficCu_ == nullptr; };
      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline double getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0.0) };
      inline Bills& setCu(double cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Bills& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // functionCu Field Functions 
      bool hasFunctionCu() const { return this->functionCu_ != nullptr;};
      void deleteFunctionCu() { this->functionCu_ = nullptr;};
      inline double getFunctionCu() const { DARABONBA_PTR_GET_DEFAULT(functionCu_, 0.0) };
      inline Bills& setFunctionCu(double functionCu) { DARABONBA_PTR_SET_VALUE(functionCu_, functionCu) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Bills& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // trafficCu Field Functions 
      bool hasTrafficCu() const { return this->trafficCu_ != nullptr;};
      void deleteTrafficCu() { this->trafficCu_ = nullptr;};
      inline double getTrafficCu() const { DARABONBA_PTR_GET_DEFAULT(trafficCu_, 0.0) };
      inline Bills& setTrafficCu(double trafficCu) { DARABONBA_PTR_SET_VALUE(trafficCu_, trafficCu) };


    protected:
      // The total number of SCUs.
      shared_ptr<double> cu_ {};
      // The end time of the bill. This value is a UNIX timestamp that is in UTC. Unit: milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The number of SCUs consumed by WAF features.
      shared_ptr<double> functionCu_ {};
      // The start time of the bill. This value is a UNIX timestamp that is in UTC. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The number of security capacity units (SCUs) consumed by traffic processing.
      shared_ptr<double> trafficCu_ {};
    };

    virtual bool empty() const override { return this->bills_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // bills Field Functions 
    bool hasBills() const { return this->bills_ != nullptr;};
    void deleteBills() { this->bills_ = nullptr;};
    inline const vector<DescribeElasticBillsResponseBody::Bills> & getBills() const { DARABONBA_PTR_GET_CONST(bills_, vector<DescribeElasticBillsResponseBody::Bills>) };
    inline vector<DescribeElasticBillsResponseBody::Bills> getBills() { DARABONBA_PTR_GET(bills_, vector<DescribeElasticBillsResponseBody::Bills>) };
    inline DescribeElasticBillsResponseBody& setBills(const vector<DescribeElasticBillsResponseBody::Bills> & bills) { DARABONBA_PTR_SET_VALUE(bills_, bills) };
    inline DescribeElasticBillsResponseBody& setBills(vector<DescribeElasticBillsResponseBody::Bills> && bills) { DARABONBA_PTR_SET_RVALUE(bills_, bills) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticBillsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeElasticBillsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of bills for the on-demand WAF instance.
    shared_ptr<vector<DescribeElasticBillsResponseBody::Bills>> bills_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
