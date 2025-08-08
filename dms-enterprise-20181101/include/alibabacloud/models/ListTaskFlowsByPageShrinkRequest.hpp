// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWSBYPAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWSBYPAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowsByPageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowsByPageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagIdList, dagIdListShrink_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowsByPageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagIdList, dagIdListShrink_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListTaskFlowsByPageShrinkRequest() = default ;
    ListTaskFlowsByPageShrinkRequest(const ListTaskFlowsByPageShrinkRequest &) = default ;
    ListTaskFlowsByPageShrinkRequest(ListTaskFlowsByPageShrinkRequest &&) = default ;
    ListTaskFlowsByPageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowsByPageShrinkRequest() = default ;
    ListTaskFlowsByPageShrinkRequest& operator=(const ListTaskFlowsByPageShrinkRequest &) = default ;
    ListTaskFlowsByPageShrinkRequest& operator=(ListTaskFlowsByPageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagIdListShrink_ != nullptr
        && this->pageIndex_ != nullptr && this->pageSize_ != nullptr && this->scenarioId_ != nullptr && this->searchKey_ != nullptr && this->tid_ != nullptr; };
    // dagIdListShrink Field Functions 
    bool hasDagIdListShrink() const { return this->dagIdListShrink_ != nullptr;};
    void deleteDagIdListShrink() { this->dagIdListShrink_ = nullptr;};
    inline string dagIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(dagIdListShrink_, "") };
    inline ListTaskFlowsByPageShrinkRequest& setDagIdListShrink(string dagIdListShrink) { DARABONBA_PTR_SET_VALUE(dagIdListShrink_, dagIdListShrink) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListTaskFlowsByPageShrinkRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTaskFlowsByPageShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline int64_t scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, 0L) };
    inline ListTaskFlowsByPageShrinkRequest& setScenarioId(int64_t scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string searchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline ListTaskFlowsByPageShrinkRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListTaskFlowsByPageShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // Filter condition, task flow ID list.
    std::shared_ptr<string> dagIdListShrink_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Filter condition, application scenario ID.
    std::shared_ptr<int64_t> scenarioId_ = nullptr;
    // The keyword that is used to search for task flow names.
    std::shared_ptr<string> searchKey_ = nullptr;
    // The ID of the tenant.
    // 
    // > : To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
