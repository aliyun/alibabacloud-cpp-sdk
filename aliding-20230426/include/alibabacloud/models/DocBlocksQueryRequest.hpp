// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCBLOCKSQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCBLOCKSQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DocBlocksQueryRequestTenantContext.hpp>
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
    virtual bool empty() const override { this->blockType_ != nullptr
        && this->docKey_ != nullptr && this->endIndex_ != nullptr && this->startIndex_ != nullptr && this->tenantContext_ != nullptr; };
    // blockType Field Functions 
    bool hasBlockType() const { return this->blockType_ != nullptr;};
    void deleteBlockType() { this->blockType_ = nullptr;};
    inline string blockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, "") };
    inline DocBlocksQueryRequest& setBlockType(string blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


    // docKey Field Functions 
    bool hasDocKey() const { return this->docKey_ != nullptr;};
    void deleteDocKey() { this->docKey_ = nullptr;};
    inline string docKey() const { DARABONBA_PTR_GET_DEFAULT(docKey_, "") };
    inline DocBlocksQueryRequest& setDocKey(string docKey) { DARABONBA_PTR_SET_VALUE(docKey_, docKey) };


    // endIndex Field Functions 
    bool hasEndIndex() const { return this->endIndex_ != nullptr;};
    void deleteEndIndex() { this->endIndex_ = nullptr;};
    inline int32_t endIndex() const { DARABONBA_PTR_GET_DEFAULT(endIndex_, 0) };
    inline DocBlocksQueryRequest& setEndIndex(int32_t endIndex) { DARABONBA_PTR_SET_VALUE(endIndex_, endIndex) };


    // startIndex Field Functions 
    bool hasStartIndex() const { return this->startIndex_ != nullptr;};
    void deleteStartIndex() { this->startIndex_ = nullptr;};
    inline int32_t startIndex() const { DARABONBA_PTR_GET_DEFAULT(startIndex_, 0) };
    inline DocBlocksQueryRequest& setStartIndex(int32_t startIndex) { DARABONBA_PTR_SET_VALUE(startIndex_, startIndex) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DocBlocksQueryRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DocBlocksQueryRequestTenantContext) };
    inline DocBlocksQueryRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, DocBlocksQueryRequestTenantContext) };
    inline DocBlocksQueryRequest& setTenantContext(const DocBlocksQueryRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DocBlocksQueryRequest& setTenantContext(DocBlocksQueryRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<string> blockType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> docKey_ = nullptr;
    std::shared_ptr<int32_t> endIndex_ = nullptr;
    std::shared_ptr<int32_t> startIndex_ = nullptr;
    std::shared_ptr<DocBlocksQueryRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
