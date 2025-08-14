// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCOPYRIGHTEXTRACTJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCOPYRIGHTEXTRACTJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitCopyrightExtractJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCopyrightExtractJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCopyrightExtractJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitCopyrightExtractJobShrinkRequest() = default ;
    SubmitCopyrightExtractJobShrinkRequest(const SubmitCopyrightExtractJobShrinkRequest &) = default ;
    SubmitCopyrightExtractJobShrinkRequest(SubmitCopyrightExtractJobShrinkRequest &&) = default ;
    SubmitCopyrightExtractJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCopyrightExtractJobShrinkRequest() = default ;
    SubmitCopyrightExtractJobShrinkRequest& operator=(const SubmitCopyrightExtractJobShrinkRequest &) = default ;
    SubmitCopyrightExtractJobShrinkRequest& operator=(SubmitCopyrightExtractJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputShrink_ != nullptr
        && this->params_ != nullptr && this->userData_ != nullptr; };
    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string inputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline SubmitCopyrightExtractJobShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitCopyrightExtractJobShrinkRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitCopyrightExtractJobShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> inputShrink_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
