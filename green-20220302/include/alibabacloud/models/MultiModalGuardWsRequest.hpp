// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALGUARDWSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALGUARDWSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultiModalGuardWsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiModalGuardWsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, MultiModalGuardWsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    MultiModalGuardWsRequest() = default ;
    MultiModalGuardWsRequest(const MultiModalGuardWsRequest &) = default ;
    MultiModalGuardWsRequest(MultiModalGuardWsRequest &&) = default ;
    MultiModalGuardWsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiModalGuardWsRequest() = default ;
    MultiModalGuardWsRequest& operator=(const MultiModalGuardWsRequest &) = default ;
    MultiModalGuardWsRequest& operator=(MultiModalGuardWsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelType_ == nullptr
        && this->protocolType_ == nullptr && this->service_ == nullptr && this->serviceParameters_ == nullptr; };
    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline MultiModalGuardWsRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline MultiModalGuardWsRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline MultiModalGuardWsRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string getServiceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline MultiModalGuardWsRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    // The model type. Valid values:
    // 
    // - LLM
    shared_ptr<string> modelType_ {};
    // The protocol type. Valid values:
    // 
    // - OpenAI
    // - DashScope
    // - Anthropic
    shared_ptr<string> protocolType_ {};
    // The moderation service category. Valid values:
    // 
    // - query_security_check_pro: AI input content security detection (pro edition).
    // - response_security_check_pro: AI-generated content security detection (pro edition).
    // - img_query_security_check: AIGC input image security detection.
    // - img_response_security_check: AIGC output image security detection.
    // - text_img_mix_guard: Multimodal (text + image) hybrid security detection.
    // - file_security_sync_check: AIGC input or output file security detection.
    // - text_file_sec_sync_check: Multimodal (text + file) real-time security detection.
    shared_ptr<string> service_ {};
    // The parameter set required by the moderation service, in JSON string format. The input parameter for text content is content (String), the input parameter for image content is imageUrls (JSONArray), and the input parameter for file content is fileUrls (JSONArray).
    shared_ptr<string> serviceParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
