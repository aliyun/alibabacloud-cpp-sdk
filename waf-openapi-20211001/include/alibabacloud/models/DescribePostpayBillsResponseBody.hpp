// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYBILLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYBILLSRESPONSEBODY_HPP_
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
  class DescribePostpayBillsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePostpayBillsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BillDetail, billDetail_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePostpayBillsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BillDetail, billDetail_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePostpayBillsResponseBody() = default ;
    DescribePostpayBillsResponseBody(const DescribePostpayBillsResponseBody &) = default ;
    DescribePostpayBillsResponseBody(DescribePostpayBillsResponseBody &&) = default ;
    DescribePostpayBillsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePostpayBillsResponseBody() = default ;
    DescribePostpayBillsResponseBody& operator=(const DescribePostpayBillsResponseBody &) = default ;
    DescribePostpayBillsResponseBody& operator=(DescribePostpayBillsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BillDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BillDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ChargeData, chargeData_);
        DARABONBA_PTR_TO_JSON(Cu, cu_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FunctionCu, functionCu_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TrafficCu, trafficCu_);
      };
      friend void from_json(const Darabonba::Json& j, BillDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ChargeData, chargeData_);
        DARABONBA_PTR_FROM_JSON(Cu, cu_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FunctionCu, functionCu_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TrafficCu, trafficCu_);
      };
      BillDetail() = default ;
      BillDetail(const BillDetail &) = default ;
      BillDetail(BillDetail &&) = default ;
      BillDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BillDetail() = default ;
      BillDetail& operator=(const BillDetail &) = default ;
      BillDetail& operator=(BillDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chargeData_ == nullptr
        && this->cu_ == nullptr && this->endTime_ == nullptr && this->functionCu_ == nullptr && this->startTime_ == nullptr && this->trafficCu_ == nullptr; };
      // chargeData Field Functions 
      bool hasChargeData() const { return this->chargeData_ != nullptr;};
      void deleteChargeData() { this->chargeData_ = nullptr;};
      inline string getChargeData() const { DARABONBA_PTR_GET_DEFAULT(chargeData_, "") };
      inline BillDetail& setChargeData(string chargeData) { DARABONBA_PTR_SET_VALUE(chargeData_, chargeData) };


      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline string getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, "") };
      inline BillDetail& setCu(string cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline BillDetail& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // functionCu Field Functions 
      bool hasFunctionCu() const { return this->functionCu_ != nullptr;};
      void deleteFunctionCu() { this->functionCu_ = nullptr;};
      inline string getFunctionCu() const { DARABONBA_PTR_GET_DEFAULT(functionCu_, "") };
      inline BillDetail& setFunctionCu(string functionCu) { DARABONBA_PTR_SET_VALUE(functionCu_, functionCu) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline BillDetail& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // trafficCu Field Functions 
      bool hasTrafficCu() const { return this->trafficCu_ != nullptr;};
      void deleteTrafficCu() { this->trafficCu_ = nullptr;};
      inline string getTrafficCu() const { DARABONBA_PTR_GET_DEFAULT(trafficCu_, "") };
      inline BillDetail& setTrafficCu(string trafficCu) { DARABONBA_PTR_SET_VALUE(trafficCu_, trafficCu) };


    protected:
      shared_ptr<string> chargeData_ {};
      shared_ptr<string> cu_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> functionCu_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> trafficCu_ {};
    };

    virtual bool empty() const override { return this->billDetail_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // billDetail Field Functions 
    bool hasBillDetail() const { return this->billDetail_ != nullptr;};
    void deleteBillDetail() { this->billDetail_ = nullptr;};
    inline const vector<DescribePostpayBillsResponseBody::BillDetail> & getBillDetail() const { DARABONBA_PTR_GET_CONST(billDetail_, vector<DescribePostpayBillsResponseBody::BillDetail>) };
    inline vector<DescribePostpayBillsResponseBody::BillDetail> getBillDetail() { DARABONBA_PTR_GET(billDetail_, vector<DescribePostpayBillsResponseBody::BillDetail>) };
    inline DescribePostpayBillsResponseBody& setBillDetail(const vector<DescribePostpayBillsResponseBody::BillDetail> & billDetail) { DARABONBA_PTR_SET_VALUE(billDetail_, billDetail) };
    inline DescribePostpayBillsResponseBody& setBillDetail(vector<DescribePostpayBillsResponseBody::BillDetail> && billDetail) { DARABONBA_PTR_SET_RVALUE(billDetail_, billDetail) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribePostpayBillsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePostpayBillsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePostpayBillsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribePostpayBillsResponseBody::BillDetail>> billDetail_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
