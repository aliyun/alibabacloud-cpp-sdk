// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSCREENMEDIAHIGHLIGHTSJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSCREENMEDIAHIGHLIGHTSJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitScreenMediaHighlightsJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitScreenMediaHighlightsJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitScreenMediaHighlightsJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitScreenMediaHighlightsJobRequest() = default ;
    SubmitScreenMediaHighlightsJobRequest(const SubmitScreenMediaHighlightsJobRequest &) = default ;
    SubmitScreenMediaHighlightsJobRequest(SubmitScreenMediaHighlightsJobRequest &&) = default ;
    SubmitScreenMediaHighlightsJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitScreenMediaHighlightsJobRequest() = default ;
    SubmitScreenMediaHighlightsJobRequest& operator=(const SubmitScreenMediaHighlightsJobRequest &) = default ;
    SubmitScreenMediaHighlightsJobRequest& operator=(SubmitScreenMediaHighlightsJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->editingConfig_ != nullptr
        && this->inputConfig_ != nullptr && this->outputConfig_ != nullptr && this->userData_ != nullptr; };
    // editingConfig Field Functions 
    bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
    void deleteEditingConfig() { this->editingConfig_ = nullptr;};
    inline string editingConfig() const { DARABONBA_PTR_GET_DEFAULT(editingConfig_, "") };
    inline SubmitScreenMediaHighlightsJobRequest& setEditingConfig(string editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline string inputConfig() const { DARABONBA_PTR_GET_DEFAULT(inputConfig_, "") };
    inline SubmitScreenMediaHighlightsJobRequest& setInputConfig(string inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string outputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline SubmitScreenMediaHighlightsJobRequest& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitScreenMediaHighlightsJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The editing configuration. For detailed parameters, see [EditingConfig](~~2863940#9b05519d46e0x~~).
    std::shared_ptr<string> editingConfig_ = nullptr;
    // The input configuration. For detailed parameters, see [InputConfig](~~2863940#dda38bf6ec2pk~~).
    std::shared_ptr<string> inputConfig_ = nullptr;
    // The output configuration. For detailed parameters, see [OutputConfig](~~2863940#4111a373d0xbz~~).
    std::shared_ptr<string> outputConfig_ = nullptr;
    // The user-defined data, including the business and callback configurations. For more information, see [UserData](https://help.aliyun.com/document_detail/357745.html).
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
