// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCBLOCKSDELETESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCBLOCKSDELETESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DocBlocksDeleteShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocBlocksDeleteShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockId, blockId_);
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DocBlocksDeleteShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockId, blockId_);
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    DocBlocksDeleteShrinkRequest() = default ;
    DocBlocksDeleteShrinkRequest(const DocBlocksDeleteShrinkRequest &) = default ;
    DocBlocksDeleteShrinkRequest(DocBlocksDeleteShrinkRequest &&) = default ;
    DocBlocksDeleteShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocBlocksDeleteShrinkRequest() = default ;
    DocBlocksDeleteShrinkRequest& operator=(const DocBlocksDeleteShrinkRequest &) = default ;
    DocBlocksDeleteShrinkRequest& operator=(DocBlocksDeleteShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockId_ == nullptr
        && return this->dentryUuid_ == nullptr && return this->tenantContextShrink_ == nullptr; };
    // blockId Field Functions 
    bool hasBlockId() const { return this->blockId_ != nullptr;};
    void deleteBlockId() { this->blockId_ = nullptr;};
    inline string blockId() const { DARABONBA_PTR_GET_DEFAULT(blockId_, "") };
    inline DocBlocksDeleteShrinkRequest& setBlockId(string blockId) { DARABONBA_PTR_SET_VALUE(blockId_, blockId) };


    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline DocBlocksDeleteShrinkRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline DocBlocksDeleteShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> blockId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dentryUuid_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
