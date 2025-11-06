// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListQueueResponseBodyDataVoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListQueueResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VoList, voList_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VoList, voList_);
    };
    ListQueueResponseBodyData() = default ;
    ListQueueResponseBodyData(const ListQueueResponseBodyData &) = default ;
    ListQueueResponseBodyData(ListQueueResponseBodyData &&) = default ;
    ListQueueResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueResponseBodyData() = default ;
    ListQueueResponseBodyData& operator=(const ListQueueResponseBodyData &) = default ;
    ListQueueResponseBodyData& operator=(ListQueueResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr && return this->voList_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListQueueResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListQueueResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListQueueResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // voList Field Functions 
    bool hasVoList() const { return this->voList_ != nullptr;};
    void deleteVoList() { this->voList_ = nullptr;};
    inline const Models::ListQueueResponseBodyDataVoList & voList() const { DARABONBA_PTR_GET_CONST(voList_, Models::ListQueueResponseBodyDataVoList) };
    inline Models::ListQueueResponseBodyDataVoList voList() { DARABONBA_PTR_GET(voList_, Models::ListQueueResponseBodyDataVoList) };
    inline ListQueueResponseBodyData& setVoList(const Models::ListQueueResponseBodyDataVoList & voList) { DARABONBA_PTR_SET_VALUE(voList_, voList) };
    inline ListQueueResponseBodyData& setVoList(Models::ListQueueResponseBodyDataVoList && voList) { DARABONBA_PTR_SET_RVALUE(voList_, voList) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<Models::ListQueueResponseBodyDataVoList> voList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
