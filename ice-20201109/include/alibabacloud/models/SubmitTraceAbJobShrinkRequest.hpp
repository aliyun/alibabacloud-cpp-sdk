// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRACEABJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRACEABJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTraceAbJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTraceAbJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CipherBase64ed, cipherBase64ed_);
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Output, outputShrink_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTraceAbJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CipherBase64ed, cipherBase64ed_);
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Output, outputShrink_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitTraceAbJobShrinkRequest() = default ;
    SubmitTraceAbJobShrinkRequest(const SubmitTraceAbJobShrinkRequest &) = default ;
    SubmitTraceAbJobShrinkRequest(SubmitTraceAbJobShrinkRequest &&) = default ;
    SubmitTraceAbJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTraceAbJobShrinkRequest() = default ;
    SubmitTraceAbJobShrinkRequest& operator=(const SubmitTraceAbJobShrinkRequest &) = default ;
    SubmitTraceAbJobShrinkRequest& operator=(SubmitTraceAbJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cipherBase64ed_ != nullptr
        && this->inputShrink_ != nullptr && this->level_ != nullptr && this->outputShrink_ != nullptr && this->startTime_ != nullptr && this->totalTime_ != nullptr
        && this->userData_ != nullptr; };
    // cipherBase64ed Field Functions 
    bool hasCipherBase64ed() const { return this->cipherBase64ed_ != nullptr;};
    void deleteCipherBase64ed() { this->cipherBase64ed_ = nullptr;};
    inline string cipherBase64ed() const { DARABONBA_PTR_GET_DEFAULT(cipherBase64ed_, "") };
    inline SubmitTraceAbJobShrinkRequest& setCipherBase64ed(string cipherBase64ed) { DARABONBA_PTR_SET_VALUE(cipherBase64ed_, cipherBase64ed) };


    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string inputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline SubmitTraceAbJobShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline SubmitTraceAbJobShrinkRequest& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // outputShrink Field Functions 
    bool hasOutputShrink() const { return this->outputShrink_ != nullptr;};
    void deleteOutputShrink() { this->outputShrink_ = nullptr;};
    inline string outputShrink() const { DARABONBA_PTR_GET_DEFAULT(outputShrink_, "") };
    inline SubmitTraceAbJobShrinkRequest& setOutputShrink(string outputShrink) { DARABONBA_PTR_SET_VALUE(outputShrink_, outputShrink) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SubmitTraceAbJobShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalTime Field Functions 
    bool hasTotalTime() const { return this->totalTime_ != nullptr;};
    void deleteTotalTime() { this->totalTime_ = nullptr;};
    inline int64_t totalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
    inline SubmitTraceAbJobShrinkRequest& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitTraceAbJobShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<string> cipherBase64ed_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputShrink_ = nullptr;
    std::shared_ptr<int64_t> level_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outputShrink_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int64_t> totalTime_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
