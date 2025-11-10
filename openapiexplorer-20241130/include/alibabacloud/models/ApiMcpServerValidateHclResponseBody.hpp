// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIMCPSERVERVALIDATEHCLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APIMCPSERVERVALIDATEHCLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class ApiMcpServerValidateHclResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiMcpServerValidateHclResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(diagnosticReport, diagnosticReport_);
      DARABONBA_PTR_TO_JSON(errors, errors_);
      DARABONBA_PTR_TO_JSON(hash, hash_);
      DARABONBA_PTR_TO_JSON(isValid, isValid_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(warnings, warnings_);
    };
    friend void from_json(const Darabonba::Json& j, ApiMcpServerValidateHclResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(diagnosticReport, diagnosticReport_);
      DARABONBA_PTR_FROM_JSON(errors, errors_);
      DARABONBA_PTR_FROM_JSON(hash, hash_);
      DARABONBA_PTR_FROM_JSON(isValid, isValid_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(warnings, warnings_);
    };
    ApiMcpServerValidateHclResponseBody() = default ;
    ApiMcpServerValidateHclResponseBody(const ApiMcpServerValidateHclResponseBody &) = default ;
    ApiMcpServerValidateHclResponseBody(ApiMcpServerValidateHclResponseBody &&) = default ;
    ApiMcpServerValidateHclResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiMcpServerValidateHclResponseBody() = default ;
    ApiMcpServerValidateHclResponseBody& operator=(const ApiMcpServerValidateHclResponseBody &) = default ;
    ApiMcpServerValidateHclResponseBody& operator=(ApiMcpServerValidateHclResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diagnosticReport_ == nullptr
        && return this->errors_ == nullptr && return this->hash_ == nullptr && return this->isValid_ == nullptr && return this->parameters_ == nullptr && return this->requestId_ == nullptr
        && return this->warnings_ == nullptr; };
    // diagnosticReport Field Functions 
    bool hasDiagnosticReport() const { return this->diagnosticReport_ != nullptr;};
    void deleteDiagnosticReport() { this->diagnosticReport_ = nullptr;};
    inline     const Darabonba::Json & diagnosticReport() const { DARABONBA_GET(diagnosticReport_) };
    Darabonba::Json & diagnosticReport() { DARABONBA_GET(diagnosticReport_) };
    inline ApiMcpServerValidateHclResponseBody& setDiagnosticReport(const Darabonba::Json & diagnosticReport) { DARABONBA_SET_VALUE(diagnosticReport_, diagnosticReport) };
    inline ApiMcpServerValidateHclResponseBody& setDiagnosticReport(Darabonba::Json & diagnosticReport) { DARABONBA_SET_RVALUE(diagnosticReport_, diagnosticReport) };


    // errors Field Functions 
    bool hasErrors() const { return this->errors_ != nullptr;};
    void deleteErrors() { this->errors_ = nullptr;};
    inline const vector<string> & errors() const { DARABONBA_PTR_GET_CONST(errors_, vector<string>) };
    inline vector<string> errors() { DARABONBA_PTR_GET(errors_, vector<string>) };
    inline ApiMcpServerValidateHclResponseBody& setErrors(const vector<string> & errors) { DARABONBA_PTR_SET_VALUE(errors_, errors) };
    inline ApiMcpServerValidateHclResponseBody& setErrors(vector<string> && errors) { DARABONBA_PTR_SET_RVALUE(errors_, errors) };


    // hash Field Functions 
    bool hasHash() const { return this->hash_ != nullptr;};
    void deleteHash() { this->hash_ = nullptr;};
    inline string hash() const { DARABONBA_PTR_GET_DEFAULT(hash_, "") };
    inline ApiMcpServerValidateHclResponseBody& setHash(string hash) { DARABONBA_PTR_SET_VALUE(hash_, hash) };


    // isValid Field Functions 
    bool hasIsValid() const { return this->isValid_ != nullptr;};
    void deleteIsValid() { this->isValid_ = nullptr;};
    inline bool isValid() const { DARABONBA_PTR_GET_DEFAULT(isValid_, false) };
    inline ApiMcpServerValidateHclResponseBody& setIsValid(bool isValid) { DARABONBA_PTR_SET_VALUE(isValid_, isValid) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Darabonba::Json> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> parameters() { DARABONBA_PTR_GET(parameters_, vector<Darabonba::Json>) };
    inline ApiMcpServerValidateHclResponseBody& setParameters(const vector<Darabonba::Json> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline ApiMcpServerValidateHclResponseBody& setParameters(vector<Darabonba::Json> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApiMcpServerValidateHclResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // warnings Field Functions 
    bool hasWarnings() const { return this->warnings_ != nullptr;};
    void deleteWarnings() { this->warnings_ = nullptr;};
    inline const vector<string> & warnings() const { DARABONBA_PTR_GET_CONST(warnings_, vector<string>) };
    inline vector<string> warnings() { DARABONBA_PTR_GET(warnings_, vector<string>) };
    inline ApiMcpServerValidateHclResponseBody& setWarnings(const vector<string> & warnings) { DARABONBA_PTR_SET_VALUE(warnings_, warnings) };
    inline ApiMcpServerValidateHclResponseBody& setWarnings(vector<string> && warnings) { DARABONBA_PTR_SET_RVALUE(warnings_, warnings) };


  protected:
    Darabonba::Json diagnosticReport_ = nullptr;
    std::shared_ptr<vector<string>> errors_ = nullptr;
    std::shared_ptr<string> hash_ = nullptr;
    std::shared_ptr<bool> isValid_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> parameters_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> warnings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
