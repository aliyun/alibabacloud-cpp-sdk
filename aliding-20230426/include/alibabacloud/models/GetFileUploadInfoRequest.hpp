// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEUPLOADINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILEUPLOADINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFileUploadInfoRequestOption.hpp>
#include <alibabacloud/models/GetFileUploadInfoRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFileUploadInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileUploadInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(ParentDentryUuid, parentDentryUuid_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileUploadInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(ParentDentryUuid, parentDentryUuid_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetFileUploadInfoRequest() = default ;
    GetFileUploadInfoRequest(const GetFileUploadInfoRequest &) = default ;
    GetFileUploadInfoRequest(GetFileUploadInfoRequest &&) = default ;
    GetFileUploadInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileUploadInfoRequest() = default ;
    GetFileUploadInfoRequest& operator=(const GetFileUploadInfoRequest &) = default ;
    GetFileUploadInfoRequest& operator=(GetFileUploadInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->option_ == nullptr
        && return this->parentDentryUuid_ == nullptr && return this->protocol_ == nullptr && return this->tenantContext_ == nullptr; };
    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const GetFileUploadInfoRequestOption & option() const { DARABONBA_PTR_GET_CONST(option_, GetFileUploadInfoRequestOption) };
    inline GetFileUploadInfoRequestOption option() { DARABONBA_PTR_GET(option_, GetFileUploadInfoRequestOption) };
    inline GetFileUploadInfoRequest& setOption(const GetFileUploadInfoRequestOption & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline GetFileUploadInfoRequest& setOption(GetFileUploadInfoRequestOption && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // parentDentryUuid Field Functions 
    bool hasParentDentryUuid() const { return this->parentDentryUuid_ != nullptr;};
    void deleteParentDentryUuid() { this->parentDentryUuid_ = nullptr;};
    inline string parentDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(parentDentryUuid_, "") };
    inline GetFileUploadInfoRequest& setParentDentryUuid(string parentDentryUuid) { DARABONBA_PTR_SET_VALUE(parentDentryUuid_, parentDentryUuid) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetFileUploadInfoRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetFileUploadInfoRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetFileUploadInfoRequestTenantContext) };
    inline GetFileUploadInfoRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetFileUploadInfoRequestTenantContext) };
    inline GetFileUploadInfoRequest& setTenantContext(const GetFileUploadInfoRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetFileUploadInfoRequest& setTenantContext(GetFileUploadInfoRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<GetFileUploadInfoRequestOption> option_ = nullptr;
    std::shared_ptr<string> parentDentryUuid_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<GetFileUploadInfoRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
