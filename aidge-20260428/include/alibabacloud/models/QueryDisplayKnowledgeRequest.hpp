// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDISPLAYKNOWLEDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDISPLAYKNOWLEDGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class QueryDisplayKnowledgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDisplayKnowledgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RagId, ragId_);
      DARABONBA_PTR_TO_JSON(SkuId, skuId_);
      DARABONBA_PTR_TO_JSON(SkuName, skuName_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDisplayKnowledgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RagId, ragId_);
      DARABONBA_PTR_FROM_JSON(SkuId, skuId_);
      DARABONBA_PTR_FROM_JSON(SkuName, skuName_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
    };
    QueryDisplayKnowledgeRequest() = default ;
    QueryDisplayKnowledgeRequest(const QueryDisplayKnowledgeRequest &) = default ;
    QueryDisplayKnowledgeRequest(QueryDisplayKnowledgeRequest &&) = default ;
    QueryDisplayKnowledgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDisplayKnowledgeRequest() = default ;
    QueryDisplayKnowledgeRequest& operator=(const QueryDisplayKnowledgeRequest &) = default ;
    QueryDisplayKnowledgeRequest& operator=(QueryDisplayKnowledgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNum_ == nullptr
        && this->pageSize_ == nullptr && this->ragId_ == nullptr && this->skuId_ == nullptr && this->skuName_ == nullptr && this->statuses_ == nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryDisplayKnowledgeRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryDisplayKnowledgeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ragId Field Functions 
    bool hasRagId() const { return this->ragId_ != nullptr;};
    void deleteRagId() { this->ragId_ = nullptr;};
    inline string getRagId() const { DARABONBA_PTR_GET_DEFAULT(ragId_, "") };
    inline QueryDisplayKnowledgeRequest& setRagId(string ragId) { DARABONBA_PTR_SET_VALUE(ragId_, ragId) };


    // skuId Field Functions 
    bool hasSkuId() const { return this->skuId_ != nullptr;};
    void deleteSkuId() { this->skuId_ = nullptr;};
    inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
    inline QueryDisplayKnowledgeRequest& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


    // skuName Field Functions 
    bool hasSkuName() const { return this->skuName_ != nullptr;};
    void deleteSkuName() { this->skuName_ = nullptr;};
    inline string getSkuName() const { DARABONBA_PTR_GET_DEFAULT(skuName_, "") };
    inline QueryDisplayKnowledgeRequest& setSkuName(string skuName) { DARABONBA_PTR_SET_VALUE(skuName_, skuName) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & getStatuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> getStatuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline QueryDisplayKnowledgeRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline QueryDisplayKnowledgeRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


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
    shared_ptr<vector<string>> statuses_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
