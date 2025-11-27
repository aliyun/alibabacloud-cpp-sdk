// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPURCHASECONTROLRECORDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPURCHASECONTROLRECORDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetPurchaseControlRecordResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPurchaseControlRecordResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChangedType, changedType_);
      DARABONBA_PTR_TO_JSON(OperationPath, operationPath_);
      DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
    };
    friend void from_json(const Darabonba::Json& j, GetPurchaseControlRecordResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangedType, changedType_);
      DARABONBA_PTR_FROM_JSON(OperationPath, operationPath_);
      DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
    };
    GetPurchaseControlRecordResponseBodyData() = default ;
    GetPurchaseControlRecordResponseBodyData(const GetPurchaseControlRecordResponseBodyData &) = default ;
    GetPurchaseControlRecordResponseBodyData(GetPurchaseControlRecordResponseBodyData &&) = default ;
    GetPurchaseControlRecordResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPurchaseControlRecordResponseBodyData() = default ;
    GetPurchaseControlRecordResponseBodyData& operator=(const GetPurchaseControlRecordResponseBodyData &) = default ;
    GetPurchaseControlRecordResponseBodyData& operator=(GetPurchaseControlRecordResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changedType_ == nullptr
        && return this->operationPath_ == nullptr && return this->operationTime_ == nullptr && return this->operator_ == nullptr; };
    // changedType Field Functions 
    bool hasChangedType() const { return this->changedType_ != nullptr;};
    void deleteChangedType() { this->changedType_ = nullptr;};
    inline string changedType() const { DARABONBA_PTR_GET_DEFAULT(changedType_, "") };
    inline GetPurchaseControlRecordResponseBodyData& setChangedType(string changedType) { DARABONBA_PTR_SET_VALUE(changedType_, changedType) };


    // operationPath Field Functions 
    bool hasOperationPath() const { return this->operationPath_ != nullptr;};
    void deleteOperationPath() { this->operationPath_ = nullptr;};
    inline string operationPath() const { DARABONBA_PTR_GET_DEFAULT(operationPath_, "") };
    inline GetPurchaseControlRecordResponseBodyData& setOperationPath(string operationPath) { DARABONBA_PTR_SET_VALUE(operationPath_, operationPath) };


    // operationTime Field Functions 
    bool hasOperationTime() const { return this->operationTime_ != nullptr;};
    void deleteOperationTime() { this->operationTime_ = nullptr;};
    inline string operationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
    inline GetPurchaseControlRecordResponseBodyData& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetPurchaseControlRecordResponseBodyData& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


  protected:
    std::shared_ptr<string> changedType_ = nullptr;
    std::shared_ptr<string> operationPath_ = nullptr;
    std::shared_ptr<string> operationTime_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
