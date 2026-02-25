// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRACEABJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRACEABJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitTraceAbJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTraceAbJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallBack, callBack_);
      DARABONBA_PTR_TO_JSON(CipherBase64ed, cipherBase64ed_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTraceAbJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallBack, callBack_);
      DARABONBA_PTR_FROM_JSON(CipherBase64ed, cipherBase64ed_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
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
    virtual bool empty() const override { return this->callBack_ == nullptr
        && this->cipherBase64ed_ == nullptr && this->input_ == nullptr && this->level_ == nullptr && this->output_ == nullptr && this->startTime_ == nullptr
        && this->totalTime_ == nullptr && this->url_ == nullptr && this->userData_ == nullptr; };
    // callBack Field Functions 
    bool hasCallBack() const { return this->callBack_ != nullptr;};
    void deleteCallBack() { this->callBack_ = nullptr;};
    inline string getCallBack() const { DARABONBA_PTR_GET_DEFAULT(callBack_, "") };
    inline SubmitTraceAbJobRequest& setCallBack(string callBack) { DARABONBA_PTR_SET_VALUE(callBack_, callBack) };


    // cipherBase64ed Field Functions 
    bool hasCipherBase64ed() const { return this->cipherBase64ed_ != nullptr;};
    void deleteCipherBase64ed() { this->cipherBase64ed_ = nullptr;};
    inline string getCipherBase64ed() const { DARABONBA_PTR_GET_DEFAULT(cipherBase64ed_, "") };
    inline SubmitTraceAbJobRequest& setCipherBase64ed(string cipherBase64ed) { DARABONBA_PTR_SET_VALUE(cipherBase64ed_, cipherBase64ed) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline SubmitTraceAbJobRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline SubmitTraceAbJobRequest& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline SubmitTraceAbJobRequest& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SubmitTraceAbJobRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalTime Field Functions 
    bool hasTotalTime() const { return this->totalTime_ != nullptr;};
    void deleteTotalTime() { this->totalTime_ = nullptr;};
    inline int64_t getTotalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
    inline SubmitTraceAbJobRequest& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitTraceAbJobRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitTraceAbJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    shared_ptr<string> callBack_ {};
    shared_ptr<string> cipherBase64ed_ {};
    shared_ptr<string> input_ {};
    shared_ptr<int64_t> level_ {};
    // This parameter is required.
    shared_ptr<string> output_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<int64_t> totalTime_ {};
    shared_ptr<string> url_ {};
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
