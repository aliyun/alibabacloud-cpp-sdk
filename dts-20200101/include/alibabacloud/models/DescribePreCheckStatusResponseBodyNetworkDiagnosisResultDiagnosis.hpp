// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYNETWORKDIAGNOSISRESULTDIAGNOSIS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYNETWORKDIAGNOSISRESULTDIAGNOSIS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis& obj) { 
      DARABONBA_PTR_TO_JSON(CnDocUrl, cnDocUrl_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(InternationalDocUrl, internationalDocUrl_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis& obj) { 
      DARABONBA_PTR_FROM_JSON(CnDocUrl, cnDocUrl_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(InternationalDocUrl, internationalDocUrl_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis() = default ;
    DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis(const DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis &) = default ;
    DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis(DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis &&) = default ;
    DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis() = default ;
    DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis& operator=(const DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis &) = default ;
    DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis& operator=(DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cnDocUrl_ == nullptr
        && return this->code_ == nullptr && return this->endpointType_ == nullptr && return this->internationalDocUrl_ == nullptr && return this->result_ == nullptr; };
    // cnDocUrl Field Functions 
    bool hasCnDocUrl() const { return this->cnDocUrl_ != nullptr;};
    void deleteCnDocUrl() { this->cnDocUrl_ = nullptr;};
    inline string cnDocUrl() const { DARABONBA_PTR_GET_DEFAULT(cnDocUrl_, "") };
    inline DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis& setCnDocUrl(string cnDocUrl) { DARABONBA_PTR_SET_VALUE(cnDocUrl_, cnDocUrl) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // internationalDocUrl Field Functions 
    bool hasInternationalDocUrl() const { return this->internationalDocUrl_ != nullptr;};
    void deleteInternationalDocUrl() { this->internationalDocUrl_ = nullptr;};
    inline string internationalDocUrl() const { DARABONBA_PTR_GET_DEFAULT(internationalDocUrl_, "") };
    inline DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis& setInternationalDocUrl(string internationalDocUrl) { DARABONBA_PTR_SET_VALUE(internationalDocUrl_, internationalDocUrl) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline DescribePreCheckStatusResponseBodyNetworkDiagnosisResultDiagnosis& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // Document address for China region.
    std::shared_ptr<string> cnDocUrl_ = nullptr;
    // Diagnostic code.
    std::shared_ptr<string> code_ = nullptr;
    // Access point, the return values are: - **source**: source end. - **destination**: destination end. - **unknown**: unknown.
    std::shared_ptr<string> endpointType_ = nullptr;
    // Overseas region document address.
    std::shared_ptr<string> internationalDocUrl_ = nullptr;
    // Reserved field for diagnostic results, default is empty.
    std::shared_ptr<string> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
