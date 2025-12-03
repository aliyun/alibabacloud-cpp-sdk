// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVMCOREDIAGNOSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVMCOREDIAGNOSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetVmcoreDiagnosisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVmcoreDiagnosisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVmcoreDiagnosisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetVmcoreDiagnosisTaskRequest() = default ;
    GetVmcoreDiagnosisTaskRequest(const GetVmcoreDiagnosisTaskRequest &) = default ;
    GetVmcoreDiagnosisTaskRequest(GetVmcoreDiagnosisTaskRequest &&) = default ;
    GetVmcoreDiagnosisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVmcoreDiagnosisTaskRequest() = default ;
    GetVmcoreDiagnosisTaskRequest& operator=(const GetVmcoreDiagnosisTaskRequest &) = default ;
    GetVmcoreDiagnosisTaskRequest& operator=(GetVmcoreDiagnosisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetVmcoreDiagnosisTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
