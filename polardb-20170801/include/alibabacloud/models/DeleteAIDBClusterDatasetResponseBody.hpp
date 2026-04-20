// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAIDBCLUSTERDATASETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAIDBCLUSTERDATASETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteAIDBClusterDatasetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAIDBClusterDatasetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataServiceId, dataServiceId_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAIDBClusterDatasetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataServiceId, dataServiceId_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAIDBClusterDatasetResponseBody() = default ;
    DeleteAIDBClusterDatasetResponseBody(const DeleteAIDBClusterDatasetResponseBody &) = default ;
    DeleteAIDBClusterDatasetResponseBody(DeleteAIDBClusterDatasetResponseBody &&) = default ;
    DeleteAIDBClusterDatasetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAIDBClusterDatasetResponseBody() = default ;
    DeleteAIDBClusterDatasetResponseBody& operator=(const DeleteAIDBClusterDatasetResponseBody &) = default ;
    DeleteAIDBClusterDatasetResponseBody& operator=(DeleteAIDBClusterDatasetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataServiceId_ == nullptr
        && this->datasetId_ == nullptr && this->requestId_ == nullptr; };
    // dataServiceId Field Functions 
    bool hasDataServiceId() const { return this->dataServiceId_ != nullptr;};
    void deleteDataServiceId() { this->dataServiceId_ = nullptr;};
    inline string getDataServiceId() const { DARABONBA_PTR_GET_DEFAULT(dataServiceId_, "") };
    inline DeleteAIDBClusterDatasetResponseBody& setDataServiceId(string dataServiceId) { DARABONBA_PTR_SET_VALUE(dataServiceId_, dataServiceId) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline DeleteAIDBClusterDatasetResponseBody& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAIDBClusterDatasetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> dataServiceId_ {};
    shared_ptr<string> datasetId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
