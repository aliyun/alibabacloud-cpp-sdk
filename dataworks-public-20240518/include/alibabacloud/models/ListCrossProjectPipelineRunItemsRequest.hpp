// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCROSSPROJECTPIPELINERUNITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCROSSPROJECTPIPELINERUNITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCrossProjectPipelineRunItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrossProjectPipelineRunItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PipelineRunId, pipelineRunId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrossProjectPipelineRunItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PipelineRunId, pipelineRunId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListCrossProjectPipelineRunItemsRequest() = default ;
    ListCrossProjectPipelineRunItemsRequest(const ListCrossProjectPipelineRunItemsRequest &) = default ;
    ListCrossProjectPipelineRunItemsRequest(ListCrossProjectPipelineRunItemsRequest &&) = default ;
    ListCrossProjectPipelineRunItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrossProjectPipelineRunItemsRequest() = default ;
    ListCrossProjectPipelineRunItemsRequest& operator=(const ListCrossProjectPipelineRunItemsRequest &) = default ;
    ListCrossProjectPipelineRunItemsRequest& operator=(ListCrossProjectPipelineRunItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->pipelineRunId_ == nullptr && this->projectId_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCrossProjectPipelineRunItemsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCrossProjectPipelineRunItemsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pipelineRunId Field Functions 
    bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
    void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
    inline string getPipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, "") };
    inline ListCrossProjectPipelineRunItemsRequest& setPipelineRunId(string pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListCrossProjectPipelineRunItemsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the cross-workspace publish pipeline.
    // 
    // This parameter is required.
    shared_ptr<string> pipelineRunId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
