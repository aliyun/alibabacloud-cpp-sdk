// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMULTIMODALFINETUNEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMULTIMODALFINETUNEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class DeleteMultimodalFineTuneDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMultimodalFineTuneDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMultimodalFineTuneDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
    };
    DeleteMultimodalFineTuneDatasetRequest() = default ;
    DeleteMultimodalFineTuneDatasetRequest(const DeleteMultimodalFineTuneDatasetRequest &) = default ;
    DeleteMultimodalFineTuneDatasetRequest(DeleteMultimodalFineTuneDatasetRequest &&) = default ;
    DeleteMultimodalFineTuneDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMultimodalFineTuneDatasetRequest() = default ;
    DeleteMultimodalFineTuneDatasetRequest& operator=(const DeleteMultimodalFineTuneDatasetRequest &) = default ;
    DeleteMultimodalFineTuneDatasetRequest& operator=(DeleteMultimodalFineTuneDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->datasetId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeleteMultimodalFineTuneDatasetRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline DeleteMultimodalFineTuneDatasetRequest& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> datasetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
