// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIMODALSEARCHTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIMODALSEARCHTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ListMultimodalSearchTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultimodalSearchTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasetIds, datasetIdsShrink_);
      DARABONBA_PTR_TO_JSON(InputField, inputField_);
      DARABONBA_PTR_TO_JSON(ModelMode, modelMode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultimodalSearchTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasetIds, datasetIdsShrink_);
      DARABONBA_PTR_FROM_JSON(InputField, inputField_);
      DARABONBA_PTR_FROM_JSON(ModelMode, modelMode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListMultimodalSearchTaskShrinkRequest() = default ;
    ListMultimodalSearchTaskShrinkRequest(const ListMultimodalSearchTaskShrinkRequest &) = default ;
    ListMultimodalSearchTaskShrinkRequest(ListMultimodalSearchTaskShrinkRequest &&) = default ;
    ListMultimodalSearchTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultimodalSearchTaskShrinkRequest() = default ;
    ListMultimodalSearchTaskShrinkRequest& operator=(const ListMultimodalSearchTaskShrinkRequest &) = default ;
    ListMultimodalSearchTaskShrinkRequest& operator=(ListMultimodalSearchTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->datasetIdsShrink_ == nullptr && this->inputField_ == nullptr && this->modelMode_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ListMultimodalSearchTaskShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasetIdsShrink Field Functions 
    bool hasDatasetIdsShrink() const { return this->datasetIdsShrink_ != nullptr;};
    void deleteDatasetIdsShrink() { this->datasetIdsShrink_ = nullptr;};
    inline string getDatasetIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(datasetIdsShrink_, "") };
    inline ListMultimodalSearchTaskShrinkRequest& setDatasetIdsShrink(string datasetIdsShrink) { DARABONBA_PTR_SET_VALUE(datasetIdsShrink_, datasetIdsShrink) };


    // inputField Field Functions 
    bool hasInputField() const { return this->inputField_ != nullptr;};
    void deleteInputField() { this->inputField_ = nullptr;};
    inline string getInputField() const { DARABONBA_PTR_GET_DEFAULT(inputField_, "") };
    inline ListMultimodalSearchTaskShrinkRequest& setInputField(string inputField) { DARABONBA_PTR_SET_VALUE(inputField_, inputField) };


    // modelMode Field Functions 
    bool hasModelMode() const { return this->modelMode_ != nullptr;};
    void deleteModelMode() { this->modelMode_ = nullptr;};
    inline string getModelMode() const { DARABONBA_PTR_GET_DEFAULT(modelMode_, "") };
    inline ListMultimodalSearchTaskShrinkRequest& setModelMode(string modelMode) { DARABONBA_PTR_SET_VALUE(modelMode_, modelMode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMultimodalSearchTaskShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMultimodalSearchTaskShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> datasetIdsShrink_ {};
    shared_ptr<string> inputField_ {};
    shared_ptr<string> modelMode_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
