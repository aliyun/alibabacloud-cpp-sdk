// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDOWNLOADINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDOWNLOADINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFileDownloadInfoRequestOption.hpp>
#include <alibabacloud/models/GetFileDownloadInfoRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFileDownloadInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDownloadInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryId, dentryId_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDownloadInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryId, dentryId_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetFileDownloadInfoRequest() = default ;
    GetFileDownloadInfoRequest(const GetFileDownloadInfoRequest &) = default ;
    GetFileDownloadInfoRequest(GetFileDownloadInfoRequest &&) = default ;
    GetFileDownloadInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDownloadInfoRequest() = default ;
    GetFileDownloadInfoRequest& operator=(const GetFileDownloadInfoRequest &) = default ;
    GetFileDownloadInfoRequest& operator=(GetFileDownloadInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dentryId_ != nullptr
        && this->option_ != nullptr && this->spaceId_ != nullptr && this->tenantContext_ != nullptr; };
    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string dentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline GetFileDownloadInfoRequest& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const GetFileDownloadInfoRequestOption & option() const { DARABONBA_PTR_GET_CONST(option_, GetFileDownloadInfoRequestOption) };
    inline GetFileDownloadInfoRequestOption option() { DARABONBA_PTR_GET(option_, GetFileDownloadInfoRequestOption) };
    inline GetFileDownloadInfoRequest& setOption(const GetFileDownloadInfoRequestOption & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline GetFileDownloadInfoRequest& setOption(GetFileDownloadInfoRequestOption && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline GetFileDownloadInfoRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetFileDownloadInfoRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetFileDownloadInfoRequestTenantContext) };
    inline GetFileDownloadInfoRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetFileDownloadInfoRequestTenantContext) };
    inline GetFileDownloadInfoRequest& setTenantContext(const GetFileDownloadInfoRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetFileDownloadInfoRequest& setTenantContext(GetFileDownloadInfoRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<string> dentryId_ = nullptr;
    std::shared_ptr<GetFileDownloadInfoRequestOption> option_ = nullptr;
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<GetFileDownloadInfoRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
