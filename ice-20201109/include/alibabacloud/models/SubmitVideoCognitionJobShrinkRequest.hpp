// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOCOGNITIONJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOCOGNITIONJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitVideoCognitionJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoCognitionJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoCognitionJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitVideoCognitionJobShrinkRequest() = default ;
    SubmitVideoCognitionJobShrinkRequest(const SubmitVideoCognitionJobShrinkRequest &) = default ;
    SubmitVideoCognitionJobShrinkRequest(SubmitVideoCognitionJobShrinkRequest &&) = default ;
    SubmitVideoCognitionJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoCognitionJobShrinkRequest() = default ;
    SubmitVideoCognitionJobShrinkRequest& operator=(const SubmitVideoCognitionJobShrinkRequest &) = default ;
    SubmitVideoCognitionJobShrinkRequest& operator=(SubmitVideoCognitionJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputShrink_ != nullptr
        && this->params_ != nullptr && this->templateId_ != nullptr && this->title_ != nullptr && this->userData_ != nullptr; };
    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string inputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline SubmitVideoCognitionJobShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitVideoCognitionJobShrinkRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitVideoCognitionJobShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitVideoCognitionJobShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitVideoCognitionJobShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<string> inputShrink_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
