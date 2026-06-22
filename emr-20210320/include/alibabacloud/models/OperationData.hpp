// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATIONDATA_HPP_
#define ALIBABACLOUD_MODELS_OPERATIONDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class OperationData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperationData& obj) { 
      DARABONBA_PTR_TO_JSON(actualDeliveredAmounts, actualDeliveredAmounts_);
      DARABONBA_PTR_TO_JSON(failedRefundInstanceIds, failedRefundInstanceIds_);
      DARABONBA_PTR_TO_JSON(toBeDeliveredAmounts, toBeDeliveredAmounts_);
    };
    friend void from_json(const Darabonba::Json& j, OperationData& obj) { 
      DARABONBA_PTR_FROM_JSON(actualDeliveredAmounts, actualDeliveredAmounts_);
      DARABONBA_PTR_FROM_JSON(failedRefundInstanceIds, failedRefundInstanceIds_);
      DARABONBA_PTR_FROM_JSON(toBeDeliveredAmounts, toBeDeliveredAmounts_);
    };
    OperationData() = default ;
    OperationData(const OperationData &) = default ;
    OperationData(OperationData &&) = default ;
    OperationData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperationData() = default ;
    OperationData& operator=(const OperationData &) = default ;
    OperationData& operator=(OperationData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualDeliveredAmounts_ == nullptr
        && this->failedRefundInstanceIds_ == nullptr && this->toBeDeliveredAmounts_ == nullptr; };
    // actualDeliveredAmounts Field Functions 
    bool hasActualDeliveredAmounts() const { return this->actualDeliveredAmounts_ != nullptr;};
    void deleteActualDeliveredAmounts() { this->actualDeliveredAmounts_ = nullptr;};
    inline int32_t getActualDeliveredAmounts() const { DARABONBA_PTR_GET_DEFAULT(actualDeliveredAmounts_, 0) };
    inline OperationData& setActualDeliveredAmounts(int32_t actualDeliveredAmounts) { DARABONBA_PTR_SET_VALUE(actualDeliveredAmounts_, actualDeliveredAmounts) };


    // failedRefundInstanceIds Field Functions 
    bool hasFailedRefundInstanceIds() const { return this->failedRefundInstanceIds_ != nullptr;};
    void deleteFailedRefundInstanceIds() { this->failedRefundInstanceIds_ = nullptr;};
    inline const vector<string> & getFailedRefundInstanceIds() const { DARABONBA_PTR_GET_CONST(failedRefundInstanceIds_, vector<string>) };
    inline vector<string> getFailedRefundInstanceIds() { DARABONBA_PTR_GET(failedRefundInstanceIds_, vector<string>) };
    inline OperationData& setFailedRefundInstanceIds(const vector<string> & failedRefundInstanceIds) { DARABONBA_PTR_SET_VALUE(failedRefundInstanceIds_, failedRefundInstanceIds) };
    inline OperationData& setFailedRefundInstanceIds(vector<string> && failedRefundInstanceIds) { DARABONBA_PTR_SET_RVALUE(failedRefundInstanceIds_, failedRefundInstanceIds) };


    // toBeDeliveredAmounts Field Functions 
    bool hasToBeDeliveredAmounts() const { return this->toBeDeliveredAmounts_ != nullptr;};
    void deleteToBeDeliveredAmounts() { this->toBeDeliveredAmounts_ = nullptr;};
    inline int32_t getToBeDeliveredAmounts() const { DARABONBA_PTR_GET_DEFAULT(toBeDeliveredAmounts_, 0) };
    inline OperationData& setToBeDeliveredAmounts(int32_t toBeDeliveredAmounts) { DARABONBA_PTR_SET_VALUE(toBeDeliveredAmounts_, toBeDeliveredAmounts) };


  protected:
    // The number of units actually delivered.
    shared_ptr<int32_t> actualDeliveredAmounts_ {};
    // The IDs of instances that could not be refunded.
    shared_ptr<vector<string>> failedRefundInstanceIds_ {};
    // The number of units requested.
    shared_ptr<int32_t> toBeDeliveredAmounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
