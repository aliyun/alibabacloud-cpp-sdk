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
        && return this->editingConfig_ == nullptr && return this->inputConfig_ == nullptr && return this->outputConfig_ == nullptr && return this->templateConfig_ == nullptr && return this->userData_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SubmitBatchMediaProducingJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // editingConfig Field Functions 
    bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
    void deleteEditingConfig() { this->editingConfig_ = nullptr;};
    inline string editingConfig() const { DARABONBA_PTR_GET_DEFAULT(editingConfig_, "") };
    inline SubmitBatchMediaProducingJobRequest& setEditingConfig(string editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline string inputConfig() const { DARABONBA_PTR_GET_DEFAULT(inputConfig_, "") };
    inline SubmitBatchMediaProducingJobRequest& setInputConfig(string inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string outputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline SubmitBatchMediaProducingJobRequest& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string templateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline SubmitBatchMediaProducingJobRequest& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitBatchMediaProducingJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The editing configurations. For more information, see [EditingConfig](~~2692547#1be9bba03b7qu~~).
    std::shared_ptr<string> editingConfig_ = nullptr;
    // The input configurations. For more information, see [InputConfig](~~2692547#2faed1559549n~~).
    std::shared_ptr<string> inputConfig_ = nullptr;
    // The output configurations. For more information, see [OutputConfig](~~2692547#447b928fcbuoa~~).
    std::shared_ptr<string> outputConfig_ = nullptr;
    std::shared_ptr<string> templateConfig_ = nullptr;
    // The user-defined data, including the business and callback configurations. For more information, see [UserData](https://help.aliyun.com/document_detail/357745.html).
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
