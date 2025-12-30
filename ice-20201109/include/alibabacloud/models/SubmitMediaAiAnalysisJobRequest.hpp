// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIAAIANALYSISJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIAAIANALYSISJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitMediaAiAnalysisJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaAiAnalysisJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisParams, analysisParams_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaAiAnalysisJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisParams, analysisParams_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitMediaAiAnalysisJobRequest() = default ;
    SubmitMediaAiAnalysisJobRequest(const SubmitMediaAiAnalysisJobRequest &) = default ;
    SubmitMediaAiAnalysisJobRequest(SubmitMediaAiAnalysisJobRequest &&) = default ;
    SubmitMediaAiAnalysisJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaAiAnalysisJobRequest() = default ;
    SubmitMediaAiAnalysisJobRequest& operator=(const SubmitMediaAiAnalysisJobRequest &) = default ;
    SubmitMediaAiAnalysisJobRequest& operator=(SubmitMediaAiAnalysisJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisParams_ == nullptr
        && this->input_ == nullptr && this->userData_ == nullptr; };
    // analysisParams Field Functions 
    bool hasAnalysisParams() const { return this->analysisParams_ != nullptr;};
    void deleteAnalysisParams() { this->analysisParams_ = nullptr;};
    inline string getAnalysisParams() const { DARABONBA_PTR_GET_DEFAULT(analysisParams_, "") };
    inline SubmitMediaAiAnalysisJobRequest& setAnalysisParams(string analysisParams) { DARABONBA_PTR_SET_VALUE(analysisParams_, analysisParams) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline SubmitMediaAiAnalysisJobRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitMediaAiAnalysisJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The analysis parameters.
    shared_ptr<string> analysisParams_ {};
    // The media asset that you want to analyze. You can specify an Object Storage Service (OSS) URL, a media asset ID, or an external URL.
    shared_ptr<string> input_ {};
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
