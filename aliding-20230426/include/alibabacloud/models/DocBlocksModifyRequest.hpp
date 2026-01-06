// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCBLOCKSMODIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCBLOCKSMODIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->blockId_ == nullptr
        && this->dentryUuid_ == nullptr && this->element_ == nullptr && this->tenantContext_ == nullptr; };
    // blockId Field Functions 
    bool hasBlockId() const { return this->blockId_ != nullptr;};
    void deleteBlockId() { this->blockId_ = nullptr;};
    inline string getBlockId() const { DARABONBA_PTR_GET_DEFAULT(blockId_, "") };
    inline DocBlocksModifyRequest& setBlockId(string blockId) { DARABONBA_PTR_SET_VALUE(blockId_, blockId) };


    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string getDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline DocBlocksModifyRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // element Field Functions 
    bool hasElement() const { return this->element_ != nullptr;};
    void deleteElement() { this->element_ = nullptr;};
    inline     const Darabonba::Json & getElement() const { DARABONBA_GET(element_) };
    Darabonba::Json & getElement() { DARABONBA_GET(element_) };
    inline DocBlocksModifyRequest& setElement(const Darabonba::Json & element) { DARABONBA_SET_VALUE(element_, element) };
    inline DocBlocksModifyRequest& setElement(Darabonba::Json && element) { DARABONBA_SET_RVALUE(element_, element) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DocBlocksModifyRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DocBlocksModifyRequest::TenantContext) };
    inline DocBlocksModifyRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, DocBlocksModifyRequest::TenantContext) };
    inline DocBlocksModifyRequest& setTenantContext(const DocBlocksModifyRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DocBlocksModifyRequest& setTenantContext(DocBlocksModifyRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> blockId_ {};
    // This parameter is required.
    shared_ptr<string> dentryUuid_ {};
    // This parameter is required.
    Darabonba::Json element_ {};
    shared_ptr<DocBlocksModifyRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
