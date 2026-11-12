// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRYRUNRESULT_HPP_
#define ALIBABACLOUD_MODELS_DRYRUNRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DryRunViolation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DryRunResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DryRunResult& obj) { 
      DARABONBA_PTR_TO_JSON(exitCode, exitCode_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(violations, violations_);
    };
    friend void from_json(const Darabonba::Json& j, DryRunResult& obj) { 
      DARABONBA_PTR_FROM_JSON(exitCode, exitCode_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(violations, violations_);
    };
    DryRunResult() = default ;
    DryRunResult(const DryRunResult &) = default ;
    DryRunResult(DryRunResult &&) = default ;
    DryRunResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DryRunResult() = default ;
    DryRunResult& operator=(const DryRunResult &) = default ;
    DryRunResult& operator=(DryRunResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exitCode_ == nullptr
        && this->result_ == nullptr && this->violations_ == nullptr; };
    // exitCode Field Functions 
    bool hasExitCode() const { return this->exitCode_ != nullptr;};
    void deleteExitCode() { this->exitCode_ = nullptr;};
    inline int32_t getExitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, 0) };
    inline DryRunResult& setExitCode(int32_t exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline DryRunResult& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // violations Field Functions 
    bool hasViolations() const { return this->violations_ != nullptr;};
    void deleteViolations() { this->violations_ = nullptr;};
    inline const vector<DryRunViolation> & getViolations() const { DARABONBA_PTR_GET_CONST(violations_, vector<DryRunViolation>) };
    inline vector<DryRunViolation> getViolations() { DARABONBA_PTR_GET(violations_, vector<DryRunViolation>) };
    inline DryRunResult& setViolations(const vector<DryRunViolation> & violations) { DARABONBA_PTR_SET_VALUE(violations_, violations) };
    inline DryRunResult& setViolations(vector<DryRunViolation> && violations) { DARABONBA_PTR_SET_RVALUE(violations_, violations) };


  protected:
    // The exit code. A value of 0 indicates that the validation passed. A value of 1 indicates that the request was rejected by business rules. For specific reasons, see violations. A value of 2 indicates that the request structure cannot be parsed and rule validation cannot be performed.
    shared_ptr<int32_t> exitCode_ {};
    // The text representation of the result. A value of ok indicates that the validation passed, and rejected indicates that the request was rejected by business rules. This field is empty when the exit code is 2, which means the request structure cannot be parsed.
    shared_ptr<string> result_ {};
    // The list of violations. Each violation consists of three elements: field, message, and suggestion, which represent the path of the violated field, the violation description, and the remediation suggestion, respectively. This array is empty when the exit code is 0 (passed). All violations are listed when the exit code is 1 (rejected by business rules). The location and cause of the unparseable fields are provided when the exit code is 2 (unparseable request structure).
    shared_ptr<vector<DryRunViolation>> violations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
