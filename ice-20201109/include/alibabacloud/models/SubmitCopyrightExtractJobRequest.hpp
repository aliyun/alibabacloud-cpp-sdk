// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCOPYRIGHTEXTRACTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCOPYRIGHTEXTRACTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitCopyrightExtractJobRequestInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitCopyrightExtractJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCopyrightExtractJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCopyrightExtractJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitCopyrightExtractJobRequest() = default ;
    SubmitCopyrightExtractJobRequest(const SubmitCopyrightExtractJobRequest &) = default ;
    SubmitCopyrightExtractJobRequest(SubmitCopyrightExtractJobRequest &&) = default ;
    SubmitCopyrightExtractJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCopyrightExtractJobRequest() = default ;
    SubmitCopyrightExtractJobRequest& operator=(const SubmitCopyrightExtractJobRequest &) = default ;
    SubmitCopyrightExtractJobRequest& operator=(SubmitCopyrightExtractJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->input_ == nullptr
        && return this->params_ == nullptr && return this->userData_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitCopyrightExtractJobRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, SubmitCopyrightExtractJobRequestInput) };
    inline SubmitCopyrightExtractJobRequestInput input() { DARABONBA_PTR_GET(input_, SubmitCopyrightExtractJobRequestInput) };
    inline SubmitCopyrightExtractJobRequest& setInput(const SubmitCopyrightExtractJobRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitCopyrightExtractJobRequest& setInput(SubmitCopyrightExtractJobRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitCopyrightExtractJobRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitCopyrightExtractJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The source video file from which to extract the watermark.
    // 
    // > The OSS object or media asset must reside in the same region as the IMS service region.
    // 
    // This parameter is required.
    std::shared_ptr<SubmitCopyrightExtractJobRequestInput> input_ = nullptr;
    // Additional parameters for the watermark job, provided as a JSON string. Supported parameter:
    // 
    // *   algoType: The algorithm type. Defaults to v1. The extraction algorithm must match the one used for embedding.
    // 
    //     *   v1: Copyright watermark extraction algorithm for long videos.
    //     *   v2: Copyright watermark extraction algorithm for short videos.
    std::shared_ptr<string> params_ = nullptr;
    // The custom data, which can be up to 1,024 bytes in size.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
