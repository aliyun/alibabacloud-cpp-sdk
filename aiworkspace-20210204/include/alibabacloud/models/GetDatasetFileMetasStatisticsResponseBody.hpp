// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETFILEMETASSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETFILEMETASSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DatasetFileMetasStat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetDatasetFileMetasStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetFileMetasStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetFileMetasStats, datasetFileMetasStats_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetFileMetasStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetFileMetasStats, datasetFileMetasStats_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetDatasetFileMetasStatisticsResponseBody() = default ;
    GetDatasetFileMetasStatisticsResponseBody(const GetDatasetFileMetasStatisticsResponseBody &) = default ;
    GetDatasetFileMetasStatisticsResponseBody(GetDatasetFileMetasStatisticsResponseBody &&) = default ;
    GetDatasetFileMetasStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetFileMetasStatisticsResponseBody() = default ;
    GetDatasetFileMetasStatisticsResponseBody& operator=(const GetDatasetFileMetasStatisticsResponseBody &) = default ;
    GetDatasetFileMetasStatisticsResponseBody& operator=(GetDatasetFileMetasStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetFileMetasStats_ == nullptr
        && return this->totalCount_ == nullptr && return this->requestId_ == nullptr; };
    // datasetFileMetasStats Field Functions 
    bool hasDatasetFileMetasStats() const { return this->datasetFileMetasStats_ != nullptr;};
    void deleteDatasetFileMetasStats() { this->datasetFileMetasStats_ = nullptr;};
    inline const vector<DatasetFileMetasStat> & datasetFileMetasStats() const { DARABONBA_PTR_GET_CONST(datasetFileMetasStats_, vector<DatasetFileMetasStat>) };
    inline vector<DatasetFileMetasStat> datasetFileMetasStats() { DARABONBA_PTR_GET(datasetFileMetasStats_, vector<DatasetFileMetasStat>) };
    inline GetDatasetFileMetasStatisticsResponseBody& setDatasetFileMetasStats(const vector<DatasetFileMetasStat> & datasetFileMetasStats) { DARABONBA_PTR_SET_VALUE(datasetFileMetasStats_, datasetFileMetasStats) };
    inline GetDatasetFileMetasStatisticsResponseBody& setDatasetFileMetasStats(vector<DatasetFileMetasStat> && datasetFileMetasStats) { DARABONBA_PTR_SET_RVALUE(datasetFileMetasStats_, datasetFileMetasStats) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetDatasetFileMetasStatisticsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatasetFileMetasStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the returned aggregation list, including the number of each aggregate item. The list is by default sorted in descending order based on the count number.
    std::shared_ptr<vector<DatasetFileMetasStat>> datasetFileMetasStats_ = nullptr;
    // The returned number. Example: the number of metadata records or the number of user-defined tags.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
