// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINERUNITEMSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINERUNITEMSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListPipelineRunItemsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineRunItemsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PipelineRunItems, pipelineRunItems_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineRunItemsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PipelineRunItems, pipelineRunItems_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPipelineRunItemsResponseBodyPagingInfo() = default ;
    ListPipelineRunItemsResponseBodyPagingInfo(const ListPipelineRunItemsResponseBodyPagingInfo &) = default ;
    ListPipelineRunItemsResponseBodyPagingInfo(ListPipelineRunItemsResponseBodyPagingInfo &&) = default ;
    ListPipelineRunItemsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineRunItemsResponseBodyPagingInfo() = default ;
    ListPipelineRunItemsResponseBodyPagingInfo& operator=(const ListPipelineRunItemsResponseBodyPagingInfo &) = default ;
    ListPipelineRunItemsResponseBodyPagingInfo& operator=(ListPipelineRunItemsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->pipelineRunItems_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPipelineRunItemsResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPipelineRunItemsResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pipelineRunItems Field Functions 
    bool hasPipelineRunItems() const { return this->pipelineRunItems_ != nullptr;};
    void deletePipelineRunItems() { this->pipelineRunItems_ = nullptr;};
    inline const vector<Models::ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems> & pipelineRunItems() const { DARABONBA_PTR_GET_CONST(pipelineRunItems_, vector<Models::ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems>) };
    inline vector<Models::ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems> pipelineRunItems() { DARABONBA_PTR_GET(pipelineRunItems_, vector<Models::ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems>) };
    inline ListPipelineRunItemsResponseBodyPagingInfo& setPipelineRunItems(const vector<Models::ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems> & pipelineRunItems) { DARABONBA_PTR_SET_VALUE(pipelineRunItems_, pipelineRunItems) };
    inline ListPipelineRunItemsResponseBodyPagingInfo& setPipelineRunItems(vector<Models::ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems> && pipelineRunItems) { DARABONBA_PTR_SET_RVALUE(pipelineRunItems_, pipelineRunItems) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPipelineRunItemsResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The list of deployments.
    std::shared_ptr<vector<Models::ListPipelineRunItemsResponseBodyPagingInfoPipelineRunItems>> pipelineRunItems_ = nullptr;
    // The total number of entries that match the conditions.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
