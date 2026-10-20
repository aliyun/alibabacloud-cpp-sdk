// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDISPLAYKNOWLEDGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDISPLAYKNOWLEDGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class QueryDisplayKnowledgeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDisplayKnowledgeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RagId, ragId_);
      DARABONBA_PTR_TO_JSON(SkuId, skuId_);
      DARABONBA_PTR_TO_JSON(SkuName, skuName_);
      DARABONBA_PTR_TO_JSON(Statuses, statusesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDisplayKnowledgeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RagId, ragId_);
      DARABONBA_PTR_FROM_JSON(SkuId, skuId_);
      DARABONBA_PTR_FROM_JSON(SkuName, skuName_);
      DARABONBA_PTR_FROM_JSON(Statuses, statusesShrink_);
    };
    QueryDisplayKnowledgeShrinkRequest() = default ;
    QueryDisplayKnowledgeShrinkRequest(const QueryDisplayKnowledgeShrinkRequest &) = default ;
    QueryDisplayKnowledgeShrinkRequest(QueryDisplayKnowledgeShrinkRequest &&) = default ;
    QueryDisplayKnowledgeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDisplayKnowledgeShrinkRequest() = default ;
    QueryDisplayKnowledgeShrinkRequest& operator=(const QueryDisplayKnowledgeShrinkRequest &) = default ;
    QueryDisplayKnowledgeShrinkRequest& operator=(QueryDisplayKnowledgeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNum_ == nullptr
        && this->pageSize_ == nullptr && this->ragId_ == nullptr && this->skuId_ == nullptr && this->skuName_ == nullptr && this->statusesShrink_ == nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryDisplayKnowledgeShrinkRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryDisplayKnowledgeShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ragId Field Functions 
    bool hasRagId() const { return this->ragId_ != nullptr;};
    void deleteRagId() { this->ragId_ = nullptr;};
    inline string getRagId() const { DARABONBA_PTR_GET_DEFAULT(ragId_, "") };
    inline QueryDisplayKnowledgeShrinkRequest& setRagId(string ragId) { DARABONBA_PTR_SET_VALUE(ragId_, ragId) };


    // skuId Field Functions 
    bool hasSkuId() const { return this->skuId_ != nullptr;};
    void deleteSkuId() { this->skuId_ = nullptr;};
    inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
    inline QueryDisplayKnowledgeShrinkRequest& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


    // skuName Field Functions 
    bool hasSkuName() const { return this->skuName_ != nullptr;};
    void deleteSkuName() { this->skuName_ = nullptr;};
    inline string getSkuName() const { DARABONBA_PTR_GET_DEFAULT(skuName_, "") };
    inline QueryDisplayKnowledgeShrinkRequest& setSkuName(string skuName) { DARABONBA_PTR_SET_VALUE(skuName_, skuName) };


    // statusesShrink Field Functions 
    bool hasStatusesShrink() const { return this->statusesShrink_ != nullptr;};
    void deleteStatusesShrink() { this->statusesShrink_ = nullptr;};
    inline string getStatusesShrink() const { DARABONBA_PTR_GET_DEFAULT(statusesShrink_, "") };
    inline QueryDisplayKnowledgeShrinkRequest& setStatusesShrink(string statusesShrink) { DARABONBA_PTR_SET_VALUE(statusesShrink_, statusesShrink) };


  protected:
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page. Default value: 20. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The knowledge base ID.
    // 
    // This parameter is required.
    shared_ptr<string> ragId_ {};
    // The SKU ID for exact match.
    shared_ptr<string> skuId_ {};
    // The keyword in the SKU name.
    shared_ptr<string> skuName_ {};
    // The list of record statuses. Valid values: UPDATING, EMBEDDED, and FAILED.
    shared_ptr<string> statusesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
