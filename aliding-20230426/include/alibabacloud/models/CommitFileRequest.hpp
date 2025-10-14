// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMITFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMMITFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CommitFileRequestOption.hpp>
#include <alibabacloud/models/CommitFileRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CommitFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommitFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(ParentDentryUuid, parentDentryUuid_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(UploadKey, uploadKey_);
    };
    friend void from_json(const Darabonba::Json& j, CommitFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(ParentDentryUuid, parentDentryUuid_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(UploadKey, uploadKey_);
    };
    CommitFileRequest() = default ;
    CommitFileRequest(const CommitFileRequest &) = default ;
    CommitFileRequest(CommitFileRequest &&) = default ;
    CommitFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommitFileRequest() = default ;
    CommitFileRequest& operator=(const CommitFileRequest &) = default ;
    CommitFileRequest& operator=(CommitFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->option_ == nullptr && return this->parentDentryUuid_ == nullptr && return this->tenantContext_ == nullptr && return this->uploadKey_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CommitFileRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const CommitFileRequestOption & option() const { DARABONBA_PTR_GET_CONST(option_, CommitFileRequestOption) };
    inline CommitFileRequestOption option() { DARABONBA_PTR_GET(option_, CommitFileRequestOption) };
    inline CommitFileRequest& setOption(const CommitFileRequestOption & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline CommitFileRequest& setOption(CommitFileRequestOption && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // parentDentryUuid Field Functions 
    bool hasParentDentryUuid() const { return this->parentDentryUuid_ != nullptr;};
    void deleteParentDentryUuid() { this->parentDentryUuid_ = nullptr;};
    inline string parentDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(parentDentryUuid_, "") };
    inline CommitFileRequest& setParentDentryUuid(string parentDentryUuid) { DARABONBA_PTR_SET_VALUE(parentDentryUuid_, parentDentryUuid) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CommitFileRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CommitFileRequestTenantContext) };
    inline CommitFileRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CommitFileRequestTenantContext) };
    inline CommitFileRequest& setTenantContext(const CommitFileRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CommitFileRequest& setTenantContext(CommitFileRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // uploadKey Field Functions 
    bool hasUploadKey() const { return this->uploadKey_ != nullptr;};
    void deleteUploadKey() { this->uploadKey_ = nullptr;};
    inline string uploadKey() const { DARABONBA_PTR_GET_DEFAULT(uploadKey_, "") };
    inline CommitFileRequest& setUploadKey(string uploadKey) { DARABONBA_PTR_SET_VALUE(uploadKey_, uploadKey) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<CommitFileRequestOption> option_ = nullptr;
    std::shared_ptr<string> parentDentryUuid_ = nullptr;
    std::shared_ptr<CommitFileRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<string> uploadKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
