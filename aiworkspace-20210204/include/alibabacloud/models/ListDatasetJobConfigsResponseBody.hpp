// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETJOBCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETJOBCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DatasetJobConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListDatasetJobConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetJobConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetJobConfigs, datasetJobConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetJobConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetJobConfigs, datasetJobConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDatasetJobConfigsResponseBody() = default ;
    ListDatasetJobConfigsResponseBody(const ListDatasetJobConfigsResponseBody &) = default ;
    ListDatasetJobConfigsResponseBody(ListDatasetJobConfigsResponseBody &&) = default ;
    ListDatasetJobConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetJobConfigsResponseBody() = default ;
    ListDatasetJobConfigsResponseBody& operator=(const ListDatasetJobConfigsResponseBody &) = default ;
    ListDatasetJobConfigsResponseBody& operator=(ListDatasetJobConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetJobConfigs_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // datasetJobConfigs Field Functions 
    bool hasDatasetJobConfigs() const { return this->datasetJobConfigs_ != nullptr;};
    void deleteDatasetJobConfigs() { this->datasetJobConfigs_ = nullptr;};
    inline const vector<DatasetJobConfig> & datasetJobConfigs() const { DARABONBA_PTR_GET_CONST(datasetJobConfigs_, vector<DatasetJobConfig>) };
    inline vector<DatasetJobConfig> datasetJobConfigs() { DARABONBA_PTR_GET(datasetJobConfigs_, vector<DatasetJobConfig>) };
    inline ListDatasetJobConfigsResponseBody& setDatasetJobConfigs(const vector<DatasetJobConfig> & datasetJobConfigs) { DARABONBA_PTR_SET_VALUE(datasetJobConfigs_, datasetJobConfigs) };
    inline ListDatasetJobConfigsResponseBody& setDatasetJobConfigs(vector<DatasetJobConfig> && datasetJobConfigs) { DARABONBA_PTR_SET_RVALUE(datasetJobConfigs_, datasetJobConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatasetJobConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDatasetJobConfigsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The dataset job configurations.
    std::shared_ptr<vector<DatasetJobConfig>> datasetJobConfigs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
