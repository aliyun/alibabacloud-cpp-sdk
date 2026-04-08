// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPADIAGNOSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPADIAGNOSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetPADiagnosisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPADiagnosisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnoseId, diagnoseId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPADiagnosisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnoseId, diagnoseId_);
    };
    GetPADiagnosisTaskRequest() = default ;
    GetPADiagnosisTaskRequest(const GetPADiagnosisTaskRequest &) = default ;
    GetPADiagnosisTaskRequest(GetPADiagnosisTaskRequest &&) = default ;
    GetPADiagnosisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPADiagnosisTaskRequest() = default ;
    GetPADiagnosisTaskRequest& operator=(const GetPADiagnosisTaskRequest &) = default ;
    GetPADiagnosisTaskRequest& operator=(GetPADiagnosisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diagnoseId_ == nullptr; };
    // diagnoseId Field Functions 
    bool hasDiagnoseId() const { return this->diagnoseId_ != nullptr;};
    void deleteDiagnoseId() { this->diagnoseId_ = nullptr;};
    inline string getDiagnoseId() const { DARABONBA_PTR_GET_DEFAULT(diagnoseId_, "") };
    inline GetPADiagnosisTaskRequest& setDiagnoseId(string diagnoseId) { DARABONBA_PTR_SET_VALUE(diagnoseId_, diagnoseId) };


  protected:
    // This parameter is required.
    shared_ptr<string> diagnoseId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
