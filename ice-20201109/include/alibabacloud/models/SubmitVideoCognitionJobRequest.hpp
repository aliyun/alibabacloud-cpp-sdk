// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOCOGNITIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOCOGNITIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitVideoCognitionJobRequestInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitVideoCognitionJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoCognitionJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoCognitionJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitVideoCognitionJobRequest() = default ;
    SubmitVideoCognitionJobRequest(const SubmitVideoCognitionJobRequest &) = default ;
    SubmitVideoCognitionJobRequest(SubmitVideoCognitionJobRequest &&) = default ;
    SubmitVideoCognitionJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoCognitionJobRequest() = default ;
    SubmitVideoCognitionJobRequest& operator=(const SubmitVideoCognitionJobRequest &) = default ;
    SubmitVideoCognitionJobRequest& operator=(SubmitVideoCognitionJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->input_ != nullptr
        && this->params_ != nullptr && this->templateId_ != nullptr && this->title_ != nullptr && this->userData_ != nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitVideoCognitionJobRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, SubmitVideoCognitionJobRequestInput) };
    inline SubmitVideoCognitionJobRequestInput input() { DARABONBA_PTR_GET(input_, SubmitVideoCognitionJobRequestInput) };
    inline SubmitVideoCognitionJobRequest& setInput(const SubmitVideoCognitionJobRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitVideoCognitionJobRequest& setInput(SubmitVideoCognitionJobRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitVideoCognitionJobRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitVideoCognitionJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitVideoCognitionJobRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitVideoCognitionJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<SubmitVideoCognitionJobRequestInput> input_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
