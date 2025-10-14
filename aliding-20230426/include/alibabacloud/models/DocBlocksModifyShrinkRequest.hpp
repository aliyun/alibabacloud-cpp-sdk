// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCBLOCKSMODIFYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCBLOCKSMODIFYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DocBlocksModifyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocBlocksModifyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockId, blockId_);
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(Element, elementShrink_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DocBlocksModifyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockId, blockId_);
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(Element, elementShrink_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    DocBlocksModifyShrinkRequest() = default ;
    DocBlocksModifyShrinkRequest(const DocBlocksModifyShrinkRequest &) = default ;
    DocBlocksModifyShrinkRequest(DocBlocksModifyShrinkRequest &&) = default ;
    DocBlocksModifyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocBlocksModifyShrinkRequest() = default ;
    DocBlocksModifyShrinkRequest& operator=(const DocBlocksModifyShrinkRequest &) = default ;
    DocBlocksModifyShrinkRequest& operator=(DocBlocksModifyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockId_ == nullptr
        && return this->dentryUuid_ == nullptr && return this->elementShrink_ == nullptr && return this->tenantContextShrink_ == nullptr; };
    // blockId Field Functions 
    bool hasBlockId() const { return this->blockId_ != nullptr;};
    void deleteBlockId() { this->blockId_ = nullptr;};
    inline string blockId() const { DARABONBA_PTR_GET_DEFAULT(blockId_, "") };
    inline DocBlocksModifyShrinkRequest& setBlockId(string blockId) { DARABONBA_PTR_SET_VALUE(blockId_, blockId) };


    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline DocBlocksModifyShrinkRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // elementShrink Field Functions 
    bool hasElementShrink() const { return this->elementShrink_ != nullptr;};
    void deleteElementShrink() { this->elementShrink_ = nullptr;};
    inline string elementShrink() const { DARABONBA_PTR_GET_DEFAULT(elementShrink_, "") };
    inline DocBlocksModifyShrinkRequest& setElementShrink(string elementShrink) { DARABONBA_PTR_SET_VALUE(elementShrink_, elementShrink) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline DocBlocksModifyShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> blockId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dentryUuid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> elementShrink_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
