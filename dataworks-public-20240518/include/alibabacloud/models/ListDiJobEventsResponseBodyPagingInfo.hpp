// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBEVENTSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBEVENTSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDIJobEventsResponseBodyPagingInfoDIJobEvent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobEventsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobEventsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobEvent, DIJobEvent_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobEventsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobEvent, DIJobEvent_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDIJobEventsResponseBodyPagingInfo() = default ;
    ListDIJobEventsResponseBodyPagingInfo(const ListDIJobEventsResponseBodyPagingInfo &) = default ;
    ListDIJobEventsResponseBodyPagingInfo(ListDIJobEventsResponseBodyPagingInfo &&) = default ;
    ListDIJobEventsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobEventsResponseBodyPagingInfo() = default ;
    ListDIJobEventsResponseBodyPagingInfo& operator=(const ListDIJobEventsResponseBodyPagingInfo &) = default ;
    ListDIJobEventsResponseBodyPagingInfo& operator=(ListDIJobEventsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DIJobEvent_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // DIJobEvent Field Functions 
    bool hasDIJobEvent() const { return this->DIJobEvent_ != nullptr;};
    void deleteDIJobEvent() { this->DIJobEvent_ = nullptr;};
    inline const vector<Models::ListDIJobEventsResponseBodyPagingInfoDIJobEvent> & DIJobEvent() const { DARABONBA_PTR_GET_CONST(DIJobEvent_, vector<Models::ListDIJobEventsResponseBodyPagingInfoDIJobEvent>) };
    inline vector<Models::ListDIJobEventsResponseBodyPagingInfoDIJobEvent> DIJobEvent() { DARABONBA_PTR_GET(DIJobEvent_, vector<Models::ListDIJobEventsResponseBodyPagingInfoDIJobEvent>) };
    inline ListDIJobEventsResponseBodyPagingInfo& setDIJobEvent(const vector<Models::ListDIJobEventsResponseBodyPagingInfoDIJobEvent> & DIJobEvent) { DARABONBA_PTR_SET_VALUE(DIJobEvent_, DIJobEvent) };
    inline ListDIJobEventsResponseBodyPagingInfo& setDIJobEvent(vector<Models::ListDIJobEventsResponseBodyPagingInfoDIJobEvent> && DIJobEvent) { DARABONBA_PTR_SET_RVALUE(DIJobEvent_, DIJobEvent) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListDIJobEventsResponseBodyPagingInfo& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDIJobEventsResponseBodyPagingInfo& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDIJobEventsResponseBodyPagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The events returned. The value of this parameter is an array.
    std::shared_ptr<vector<Models::ListDIJobEventsResponseBodyPagingInfoDIJobEvent>> DIJobEvent_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
