// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTFLOWDSLINPUT_HPP_
#define ALIBABACLOUD_MODELS_CONVERTFLOWDSLINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ConvertFlowDSLInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertFlowDSLInput& obj) { 
      DARABONBA_PTR_TO_JSON(dslSource, dslSource_);
      DARABONBA_PTR_TO_JSON(options, options_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertFlowDSLInput& obj) { 
      DARABONBA_PTR_FROM_JSON(dslSource, dslSource_);
      DARABONBA_PTR_FROM_JSON(options, options_);
    };
    ConvertFlowDSLInput() = default ;
    ConvertFlowDSLInput(const ConvertFlowDSLInput &) = default ;
    ConvertFlowDSLInput(ConvertFlowDSLInput &&) = default ;
    ConvertFlowDSLInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertFlowDSLInput() = default ;
    ConvertFlowDSLInput& operator=(const ConvertFlowDSLInput &) = default ;
    ConvertFlowDSLInput& operator=(ConvertFlowDSLInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Options : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Options& obj) { 
        DARABONBA_PTR_TO_JSON(compatibilityCheck, compatibilityCheck_);
        DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
        DARABONBA_PTR_TO_JSON(flowName, flowName_);
        DARABONBA_PTR_TO_JSON(vpcEndpointName, vpcEndpointName_);
      };
      friend void from_json(const Darabonba::Json& j, Options& obj) { 
        DARABONBA_PTR_FROM_JSON(compatibilityCheck, compatibilityCheck_);
        DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
        DARABONBA_PTR_FROM_JSON(flowName, flowName_);
        DARABONBA_PTR_FROM_JSON(vpcEndpointName, vpcEndpointName_);
      };
      Options() = default ;
      Options(const Options &) = default ;
      Options(Options &&) = default ;
      Options(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Options() = default ;
      Options& operator=(const Options &) = default ;
      Options& operator=(Options &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->compatibilityCheck_ == nullptr
        && this->credentialName_ == nullptr && this->flowName_ == nullptr && this->vpcEndpointName_ == nullptr; };
      // compatibilityCheck Field Functions 
      bool hasCompatibilityCheck() const { return this->compatibilityCheck_ != nullptr;};
      void deleteCompatibilityCheck() { this->compatibilityCheck_ = nullptr;};
      inline bool getCompatibilityCheck() const { DARABONBA_PTR_GET_DEFAULT(compatibilityCheck_, false) };
      inline Options& setCompatibilityCheck(bool compatibilityCheck) { DARABONBA_PTR_SET_VALUE(compatibilityCheck_, compatibilityCheck) };


      // credentialName Field Functions 
      bool hasCredentialName() const { return this->credentialName_ != nullptr;};
      void deleteCredentialName() { this->credentialName_ = nullptr;};
      inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
      inline Options& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


      // flowName Field Functions 
      bool hasFlowName() const { return this->flowName_ != nullptr;};
      void deleteFlowName() { this->flowName_ = nullptr;};
      inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
      inline Options& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


      // vpcEndpointName Field Functions 
      bool hasVpcEndpointName() const { return this->vpcEndpointName_ != nullptr;};
      void deleteVpcEndpointName() { this->vpcEndpointName_ = nullptr;};
      inline string getVpcEndpointName() const { DARABONBA_PTR_GET_DEFAULT(vpcEndpointName_, "") };
      inline Options& setVpcEndpointName(string vpcEndpointName) { DARABONBA_PTR_SET_VALUE(vpcEndpointName_, vpcEndpointName) };


    protected:
      // 是否执行兼容性检查，默认为true
      shared_ptr<bool> compatibilityCheck_ {};
      shared_ptr<string> credentialName_ {};
      shared_ptr<string> flowName_ {};
      shared_ptr<string> vpcEndpointName_ {};
    };

    class DslSource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DslSource& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(encoding, encoding_);
        DARABONBA_PTR_TO_JSON(provider, provider_);
      };
      friend void from_json(const Darabonba::Json& j, DslSource& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(encoding, encoding_);
        DARABONBA_PTR_FROM_JSON(provider, provider_);
      };
      DslSource() = default ;
      DslSource(const DslSource &) = default ;
      DslSource(DslSource &&) = default ;
      DslSource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DslSource() = default ;
      DslSource& operator=(const DslSource &) = default ;
      DslSource& operator=(DslSource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->encoding_ == nullptr && this->provider_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline DslSource& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // encoding Field Functions 
      bool hasEncoding() const { return this->encoding_ != nullptr;};
      void deleteEncoding() { this->encoding_ = nullptr;};
      inline string getEncoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
      inline DslSource& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline DslSource& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    protected:
      // DSL内容，可以是原始JSON字符串，或根据encoding字段指定的编码格式
      // 
      // This parameter is required.
      shared_ptr<string> content_ {};
      // DSL内容的编码方式。不填表示内容为原始字符串；base64表示内容经过Base64编码；base64+gzip表示内容经过gzip压缩后再Base64编码
      shared_ptr<string> encoding_ {};
      // 源DSL的提供商类型，如：dify、n8n、zapier等
      // 
      // This parameter is required.
      shared_ptr<string> provider_ {};
    };

    virtual bool empty() const override { return this->dslSource_ == nullptr
        && this->options_ == nullptr; };
    // dslSource Field Functions 
    bool hasDslSource() const { return this->dslSource_ != nullptr;};
    void deleteDslSource() { this->dslSource_ = nullptr;};
    inline const ConvertFlowDSLInput::DslSource & getDslSource() const { DARABONBA_PTR_GET_CONST(dslSource_, ConvertFlowDSLInput::DslSource) };
    inline ConvertFlowDSLInput::DslSource getDslSource() { DARABONBA_PTR_GET(dslSource_, ConvertFlowDSLInput::DslSource) };
    inline ConvertFlowDSLInput& setDslSource(const ConvertFlowDSLInput::DslSource & dslSource) { DARABONBA_PTR_SET_VALUE(dslSource_, dslSource) };
    inline ConvertFlowDSLInput& setDslSource(ConvertFlowDSLInput::DslSource && dslSource) { DARABONBA_PTR_SET_RVALUE(dslSource_, dslSource) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const ConvertFlowDSLInput::Options & getOptions() const { DARABONBA_PTR_GET_CONST(options_, ConvertFlowDSLInput::Options) };
    inline ConvertFlowDSLInput::Options getOptions() { DARABONBA_PTR_GET(options_, ConvertFlowDSLInput::Options) };
    inline ConvertFlowDSLInput& setOptions(const ConvertFlowDSLInput::Options & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline ConvertFlowDSLInput& setOptions(ConvertFlowDSLInput::Options && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


  protected:
    // 工作流DSL的来源配置，支持inline和base64两种格式
    // 
    // This parameter is required.
    shared_ptr<ConvertFlowDSLInput::DslSource> dslSource_ {};
    // DSL转换的可选配置参数
    shared_ptr<ConvertFlowDSLInput::Options> options_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
