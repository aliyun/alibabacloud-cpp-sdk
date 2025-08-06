// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCBLOCKSQUERYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOCBLOCKSQUERYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DocBlocksQueryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocBlocksQueryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockType, blockType_);
      DARABONBA_PTR_TO_JSON(DocKey, docKey_);
      DARABONBA_PTR_TO_JSON(EndIndex, endIndex_);
      DARABONBA_PTR_TO_JSON(StartIndex, startIndex_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DocBlocksQueryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
      DARABONBA_PTR_FROM_JSON(DocKey, docKey_);
      DARABONBA_PTR_FROM_JSON(EndIndex, endIndex_);
      DARABONBA_PTR_FROM_JSON(StartIndex, startIndex_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    DocBlocksQueryShrinkRequest() = default ;
    DocBlocksQueryShrinkRequest(const DocBlocksQueryShrinkRequest &) = default ;
    DocBlocksQueryShrinkRequest(DocBlocksQueryShrinkRequest &&) = default ;
    DocBlocksQueryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocBlocksQueryShrinkRequest() = default ;
    DocBlocksQueryShrinkRequest& operator=(const DocBlocksQueryShrinkRequest &) = default ;
    DocBlocksQueryShrinkRequest& operator=(DocBlocksQueryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockType_ != nullptr
        && this->docKey_ != nullptr && this->endIndex_ != nullptr && this->startIndex_ != nullptr && this->tenantContextShrink_ != nullptr; };
    // blockType Field Functions 
    bool hasBlockType() const { return this->blockType_ != nullptr;};
    void deleteBlockType() { this->blockType_ = nullptr;};
    inline string blockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, "") };
    inline DocBlocksQueryShrinkRequest& setBlockType(string blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


    // docKey Field Functions 
    bool hasDocKey() const { return this->docKey_ != nullptr;};
    void deleteDocKey() { this->docKey_ = nullptr;};
    inline string docKey() const { DARABONBA_PTR_GET_DEFAULT(docKey_, "") };
    inline DocBlocksQueryShrinkRequest& setDocKey(string docKey) { DARABONBA_PTR_SET_VALUE(docKey_, docKey) };


    // endIndex Field Functions 
    bool hasEndIndex() const { return this->endIndex_ != nullptr;};
    void deleteEndIndex() { this->endIndex_ = nullptr;};
    inline int32_t endIndex() const { DARABONBA_PTR_GET_DEFAULT(endIndex_, 0) };
    inline DocBlocksQueryShrinkRequest& setEndIndex(int32_t endIndex) { DARABONBA_PTR_SET_VALUE(endIndex_, endIndex) };


    // startIndex Field Functions 
    bool hasStartIndex() const { return this->startIndex_ != nullptr;};
    void deleteStartIndex() { this->startIndex_ = nullptr;};
    inline int32_t startIndex() const { DARABONBA_PTR_GET_DEFAULT(startIndex_, 0) };
    inline DocBlocksQueryShrinkRequest& setStartIndex(int32_t startIndex) { DARABONBA_PTR_SET_VALUE(startIndex_, startIndex) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline DocBlocksQueryShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    std::shared_ptr<string> blockType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> docKey_ = nullptr;
    std::shared_ptr<int32_t> endIndex_ = nullptr;
    std::shared_ptr<int32_t> startIndex_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
