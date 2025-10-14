// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCBLOCKSDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCBLOCKSDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DocBlocksDeleteRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DocBlocksDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocBlocksDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockId, blockId_);
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, DocBlocksDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockId, blockId_);
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    DocBlocksDeleteRequest() = default ;
    DocBlocksDeleteRequest(const DocBlocksDeleteRequest &) = default ;
    DocBlocksDeleteRequest(DocBlocksDeleteRequest &&) = default ;
    DocBlocksDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocBlocksDeleteRequest() = default ;
    DocBlocksDeleteRequest& operator=(const DocBlocksDeleteRequest &) = default ;
    DocBlocksDeleteRequest& operator=(DocBlocksDeleteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockId_ == nullptr
        && return this->dentryUuid_ == nullptr && return this->tenantContext_ == nullptr; };
    // blockId Field Functions 
    bool hasBlockId() const { return this->blockId_ != nullptr;};
    void deleteBlockId() { this->blockId_ = nullptr;};
    inline string blockId() const { DARABONBA_PTR_GET_DEFAULT(blockId_, "") };
    inline DocBlocksDeleteRequest& setBlockId(string blockId) { DARABONBA_PTR_SET_VALUE(blockId_, blockId) };


    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline DocBlocksDeleteRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DocBlocksDeleteRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DocBlocksDeleteRequestTenantContext) };
    inline DocBlocksDeleteRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, DocBlocksDeleteRequestTenantContext) };
    inline DocBlocksDeleteRequest& setTenantContext(const DocBlocksDeleteRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DocBlocksDeleteRequest& setTenantContext(DocBlocksDeleteRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> blockId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dentryUuid_ = nullptr;
    std::shared_ptr<DocBlocksDeleteRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
