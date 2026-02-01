// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAIDIFFANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAIDIFFANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class StartAIDiffAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAIDiffAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(task1, task1_);
      DARABONBA_PTR_TO_JSON(task2, task2_);
    };
    friend void from_json(const Darabonba::Json& j, StartAIDiffAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(task1, task1_);
      DARABONBA_PTR_FROM_JSON(task2, task2_);
    };
    StartAIDiffAnalysisRequest() = default ;
    StartAIDiffAnalysisRequest(const StartAIDiffAnalysisRequest &) = default ;
    StartAIDiffAnalysisRequest(StartAIDiffAnalysisRequest &&) = default ;
    StartAIDiffAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAIDiffAnalysisRequest() = default ;
    StartAIDiffAnalysisRequest& operator=(const StartAIDiffAnalysisRequest &) = default ;
    StartAIDiffAnalysisRequest& operator=(StartAIDiffAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Task2 : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Task2& obj) { 
        DARABONBA_PTR_TO_JSON(analysisId, analysisId_);
        DARABONBA_PTR_TO_JSON(pids, pids_);
        DARABONBA_PTR_TO_JSON(step_end, stepEnd_);
        DARABONBA_PTR_TO_JSON(step_start, stepStart_);
      };
      friend void from_json(const Darabonba::Json& j, Task2& obj) { 
        DARABONBA_PTR_FROM_JSON(analysisId, analysisId_);
        DARABONBA_PTR_FROM_JSON(pids, pids_);
        DARABONBA_PTR_FROM_JSON(step_end, stepEnd_);
        DARABONBA_PTR_FROM_JSON(step_start, stepStart_);
      };
      Task2() = default ;
      Task2(const Task2 &) = default ;
      Task2(Task2 &&) = default ;
      Task2(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Task2() = default ;
      Task2& operator=(const Task2 &) = default ;
      Task2& operator=(Task2 &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->analysisId_ == nullptr
        && this->pids_ == nullptr && this->stepEnd_ == nullptr && this->stepStart_ == nullptr; };
      // analysisId Field Functions 
      bool hasAnalysisId() const { return this->analysisId_ != nullptr;};
      void deleteAnalysisId() { this->analysisId_ = nullptr;};
      inline string getAnalysisId() const { DARABONBA_PTR_GET_DEFAULT(analysisId_, "") };
      inline Task2& setAnalysisId(string analysisId) { DARABONBA_PTR_SET_VALUE(analysisId_, analysisId) };


      // pids Field Functions 
      bool hasPids() const { return this->pids_ != nullptr;};
      void deletePids() { this->pids_ = nullptr;};
      inline const vector<string> & getPids() const { DARABONBA_PTR_GET_CONST(pids_, vector<string>) };
      inline vector<string> getPids() { DARABONBA_PTR_GET(pids_, vector<string>) };
      inline Task2& setPids(const vector<string> & pids) { DARABONBA_PTR_SET_VALUE(pids_, pids) };
      inline Task2& setPids(vector<string> && pids) { DARABONBA_PTR_SET_RVALUE(pids_, pids) };


      // stepEnd Field Functions 
      bool hasStepEnd() const { return this->stepEnd_ != nullptr;};
      void deleteStepEnd() { this->stepEnd_ = nullptr;};
      inline float getStepEnd() const { DARABONBA_PTR_GET_DEFAULT(stepEnd_, 0.0) };
      inline Task2& setStepEnd(float stepEnd) { DARABONBA_PTR_SET_VALUE(stepEnd_, stepEnd) };


      // stepStart Field Functions 
      bool hasStepStart() const { return this->stepStart_ != nullptr;};
      void deleteStepStart() { this->stepStart_ = nullptr;};
      inline float getStepStart() const { DARABONBA_PTR_GET_DEFAULT(stepStart_, 0.0) };
      inline Task2& setStepStart(float stepStart) { DARABONBA_PTR_SET_VALUE(stepStart_, stepStart) };


    protected:
      // This parameter is required.
      shared_ptr<string> analysisId_ {};
      // This parameter is required.
      shared_ptr<vector<string>> pids_ {};
      // This parameter is required.
      shared_ptr<float> stepEnd_ {};
      // This parameter is required.
      shared_ptr<float> stepStart_ {};
    };

    class Task1 : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Task1& obj) { 
        DARABONBA_PTR_TO_JSON(analysisId, analysisId_);
        DARABONBA_PTR_TO_JSON(pids, pids_);
        DARABONBA_PTR_TO_JSON(step_end, stepEnd_);
        DARABONBA_PTR_TO_JSON(step_start, stepStart_);
      };
      friend void from_json(const Darabonba::Json& j, Task1& obj) { 
        DARABONBA_PTR_FROM_JSON(analysisId, analysisId_);
        DARABONBA_PTR_FROM_JSON(pids, pids_);
        DARABONBA_PTR_FROM_JSON(step_end, stepEnd_);
        DARABONBA_PTR_FROM_JSON(step_start, stepStart_);
      };
      Task1() = default ;
      Task1(const Task1 &) = default ;
      Task1(Task1 &&) = default ;
      Task1(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Task1() = default ;
      Task1& operator=(const Task1 &) = default ;
      Task1& operator=(Task1 &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->analysisId_ == nullptr
        && this->pids_ == nullptr && this->stepEnd_ == nullptr && this->stepStart_ == nullptr; };
      // analysisId Field Functions 
      bool hasAnalysisId() const { return this->analysisId_ != nullptr;};
      void deleteAnalysisId() { this->analysisId_ = nullptr;};
      inline string getAnalysisId() const { DARABONBA_PTR_GET_DEFAULT(analysisId_, "") };
      inline Task1& setAnalysisId(string analysisId) { DARABONBA_PTR_SET_VALUE(analysisId_, analysisId) };


      // pids Field Functions 
      bool hasPids() const { return this->pids_ != nullptr;};
      void deletePids() { this->pids_ = nullptr;};
      inline const vector<string> & getPids() const { DARABONBA_PTR_GET_CONST(pids_, vector<string>) };
      inline vector<string> getPids() { DARABONBA_PTR_GET(pids_, vector<string>) };
      inline Task1& setPids(const vector<string> & pids) { DARABONBA_PTR_SET_VALUE(pids_, pids) };
      inline Task1& setPids(vector<string> && pids) { DARABONBA_PTR_SET_RVALUE(pids_, pids) };


      // stepEnd Field Functions 
      bool hasStepEnd() const { return this->stepEnd_ != nullptr;};
      void deleteStepEnd() { this->stepEnd_ = nullptr;};
      inline float getStepEnd() const { DARABONBA_PTR_GET_DEFAULT(stepEnd_, 0.0) };
      inline Task1& setStepEnd(float stepEnd) { DARABONBA_PTR_SET_VALUE(stepEnd_, stepEnd) };


      // stepStart Field Functions 
      bool hasStepStart() const { return this->stepStart_ != nullptr;};
      void deleteStepStart() { this->stepStart_ = nullptr;};
      inline float getStepStart() const { DARABONBA_PTR_GET_DEFAULT(stepStart_, 0.0) };
      inline Task1& setStepStart(float stepStart) { DARABONBA_PTR_SET_VALUE(stepStart_, stepStart) };


    protected:
      shared_ptr<string> analysisId_ {};
      shared_ptr<vector<string>> pids_ {};
      shared_ptr<float> stepEnd_ {};
      shared_ptr<float> stepStart_ {};
    };

    virtual bool empty() const override { return this->task1_ == nullptr
        && this->task2_ == nullptr; };
    // task1 Field Functions 
    bool hasTask1() const { return this->task1_ != nullptr;};
    void deleteTask1() { this->task1_ = nullptr;};
    inline const StartAIDiffAnalysisRequest::Task1 & getTask1() const { DARABONBA_PTR_GET_CONST(task1_, StartAIDiffAnalysisRequest::Task1) };
    inline StartAIDiffAnalysisRequest::Task1 getTask1() { DARABONBA_PTR_GET(task1_, StartAIDiffAnalysisRequest::Task1) };
    inline StartAIDiffAnalysisRequest& setTask1(const StartAIDiffAnalysisRequest::Task1 & task1) { DARABONBA_PTR_SET_VALUE(task1_, task1) };
    inline StartAIDiffAnalysisRequest& setTask1(StartAIDiffAnalysisRequest::Task1 && task1) { DARABONBA_PTR_SET_RVALUE(task1_, task1) };


    // task2 Field Functions 
    bool hasTask2() const { return this->task2_ != nullptr;};
    void deleteTask2() { this->task2_ = nullptr;};
    inline const StartAIDiffAnalysisRequest::Task2 & getTask2() const { DARABONBA_PTR_GET_CONST(task2_, StartAIDiffAnalysisRequest::Task2) };
    inline StartAIDiffAnalysisRequest::Task2 getTask2() { DARABONBA_PTR_GET(task2_, StartAIDiffAnalysisRequest::Task2) };
    inline StartAIDiffAnalysisRequest& setTask2(const StartAIDiffAnalysisRequest::Task2 & task2) { DARABONBA_PTR_SET_VALUE(task2_, task2) };
    inline StartAIDiffAnalysisRequest& setTask2(StartAIDiffAnalysisRequest::Task2 && task2) { DARABONBA_PTR_SET_RVALUE(task2_, task2) };


  protected:
    // This parameter is required.
    shared_ptr<StartAIDiffAnalysisRequest::Task1> task1_ {};
    // This parameter is required.
    shared_ptr<StartAIDiffAnalysisRequest::Task2> task2_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
