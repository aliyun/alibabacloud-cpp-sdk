// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIMODALDATASETEMBEDDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIMODALDATASETEMBEDDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class CreateMultimodalDatasetEmbeddingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultimodalDatasetEmbeddingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(Model, model_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultimodalDatasetEmbeddingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
    };
    CreateMultimodalDatasetEmbeddingRequest() = default ;
    CreateMultimodalDatasetEmbeddingRequest(const CreateMultimodalDatasetEmbeddingRequest &) = default ;
    CreateMultimodalDatasetEmbeddingRequest(CreateMultimodalDatasetEmbeddingRequest &&) = default ;
    CreateMultimodalDatasetEmbeddingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultimodalDatasetEmbeddingRequest() = default ;
    CreateMultimodalDatasetEmbeddingRequest& operator=(const CreateMultimodalDatasetEmbeddingRequest &) = default ;
    CreateMultimodalDatasetEmbeddingRequest& operator=(CreateMultimodalDatasetEmbeddingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->datasetId_ == nullptr && this->model_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateMultimodalDatasetEmbeddingRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline CreateMultimodalDatasetEmbeddingRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateMultimodalDatasetEmbeddingRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> datasetId_ {};
    shared_ptr<string> model_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
