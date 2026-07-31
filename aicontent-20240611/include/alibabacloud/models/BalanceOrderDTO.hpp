// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BALANCEORDERDTO_HPP_
#define ALIBABACLOUD_MODELS_BALANCEORDERDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class BalanceOrderDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BalanceOrderDTO& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(balanceAfter, balanceAfter_);
      DARABONBA_PTR_TO_JSON(balanceBefore, balanceBefore_);
      DARABONBA_PTR_TO_JSON(balanceType, balanceType_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(operatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
      DARABONBA_PTR_TO_JSON(orderType, orderType_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(totalAfter, totalAfter_);
      DARABONBA_PTR_TO_JSON(totalBefore, totalBefore_);
    };
    friend void from_json(const Darabonba::Json& j, BalanceOrderDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(balanceAfter, balanceAfter_);
      DARABONBA_PTR_FROM_JSON(balanceBefore, balanceBefore_);
      DARABONBA_PTR_FROM_JSON(balanceType, balanceType_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(operatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
      DARABONBA_PTR_FROM_JSON(orderType, orderType_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(totalAfter, totalAfter_);
      DARABONBA_PTR_FROM_JSON(totalBefore, totalBefore_);
    };
    BalanceOrderDTO() = default ;
    BalanceOrderDTO(const BalanceOrderDTO &) = default ;
    BalanceOrderDTO(BalanceOrderDTO &&) = default ;
    BalanceOrderDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BalanceOrderDTO() = default ;
    BalanceOrderDTO& operator=(const BalanceOrderDTO &) = default ;
    BalanceOrderDTO& operator=(BalanceOrderDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->balanceAfter_ == nullptr && this->balanceBefore_ == nullptr && this->balanceType_ == nullptr && this->createTime_ == nullptr && this->direction_ == nullptr
        && this->modelCode_ == nullptr && this->operatorId_ == nullptr && this->orderId_ == nullptr && this->orderType_ == nullptr && this->remark_ == nullptr
        && this->source_ == nullptr && this->totalAfter_ == nullptr && this->totalBefore_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline double getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
    inline BalanceOrderDTO& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // balanceAfter Field Functions 
    bool hasBalanceAfter() const { return this->balanceAfter_ != nullptr;};
    void deleteBalanceAfter() { this->balanceAfter_ = nullptr;};
    inline double getBalanceAfter() const { DARABONBA_PTR_GET_DEFAULT(balanceAfter_, 0.0) };
    inline BalanceOrderDTO& setBalanceAfter(double balanceAfter) { DARABONBA_PTR_SET_VALUE(balanceAfter_, balanceAfter) };


    // balanceBefore Field Functions 
    bool hasBalanceBefore() const { return this->balanceBefore_ != nullptr;};
    void deleteBalanceBefore() { this->balanceBefore_ = nullptr;};
    inline double getBalanceBefore() const { DARABONBA_PTR_GET_DEFAULT(balanceBefore_, 0.0) };
    inline BalanceOrderDTO& setBalanceBefore(double balanceBefore) { DARABONBA_PTR_SET_VALUE(balanceBefore_, balanceBefore) };


    // balanceType Field Functions 
    bool hasBalanceType() const { return this->balanceType_ != nullptr;};
    void deleteBalanceType() { this->balanceType_ = nullptr;};
    inline string getBalanceType() const { DARABONBA_PTR_GET_DEFAULT(balanceType_, "") };
    inline BalanceOrderDTO& setBalanceType(string balanceType) { DARABONBA_PTR_SET_VALUE(balanceType_, balanceType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline BalanceOrderDTO& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline BalanceOrderDTO& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline BalanceOrderDTO& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline BalanceOrderDTO& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline BalanceOrderDTO& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline BalanceOrderDTO& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline BalanceOrderDTO& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline BalanceOrderDTO& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // totalAfter Field Functions 
    bool hasTotalAfter() const { return this->totalAfter_ != nullptr;};
    void deleteTotalAfter() { this->totalAfter_ = nullptr;};
    inline double getTotalAfter() const { DARABONBA_PTR_GET_DEFAULT(totalAfter_, 0.0) };
    inline BalanceOrderDTO& setTotalAfter(double totalAfter) { DARABONBA_PTR_SET_VALUE(totalAfter_, totalAfter) };


    // totalBefore Field Functions 
    bool hasTotalBefore() const { return this->totalBefore_ != nullptr;};
    void deleteTotalBefore() { this->totalBefore_ = nullptr;};
    inline double getTotalBefore() const { DARABONBA_PTR_GET_DEFAULT(totalBefore_, 0.0) };
    inline BalanceOrderDTO& setTotalBefore(double totalBefore) { DARABONBA_PTR_SET_VALUE(totalBefore_, totalBefore) };


  protected:
    shared_ptr<double> amount_ {};
    shared_ptr<double> balanceAfter_ {};
    shared_ptr<double> balanceBefore_ {};
    shared_ptr<string> balanceType_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> direction_ {};
    shared_ptr<string> modelCode_ {};
    shared_ptr<string> operatorId_ {};
    shared_ptr<string> orderId_ {};
    shared_ptr<string> orderType_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> source_ {};
    shared_ptr<double> totalAfter_ {};
    shared_ptr<double> totalBefore_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
