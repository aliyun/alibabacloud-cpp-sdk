// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINERUNSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINERUNSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPipelineRunsResponseBodyPagingInfoPipelineRuns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListPipelineRunsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineRunsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PipelineRuns, pipelineRuns_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineRunsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PipelineRuns, pipelineRuns_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPipelineRunsResponseBodyPagingInfo() = default ;
    ListPipelineRunsResponseBodyPagingInfo(const ListPipelineRunsResponseBodyPagingInfo &) = default ;
    ListPipelineRunsResponseBodyPagingInfo(ListPipelineRunsResponseBodyPagingInfo &&) = default ;
    ListPipelineRunsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineRunsResponseBodyPagingInfo() = default ;
    ListPipelineRunsResponseBodyPagingInfo& operator=(const ListPipelineRunsResponseBodyPagingInfo &) = default ;
    ListPipelineRunsResponseBodyPagingInfo& operator=(ListPipelineRunsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->pipelineRuns_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPipelineRunsResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPipelineRunsResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pipelineRuns Field Functions 
    bool hasPipelineRuns() const { return this->pipelineRuns_ != nullptr;};
    void deletePipelineRuns() { this->pipelineRuns_ = nullptr;};
    inline const vector<Models::ListPipelineRunsResponseBodyPagingInfoPipelineRuns> & pipelineRuns() const { DARABONBA_PTR_GET_CONST(pipelineRuns_, vector<Models::ListPipelineRunsResponseBodyPagingInfoPipelineRuns>) };
    inline vector<Models::ListPipelineRunsResponseBodyPagingInfoPipelineRuns> pipelineRuns() { DARABONBA_PTR_GET(pipelineRuns_, vector<Models::ListPipelineRunsResponseBodyPagingInfoPipelineRuns>) };
    inline ListPipelineRunsResponseBodyPagingInfo& setPipelineRuns(const vector<Models::ListPipelineRunsResponseBodyPagingInfoPipelineRuns> & pipelineRuns) { DARABONBA_PTR_SET_VALUE(pipelineRuns_, pipelineRuns) };
    inline ListPipelineRunsResponseBodyPagingInfo& setPipelineRuns(vector<Models::ListPipelineRunsResponseBodyPagingInfoPipelineRuns> && pipelineRuns) { DARABONBA_PTR_SET_RVALUE(pipelineRuns_, pipelineRuns) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPipelineRunsResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The processes.
    std::shared_ptr<vector<Models::ListPipelineRunsResponseBodyPagingInfoPipelineRuns>> pipelineRuns_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
