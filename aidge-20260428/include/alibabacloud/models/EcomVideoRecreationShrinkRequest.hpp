// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ECOMVIDEORECREATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ECOMVIDEORECREATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class EcomVideoRecreationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EcomVideoRecreationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(Output, outputShrink_);
    };
    friend void from_json(const Darabonba::Json& j, EcomVideoRecreationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(Output, outputShrink_);
    };
    EcomVideoRecreationShrinkRequest() = default ;
    EcomVideoRecreationShrinkRequest(const EcomVideoRecreationShrinkRequest &) = default ;
    EcomVideoRecreationShrinkRequest(EcomVideoRecreationShrinkRequest &&) = default ;
    EcomVideoRecreationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EcomVideoRecreationShrinkRequest() = default ;
    EcomVideoRecreationShrinkRequest& operator=(const EcomVideoRecreationShrinkRequest &) = default ;
    EcomVideoRecreationShrinkRequest& operator=(EcomVideoRecreationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputShrink_ == nullptr
        && this->outputShrink_ == nullptr; };
    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string getInputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline EcomVideoRecreationShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // outputShrink Field Functions 
    bool hasOutputShrink() const { return this->outputShrink_ != nullptr;};
    void deleteOutputShrink() { this->outputShrink_ = nullptr;};
    inline string getOutputShrink() const { DARABONBA_PTR_GET_DEFAULT(outputShrink_, "") };
    inline EcomVideoRecreationShrinkRequest& setOutputShrink(string outputShrink) { DARABONBA_PTR_SET_VALUE(outputShrink_, outputShrink) };


  protected:
    // The input parameters for video remix.
    // 
    // This parameter is required.
    shared_ptr<string> inputShrink_ {};
    // The output specifications for the final video.
    shared_ptr<string> outputShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
