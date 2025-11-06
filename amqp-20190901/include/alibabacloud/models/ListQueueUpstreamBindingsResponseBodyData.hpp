// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUEUPSTREAMBINDINGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUEUPSTREAMBINDINGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListQueueUpstreamBindingsResponseBodyDataVoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListQueueUpstreamBindingsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueUpstreamBindingsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(VoList, voList_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueUpstreamBindingsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(VoList, voList_);
    };
    ListQueueUpstreamBindingsResponseBodyData() = default ;
    ListQueueUpstreamBindingsResponseBodyData(const ListQueueUpstreamBindingsResponseBodyData &) = default ;
    ListQueueUpstreamBindingsResponseBodyData(ListQueueUpstreamBindingsResponseBodyData &&) = default ;
    ListQueueUpstreamBindingsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueUpstreamBindingsResponseBodyData() = default ;
    ListQueueUpstreamBindingsResponseBodyData& operator=(const ListQueueUpstreamBindingsResponseBodyData &) = default ;
    ListQueueUpstreamBindingsResponseBodyData& operator=(ListQueueUpstreamBindingsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->voList_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListQueueUpstreamBindingsResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListQueueUpstreamBindingsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // voList Field Functions 
    bool hasVoList() const { return this->voList_ != nullptr;};
    void deleteVoList() { this->voList_ = nullptr;};
    inline const Models::ListQueueUpstreamBindingsResponseBodyDataVoList & voList() const { DARABONBA_PTR_GET_CONST(voList_, Models::ListQueueUpstreamBindingsResponseBodyDataVoList) };
    inline Models::ListQueueUpstreamBindingsResponseBodyDataVoList voList() { DARABONBA_PTR_GET(voList_, Models::ListQueueUpstreamBindingsResponseBodyDataVoList) };
    inline ListQueueUpstreamBindingsResponseBodyData& setVoList(const Models::ListQueueUpstreamBindingsResponseBodyDataVoList & voList) { DARABONBA_PTR_SET_VALUE(voList_, voList) };
    inline ListQueueUpstreamBindingsResponseBodyData& setVoList(Models::ListQueueUpstreamBindingsResponseBodyDataVoList && voList) { DARABONBA_PTR_SET_RVALUE(voList_, voList) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<Models::ListQueueUpstreamBindingsResponseBodyDataVoList> voList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
