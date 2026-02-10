// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIMODALSEARCHTASKRESULTFINETUNEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIMODALSEARCHTASKRESULTFINETUNEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class CreateMultimodalSearchTaskResultFineTuneDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultimodalSearchTaskResultFineTuneDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(ResultIndex, resultIndex_);
      DARABONBA_PTR_TO_JSON(ResultMode, resultMode_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TopN, topN_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultimodalSearchTaskResultFineTuneDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(ResultIndex, resultIndex_);
      DARABONBA_PTR_FROM_JSON(ResultMode, resultMode_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TopN, topN_);
    };
    CreateMultimodalSearchTaskResultFineTuneDatasetRequest() = default ;
    CreateMultimodalSearchTaskResultFineTuneDatasetRequest(const CreateMultimodalSearchTaskResultFineTuneDatasetRequest &) = default ;
    CreateMultimodalSearchTaskResultFineTuneDatasetRequest(CreateMultimodalSearchTaskResultFineTuneDatasetRequest &&) = default ;
    CreateMultimodalSearchTaskResultFineTuneDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultimodalSearchTaskResultFineTuneDatasetRequest() = default ;
    CreateMultimodalSearchTaskResultFineTuneDatasetRequest& operator=(const CreateMultimodalSearchTaskResultFineTuneDatasetRequest &) = default ;
    CreateMultimodalSearchTaskResultFineTuneDatasetRequest& operator=(CreateMultimodalSearchTaskResultFineTuneDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->datasetDescription_ == nullptr && this->datasetName_ == nullptr && this->resultIndex_ == nullptr && this->resultMode_ == nullptr && this->taskId_ == nullptr
        && this->topN_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateMultimodalSearchTaskResultFineTuneDatasetRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasetDescription Field Functions 
    bool hasDatasetDescription() const { return this->datasetDescription_ != nullptr;};
    void deleteDatasetDescription() { this->datasetDescription_ = nullptr;};
    inline string getDatasetDescription() const { DARABONBA_PTR_GET_DEFAULT(datasetDescription_, "") };
    inline CreateMultimodalSearchTaskResultFineTuneDatasetRequest& setDatasetDescription(string datasetDescription) { DARABONBA_PTR_SET_VALUE(datasetDescription_, datasetDescription) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateMultimodalSearchTaskResultFineTuneDatasetRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // resultIndex Field Functions 
    bool hasResultIndex() const { return this->resultIndex_ != nullptr;};
    void deleteResultIndex() { this->resultIndex_ = nullptr;};
    inline const vector<int32_t> & getResultIndex() const { DARABONBA_PTR_GET_CONST(resultIndex_, vector<int32_t>) };
    inline vector<int32_t> getResultIndex() { DARABONBA_PTR_GET(resultIndex_, vector<int32_t>) };
    inline CreateMultimodalSearchTaskResultFineTuneDatasetRequest& setResultIndex(const vector<int32_t> & resultIndex) { DARABONBA_PTR_SET_VALUE(resultIndex_, resultIndex) };
    inline CreateMultimodalSearchTaskResultFineTuneDatasetRequest& setResultIndex(vector<int32_t> && resultIndex) { DARABONBA_PTR_SET_RVALUE(resultIndex_, resultIndex) };


    // resultMode Field Functions 
    bool hasResultMode() const { return this->resultMode_ != nullptr;};
    void deleteResultMode() { this->resultMode_ = nullptr;};
    inline string getResultMode() const { DARABONBA_PTR_GET_DEFAULT(resultMode_, "") };
    inline CreateMultimodalSearchTaskResultFineTuneDatasetRequest& setResultMode(string resultMode) { DARABONBA_PTR_SET_VALUE(resultMode_, resultMode) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateMultimodalSearchTaskResultFineTuneDatasetRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // topN Field Functions 
    bool hasTopN() const { return this->topN_ != nullptr;};
    void deleteTopN() { this->topN_ = nullptr;};
    inline int32_t getTopN() const { DARABONBA_PTR_GET_DEFAULT(topN_, 0) };
    inline CreateMultimodalSearchTaskResultFineTuneDatasetRequest& setTopN(int32_t topN) { DARABONBA_PTR_SET_VALUE(topN_, topN) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> datasetDescription_ {};
    shared_ptr<string> datasetName_ {};
    shared_ptr<vector<int32_t>> resultIndex_ {};
    shared_ptr<string> resultMode_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    shared_ptr<int32_t> topN_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
