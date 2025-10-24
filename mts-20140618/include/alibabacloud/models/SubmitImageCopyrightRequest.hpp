// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITIMAGECOPYRIGHTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITIMAGECOPYRIGHTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitImageCopyrightRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitImageCopyrightRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitImageCopyrightRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    SubmitImageCopyrightRequest() = default ;
    SubmitImageCopyrightRequest(const SubmitImageCopyrightRequest &) = default ;
    SubmitImageCopyrightRequest(SubmitImageCopyrightRequest &&) = default ;
    SubmitImageCopyrightRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitImageCopyrightRequest() = default ;
    SubmitImageCopyrightRequest& operator=(const SubmitImageCopyrightRequest &) = default ;
    SubmitImageCopyrightRequest& operator=(SubmitImageCopyrightRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->output_ == nullptr && return this->params_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SubmitImageCopyrightRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline SubmitImageCopyrightRequest& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitImageCopyrightRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> output_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
