// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRACEABJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRACEABJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTraceAbJobRequestInput.hpp>
#include <alibabacloud/models/SubmitTraceAbJobRequestOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTraceAbJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTraceAbJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CipherBase64ed, cipherBase64ed_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTraceAbJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CipherBase64ed, cipherBase64ed_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitTraceAbJobRequest() = default ;
    SubmitTraceAbJobRequest(const SubmitTraceAbJobRequest &) = default ;
    SubmitTraceAbJobRequest(SubmitTraceAbJobRequest &&) = default ;
    SubmitTraceAbJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTraceAbJobRequest() = default ;
    SubmitTraceAbJobRequest& operator=(const SubmitTraceAbJobRequest &) = default ;
    SubmitTraceAbJobRequest& operator=(SubmitTraceAbJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cipherBase64ed_ != nullptr
        && this->input_ != nullptr && this->level_ != nullptr && this->output_ != nullptr && this->startTime_ != nullptr && this->totalTime_ != nullptr
        && this->userData_ != nullptr; };
    // cipherBase64ed Field Functions 
    bool hasCipherBase64ed() const { return this->cipherBase64ed_ != nullptr;};
    void deleteCipherBase64ed() { this->cipherBase64ed_ = nullptr;};
    inline string cipherBase64ed() const { DARABONBA_PTR_GET_DEFAULT(cipherBase64ed_, "") };
    inline SubmitTraceAbJobRequest& setCipherBase64ed(string cipherBase64ed) { DARABONBA_PTR_SET_VALUE(cipherBase64ed_, cipherBase64ed) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitTraceAbJobRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, SubmitTraceAbJobRequestInput) };
    inline SubmitTraceAbJobRequestInput input() { DARABONBA_PTR_GET(input_, SubmitTraceAbJobRequestInput) };
    inline SubmitTraceAbJobRequest& setInput(const SubmitTraceAbJobRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitTraceAbJobRequest& setInput(SubmitTraceAbJobRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline SubmitTraceAbJobRequest& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const SubmitTraceAbJobRequestOutput & output() const { DARABONBA_PTR_GET_CONST(output_, SubmitTraceAbJobRequestOutput) };
    inline SubmitTraceAbJobRequestOutput output() { DARABONBA_PTR_GET(output_, SubmitTraceAbJobRequestOutput) };
    inline SubmitTraceAbJobRequest& setOutput(const SubmitTraceAbJobRequestOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline SubmitTraceAbJobRequest& setOutput(SubmitTraceAbJobRequestOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SubmitTraceAbJobRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalTime Field Functions 
    bool hasTotalTime() const { return this->totalTime_ != nullptr;};
    void deleteTotalTime() { this->totalTime_ = nullptr;};
    inline int64_t totalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
    inline SubmitTraceAbJobRequest& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitTraceAbJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<string> cipherBase64ed_ = nullptr;
    // This parameter is required.
    std::shared_ptr<SubmitTraceAbJobRequestInput> input_ = nullptr;
    std::shared_ptr<int64_t> level_ = nullptr;
    // This parameter is required.
    std::shared_ptr<SubmitTraceAbJobRequestOutput> output_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int64_t> totalTime_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
