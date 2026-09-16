// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAIDBCLUSTERCUSTOMMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAIDBCLUSTERCUSTOMMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteAIDBClusterCustomModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAIDBClusterCustomModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAIDBClusterCustomModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAIDBClusterCustomModelResponseBody() = default ;
    DeleteAIDBClusterCustomModelResponseBody(const DeleteAIDBClusterCustomModelResponseBody &) = default ;
    DeleteAIDBClusterCustomModelResponseBody(DeleteAIDBClusterCustomModelResponseBody &&) = default ;
    DeleteAIDBClusterCustomModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAIDBClusterCustomModelResponseBody() = default ;
    DeleteAIDBClusterCustomModelResponseBody& operator=(const DeleteAIDBClusterCustomModelResponseBody &) = default ;
    DeleteAIDBClusterCustomModelResponseBody& operator=(DeleteAIDBClusterCustomModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleted_ == nullptr
        && this->modelId_ == nullptr && this->modelName_ == nullptr && this->requestId_ == nullptr; };
    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline bool getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
    inline DeleteAIDBClusterCustomModelResponseBody& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
    inline DeleteAIDBClusterCustomModelResponseBody& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline DeleteAIDBClusterCustomModelResponseBody& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAIDBClusterCustomModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the deletion was successful.
    shared_ptr<bool> deleted_ {};
    // The ID of the deleted model registration.
    shared_ptr<int64_t> modelId_ {};
    // The key of the deleted custom model registration.
    shared_ptr<string> modelName_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
