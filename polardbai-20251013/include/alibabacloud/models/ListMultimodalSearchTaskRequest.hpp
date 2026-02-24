// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIMODALSEARCHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIMODALSEARCHTASKREQUEST_HPP_
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
  class ListMultimodalSearchTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultimodalSearchTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasetIds, datasetIds_);
      DARABONBA_PTR_TO_JSON(InputField, inputField_);
      DARABONBA_PTR_TO_JSON(ModelMode, modelMode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SourceRegionId, sourceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultimodalSearchTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasetIds, datasetIds_);
      DARABONBA_PTR_FROM_JSON(InputField, inputField_);
      DARABONBA_PTR_FROM_JSON(ModelMode, modelMode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SourceRegionId, sourceRegionId_);
    };
    ListMultimodalSearchTaskRequest() = default ;
    ListMultimodalSearchTaskRequest(const ListMultimodalSearchTaskRequest &) = default ;
    ListMultimodalSearchTaskRequest(ListMultimodalSearchTaskRequest &&) = default ;
    ListMultimodalSearchTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultimodalSearchTaskRequest() = default ;
    ListMultimodalSearchTaskRequest& operator=(const ListMultimodalSearchTaskRequest &) = default ;
    ListMultimodalSearchTaskRequest& operator=(ListMultimodalSearchTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->datasetIds_ == nullptr && this->inputField_ == nullptr && this->modelMode_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->sourceRegionId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ListMultimodalSearchTaskRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasetIds Field Functions 
    bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
    void deleteDatasetIds() { this->datasetIds_ = nullptr;};
    inline const vector<string> & getDatasetIds() const { DARABONBA_PTR_GET_CONST(datasetIds_, vector<string>) };
    inline vector<string> getDatasetIds() { DARABONBA_PTR_GET(datasetIds_, vector<string>) };
    inline ListMultimodalSearchTaskRequest& setDatasetIds(const vector<string> & datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };
    inline ListMultimodalSearchTaskRequest& setDatasetIds(vector<string> && datasetIds) { DARABONBA_PTR_SET_RVALUE(datasetIds_, datasetIds) };


    // inputField Field Functions 
    bool hasInputField() const { return this->inputField_ != nullptr;};
    void deleteInputField() { this->inputField_ = nullptr;};
    inline string getInputField() const { DARABONBA_PTR_GET_DEFAULT(inputField_, "") };
    inline ListMultimodalSearchTaskRequest& setInputField(string inputField) { DARABONBA_PTR_SET_VALUE(inputField_, inputField) };


    // modelMode Field Functions 
    bool hasModelMode() const { return this->modelMode_ != nullptr;};
    void deleteModelMode() { this->modelMode_ = nullptr;};
    inline string getModelMode() const { DARABONBA_PTR_GET_DEFAULT(modelMode_, "") };
    inline ListMultimodalSearchTaskRequest& setModelMode(string modelMode) { DARABONBA_PTR_SET_VALUE(modelMode_, modelMode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMultimodalSearchTaskRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMultimodalSearchTaskRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline string getSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
    inline ListMultimodalSearchTaskRequest& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<vector<string>> datasetIds_ {};
    shared_ptr<string> inputField_ {};
    shared_ptr<string> modelMode_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> sourceRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
