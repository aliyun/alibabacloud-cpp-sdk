// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTUNITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryCostUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentUnitId, parentUnitId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentUnitId, parentUnitId_);
    };
    QueryCostUnitRequest() = default ;
    QueryCostUnitRequest(const QueryCostUnitRequest &) = default ;
    QueryCostUnitRequest(QueryCostUnitRequest &&) = default ;
    QueryCostUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostUnitRequest() = default ;
    QueryCostUnitRequest& operator=(const QueryCostUnitRequest &) = default ;
    QueryCostUnitRequest& operator=(QueryCostUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerUid_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->parentUnitId_ != nullptr; };
    // ownerUid Field Functions 
    bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
    void deleteOwnerUid() { this->ownerUid_ = nullptr;};
    inline int64_t ownerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, 0L) };
    inline QueryCostUnitRequest& setOwnerUid(int64_t ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryCostUnitRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryCostUnitRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentUnitId Field Functions 
    bool hasParentUnitId() const { return this->parentUnitId_ != nullptr;};
    void deleteParentUnitId() { this->parentUnitId_ = nullptr;};
    inline int64_t parentUnitId() const { DARABONBA_PTR_GET_DEFAULT(parentUnitId_, 0L) };
    inline QueryCostUnitRequest& setParentUnitId(int64_t parentUnitId) { DARABONBA_PTR_SET_VALUE(parentUnitId_, parentUnitId) };


  protected:
    // The user ID of the cost center owner.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ownerUid_ = nullptr;
    // The page number of the page to return.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries per page. A maximum of 300 entries can be returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the parent cost center. A value of -1 indicates the root cost center.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> parentUnitId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
