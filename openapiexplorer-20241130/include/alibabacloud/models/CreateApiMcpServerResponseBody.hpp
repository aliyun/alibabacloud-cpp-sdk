// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIMCPSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIMCPSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class CreateApiMcpServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiMcpServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(urls, urls_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiMcpServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(urls, urls_);
    };
    CreateApiMcpServerResponseBody() = default ;
    CreateApiMcpServerResponseBody(const CreateApiMcpServerResponseBody &) = default ;
    CreateApiMcpServerResponseBody(CreateApiMcpServerResponseBody &&) = default ;
    CreateApiMcpServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiMcpServerResponseBody() = default ;
    CreateApiMcpServerResponseBody& operator=(const CreateApiMcpServerResponseBody &) = default ;
    CreateApiMcpServerResponseBody& operator=(CreateApiMcpServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Urls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Urls& obj) { 
        DARABONBA_PTR_TO_JSON(mcp, mcp_);
        DARABONBA_PTR_TO_JSON(sse, sse_);
        DARABONBA_PTR_TO_JSON(vpcMcp, vpcMcp_);
        DARABONBA_PTR_TO_JSON(vpcSse, vpcSse_);
      };
      friend void from_json(const Darabonba::Json& j, Urls& obj) { 
        DARABONBA_PTR_FROM_JSON(mcp, mcp_);
        DARABONBA_PTR_FROM_JSON(sse, sse_);
        DARABONBA_PTR_FROM_JSON(vpcMcp, vpcMcp_);
        DARABONBA_PTR_FROM_JSON(vpcSse, vpcSse_);
      };
      Urls() = default ;
      Urls(const Urls &) = default ;
      Urls(Urls &&) = default ;
      Urls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Urls() = default ;
      Urls& operator=(const Urls &) = default ;
      Urls& operator=(Urls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mcp_ == nullptr
        && this->sse_ == nullptr && this->vpcMcp_ == nullptr && this->vpcSse_ == nullptr; };
      // mcp Field Functions 
      bool hasMcp() const { return this->mcp_ != nullptr;};
      void deleteMcp() { this->mcp_ = nullptr;};
      inline string getMcp() const { DARABONBA_PTR_GET_DEFAULT(mcp_, "") };
      inline Urls& setMcp(string mcp) { DARABONBA_PTR_SET_VALUE(mcp_, mcp) };


      // sse Field Functions 
      bool hasSse() const { return this->sse_ != nullptr;};
      void deleteSse() { this->sse_ = nullptr;};
      inline string getSse() const { DARABONBA_PTR_GET_DEFAULT(sse_, "") };
      inline Urls& setSse(string sse) { DARABONBA_PTR_SET_VALUE(sse_, sse) };


      // vpcMcp Field Functions 
      bool hasVpcMcp() const { return this->vpcMcp_ != nullptr;};
      void deleteVpcMcp() { this->vpcMcp_ = nullptr;};
      inline string getVpcMcp() const { DARABONBA_PTR_GET_DEFAULT(vpcMcp_, "") };
      inline Urls& setVpcMcp(string vpcMcp) { DARABONBA_PTR_SET_VALUE(vpcMcp_, vpcMcp) };


      // vpcSse Field Functions 
      bool hasVpcSse() const { return this->vpcSse_ != nullptr;};
      void deleteVpcSse() { this->vpcSse_ = nullptr;};
      inline string getVpcSse() const { DARABONBA_PTR_GET_DEFAULT(vpcSse_, "") };
      inline Urls& setVpcSse(string vpcSse) { DARABONBA_PTR_SET_VALUE(vpcSse_, vpcSse) };


    protected:
      // The connection information for the streamable HTTP protocol. This is the recommended protocol.
      shared_ptr<string> mcp_ {};
      // The connection information for the Server-Sent Events (SSE) protocol.
      shared_ptr<string> sse_ {};
      // The endpoint of the streamable HTTP protocol in a VPC.
      shared_ptr<string> vpcMcp_ {};
      // The endpoint of the SSE protocol in a VPC.
      shared_ptr<string> vpcSse_ {};
    };

    virtual bool empty() const override { return this->id_ == nullptr
        && this->requestId_ == nullptr && this->urls_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateApiMcpServerResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApiMcpServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // urls Field Functions 
    bool hasUrls() const { return this->urls_ != nullptr;};
    void deleteUrls() { this->urls_ = nullptr;};
    inline const CreateApiMcpServerResponseBody::Urls & getUrls() const { DARABONBA_PTR_GET_CONST(urls_, CreateApiMcpServerResponseBody::Urls) };
    inline CreateApiMcpServerResponseBody::Urls getUrls() { DARABONBA_PTR_GET(urls_, CreateApiMcpServerResponseBody::Urls) };
    inline CreateApiMcpServerResponseBody& setUrls(const CreateApiMcpServerResponseBody::Urls & urls) { DARABONBA_PTR_SET_VALUE(urls_, urls) };
    inline CreateApiMcpServerResponseBody& setUrls(CreateApiMcpServerResponseBody::Urls && urls) { DARABONBA_PTR_SET_RVALUE(urls_, urls) };


  protected:
    // The ID of the successfully created API MCP service.
    shared_ptr<string> id_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The connection information for the API MCP service.
    shared_ptr<CreateApiMcpServerResponseBody::Urls> urls_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
