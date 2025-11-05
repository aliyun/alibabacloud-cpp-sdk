// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREVERSEDDEDUCTIONHISTORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYREVERSEDDEDUCTIONHISTORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class QueryReversedDeductionHistoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReversedDeductionHistoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(OffsetAmount, offsetAmount_);
      DARABONBA_PTR_TO_JSON(OperationSubmitType, operationSubmitType_);
      DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_TO_JSON(OperationUid, operationUid_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReversedDeductionHistoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(OffsetAmount, offsetAmount_);
      DARABONBA_PTR_FROM_JSON(OperationSubmitType, operationSubmitType_);
      DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_FROM_JSON(OperationUid, operationUid_);
    };
    QueryReversedDeductionHistoryResponseBodyData() = default ;
    QueryReversedDeductionHistoryResponseBodyData(const QueryReversedDeductionHistoryResponseBodyData &) = default ;
    QueryReversedDeductionHistoryResponseBodyData(QueryReversedDeductionHistoryResponseBodyData &&) = default ;
    QueryReversedDeductionHistoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReversedDeductionHistoryResponseBodyData() = default ;
    QueryReversedDeductionHistoryResponseBodyData& operator=(const QueryReversedDeductionHistoryResponseBodyData &) = default ;
    QueryReversedDeductionHistoryResponseBodyData& operator=(QueryReversedDeductionHistoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->offsetAmount_ == nullptr
        && return this->operationSubmitType_ == nullptr && return this->operationTime_ == nullptr && return this->operationUid_ == nullptr; };
    // offsetAmount Field Functions 
    bool hasOffsetAmount() const { return this->offsetAmount_ != nullptr;};
    void deleteOffsetAmount() { this->offsetAmount_ = nullptr;};
    inline string offsetAmount() const { DARABONBA_PTR_GET_DEFAULT(offsetAmount_, "") };
    inline QueryReversedDeductionHistoryResponseBodyData& setOffsetAmount(string offsetAmount) { DARABONBA_PTR_SET_VALUE(offsetAmount_, offsetAmount) };


    // operationSubmitType Field Functions 
    bool hasOperationSubmitType() const { return this->operationSubmitType_ != nullptr;};
    void deleteOperationSubmitType() { this->operationSubmitType_ = nullptr;};
    inline string operationSubmitType() const { DARABONBA_PTR_GET_DEFAULT(operationSubmitType_, "") };
    inline QueryReversedDeductionHistoryResponseBodyData& setOperationSubmitType(string operationSubmitType) { DARABONBA_PTR_SET_VALUE(operationSubmitType_, operationSubmitType) };


    // operationTime Field Functions 
    bool hasOperationTime() const { return this->operationTime_ != nullptr;};
    void deleteOperationTime() { this->operationTime_ = nullptr;};
    inline string operationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
    inline QueryReversedDeductionHistoryResponseBodyData& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


    // operationUid Field Functions 
    bool hasOperationUid() const { return this->operationUid_ != nullptr;};
    void deleteOperationUid() { this->operationUid_ = nullptr;};
    inline string operationUid() const { DARABONBA_PTR_GET_DEFAULT(operationUid_, "") };
    inline QueryReversedDeductionHistoryResponseBodyData& setOperationUid(string operationUid) { DARABONBA_PTR_SET_VALUE(operationUid_, operationUid) };


  protected:
    std::shared_ptr<string> offsetAmount_ = nullptr;
    std::shared_ptr<string> operationSubmitType_ = nullptr;
    std::shared_ptr<string> operationTime_ = nullptr;
    std::shared_ptr<string> operationUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
