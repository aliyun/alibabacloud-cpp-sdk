// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERBILLPREDICTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERBILLPREDICTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodUserBillPredictionResponseBodyBillPredictionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserBillPredictionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserBillPredictionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BillPredictionData, billPredictionData_);
      DARABONBA_PTR_TO_JSON(BillType, billType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserBillPredictionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BillPredictionData, billPredictionData_);
      DARABONBA_PTR_FROM_JSON(BillType, billType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeVodUserBillPredictionResponseBody() = default ;
    DescribeVodUserBillPredictionResponseBody(const DescribeVodUserBillPredictionResponseBody &) = default ;
    DescribeVodUserBillPredictionResponseBody(DescribeVodUserBillPredictionResponseBody &&) = default ;
    DescribeVodUserBillPredictionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserBillPredictionResponseBody() = default ;
    DescribeVodUserBillPredictionResponseBody& operator=(const DescribeVodUserBillPredictionResponseBody &) = default ;
    DescribeVodUserBillPredictionResponseBody& operator=(DescribeVodUserBillPredictionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billPredictionData_ != nullptr
        && this->billType_ != nullptr && this->endTime_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // billPredictionData Field Functions 
    bool hasBillPredictionData() const { return this->billPredictionData_ != nullptr;};
    void deleteBillPredictionData() { this->billPredictionData_ = nullptr;};
    inline const DescribeVodUserBillPredictionResponseBodyBillPredictionData & billPredictionData() const { DARABONBA_PTR_GET_CONST(billPredictionData_, DescribeVodUserBillPredictionResponseBodyBillPredictionData) };
    inline DescribeVodUserBillPredictionResponseBodyBillPredictionData billPredictionData() { DARABONBA_PTR_GET(billPredictionData_, DescribeVodUserBillPredictionResponseBodyBillPredictionData) };
    inline DescribeVodUserBillPredictionResponseBody& setBillPredictionData(const DescribeVodUserBillPredictionResponseBodyBillPredictionData & billPredictionData) { DARABONBA_PTR_SET_VALUE(billPredictionData_, billPredictionData) };
    inline DescribeVodUserBillPredictionResponseBody& setBillPredictionData(DescribeVodUserBillPredictionResponseBodyBillPredictionData && billPredictionData) { DARABONBA_PTR_SET_RVALUE(billPredictionData_, billPredictionData) };


    // billType Field Functions 
    bool hasBillType() const { return this->billType_ != nullptr;};
    void deleteBillType() { this->billType_ = nullptr;};
    inline string billType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
    inline DescribeVodUserBillPredictionResponseBody& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodUserBillPredictionResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodUserBillPredictionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodUserBillPredictionResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<DescribeVodUserBillPredictionResponseBodyBillPredictionData> billPredictionData_ = nullptr;
    std::shared_ptr<string> billType_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
