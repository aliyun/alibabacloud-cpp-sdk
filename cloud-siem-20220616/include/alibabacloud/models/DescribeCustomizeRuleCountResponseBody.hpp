// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZERULECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZERULECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeCustomizeRuleCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizeRuleCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizeRuleCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCustomizeRuleCountResponseBody() = default ;
    DescribeCustomizeRuleCountResponseBody(const DescribeCustomizeRuleCountResponseBody &) = default ;
    DescribeCustomizeRuleCountResponseBody(DescribeCustomizeRuleCountResponseBody &&) = default ;
    DescribeCustomizeRuleCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizeRuleCountResponseBody() = default ;
    DescribeCustomizeRuleCountResponseBody& operator=(const DescribeCustomizeRuleCountResponseBody &) = default ;
    DescribeCustomizeRuleCountResponseBody& operator=(DescribeCustomizeRuleCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AggregationRuleNum, aggregationRuleNum_);
        DARABONBA_PTR_TO_JSON(CustomizeRuleNum, customizeRuleNum_);
        DARABONBA_PTR_TO_JSON(ExpertRuleNum, expertRuleNum_);
        DARABONBA_PTR_TO_JSON(GraphComputingRuleNum, graphComputingRuleNum_);
        DARABONBA_PTR_TO_JSON(HighRuleNum, highRuleNum_);
        DARABONBA_PTR_TO_JSON(InUseRuleNum, inUseRuleNum_);
        DARABONBA_PTR_TO_JSON(LowRuleNum, lowRuleNum_);
        DARABONBA_PTR_TO_JSON(MediumRuleNum, mediumRuleNum_);
        DARABONBA_PTR_TO_JSON(PredefinedRuleNum, predefinedRuleNum_);
        DARABONBA_PTR_TO_JSON(SingleAlertRuleNum, singleAlertRuleNum_);
        DARABONBA_PTR_TO_JSON(TotalRuleNum, totalRuleNum_);
        DARABONBA_PTR_TO_JSON(UnEventRuleNum, unEventRuleNum_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AggregationRuleNum, aggregationRuleNum_);
        DARABONBA_PTR_FROM_JSON(CustomizeRuleNum, customizeRuleNum_);
        DARABONBA_PTR_FROM_JSON(ExpertRuleNum, expertRuleNum_);
        DARABONBA_PTR_FROM_JSON(GraphComputingRuleNum, graphComputingRuleNum_);
        DARABONBA_PTR_FROM_JSON(HighRuleNum, highRuleNum_);
        DARABONBA_PTR_FROM_JSON(InUseRuleNum, inUseRuleNum_);
        DARABONBA_PTR_FROM_JSON(LowRuleNum, lowRuleNum_);
        DARABONBA_PTR_FROM_JSON(MediumRuleNum, mediumRuleNum_);
        DARABONBA_PTR_FROM_JSON(PredefinedRuleNum, predefinedRuleNum_);
        DARABONBA_PTR_FROM_JSON(SingleAlertRuleNum, singleAlertRuleNum_);
        DARABONBA_PTR_FROM_JSON(TotalRuleNum, totalRuleNum_);
        DARABONBA_PTR_FROM_JSON(UnEventRuleNum, unEventRuleNum_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aggregationRuleNum_ == nullptr
        && this->customizeRuleNum_ == nullptr && this->expertRuleNum_ == nullptr && this->graphComputingRuleNum_ == nullptr && this->highRuleNum_ == nullptr && this->inUseRuleNum_ == nullptr
        && this->lowRuleNum_ == nullptr && this->mediumRuleNum_ == nullptr && this->predefinedRuleNum_ == nullptr && this->singleAlertRuleNum_ == nullptr && this->totalRuleNum_ == nullptr
        && this->unEventRuleNum_ == nullptr; };
      // aggregationRuleNum Field Functions 
      bool hasAggregationRuleNum() const { return this->aggregationRuleNum_ != nullptr;};
      void deleteAggregationRuleNum() { this->aggregationRuleNum_ = nullptr;};
      inline int32_t getAggregationRuleNum() const { DARABONBA_PTR_GET_DEFAULT(aggregationRuleNum_, 0) };
      inline Data& setAggregationRuleNum(int32_t aggregationRuleNum) { DARABONBA_PTR_SET_VALUE(aggregationRuleNum_, aggregationRuleNum) };


      // customizeRuleNum Field Functions 
      bool hasCustomizeRuleNum() const { return this->customizeRuleNum_ != nullptr;};
      void deleteCustomizeRuleNum() { this->customizeRuleNum_ = nullptr;};
      inline int32_t getCustomizeRuleNum() const { DARABONBA_PTR_GET_DEFAULT(customizeRuleNum_, 0) };
      inline Data& setCustomizeRuleNum(int32_t customizeRuleNum) { DARABONBA_PTR_SET_VALUE(customizeRuleNum_, customizeRuleNum) };


      // expertRuleNum Field Functions 
      bool hasExpertRuleNum() const { return this->expertRuleNum_ != nullptr;};
      void deleteExpertRuleNum() { this->expertRuleNum_ = nullptr;};
      inline int32_t getExpertRuleNum() const { DARABONBA_PTR_GET_DEFAULT(expertRuleNum_, 0) };
      inline Data& setExpertRuleNum(int32_t expertRuleNum) { DARABONBA_PTR_SET_VALUE(expertRuleNum_, expertRuleNum) };


      // graphComputingRuleNum Field Functions 
      bool hasGraphComputingRuleNum() const { return this->graphComputingRuleNum_ != nullptr;};
      void deleteGraphComputingRuleNum() { this->graphComputingRuleNum_ = nullptr;};
      inline int32_t getGraphComputingRuleNum() const { DARABONBA_PTR_GET_DEFAULT(graphComputingRuleNum_, 0) };
      inline Data& setGraphComputingRuleNum(int32_t graphComputingRuleNum) { DARABONBA_PTR_SET_VALUE(graphComputingRuleNum_, graphComputingRuleNum) };


      // highRuleNum Field Functions 
      bool hasHighRuleNum() const { return this->highRuleNum_ != nullptr;};
      void deleteHighRuleNum() { this->highRuleNum_ = nullptr;};
      inline int32_t getHighRuleNum() const { DARABONBA_PTR_GET_DEFAULT(highRuleNum_, 0) };
      inline Data& setHighRuleNum(int32_t highRuleNum) { DARABONBA_PTR_SET_VALUE(highRuleNum_, highRuleNum) };


      // inUseRuleNum Field Functions 
      bool hasInUseRuleNum() const { return this->inUseRuleNum_ != nullptr;};
      void deleteInUseRuleNum() { this->inUseRuleNum_ = nullptr;};
      inline int32_t getInUseRuleNum() const { DARABONBA_PTR_GET_DEFAULT(inUseRuleNum_, 0) };
      inline Data& setInUseRuleNum(int32_t inUseRuleNum) { DARABONBA_PTR_SET_VALUE(inUseRuleNum_, inUseRuleNum) };


      // lowRuleNum Field Functions 
      bool hasLowRuleNum() const { return this->lowRuleNum_ != nullptr;};
      void deleteLowRuleNum() { this->lowRuleNum_ = nullptr;};
      inline int32_t getLowRuleNum() const { DARABONBA_PTR_GET_DEFAULT(lowRuleNum_, 0) };
      inline Data& setLowRuleNum(int32_t lowRuleNum) { DARABONBA_PTR_SET_VALUE(lowRuleNum_, lowRuleNum) };


      // mediumRuleNum Field Functions 
      bool hasMediumRuleNum() const { return this->mediumRuleNum_ != nullptr;};
      void deleteMediumRuleNum() { this->mediumRuleNum_ = nullptr;};
      inline int32_t getMediumRuleNum() const { DARABONBA_PTR_GET_DEFAULT(mediumRuleNum_, 0) };
      inline Data& setMediumRuleNum(int32_t mediumRuleNum) { DARABONBA_PTR_SET_VALUE(mediumRuleNum_, mediumRuleNum) };


      // predefinedRuleNum Field Functions 
      bool hasPredefinedRuleNum() const { return this->predefinedRuleNum_ != nullptr;};
      void deletePredefinedRuleNum() { this->predefinedRuleNum_ = nullptr;};
      inline int32_t getPredefinedRuleNum() const { DARABONBA_PTR_GET_DEFAULT(predefinedRuleNum_, 0) };
      inline Data& setPredefinedRuleNum(int32_t predefinedRuleNum) { DARABONBA_PTR_SET_VALUE(predefinedRuleNum_, predefinedRuleNum) };


      // singleAlertRuleNum Field Functions 
      bool hasSingleAlertRuleNum() const { return this->singleAlertRuleNum_ != nullptr;};
      void deleteSingleAlertRuleNum() { this->singleAlertRuleNum_ = nullptr;};
      inline int32_t getSingleAlertRuleNum() const { DARABONBA_PTR_GET_DEFAULT(singleAlertRuleNum_, 0) };
      inline Data& setSingleAlertRuleNum(int32_t singleAlertRuleNum) { DARABONBA_PTR_SET_VALUE(singleAlertRuleNum_, singleAlertRuleNum) };


      // totalRuleNum Field Functions 
      bool hasTotalRuleNum() const { return this->totalRuleNum_ != nullptr;};
      void deleteTotalRuleNum() { this->totalRuleNum_ = nullptr;};
      inline int32_t getTotalRuleNum() const { DARABONBA_PTR_GET_DEFAULT(totalRuleNum_, 0) };
      inline Data& setTotalRuleNum(int32_t totalRuleNum) { DARABONBA_PTR_SET_VALUE(totalRuleNum_, totalRuleNum) };


      // unEventRuleNum Field Functions 
      bool hasUnEventRuleNum() const { return this->unEventRuleNum_ != nullptr;};
      void deleteUnEventRuleNum() { this->unEventRuleNum_ = nullptr;};
      inline int32_t getUnEventRuleNum() const { DARABONBA_PTR_GET_DEFAULT(unEventRuleNum_, 0) };
      inline Data& setUnEventRuleNum(int32_t unEventRuleNum) { DARABONBA_PTR_SET_VALUE(unEventRuleNum_, unEventRuleNum) };


    protected:
      // 同类聚合规则数。
      shared_ptr<int32_t> aggregationRuleNum_ {};
      // 自定义规则数。
      shared_ptr<int32_t> customizeRuleNum_ {};
      // 专家规则数。
      shared_ptr<int32_t> expertRuleNum_ {};
      // 图计算规则数。
      shared_ptr<int32_t> graphComputingRuleNum_ {};
      // The number of rules that are used to identify high-risk threats.
      shared_ptr<int32_t> highRuleNum_ {};
      // The total number of rules.
      shared_ptr<int32_t> inUseRuleNum_ {};
      // The number of rules that are used to identify low-risk threats.
      shared_ptr<int32_t> lowRuleNum_ {};
      // The number of rules that are used to identify medium-risk threats.
      shared_ptr<int32_t> mediumRuleNum_ {};
      // 预定义规则数。
      shared_ptr<int32_t> predefinedRuleNum_ {};
      // 告警透传规则数。
      shared_ptr<int32_t> singleAlertRuleNum_ {};
      // 总规则数。
      shared_ptr<int32_t> totalRuleNum_ {};
      // 不产生事件规则数。
      shared_ptr<int32_t> unEventRuleNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeCustomizeRuleCountResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCustomizeRuleCountResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCustomizeRuleCountResponseBody::Data) };
    inline DescribeCustomizeRuleCountResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCustomizeRuleCountResponseBody::Data) };
    inline DescribeCustomizeRuleCountResponseBody& setData(const DescribeCustomizeRuleCountResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCustomizeRuleCountResponseBody& setData(DescribeCustomizeRuleCountResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCustomizeRuleCountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomizeRuleCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCustomizeRuleCountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<DescribeCustomizeRuleCountResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
