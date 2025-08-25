// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANIMAGERESPONSEBODYDATARESULTS_HPP_
#define ALIBABACLOUD_MODELS_SCANIMAGERESPONSEBODYDATARESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScanImageResponseBodyDataResultsSubResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanImageResponseBodyDataResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanImageResponseBodyDataResults& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(SubResults, subResults_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ScanImageResponseBodyDataResults& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(SubResults, subResults_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ScanImageResponseBodyDataResults() = default ;
    ScanImageResponseBodyDataResults(const ScanImageResponseBodyDataResults &) = default ;
    ScanImageResponseBodyDataResults(ScanImageResponseBodyDataResults &&) = default ;
    ScanImageResponseBodyDataResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanImageResponseBodyDataResults() = default ;
    ScanImageResponseBodyDataResults& operator=(const ScanImageResponseBodyDataResults &) = default ;
    ScanImageResponseBodyDataResults& operator=(ScanImageResponseBodyDataResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataId_ != nullptr
        && this->imageURL_ != nullptr && this->subResults_ != nullptr && this->taskId_ != nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ScanImageResponseBodyDataResults& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline ScanImageResponseBodyDataResults& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // subResults Field Functions 
    bool hasSubResults() const { return this->subResults_ != nullptr;};
    void deleteSubResults() { this->subResults_ = nullptr;};
    inline const vector<Models::ScanImageResponseBodyDataResultsSubResults> & subResults() const { DARABONBA_PTR_GET_CONST(subResults_, vector<Models::ScanImageResponseBodyDataResultsSubResults>) };
    inline vector<Models::ScanImageResponseBodyDataResultsSubResults> subResults() { DARABONBA_PTR_GET(subResults_, vector<Models::ScanImageResponseBodyDataResultsSubResults>) };
    inline ScanImageResponseBodyDataResults& setSubResults(const vector<Models::ScanImageResponseBodyDataResultsSubResults> & subResults) { DARABONBA_PTR_SET_VALUE(subResults_, subResults) };
    inline ScanImageResponseBodyDataResults& setSubResults(vector<Models::ScanImageResponseBodyDataResultsSubResults> && subResults) { DARABONBA_PTR_SET_RVALUE(subResults_, subResults) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ScanImageResponseBodyDataResults& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> dataId_ = nullptr;
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<vector<Models::ScanImageResponseBodyDataResultsSubResults>> subResults_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
