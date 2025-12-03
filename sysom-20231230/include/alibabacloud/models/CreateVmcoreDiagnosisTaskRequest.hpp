// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVMCOREDIAGNOSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVMCOREDIAGNOSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class CreateVmcoreDiagnosisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVmcoreDiagnosisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(debuginfoCommonUrl, debuginfoCommonUrl_);
      DARABONBA_PTR_TO_JSON(debuginfoUrl, debuginfoUrl_);
      DARABONBA_PTR_TO_JSON(dmesgUrl, dmesgUrl_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
      DARABONBA_PTR_TO_JSON(vmcoreUrl, vmcoreUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVmcoreDiagnosisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(debuginfoCommonUrl, debuginfoCommonUrl_);
      DARABONBA_PTR_FROM_JSON(debuginfoUrl, debuginfoUrl_);
      DARABONBA_PTR_FROM_JSON(dmesgUrl, dmesgUrl_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
      DARABONBA_PTR_FROM_JSON(vmcoreUrl, vmcoreUrl_);
    };
    CreateVmcoreDiagnosisTaskRequest() = default ;
    CreateVmcoreDiagnosisTaskRequest(const CreateVmcoreDiagnosisTaskRequest &) = default ;
    CreateVmcoreDiagnosisTaskRequest(CreateVmcoreDiagnosisTaskRequest &&) = default ;
    CreateVmcoreDiagnosisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVmcoreDiagnosisTaskRequest() = default ;
    CreateVmcoreDiagnosisTaskRequest& operator=(const CreateVmcoreDiagnosisTaskRequest &) = default ;
    CreateVmcoreDiagnosisTaskRequest& operator=(CreateVmcoreDiagnosisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->debuginfoCommonUrl_ == nullptr
        && return this->debuginfoUrl_ == nullptr && return this->dmesgUrl_ == nullptr && return this->taskType_ == nullptr && return this->vmcoreUrl_ == nullptr; };
    // debuginfoCommonUrl Field Functions 
    bool hasDebuginfoCommonUrl() const { return this->debuginfoCommonUrl_ != nullptr;};
    void deleteDebuginfoCommonUrl() { this->debuginfoCommonUrl_ = nullptr;};
    inline string debuginfoCommonUrl() const { DARABONBA_PTR_GET_DEFAULT(debuginfoCommonUrl_, "") };
    inline CreateVmcoreDiagnosisTaskRequest& setDebuginfoCommonUrl(string debuginfoCommonUrl) { DARABONBA_PTR_SET_VALUE(debuginfoCommonUrl_, debuginfoCommonUrl) };


    // debuginfoUrl Field Functions 
    bool hasDebuginfoUrl() const { return this->debuginfoUrl_ != nullptr;};
    void deleteDebuginfoUrl() { this->debuginfoUrl_ = nullptr;};
    inline string debuginfoUrl() const { DARABONBA_PTR_GET_DEFAULT(debuginfoUrl_, "") };
    inline CreateVmcoreDiagnosisTaskRequest& setDebuginfoUrl(string debuginfoUrl) { DARABONBA_PTR_SET_VALUE(debuginfoUrl_, debuginfoUrl) };


    // dmesgUrl Field Functions 
    bool hasDmesgUrl() const { return this->dmesgUrl_ != nullptr;};
    void deleteDmesgUrl() { this->dmesgUrl_ = nullptr;};
    inline string dmesgUrl() const { DARABONBA_PTR_GET_DEFAULT(dmesgUrl_, "") };
    inline CreateVmcoreDiagnosisTaskRequest& setDmesgUrl(string dmesgUrl) { DARABONBA_PTR_SET_VALUE(dmesgUrl_, dmesgUrl) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateVmcoreDiagnosisTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // vmcoreUrl Field Functions 
    bool hasVmcoreUrl() const { return this->vmcoreUrl_ != nullptr;};
    void deleteVmcoreUrl() { this->vmcoreUrl_ = nullptr;};
    inline string vmcoreUrl() const { DARABONBA_PTR_GET_DEFAULT(vmcoreUrl_, "") };
    inline CreateVmcoreDiagnosisTaskRequest& setVmcoreUrl(string vmcoreUrl) { DARABONBA_PTR_SET_VALUE(vmcoreUrl_, vmcoreUrl) };


  protected:
    std::shared_ptr<string> debuginfoCommonUrl_ = nullptr;
    std::shared_ptr<string> debuginfoUrl_ = nullptr;
    std::shared_ptr<string> dmesgUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> vmcoreUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
