// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRACEEXTRACTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRACEEXTRACTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTraceExtractJobRequestInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTraceExtractJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTraceExtractJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTraceExtractJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitTraceExtractJobRequest() = default ;
    SubmitTraceExtractJobRequest(const SubmitTraceExtractJobRequest &) = default ;
    SubmitTraceExtractJobRequest(SubmitTraceExtractJobRequest &&) = default ;
    SubmitTraceExtractJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTraceExtractJobRequest() = default ;
    SubmitTraceExtractJobRequest& operator=(const SubmitTraceExtractJobRequest &) = default ;
    SubmitTraceExtractJobRequest& operator=(SubmitTraceExtractJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->input_ != nullptr
        && this->params_ != nullptr && this->userData_ != nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitTraceExtractJobRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, SubmitTraceExtractJobRequestInput) };
    inline SubmitTraceExtractJobRequestInput input() { DARABONBA_PTR_GET(input_, SubmitTraceExtractJobRequestInput) };
    inline SubmitTraceExtractJobRequest& setInput(const SubmitTraceExtractJobRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitTraceExtractJobRequest& setInput(SubmitTraceExtractJobRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitTraceExtractJobRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitTraceExtractJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // This parameter is required.
    std::shared_ptr<SubmitTraceExtractJobRequestInput> input_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
