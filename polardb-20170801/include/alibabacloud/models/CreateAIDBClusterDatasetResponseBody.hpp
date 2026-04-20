// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAIDBCLUSTERDATASETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAIDBCLUSTERDATASETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateAIDBClusterDatasetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAIDBClusterDatasetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DataServiceId, dataServiceId_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAIDBClusterDatasetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DataServiceId, dataServiceId_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAIDBClusterDatasetResponseBody() = default ;
    CreateAIDBClusterDatasetResponseBody(const CreateAIDBClusterDatasetResponseBody &) = default ;
    CreateAIDBClusterDatasetResponseBody(CreateAIDBClusterDatasetResponseBody &&) = default ;
    CreateAIDBClusterDatasetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAIDBClusterDatasetResponseBody() = default ;
    CreateAIDBClusterDatasetResponseBody& operator=(const CreateAIDBClusterDatasetResponseBody &) = default ;
    CreateAIDBClusterDatasetResponseBody& operator=(CreateAIDBClusterDatasetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->dataServiceId_ == nullptr && this->datasetId_ == nullptr && this->datasetName_ == nullptr && this->path_ == nullptr && this->requestId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateAIDBClusterDatasetResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dataServiceId Field Functions 
    bool hasDataServiceId() const { return this->dataServiceId_ != nullptr;};
    void deleteDataServiceId() { this->dataServiceId_ = nullptr;};
    inline string getDataServiceId() const { DARABONBA_PTR_GET_DEFAULT(dataServiceId_, "") };
    inline CreateAIDBClusterDatasetResponseBody& setDataServiceId(string dataServiceId) { DARABONBA_PTR_SET_VALUE(dataServiceId_, dataServiceId) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline CreateAIDBClusterDatasetResponseBody& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateAIDBClusterDatasetResponseBody& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateAIDBClusterDatasetResponseBody& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAIDBClusterDatasetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> dataServiceId_ {};
    shared_ptr<string> datasetId_ {};
    shared_ptr<string> datasetName_ {};
    shared_ptr<string> path_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
