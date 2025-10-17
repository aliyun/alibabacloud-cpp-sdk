// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYNETWORKDIAGNOSISRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYNETWORKDIAGNOSISRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckStatusResponseBodyNetworkDiagnosisResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckStatusResponseBodyNetworkDiagnosisResult& obj) { 
      DARABONBA_PTR_TO_JSON(Diagnosis, diagnosis_);
      DARABONBA_PTR_TO_JSON(ModelVersion, modelVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckStatusResponseBodyNetworkDiagnosisResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Diagnosis, diagnosis_);
      DARABONBA_PTR_FROM_JSON(ModelVersion, modelVersion_);
    };
    DescribePreCheckStatusResponseBodyNetworkDiagnosisResult() = default ;
    DescribePreCheckStatusResponseBodyNetworkDiagnosisResult(const DescribePreCheckStatusResponseBodyNetworkDiagnosisResult &) = default ;
    DescribePreCheckStatusResponseBodyNetworkDiagnosisResult(DescribePreCheckStatusResponseBodyNetworkDiagnosisResult &&) = default ;
    DescribePreCheckStatusResponseBodyNetworkDiagnosisResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckStatusResponseBodyNetworkDiagnosisResult() = default ;
    DescribePreCheckStatusResponseBodyNetworkDiagnosisResult& operator=(const DescribePreCheckStatusResponseBodyNetworkDiagnosisResult &) = default ;
    DescribePreCheckStatusResponseBodyNetworkDiagnosisResult& operator=(DescribePreCheckStatusResponseBodyNetworkDiagnosisResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diagnosis_ == nullptr
        && return this->modelVersion_ == nullptr; };
    // diagnosis Field Functions 
    bool hasDiagnosis() const { return this->diagnosis_ != nullptr;};
    void deleteDiagnosis() { this->diagnosis_ = nullptr;};
    inline const vector<Models::DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis> & diagnosis() const { DARABONBA_PTR_GET_CONST(diagnosis_, vector<Models::DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis>) };
    inline vector<Models::DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis> diagnosis() { DARABONBA_PTR_GET(diagnosis_, vector<Models::DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis>) };
    inline DescribePreCheckStatusResponseBodyNetworkDiagnosisResult& setDiagnosis(const vector<Models::DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis> & diagnosis) { DARABONBA_PTR_SET_VALUE(diagnosis_, diagnosis) };
    inline DescribePreCheckStatusResponseBodyNetworkDiagnosisResult& setDiagnosis(vector<Models::DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis> && diagnosis) { DARABONBA_PTR_SET_RVALUE(diagnosis_, diagnosis) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string modelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline DescribePreCheckStatusResponseBodyNetworkDiagnosisResult& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


  protected:
    // Network diagnostic report
    std::shared_ptr<vector<Models::DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis>> diagnosis_ = nullptr;
    // Diagnose model version.
    std::shared_ptr<string> modelVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
