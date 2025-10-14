// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITMULTIPARTFILEUPLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITMULTIPARTFILEUPLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InitMultipartFileUploadRequestOption.hpp>
#include <alibabacloud/models/InitMultipartFileUploadRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InitMultipartFileUploadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitMultipartFileUploadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(ParentDentryUuid, parentDentryUuid_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, InitMultipartFileUploadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(ParentDentryUuid, parentDentryUuid_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    InitMultipartFileUploadRequest() = default ;
    InitMultipartFileUploadRequest(const InitMultipartFileUploadRequest &) = default ;
    InitMultipartFileUploadRequest(InitMultipartFileUploadRequest &&) = default ;
    InitMultipartFileUploadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitMultipartFileUploadRequest() = default ;
    InitMultipartFileUploadRequest& operator=(const InitMultipartFileUploadRequest &) = default ;
    InitMultipartFileUploadRequest& operator=(InitMultipartFileUploadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->option_ == nullptr
        && return this->parentDentryUuid_ == nullptr && return this->tenantContext_ == nullptr; };
    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const InitMultipartFileUploadRequestOption & option() const { DARABONBA_PTR_GET_CONST(option_, InitMultipartFileUploadRequestOption) };
    inline InitMultipartFileUploadRequestOption option() { DARABONBA_PTR_GET(option_, InitMultipartFileUploadRequestOption) };
    inline InitMultipartFileUploadRequest& setOption(const InitMultipartFileUploadRequestOption & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline InitMultipartFileUploadRequest& setOption(InitMultipartFileUploadRequestOption && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // parentDentryUuid Field Functions 
    bool hasParentDentryUuid() const { return this->parentDentryUuid_ != nullptr;};
    void deleteParentDentryUuid() { this->parentDentryUuid_ = nullptr;};
    inline string parentDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(parentDentryUuid_, "") };
    inline InitMultipartFileUploadRequest& setParentDentryUuid(string parentDentryUuid) { DARABONBA_PTR_SET_VALUE(parentDentryUuid_, parentDentryUuid) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const InitMultipartFileUploadRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, InitMultipartFileUploadRequestTenantContext) };
    inline InitMultipartFileUploadRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, InitMultipartFileUploadRequestTenantContext) };
    inline InitMultipartFileUploadRequest& setTenantContext(const InitMultipartFileUploadRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline InitMultipartFileUploadRequest& setTenantContext(InitMultipartFileUploadRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<InitMultipartFileUploadRequestOption> option_ = nullptr;
    std::shared_ptr<string> parentDentryUuid_ = nullptr;
    std::shared_ptr<InitMultipartFileUploadRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
