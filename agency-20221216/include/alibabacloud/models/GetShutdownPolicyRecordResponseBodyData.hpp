// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSHUTDOWNPOLICYRECORDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSHUTDOWNPOLICYRECORDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetShutdownPolicyRecordResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetShutdownPolicyRecordResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPolicy, currentPolicy_);
      DARABONBA_PTR_TO_JSON(OperationPath, operationPath_);
      DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(PreviousPolicy, previousPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, GetShutdownPolicyRecordResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPolicy, currentPolicy_);
      DARABONBA_PTR_FROM_JSON(OperationPath, operationPath_);
      DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(PreviousPolicy, previousPolicy_);
    };
    GetShutdownPolicyRecordResponseBodyData() = default ;
    GetShutdownPolicyRecordResponseBodyData(const GetShutdownPolicyRecordResponseBodyData &) = default ;
    GetShutdownPolicyRecordResponseBodyData(GetShutdownPolicyRecordResponseBodyData &&) = default ;
    GetShutdownPolicyRecordResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetShutdownPolicyRecordResponseBodyData() = default ;
    GetShutdownPolicyRecordResponseBodyData& operator=(const GetShutdownPolicyRecordResponseBodyData &) = default ;
    GetShutdownPolicyRecordResponseBodyData& operator=(GetShutdownPolicyRecordResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPolicy_ == nullptr
        && return this->operationPath_ == nullptr && return this->operationTime_ == nullptr && return this->operator_ == nullptr && return this->previousPolicy_ == nullptr; };
    // currentPolicy Field Functions 
    bool hasCurrentPolicy() const { return this->currentPolicy_ != nullptr;};
    void deleteCurrentPolicy() { this->currentPolicy_ = nullptr;};
    inline string currentPolicy() const { DARABONBA_PTR_GET_DEFAULT(currentPolicy_, "") };
    inline GetShutdownPolicyRecordResponseBodyData& setCurrentPolicy(string currentPolicy) { DARABONBA_PTR_SET_VALUE(currentPolicy_, currentPolicy) };


    // operationPath Field Functions 
    bool hasOperationPath() const { return this->operationPath_ != nullptr;};
    void deleteOperationPath() { this->operationPath_ = nullptr;};
    inline string operationPath() const { DARABONBA_PTR_GET_DEFAULT(operationPath_, "") };
    inline GetShutdownPolicyRecordResponseBodyData& setOperationPath(string operationPath) { DARABONBA_PTR_SET_VALUE(operationPath_, operationPath) };


    // operationTime Field Functions 
    bool hasOperationTime() const { return this->operationTime_ != nullptr;};
    void deleteOperationTime() { this->operationTime_ = nullptr;};
    inline string operationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
    inline GetShutdownPolicyRecordResponseBodyData& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetShutdownPolicyRecordResponseBodyData& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // previousPolicy Field Functions 
    bool hasPreviousPolicy() const { return this->previousPolicy_ != nullptr;};
    void deletePreviousPolicy() { this->previousPolicy_ = nullptr;};
    inline string previousPolicy() const { DARABONBA_PTR_GET_DEFAULT(previousPolicy_, "") };
    inline GetShutdownPolicyRecordResponseBodyData& setPreviousPolicy(string previousPolicy) { DARABONBA_PTR_SET_VALUE(previousPolicy_, previousPolicy) };


  protected:
    std::shared_ptr<string> currentPolicy_ = nullptr;
    std::shared_ptr<string> operationPath_ = nullptr;
    std::shared_ptr<string> operationTime_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> previousPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
