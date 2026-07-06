// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIAGNOSISISSUE_HPP_
#define ALIBABACLOUD_MODELS_DIAGNOSISISSUE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class DiagnosisIssue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiagnosisIssue& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(FirstOccurrence, firstOccurrence_);
      DARABONBA_PTR_TO_JSON(LastOccurrence, lastOccurrence_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(OccurrenceCount, occurrenceCount_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
    };
    friend void from_json(const Darabonba::Json& j, DiagnosisIssue& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(FirstOccurrence, firstOccurrence_);
      DARABONBA_PTR_FROM_JSON(LastOccurrence, lastOccurrence_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(OccurrenceCount, occurrenceCount_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
    };
    DiagnosisIssue() = default ;
    DiagnosisIssue(const DiagnosisIssue &) = default ;
    DiagnosisIssue(DiagnosisIssue &&) = default ;
    DiagnosisIssue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiagnosisIssue() = default ;
    DiagnosisIssue& operator=(const DiagnosisIssue &) = default ;
    DiagnosisIssue& operator=(DiagnosisIssue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->extra_ == nullptr && this->firstOccurrence_ == nullptr && this->lastOccurrence_ == nullptr && this->level_ == nullptr && this->occurrenceCount_ == nullptr
        && this->solution_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DiagnosisIssue& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline const map<string, string> & getExtra() const { DARABONBA_PTR_GET_CONST(extra_, map<string, string>) };
    inline map<string, string> getExtra() { DARABONBA_PTR_GET(extra_, map<string, string>) };
    inline DiagnosisIssue& setExtra(const map<string, string> & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
    inline DiagnosisIssue& setExtra(map<string, string> && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


    // firstOccurrence Field Functions 
    bool hasFirstOccurrence() const { return this->firstOccurrence_ != nullptr;};
    void deleteFirstOccurrence() { this->firstOccurrence_ = nullptr;};
    inline string getFirstOccurrence() const { DARABONBA_PTR_GET_DEFAULT(firstOccurrence_, "") };
    inline DiagnosisIssue& setFirstOccurrence(string firstOccurrence) { DARABONBA_PTR_SET_VALUE(firstOccurrence_, firstOccurrence) };


    // lastOccurrence Field Functions 
    bool hasLastOccurrence() const { return this->lastOccurrence_ != nullptr;};
    void deleteLastOccurrence() { this->lastOccurrence_ = nullptr;};
    inline string getLastOccurrence() const { DARABONBA_PTR_GET_DEFAULT(lastOccurrence_, "") };
    inline DiagnosisIssue& setLastOccurrence(string lastOccurrence) { DARABONBA_PTR_SET_VALUE(lastOccurrence_, lastOccurrence) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DiagnosisIssue& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // occurrenceCount Field Functions 
    bool hasOccurrenceCount() const { return this->occurrenceCount_ != nullptr;};
    void deleteOccurrenceCount() { this->occurrenceCount_ = nullptr;};
    inline int64_t getOccurrenceCount() const { DARABONBA_PTR_GET_DEFAULT(occurrenceCount_, 0L) };
    inline DiagnosisIssue& setOccurrenceCount(int64_t occurrenceCount) { DARABONBA_PTR_SET_VALUE(occurrenceCount_, occurrenceCount) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline string getSolution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
    inline DiagnosisIssue& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


  protected:
    // A unique code that identifies the issue type.
    shared_ptr<string> code_ {};
    // An object that contains additional, unstructured key-value information about the issue.
    shared_ptr<map<string, string>> extra_ {};
    // The time, in ISO 8601 format, when the issue was first detected.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> firstOccurrence_ {};
    // The time, in ISO 8601 format, when the issue was last detected.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> lastOccurrence_ {};
    // Specifies the severity of the issue. Valid values are `INFO`, `WARN`, and `ERROR`.
    shared_ptr<string> level_ {};
    // The total number of times the issue has occurred.
    shared_ptr<int64_t> occurrenceCount_ {};
    // The recommended action to resolve the issue.
    shared_ptr<string> solution_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
