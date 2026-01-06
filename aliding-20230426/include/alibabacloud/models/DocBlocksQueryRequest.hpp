// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCBLOCKSQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCBLOCKSQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DocBlocksQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocBlocksQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockType, blockType_);
      DARABONBA_PTR_TO_JSON(DocKey, docKey_);
      DARABONBA_PTR_TO_JSON(EndIndex, endIndex_);
      DARABONBA_PTR_TO_JSON(StartIndex, startIndex_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, DocBlocksQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
      DARABONBA_PTR_FROM_JSON(DocKey, docKey_);
      DARABONBA_PTR_FROM_JSON(EndIndex, endIndex_);
      DARABONBA_PTR_FROM_JSON(StartIndex, startIndex_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    DocBlocksQueryRequest() = default ;
    DocBlocksQueryRequest(const DocBlocksQueryRequest &) = default ;
    DocBlocksQueryRequest(DocBlocksQueryRequest &&) = default ;
    DocBlocksQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocBlocksQueryRequest() = default ;
    DocBlocksQueryRequest& operator=(const DocBlocksQueryRequest &) = default ;
    DocBlocksQueryRequest& operator=(DocBlocksQueryRequest &&) = default ;
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

    virtual bool empty() const override { return this->blockType_ == nullptr
        && this->docKey_ == nullptr && this->endIndex_ == nullptr && this->startIndex_ == nullptr && this->tenantContext_ == nullptr; };
    // blockType Field Functions 
    bool hasBlockType() const { return this->blockType_ != nullptr;};
    void deleteBlockType() { this->blockType_ = nullptr;};
    inline string getBlockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, "") };
    inline DocBlocksQueryRequest& setBlockType(string blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


    // docKey Field Functions 
    bool hasDocKey() const { return this->docKey_ != nullptr;};
    void deleteDocKey() { this->docKey_ = nullptr;};
    inline string getDocKey() const { DARABONBA_PTR_GET_DEFAULT(docKey_, "") };
    inline DocBlocksQueryRequest& setDocKey(string docKey) { DARABONBA_PTR_SET_VALUE(docKey_, docKey) };


    // endIndex Field Functions 
    bool hasEndIndex() const { return this->endIndex_ != nullptr;};
    void deleteEndIndex() { this->endIndex_ = nullptr;};
    inline int32_t getEndIndex() const { DARABONBA_PTR_GET_DEFAULT(endIndex_, 0) };
    inline DocBlocksQueryRequest& setEndIndex(int32_t endIndex) { DARABONBA_PTR_SET_VALUE(endIndex_, endIndex) };


    // startIndex Field Functions 
    bool hasStartIndex() const { return this->startIndex_ != nullptr;};
    void deleteStartIndex() { this->startIndex_ = nullptr;};
    inline int32_t getStartIndex() const { DARABONBA_PTR_GET_DEFAULT(startIndex_, 0) };
    inline DocBlocksQueryRequest& setStartIndex(int32_t startIndex) { DARABONBA_PTR_SET_VALUE(startIndex_, startIndex) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DocBlocksQueryRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DocBlocksQueryRequest::TenantContext) };
    inline DocBlocksQueryRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, DocBlocksQueryRequest::TenantContext) };
    inline DocBlocksQueryRequest& setTenantContext(const DocBlocksQueryRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DocBlocksQueryRequest& setTenantContext(DocBlocksQueryRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    shared_ptr<string> blockType_ {};
    // This parameter is required.
    shared_ptr<string> docKey_ {};
    shared_ptr<int32_t> endIndex_ {};
    shared_ptr<int32_t> startIndex_ {};
    shared_ptr<DocBlocksQueryRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
