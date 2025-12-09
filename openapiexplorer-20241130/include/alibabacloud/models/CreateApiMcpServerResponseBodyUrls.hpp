// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIMCPSERVERRESPONSEBODYURLS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIMCPSERVERRESPONSEBODYURLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class CreateApiMcpServerResponseBodyUrls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiMcpServerResponseBodyUrls& obj) { 
      DARABONBA_PTR_TO_JSON(mcp, mcp_);
      DARABONBA_PTR_TO_JSON(sse, sse_);
      DARABONBA_PTR_TO_JSON(vpcMcp, vpcMcp_);
      DARABONBA_PTR_TO_JSON(vpcSse, vpcSse_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiMcpServerResponseBodyUrls& obj) { 
      DARABONBA_PTR_FROM_JSON(mcp, mcp_);
      DARABONBA_PTR_FROM_JSON(sse, sse_);
      DARABONBA_PTR_FROM_JSON(vpcMcp, vpcMcp_);
      DARABONBA_PTR_FROM_JSON(vpcSse, vpcSse_);
    };
    CreateApiMcpServerResponseBodyUrls() = default ;
    CreateApiMcpServerResponseBodyUrls(const CreateApiMcpServerResponseBodyUrls &) = default ;
    CreateApiMcpServerResponseBodyUrls(CreateApiMcpServerResponseBodyUrls &&) = default ;
    CreateApiMcpServerResponseBodyUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiMcpServerResponseBodyUrls() = default ;
    CreateApiMcpServerResponseBodyUrls& operator=(const CreateApiMcpServerResponseBodyUrls &) = default ;
    CreateApiMcpServerResponseBodyUrls& operator=(CreateApiMcpServerResponseBodyUrls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mcp_ == nullptr
        && return this->sse_ == nullptr && return this->vpcMcp_ == nullptr && return this->vpcSse_ == nullptr; };
    // mcp Field Functions 
    bool hasMcp() const { return this->mcp_ != nullptr;};
    void deleteMcp() { this->mcp_ = nullptr;};
    inline string mcp() const { DARABONBA_PTR_GET_DEFAULT(mcp_, "") };
    inline CreateApiMcpServerResponseBodyUrls& setMcp(string mcp) { DARABONBA_PTR_SET_VALUE(mcp_, mcp) };


    // sse Field Functions 
    bool hasSse() const { return this->sse_ != nullptr;};
    void deleteSse() { this->sse_ = nullptr;};
    inline string sse() const { DARABONBA_PTR_GET_DEFAULT(sse_, "") };
    inline CreateApiMcpServerResponseBodyUrls& setSse(string sse) { DARABONBA_PTR_SET_VALUE(sse_, sse) };


    // vpcMcp Field Functions 
    bool hasVpcMcp() const { return this->vpcMcp_ != nullptr;};
    void deleteVpcMcp() { this->vpcMcp_ = nullptr;};
    inline string vpcMcp() const { DARABONBA_PTR_GET_DEFAULT(vpcMcp_, "") };
    inline CreateApiMcpServerResponseBodyUrls& setVpcMcp(string vpcMcp) { DARABONBA_PTR_SET_VALUE(vpcMcp_, vpcMcp) };


    // vpcSse Field Functions 
    bool hasVpcSse() const { return this->vpcSse_ != nullptr;};
    void deleteVpcSse() { this->vpcSse_ = nullptr;};
    inline string vpcSse() const { DARABONBA_PTR_GET_DEFAULT(vpcSse_, "") };
    inline CreateApiMcpServerResponseBodyUrls& setVpcSse(string vpcSse) { DARABONBA_PTR_SET_VALUE(vpcSse_, vpcSse) };


  protected:
    std::shared_ptr<string> mcp_ = nullptr;
    std::shared_ptr<string> sse_ = nullptr;
    std::shared_ptr<string> vpcMcp_ = nullptr;
    std::shared_ptr<string> vpcSse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
