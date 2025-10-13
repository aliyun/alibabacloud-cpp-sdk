// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPEVENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPEVENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppEventsResponseBodyDataAppEventEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAppEventsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppEventsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppEventEntity, appEventEntity_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppEventsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppEventEntity, appEventEntity_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListAppEventsResponseBodyData() = default ;
    ListAppEventsResponseBodyData(const ListAppEventsResponseBodyData &) = default ;
    ListAppEventsResponseBodyData(ListAppEventsResponseBodyData &&) = default ;
    ListAppEventsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppEventsResponseBodyData() = default ;
    ListAppEventsResponseBodyData& operator=(const ListAppEventsResponseBodyData &) = default ;
    ListAppEventsResponseBodyData& operator=(ListAppEventsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appEventEntity_ == nullptr
        && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->totalSize_ == nullptr; };
    // appEventEntity Field Functions 
    bool hasAppEventEntity() const { return this->appEventEntity_ != nullptr;};
    void deleteAppEventEntity() { this->appEventEntity_ = nullptr;};
    inline const vector<Models::ListAppEventsResponseBodyDataAppEventEntity> & appEventEntity() const { DARABONBA_PTR_GET_CONST(appEventEntity_, vector<Models::ListAppEventsResponseBodyDataAppEventEntity>) };
    inline vector<Models::ListAppEventsResponseBodyDataAppEventEntity> appEventEntity() { DARABONBA_PTR_GET(appEventEntity_, vector<Models::ListAppEventsResponseBodyDataAppEventEntity>) };
    inline ListAppEventsResponseBodyData& setAppEventEntity(const vector<Models::ListAppEventsResponseBodyDataAppEventEntity> & appEventEntity) { DARABONBA_PTR_SET_VALUE(appEventEntity_, appEventEntity) };
    inline ListAppEventsResponseBodyData& setAppEventEntity(vector<Models::ListAppEventsResponseBodyDataAppEventEntity> && appEventEntity) { DARABONBA_PTR_SET_RVALUE(appEventEntity_, appEventEntity) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAppEventsResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppEventsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline ListAppEventsResponseBodyData& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The events.
    std::shared_ptr<vector<Models::ListAppEventsResponseBodyDataAppEventEntity>> appEventEntity_ = nullptr;
    // The number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of events that occurred in an application.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
