// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITBATCHMEDIAPRODUCINGJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITBATCHMEDIAPRODUCINGJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitBatchMediaProducingJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitBatchMediaProducingJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitBatchMediaProducingJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitBatchMediaProducingJobRequest() = default ;
    SubmitBatchMediaProducingJobRequest(const SubmitBatchMediaProducingJobRequest &) = default ;
    SubmitBatchMediaProducingJobRequest(SubmitBatchMediaProducingJobRequest &&) = default ;
    SubmitBatchMediaProducingJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitBatchMediaProducingJobRequest() = default ;
    SubmitBatchMediaProducingJobRequest& operator=(const SubmitBatchMediaProducingJobRequest &) = default ;
    SubmitBatchMediaProducingJobRequest& operator=(SubmitBatchMediaProducingJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->editingConfig_ == nullptr && this->inputConfig_ == nullptr && this->outputConfig_ == nullptr && this->templateConfig_ == nullptr && this->userData_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SubmitBatchMediaProducingJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // editingConfig Field Functions 
    bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
    void deleteEditingConfig() { this->editingConfig_ = nullptr;};
    inline string getEditingConfig() const { DARABONBA_PTR_GET_DEFAULT(editingConfig_, "") };
    inline SubmitBatchMediaProducingJobRequest& setEditingConfig(string editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline string getInputConfig() const { DARABONBA_PTR_GET_DEFAULT(inputConfig_, "") };
    inline SubmitBatchMediaProducingJobRequest& setInputConfig(string inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string getOutputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline SubmitBatchMediaProducingJobRequest& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline SubmitBatchMediaProducingJobRequest& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitBatchMediaProducingJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // A client-side token used to ensure request idempotence.
    shared_ptr<string> clientToken_ {};
    // The editing configuration. For the structure definition, see [EditingConfig](~~2692547#1be9bba03b7qu~~).
    shared_ptr<string> editingConfig_ {};
    // The input configuration. For the structure definition, see [InputConfig](~~2692547#2faed1559549n~~).
    shared_ptr<string> inputConfig_ {};
    // The output configuration. For the structure definition, see [OutputConfig](~~2692547#447b928fcbuoa~~).
    shared_ptr<string> outputConfig_ {};
    // The template parameters. You can configure multiple templates for one-click smart video creation. The system randomly selects one template to apply. For more information, see [TemplateConfig parameters](https://help.aliyun.com/zh/ims/use-cases/batch-video-production-public-parameters?spm=a2c4g.11186623.help-menu-193643.d_3_2_0_5.342860c5H30VVS\\&scm=20140722.H_2877814._.OR_help-T_cn~zh-V_1#32c3bea6182sy).
    shared_ptr<string> templateConfig_ {};
    // Custom business and callback configurations. For the structure definition, see [UserData configuration](~~357745#section-urj-v3f-0s1~~).
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
