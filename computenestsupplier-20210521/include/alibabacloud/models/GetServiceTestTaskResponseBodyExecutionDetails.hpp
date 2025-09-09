// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETESTTASKRESPONSEBODYEXECUTIONDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETESTTASKRESPONSEBODYEXECUTIONDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceTestTaskResponseBodyExecutionDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTestTaskResponseBodyExecutionDetails& obj) { 
      DARABONBA_PTR_TO_JSON(CaseName, caseName_);
      DARABONBA_PTR_TO_JSON(ExecutionReport, executionReport_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubTaskId, subTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTestTaskResponseBodyExecutionDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(CaseName, caseName_);
      DARABONBA_PTR_FROM_JSON(ExecutionReport, executionReport_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubTaskId, subTaskId_);
    };
    GetServiceTestTaskResponseBodyExecutionDetails() = default ;
    GetServiceTestTaskResponseBodyExecutionDetails(const GetServiceTestTaskResponseBodyExecutionDetails &) = default ;
    GetServiceTestTaskResponseBodyExecutionDetails(GetServiceTestTaskResponseBodyExecutionDetails &&) = default ;
    GetServiceTestTaskResponseBodyExecutionDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTestTaskResponseBodyExecutionDetails() = default ;
    GetServiceTestTaskResponseBodyExecutionDetails& operator=(const GetServiceTestTaskResponseBodyExecutionDetails &) = default ;
    GetServiceTestTaskResponseBodyExecutionDetails& operator=(GetServiceTestTaskResponseBodyExecutionDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->caseName_ != nullptr
        && this->executionReport_ != nullptr && this->status_ != nullptr && this->subTaskId_ != nullptr; };
    // caseName Field Functions 
    bool hasCaseName() const { return this->caseName_ != nullptr;};
    void deleteCaseName() { this->caseName_ = nullptr;};
    inline string caseName() const { DARABONBA_PTR_GET_DEFAULT(caseName_, "") };
    inline GetServiceTestTaskResponseBodyExecutionDetails& setCaseName(string caseName) { DARABONBA_PTR_SET_VALUE(caseName_, caseName) };


    // executionReport Field Functions 
    bool hasExecutionReport() const { return this->executionReport_ != nullptr;};
    void deleteExecutionReport() { this->executionReport_ = nullptr;};
    inline string executionReport() const { DARABONBA_PTR_GET_DEFAULT(executionReport_, "") };
    inline GetServiceTestTaskResponseBodyExecutionDetails& setExecutionReport(string executionReport) { DARABONBA_PTR_SET_VALUE(executionReport_, executionReport) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceTestTaskResponseBodyExecutionDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subTaskId Field Functions 
    bool hasSubTaskId() const { return this->subTaskId_ != nullptr;};
    void deleteSubTaskId() { this->subTaskId_ = nullptr;};
    inline string subTaskId() const { DARABONBA_PTR_GET_DEFAULT(subTaskId_, "") };
    inline GetServiceTestTaskResponseBodyExecutionDetails& setSubTaskId(string subTaskId) { DARABONBA_PTR_SET_VALUE(subTaskId_, subTaskId) };


  protected:
    // The service test case name.
    std::shared_ptr<string> caseName_ = nullptr;
    // The execution report
    std::shared_ptr<string> executionReport_ = nullptr;
    // The sub task status.
    std::shared_ptr<string> status_ = nullptr;
    // The sub task id.
    std::shared_ptr<string> subTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
