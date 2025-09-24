// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DatasetJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListDatasetJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetJobs, datasetJobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetJobs, datasetJobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDatasetJobsResponseBody() = default ;
    ListDatasetJobsResponseBody(const ListDatasetJobsResponseBody &) = default ;
    ListDatasetJobsResponseBody(ListDatasetJobsResponseBody &&) = default ;
    ListDatasetJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetJobsResponseBody() = default ;
    ListDatasetJobsResponseBody& operator=(const ListDatasetJobsResponseBody &) = default ;
    ListDatasetJobsResponseBody& operator=(ListDatasetJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetJobs_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // datasetJobs Field Functions 
    bool hasDatasetJobs() const { return this->datasetJobs_ != nullptr;};
    void deleteDatasetJobs() { this->datasetJobs_ = nullptr;};
    inline const vector<DatasetJob> & datasetJobs() const { DARABONBA_PTR_GET_CONST(datasetJobs_, vector<DatasetJob>) };
    inline vector<DatasetJob> datasetJobs() { DARABONBA_PTR_GET(datasetJobs_, vector<DatasetJob>) };
    inline ListDatasetJobsResponseBody& setDatasetJobs(const vector<DatasetJob> & datasetJobs) { DARABONBA_PTR_SET_VALUE(datasetJobs_, datasetJobs) };
    inline ListDatasetJobsResponseBody& setDatasetJobs(vector<DatasetJob> && datasetJobs) { DARABONBA_PTR_SET_RVALUE(datasetJobs_, datasetJobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatasetJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDatasetJobsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The jobs in the dataset.
    std::shared_ptr<vector<DatasetJob>> datasetJobs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of jobs.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
