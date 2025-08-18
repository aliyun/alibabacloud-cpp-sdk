// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONSUBMITSTATUSRESPONSEBODYOPERATIONSUBMITJOB_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONSUBMITSTATUSRESPONSEBODYOPERATIONSUBMITJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetOperationSubmitStatusResponseBodyOperationSubmitJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationSubmitStatusResponseBodyOperationSubmitJob& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalBizId, externalBizId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(OperationStatus, operationStatus_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationSubmitStatusResponseBodyOperationSubmitJob& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalBizId, externalBizId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(OperationStatus, operationStatus_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
    };
    GetOperationSubmitStatusResponseBodyOperationSubmitJob() = default ;
    GetOperationSubmitStatusResponseBodyOperationSubmitJob(const GetOperationSubmitStatusResponseBodyOperationSubmitJob &) = default ;
    GetOperationSubmitStatusResponseBodyOperationSubmitJob(GetOperationSubmitStatusResponseBodyOperationSubmitJob &&) = default ;
    GetOperationSubmitStatusResponseBodyOperationSubmitJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationSubmitStatusResponseBodyOperationSubmitJob() = default ;
    GetOperationSubmitStatusResponseBodyOperationSubmitJob& operator=(const GetOperationSubmitStatusResponseBodyOperationSubmitJob &) = default ;
    GetOperationSubmitStatusResponseBodyOperationSubmitJob& operator=(GetOperationSubmitStatusResponseBodyOperationSubmitJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->externalBizId_ != nullptr
        && this->jobId_ != nullptr && this->operation_ != nullptr && this->operationStatus_ != nullptr && this->operator_ != nullptr && this->progress_ != nullptr; };
    // externalBizId Field Functions 
    bool hasExternalBizId() const { return this->externalBizId_ != nullptr;};
    void deleteExternalBizId() { this->externalBizId_ = nullptr;};
    inline string externalBizId() const { DARABONBA_PTR_GET_DEFAULT(externalBizId_, "") };
    inline GetOperationSubmitStatusResponseBodyOperationSubmitJob& setExternalBizId(string externalBizId) { DARABONBA_PTR_SET_VALUE(externalBizId_, externalBizId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetOperationSubmitStatusResponseBodyOperationSubmitJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline GetOperationSubmitStatusResponseBodyOperationSubmitJob& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // operationStatus Field Functions 
    bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
    void deleteOperationStatus() { this->operationStatus_ = nullptr;};
    inline string operationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
    inline GetOperationSubmitStatusResponseBodyOperationSubmitJob& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetOperationSubmitStatusResponseBodyOperationSubmitJob& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline GetOperationSubmitStatusResponseBodyOperationSubmitJob& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


  protected:
    std::shared_ptr<string> externalBizId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<string> operationStatus_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> progress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
