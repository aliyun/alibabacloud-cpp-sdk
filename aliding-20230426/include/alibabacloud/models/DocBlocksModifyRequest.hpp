// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCBLOCKSMODIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCBLOCKSMODIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DocBlocksModifyRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DocBlocksModifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocBlocksModifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockId, blockId_);
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_ANY_TO_JSON(Element, element_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, DocBlocksModifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockId, blockId_);
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_ANY_FROM_JSON(Element, element_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    DocBlocksModifyRequest() = default ;
    DocBlocksModifyRequest(const DocBlocksModifyRequest &) = default ;
    DocBlocksModifyRequest(DocBlocksModifyRequest &&) = default ;
    DocBlocksModifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocBlocksModifyRequest() = default ;
    DocBlocksModifyRequest& operator=(const DocBlocksModifyRequest &) = default ;
    DocBlocksModifyRequest& operator=(DocBlocksModifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockId_ == nullptr
        && return this->dentryUuid_ == nullptr && return this->element_ == nullptr && return this->tenantContext_ == nullptr; };
    // blockId Field Functions 
    bool hasBlockId() const { return this->blockId_ != nullptr;};
    void deleteBlockId() { this->blockId_ = nullptr;};
    inline string blockId() const { DARABONBA_PTR_GET_DEFAULT(blockId_, "") };
    inline DocBlocksModifyRequest& setBlockId(string blockId) { DARABONBA_PTR_SET_VALUE(blockId_, blockId) };


    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline DocBlocksModifyRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // element Field Functions 
    bool hasElement() const { return this->element_ != nullptr;};
    void deleteElement() { this->element_ = nullptr;};
    inline     const Darabonba::Json & element() const { DARABONBA_GET(element_) };
    Darabonba::Json & element() { DARABONBA_GET(element_) };
    inline DocBlocksModifyRequest& setElement(const Darabonba::Json & element) { DARABONBA_SET_VALUE(element_, element) };
    inline DocBlocksModifyRequest& setElement(Darabonba::Json & element) { DARABONBA_SET_RVALUE(element_, element) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DocBlocksModifyRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DocBlocksModifyRequestTenantContext) };
    inline DocBlocksModifyRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, DocBlocksModifyRequestTenantContext) };
    inline DocBlocksModifyRequest& setTenantContext(const DocBlocksModifyRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DocBlocksModifyRequest& setTenantContext(DocBlocksModifyRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> blockId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dentryUuid_ = nullptr;
    // This parameter is required.
    Darabonba::Json element_ = nullptr;
    std::shared_ptr<DocBlocksModifyRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
