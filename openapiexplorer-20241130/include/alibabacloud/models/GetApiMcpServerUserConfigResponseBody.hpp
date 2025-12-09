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
        && return this->enablePublicAccess_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->requestId_ == nullptr && return this->vpcWhitelists_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetApiMcpServerUserConfigResponseBody& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // enablePublicAccess Field Functions 
    bool hasEnablePublicAccess() const { return this->enablePublicAccess_ != nullptr;};
    void deleteEnablePublicAccess() { this->enablePublicAccess_ = nullptr;};
    inline bool enablePublicAccess() const { DARABONBA_PTR_GET_DEFAULT(enablePublicAccess_, false) };
    inline GetApiMcpServerUserConfigResponseBody& setEnablePublicAccess(bool enablePublicAccess) { DARABONBA_PTR_SET_VALUE(enablePublicAccess_, enablePublicAccess) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetApiMcpServerUserConfigResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetApiMcpServerUserConfigResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApiMcpServerUserConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcWhitelists Field Functions 
    bool hasVpcWhitelists() const { return this->vpcWhitelists_ != nullptr;};
    void deleteVpcWhitelists() { this->vpcWhitelists_ = nullptr;};
    inline const vector<string> & vpcWhitelists() const { DARABONBA_PTR_GET_CONST(vpcWhitelists_, vector<string>) };
    inline vector<string> vpcWhitelists() { DARABONBA_PTR_GET(vpcWhitelists_, vector<string>) };
    inline GetApiMcpServerUserConfigResponseBody& setVpcWhitelists(const vector<string> & vpcWhitelists) { DARABONBA_PTR_SET_VALUE(vpcWhitelists_, vpcWhitelists) };
    inline GetApiMcpServerUserConfigResponseBody& setVpcWhitelists(vector<string> && vpcWhitelists) { DARABONBA_PTR_SET_RVALUE(vpcWhitelists_, vpcWhitelists) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<bool> enablePublicAccess_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> vpcWhitelists_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
