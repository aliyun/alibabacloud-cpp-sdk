// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISPOSEWORKTASKREQUESTWORKTASKANALYSISRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DISPOSEWORKTASKREQUESTWORKTASKANALYSISRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class DisposeWorkTaskRequestWorkTaskAnalysisResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisposeWorkTaskRequestWorkTaskAnalysisResults& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisResult, analysisResult_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DisposeWorkTaskRequestWorkTaskAnalysisResults& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisResult, analysisResult_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DisposeWorkTaskRequestWorkTaskAnalysisResults() = default ;
    DisposeWorkTaskRequestWorkTaskAnalysisResults(const DisposeWorkTaskRequestWorkTaskAnalysisResults &) = default ;
    DisposeWorkTaskRequestWorkTaskAnalysisResults(DisposeWorkTaskRequestWorkTaskAnalysisResults &&) = default ;
    DisposeWorkTaskRequestWorkTaskAnalysisResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisposeWorkTaskRequestWorkTaskAnalysisResults() = default ;
    DisposeWorkTaskRequestWorkTaskAnalysisResults& operator=(const DisposeWorkTaskRequestWorkTaskAnalysisResults &) = default ;
    DisposeWorkTaskRequestWorkTaskAnalysisResults& operator=(DisposeWorkTaskRequestWorkTaskAnalysisResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisResult_ == nullptr
        && return this->taskId_ == nullptr; };
    // analysisResult Field Functions 
    bool hasAnalysisResult() const { return this->analysisResult_ != nullptr;};
    void deleteAnalysisResult() { this->analysisResult_ = nullptr;};
    inline string analysisResult() const { DARABONBA_PTR_GET_DEFAULT(analysisResult_, "") };
    inline DisposeWorkTaskRequestWorkTaskAnalysisResults& setAnalysisResult(string analysisResult) { DARABONBA_PTR_SET_VALUE(analysisResult_, analysisResult) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DisposeWorkTaskRequestWorkTaskAnalysisResults& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> analysisResult_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
