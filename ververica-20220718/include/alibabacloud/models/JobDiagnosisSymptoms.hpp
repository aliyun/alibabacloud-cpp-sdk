// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBDIAGNOSISSYMPTOMS_HPP_
#define ALIBABACLOUD_MODELS_JOBDIAGNOSISSYMPTOMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/JobDiagnosisSymptom.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class JobDiagnosisSymptoms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobDiagnosisSymptoms& obj) { 
      DARABONBA_PTR_TO_JSON(autopilot, autopilot_);
      DARABONBA_PTR_TO_JSON(others, others_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
      DARABONBA_PTR_TO_JSON(startup, startup_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(troubleshooting, troubleshooting_);
    };
    friend void from_json(const Darabonba::Json& j, JobDiagnosisSymptoms& obj) { 
      DARABONBA_PTR_FROM_JSON(autopilot, autopilot_);
      DARABONBA_PTR_FROM_JSON(others, others_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
      DARABONBA_PTR_FROM_JSON(startup, startup_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(troubleshooting, troubleshooting_);
    };
    JobDiagnosisSymptoms() = default ;
    JobDiagnosisSymptoms(const JobDiagnosisSymptoms &) = default ;
    JobDiagnosisSymptoms(JobDiagnosisSymptoms &&) = default ;
    JobDiagnosisSymptoms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobDiagnosisSymptoms() = default ;
    JobDiagnosisSymptoms& operator=(const JobDiagnosisSymptoms &) = default ;
    JobDiagnosisSymptoms& operator=(JobDiagnosisSymptoms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autopilot_ == nullptr
        && return this->others_ == nullptr && return this->runtime_ == nullptr && return this->startup_ == nullptr && return this->state_ == nullptr && return this->troubleshooting_ == nullptr; };
    // autopilot Field Functions 
    bool hasAutopilot() const { return this->autopilot_ != nullptr;};
    void deleteAutopilot() { this->autopilot_ = nullptr;};
    inline const JobDiagnosisSymptom & autopilot() const { DARABONBA_PTR_GET_CONST(autopilot_, JobDiagnosisSymptom) };
    inline JobDiagnosisSymptom autopilot() { DARABONBA_PTR_GET(autopilot_, JobDiagnosisSymptom) };
    inline JobDiagnosisSymptoms& setAutopilot(const JobDiagnosisSymptom & autopilot) { DARABONBA_PTR_SET_VALUE(autopilot_, autopilot) };
    inline JobDiagnosisSymptoms& setAutopilot(JobDiagnosisSymptom && autopilot) { DARABONBA_PTR_SET_RVALUE(autopilot_, autopilot) };


    // others Field Functions 
    bool hasOthers() const { return this->others_ != nullptr;};
    void deleteOthers() { this->others_ = nullptr;};
    inline const vector<JobDiagnosisSymptom> & others() const { DARABONBA_PTR_GET_CONST(others_, vector<JobDiagnosisSymptom>) };
    inline vector<JobDiagnosisSymptom> others() { DARABONBA_PTR_GET(others_, vector<JobDiagnosisSymptom>) };
    inline JobDiagnosisSymptoms& setOthers(const vector<JobDiagnosisSymptom> & others) { DARABONBA_PTR_SET_VALUE(others_, others) };
    inline JobDiagnosisSymptoms& setOthers(vector<JobDiagnosisSymptom> && others) { DARABONBA_PTR_SET_RVALUE(others_, others) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const vector<JobDiagnosisSymptom> & runtime() const { DARABONBA_PTR_GET_CONST(runtime_, vector<JobDiagnosisSymptom>) };
    inline vector<JobDiagnosisSymptom> runtime() { DARABONBA_PTR_GET(runtime_, vector<JobDiagnosisSymptom>) };
    inline JobDiagnosisSymptoms& setRuntime(const vector<JobDiagnosisSymptom> & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline JobDiagnosisSymptoms& setRuntime(vector<JobDiagnosisSymptom> && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


    // startup Field Functions 
    bool hasStartup() const { return this->startup_ != nullptr;};
    void deleteStartup() { this->startup_ = nullptr;};
    inline const vector<JobDiagnosisSymptom> & startup() const { DARABONBA_PTR_GET_CONST(startup_, vector<JobDiagnosisSymptom>) };
    inline vector<JobDiagnosisSymptom> startup() { DARABONBA_PTR_GET(startup_, vector<JobDiagnosisSymptom>) };
    inline JobDiagnosisSymptoms& setStartup(const vector<JobDiagnosisSymptom> & startup) { DARABONBA_PTR_SET_VALUE(startup_, startup) };
    inline JobDiagnosisSymptoms& setStartup(vector<JobDiagnosisSymptom> && startup) { DARABONBA_PTR_SET_RVALUE(startup_, startup) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline const vector<JobDiagnosisSymptom> & state() const { DARABONBA_PTR_GET_CONST(state_, vector<JobDiagnosisSymptom>) };
    inline vector<JobDiagnosisSymptom> state() { DARABONBA_PTR_GET(state_, vector<JobDiagnosisSymptom>) };
    inline JobDiagnosisSymptoms& setState(const vector<JobDiagnosisSymptom> & state) { DARABONBA_PTR_SET_VALUE(state_, state) };
    inline JobDiagnosisSymptoms& setState(vector<JobDiagnosisSymptom> && state) { DARABONBA_PTR_SET_RVALUE(state_, state) };


    // troubleshooting Field Functions 
    bool hasTroubleshooting() const { return this->troubleshooting_ != nullptr;};
    void deleteTroubleshooting() { this->troubleshooting_ = nullptr;};
    inline const vector<JobDiagnosisSymptom> & troubleshooting() const { DARABONBA_PTR_GET_CONST(troubleshooting_, vector<JobDiagnosisSymptom>) };
    inline vector<JobDiagnosisSymptom> troubleshooting() { DARABONBA_PTR_GET(troubleshooting_, vector<JobDiagnosisSymptom>) };
    inline JobDiagnosisSymptoms& setTroubleshooting(const vector<JobDiagnosisSymptom> & troubleshooting) { DARABONBA_PTR_SET_VALUE(troubleshooting_, troubleshooting) };
    inline JobDiagnosisSymptoms& setTroubleshooting(vector<JobDiagnosisSymptom> && troubleshooting) { DARABONBA_PTR_SET_RVALUE(troubleshooting_, troubleshooting) };


  protected:
    std::shared_ptr<JobDiagnosisSymptom> autopilot_ = nullptr;
    std::shared_ptr<vector<JobDiagnosisSymptom>> others_ = nullptr;
    std::shared_ptr<vector<JobDiagnosisSymptom>> runtime_ = nullptr;
    std::shared_ptr<vector<JobDiagnosisSymptom>> startup_ = nullptr;
    std::shared_ptr<vector<JobDiagnosisSymptom>> state_ = nullptr;
    std::shared_ptr<vector<JobDiagnosisSymptom>> troubleshooting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
