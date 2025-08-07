// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINDEXJOBSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINDEXJOBSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetIndexJobStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIndexJobStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetIndexJobStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    GetIndexJobStatusRequest() = default ;
    GetIndexJobStatusRequest(const GetIndexJobStatusRequest &) = default ;
    GetIndexJobStatusRequest(GetIndexJobStatusRequest &&) = default ;
    GetIndexJobStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIndexJobStatusRequest() = default ;
    GetIndexJobStatusRequest& operator=(const GetIndexJobStatusRequest &) = default ;
    GetIndexJobStatusRequest& operator=(GetIndexJobStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indexId_ != nullptr
        && this->jobId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string indexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline GetIndexJobStatusRequest& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetIndexJobStatusRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetIndexJobStatusRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetIndexJobStatusRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The primary key ID of the knowledge base, which is the `Data.Id` parameter returned by the [CreateIndex](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-createindex) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> indexId_ = nullptr;
    // The knowledge base job ID, which is the `Data.Id` parameter returned by the [SubmitIndexJob](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-submitindexjob) or [SubmitIndexAddDocumentsJob](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-submitindexadddocumentsjob) operations.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    // Both the [SubmitIndexJob](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-submitindexjob) and [SubmitIndexAddDocumentsJob](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-submitindexadddocumentsjob) operations support batch import of documents. This operation returns both the overall `Status` of the job and the `Document.Status` of each document. If there are a large number of documents, you can use the `PageNumber` parameter to perform a paged query. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of document import jobs that are displayed on each page. No maximum value. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
