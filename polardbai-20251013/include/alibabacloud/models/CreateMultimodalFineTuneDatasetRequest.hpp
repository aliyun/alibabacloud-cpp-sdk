// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIMODALFINETUNEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIMODALFINETUNEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class CreateMultimodalFineTuneDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultimodalFineTuneDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultimodalFineTuneDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
    };
    CreateMultimodalFineTuneDatasetRequest() = default ;
    CreateMultimodalFineTuneDatasetRequest(const CreateMultimodalFineTuneDatasetRequest &) = default ;
    CreateMultimodalFineTuneDatasetRequest(CreateMultimodalFineTuneDatasetRequest &&) = default ;
    CreateMultimodalFineTuneDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultimodalFineTuneDatasetRequest() = default ;
    CreateMultimodalFineTuneDatasetRequest& operator=(const CreateMultimodalFineTuneDatasetRequest &) = default ;
    CreateMultimodalFineTuneDatasetRequest& operator=(CreateMultimodalFineTuneDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->datasetDescription_ == nullptr && this->datasetName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateMultimodalFineTuneDatasetRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasetDescription Field Functions 
    bool hasDatasetDescription() const { return this->datasetDescription_ != nullptr;};
    void deleteDatasetDescription() { this->datasetDescription_ = nullptr;};
    inline string getDatasetDescription() const { DARABONBA_PTR_GET_DEFAULT(datasetDescription_, "") };
    inline CreateMultimodalFineTuneDatasetRequest& setDatasetDescription(string datasetDescription) { DARABONBA_PTR_SET_VALUE(datasetDescription_, datasetDescription) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateMultimodalFineTuneDatasetRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> datasetDescription_ {};
    shared_ptr<string> datasetName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
