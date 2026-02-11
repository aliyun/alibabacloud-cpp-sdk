// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROTOCOLSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_PROTOCOLSETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ProtocolSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProtocolSettings& obj) { 
      DARABONBA_PTR_TO_JSON(A2AAgentCard, a2AAgentCard_);
      DARABONBA_PTR_TO_JSON(a2aAgentCard, a2aAgentCard_);
      DARABONBA_PTR_TO_JSON(a2aAgentCardUrl, a2aAgentCardUrl_);
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(inputBodyJsonSchema, inputBodyJsonSchema_);
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(outputBodyJsonSchema, outputBodyJsonSchema_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(pathPrefix, pathPrefix_);
      DARABONBA_PTR_TO_JSON(requestContentType, requestContentType_);
      DARABONBA_PTR_TO_JSON(responseContentType, responseContentType_);
    };
    friend void from_json(const Darabonba::Json& j, ProtocolSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(A2AAgentCard, a2AAgentCard_);
      DARABONBA_PTR_FROM_JSON(a2aAgentCard, a2aAgentCard_);
      DARABONBA_PTR_FROM_JSON(a2aAgentCardUrl, a2aAgentCardUrl_);
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(inputBodyJsonSchema, inputBodyJsonSchema_);
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(outputBodyJsonSchema, outputBodyJsonSchema_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(pathPrefix, pathPrefix_);
      DARABONBA_PTR_FROM_JSON(requestContentType, requestContentType_);
      DARABONBA_PTR_FROM_JSON(responseContentType, responseContentType_);
    };
    ProtocolSettings() = default ;
    ProtocolSettings(const ProtocolSettings &) = default ;
    ProtocolSettings(ProtocolSettings &&) = default ;
    ProtocolSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProtocolSettings() = default ;
    ProtocolSettings& operator=(const ProtocolSettings &) = default ;
    ProtocolSettings& operator=(ProtocolSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->a2AAgentCard_ == nullptr
        && this->a2aAgentCard_ == nullptr && this->a2aAgentCardUrl_ == nullptr && this->headers_ == nullptr && this->inputBodyJsonSchema_ == nullptr && this->method_ == nullptr
        && this->name_ == nullptr && this->outputBodyJsonSchema_ == nullptr && this->path_ == nullptr && this->pathPrefix_ == nullptr && this->requestContentType_ == nullptr
        && this->responseContentType_ == nullptr; };
    // a2AAgentCard Field Functions 
    bool hasA2AAgentCard() const { return this->a2AAgentCard_ != nullptr;};
    void deleteA2AAgentCard() { this->a2AAgentCard_ = nullptr;};
    inline string getA2AAgentCard() const { DARABONBA_PTR_GET_DEFAULT(a2AAgentCard_, "") };
    inline ProtocolSettings& setA2AAgentCard(string a2AAgentCard) { DARABONBA_PTR_SET_VALUE(a2AAgentCard_, a2AAgentCard) };


    // a2aAgentCard Field Functions 
    bool hasA2aAgentCard() const { return this->a2aAgentCard_ != nullptr;};
    void deleteA2aAgentCard() { this->a2aAgentCard_ = nullptr;};
    inline string getA2aAgentCard() const { DARABONBA_PTR_GET_DEFAULT(a2aAgentCard_, "") };
    inline ProtocolSettings& setA2aAgentCard(string a2aAgentCard) { DARABONBA_PTR_SET_VALUE(a2aAgentCard_, a2aAgentCard) };


    // a2aAgentCardUrl Field Functions 
    bool hasA2aAgentCardUrl() const { return this->a2aAgentCardUrl_ != nullptr;};
    void deleteA2aAgentCardUrl() { this->a2aAgentCardUrl_ = nullptr;};
    inline string getA2aAgentCardUrl() const { DARABONBA_PTR_GET_DEFAULT(a2aAgentCardUrl_, "") };
    inline ProtocolSettings& setA2aAgentCardUrl(string a2aAgentCardUrl) { DARABONBA_PTR_SET_VALUE(a2aAgentCardUrl_, a2aAgentCardUrl) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline string getHeaders() const { DARABONBA_PTR_GET_DEFAULT(headers_, "") };
    inline ProtocolSettings& setHeaders(string headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };


    // inputBodyJsonSchema Field Functions 
    bool hasInputBodyJsonSchema() const { return this->inputBodyJsonSchema_ != nullptr;};
    void deleteInputBodyJsonSchema() { this->inputBodyJsonSchema_ = nullptr;};
    inline string getInputBodyJsonSchema() const { DARABONBA_PTR_GET_DEFAULT(inputBodyJsonSchema_, "") };
    inline ProtocolSettings& setInputBodyJsonSchema(string inputBodyJsonSchema) { DARABONBA_PTR_SET_VALUE(inputBodyJsonSchema_, inputBodyJsonSchema) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline ProtocolSettings& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ProtocolSettings& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputBodyJsonSchema Field Functions 
    bool hasOutputBodyJsonSchema() const { return this->outputBodyJsonSchema_ != nullptr;};
    void deleteOutputBodyJsonSchema() { this->outputBodyJsonSchema_ = nullptr;};
    inline string getOutputBodyJsonSchema() const { DARABONBA_PTR_GET_DEFAULT(outputBodyJsonSchema_, "") };
    inline ProtocolSettings& setOutputBodyJsonSchema(string outputBodyJsonSchema) { DARABONBA_PTR_SET_VALUE(outputBodyJsonSchema_, outputBodyJsonSchema) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ProtocolSettings& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // pathPrefix Field Functions 
    bool hasPathPrefix() const { return this->pathPrefix_ != nullptr;};
    void deletePathPrefix() { this->pathPrefix_ = nullptr;};
    inline string getPathPrefix() const { DARABONBA_PTR_GET_DEFAULT(pathPrefix_, "") };
    inline ProtocolSettings& setPathPrefix(string pathPrefix) { DARABONBA_PTR_SET_VALUE(pathPrefix_, pathPrefix) };


    // requestContentType Field Functions 
    bool hasRequestContentType() const { return this->requestContentType_ != nullptr;};
    void deleteRequestContentType() { this->requestContentType_ = nullptr;};
    inline string getRequestContentType() const { DARABONBA_PTR_GET_DEFAULT(requestContentType_, "") };
    inline ProtocolSettings& setRequestContentType(string requestContentType) { DARABONBA_PTR_SET_VALUE(requestContentType_, requestContentType) };


    // responseContentType Field Functions 
    bool hasResponseContentType() const { return this->responseContentType_ != nullptr;};
    void deleteResponseContentType() { this->responseContentType_ = nullptr;};
    inline string getResponseContentType() const { DARABONBA_PTR_GET_DEFAULT(responseContentType_, "") };
    inline ProtocolSettings& setResponseContentType(string responseContentType) { DARABONBA_PTR_SET_VALUE(responseContentType_, responseContentType) };


  protected:
    // A2A Agent Card
    shared_ptr<string> a2AAgentCard_ {};
    shared_ptr<string> a2aAgentCard_ {};
    shared_ptr<string> a2aAgentCardUrl_ {};
    // 请求头
    shared_ptr<string> headers_ {};
    // 请求体JSON模式
    shared_ptr<string> inputBodyJsonSchema_ {};
    // HTTP方法
    shared_ptr<string> method_ {};
    // 协议名称
    shared_ptr<string> name_ {};
    // 响应体JSON模式
    shared_ptr<string> outputBodyJsonSchema_ {};
    // 协议路径
    shared_ptr<string> path_ {};
    // 协议路径前缀
    shared_ptr<string> pathPrefix_ {};
    // 请求内容类型
    shared_ptr<string> requestContentType_ {};
    // 响应内容类型
    shared_ptr<string> responseContentType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
