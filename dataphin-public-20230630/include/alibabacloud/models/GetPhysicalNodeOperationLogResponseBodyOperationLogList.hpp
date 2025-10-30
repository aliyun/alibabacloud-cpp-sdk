// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALNODEOPERATIONLOGRESPONSEBODYOPERATIONLOGLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALNODEOPERATIONLOGRESPONSEBODYOPERATIONLOGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPhysicalNodeOperationLogResponseBodyOperationLogList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalNodeOperationLogResponseBodyOperationLogList& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalNodeOperationLogResponseBodyOperationLogList& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
    };
    GetPhysicalNodeOperationLogResponseBodyOperationLogList() = default ;
    GetPhysicalNodeOperationLogResponseBodyOperationLogList(const GetPhysicalNodeOperationLogResponseBodyOperationLogList &) = default ;
    GetPhysicalNodeOperationLogResponseBodyOperationLogList(GetPhysicalNodeOperationLogResponseBodyOperationLogList &&) = default ;
    GetPhysicalNodeOperationLogResponseBodyOperationLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalNodeOperationLogResponseBodyOperationLogList() = default ;
    GetPhysicalNodeOperationLogResponseBodyOperationLogList& operator=(const GetPhysicalNodeOperationLogResponseBodyOperationLogList &) = default ;
    GetPhysicalNodeOperationLogResponseBodyOperationLogList& operator=(GetPhysicalNodeOperationLogResponseBodyOperationLogList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->context_ == nullptr
        && return this->operationTime_ == nullptr && return this->operationType_ == nullptr && return this->operator_ == nullptr && return this->operatorName_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline GetPhysicalNodeOperationLogResponseBodyOperationLogList& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // operationTime Field Functions 
    bool hasOperationTime() const { return this->operationTime_ != nullptr;};
    void deleteOperationTime() { this->operationTime_ = nullptr;};
    inline string operationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
    inline GetPhysicalNodeOperationLogResponseBodyOperationLogList& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline GetPhysicalNodeOperationLogResponseBodyOperationLogList& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetPhysicalNodeOperationLogResponseBodyOperationLogList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string operatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline GetPhysicalNodeOperationLogResponseBodyOperationLogList& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


  protected:
    std::shared_ptr<string> context_ = nullptr;
    std::shared_ptr<string> operationTime_ = nullptr;
    std::shared_ptr<string> operationType_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> operatorName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
