// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAAGENTMEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAAGENTMEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListDataAgentMemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAgentMemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContentPattern, contentPattern_);
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(FromId, fromId_);
      DARABONBA_PTR_TO_JSON(MemFrom, memFrom_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryAll, queryAll_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAgentMemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentPattern, contentPattern_);
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(FromId, fromId_);
      DARABONBA_PTR_FROM_JSON(MemFrom, memFrom_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryAll, queryAll_);
    };
    ListDataAgentMemoryRequest() = default ;
    ListDataAgentMemoryRequest(const ListDataAgentMemoryRequest &) = default ;
    ListDataAgentMemoryRequest(ListDataAgentMemoryRequest &&) = default ;
    ListDataAgentMemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAgentMemoryRequest() = default ;
    ListDataAgentMemoryRequest& operator=(const ListDataAgentMemoryRequest &) = default ;
    ListDataAgentMemoryRequest& operator=(ListDataAgentMemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentPattern_ == nullptr
        && this->DMSUnit_ == nullptr && this->fromId_ == nullptr && this->memFrom_ == nullptr && this->order_ == nullptr && this->orderBy_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->queryAll_ == nullptr; };
    // contentPattern Field Functions 
    bool hasContentPattern() const { return this->contentPattern_ != nullptr;};
    void deleteContentPattern() { this->contentPattern_ = nullptr;};
    inline string getContentPattern() const { DARABONBA_PTR_GET_DEFAULT(contentPattern_, "") };
    inline ListDataAgentMemoryRequest& setContentPattern(string contentPattern) { DARABONBA_PTR_SET_VALUE(contentPattern_, contentPattern) };


    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline ListDataAgentMemoryRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // fromId Field Functions 
    bool hasFromId() const { return this->fromId_ != nullptr;};
    void deleteFromId() { this->fromId_ = nullptr;};
    inline string getFromId() const { DARABONBA_PTR_GET_DEFAULT(fromId_, "") };
    inline ListDataAgentMemoryRequest& setFromId(string fromId) { DARABONBA_PTR_SET_VALUE(fromId_, fromId) };


    // memFrom Field Functions 
    bool hasMemFrom() const { return this->memFrom_ != nullptr;};
    void deleteMemFrom() { this->memFrom_ = nullptr;};
    inline string getMemFrom() const { DARABONBA_PTR_GET_DEFAULT(memFrom_, "") };
    inline ListDataAgentMemoryRequest& setMemFrom(string memFrom) { DARABONBA_PTR_SET_VALUE(memFrom_, memFrom) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListDataAgentMemoryRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListDataAgentMemoryRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline ListDataAgentMemoryRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDataAgentMemoryRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryAll Field Functions 
    bool hasQueryAll() const { return this->queryAll_ != nullptr;};
    void deleteQueryAll() { this->queryAll_ = nullptr;};
    inline bool getQueryAll() const { DARABONBA_PTR_GET_DEFAULT(queryAll_, false) };
    inline ListDataAgentMemoryRequest& setQueryAll(bool queryAll) { DARABONBA_PTR_SET_VALUE(queryAll_, queryAll) };


  protected:
    // The content pattern used for fuzzy match search.
    shared_ptr<string> contentPattern_ {};
    // The current Data Management unit.
    shared_ptr<string> DMSUnit_ {};
    // The source ID.
    // - If MemFrom is set to session, FromId indicates the session ID.
    // - If MemFrom is set to user, FromId indicates the RAM user ID.
    shared_ptr<string> fromId_ {};
    // The memory source. Valid values:
    // - session: Generated from a session.
    // - user: Edited by a user.
    shared_ptr<string> memFrom_ {};
    // The sort order for the specified sort field. Default value: desc. Valid values:
    // - asc: Ascending order.
    // - desc: Descending order.
    shared_ptr<string> order_ {};
    // The sort field. Default value: hitTimes. Valid values:
    // - hitTimes: The number of hits.
    // - created: The creation time.
    shared_ptr<string> orderBy_ {};
    // The page number. Minimum value: 1.
    shared_ptr<int64_t> pageNum_ {};
    // The maximum number of entries per page. Default value: 50.
    shared_ptr<int64_t> pageSize_ {};
    // Specifies whether to query memories in all statuses. Default value: true.
    shared_ptr<bool> queryAll_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
