// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIMCPSERVERUSERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPIMCPSERVERUSERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetApiMcpServerUserConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiMcpServerUserConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(enablePublicAccess, enablePublicAccess_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vpcWhitelists, vpcWhitelists_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiMcpServerUserConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(enablePublicAccess, enablePublicAccess_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vpcWhitelists, vpcWhitelists_);
    };
    GetApiMcpServerUserConfigResponseBody() = default ;
    GetApiMcpServerUserConfigResponseBody(const GetApiMcpServerUserConfigResponseBody &) = default ;
    GetApiMcpServerUserConfigResponseBody(GetApiMcpServerUserConfigResponseBody &&) = default ;
    GetApiMcpServerUserConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiMcpServerUserConfigResponseBody() = default ;
    GetApiMcpServerUserConfigResponseBody& operator=(const GetApiMcpServerUserConfigResponseBody &) = default ;
    GetApiMcpServerUserConfigResponseBody& operator=(GetApiMcpServerUserConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->enablePublicAccess_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->requestId_ == nullptr && this->vpcWhitelists_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetApiMcpServerUserConfigResponseBody& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // enablePublicAccess Field Functions 
    bool hasEnablePublicAccess() const { return this->enablePublicAccess_ != nullptr;};
    void deleteEnablePublicAccess() { this->enablePublicAccess_ = nullptr;};
    inline bool getEnablePublicAccess() const { DARABONBA_PTR_GET_DEFAULT(enablePublicAccess_, false) };
    inline GetApiMcpServerUserConfigResponseBody& setEnablePublicAccess(bool enablePublicAccess) { DARABONBA_PTR_SET_VALUE(enablePublicAccess_, enablePublicAccess) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetApiMcpServerUserConfigResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetApiMcpServerUserConfigResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApiMcpServerUserConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcWhitelists Field Functions 
    bool hasVpcWhitelists() const { return this->vpcWhitelists_ != nullptr;};
    void deleteVpcWhitelists() { this->vpcWhitelists_ = nullptr;};
    inline const vector<string> & getVpcWhitelists() const { DARABONBA_PTR_GET_CONST(vpcWhitelists_, vector<string>) };
    inline vector<string> getVpcWhitelists() { DARABONBA_PTR_GET(vpcWhitelists_, vector<string>) };
    inline GetApiMcpServerUserConfigResponseBody& setVpcWhitelists(const vector<string> & vpcWhitelists) { DARABONBA_PTR_SET_VALUE(vpcWhitelists_, vpcWhitelists) };
    inline GetApiMcpServerUserConfigResponseBody& setVpcWhitelists(vector<string> && vpcWhitelists) { DARABONBA_PTR_SET_RVALUE(vpcWhitelists_, vpcWhitelists) };


  protected:
    // The ID of your Alibaba Cloud account.
    shared_ptr<string> accountId_ {};
    // Specifies whether to enable public network access for all API MCP Servers, including system MCP Servers, under your account. By default, this feature is enabled. If you disable it, you can access the servers only through VPC domain names.
    shared_ptr<bool> enablePublicAccess_ {};
    // The time when the configuration was created.
    shared_ptr<string> gmtCreate_ {};
    // The time when the configuration was last updated.
    shared_ptr<string> gmtModified_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The whitelist of source VPCs that are allowed to send requests after public network access is disabled. If you do not set this parameter or leave it empty, requests from all sources are allowed.
    shared_ptr<vector<string>> vpcWhitelists_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
