// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAIDBCLUSTERCUSTOMMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAIDBCLUSTERCUSTOMMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteAIDBClusterCustomModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAIDBClusterCustomModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAIDBClusterCustomModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteAIDBClusterCustomModelRequest() = default ;
    DeleteAIDBClusterCustomModelRequest(const DeleteAIDBClusterCustomModelRequest &) = default ;
    DeleteAIDBClusterCustomModelRequest(DeleteAIDBClusterCustomModelRequest &&) = default ;
    DeleteAIDBClusterCustomModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAIDBClusterCustomModelRequest() = default ;
    DeleteAIDBClusterCustomModelRequest& operator=(const DeleteAIDBClusterCustomModelRequest &) = default ;
    DeleteAIDBClusterCustomModelRequest& operator=(DeleteAIDBClusterCustomModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelName_ == nullptr
        && this->regionId_ == nullptr; };
    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline DeleteAIDBClusterCustomModelRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteAIDBClusterCustomModelRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The custom model registration key to delete.
    // 
    // This parameter is required.
    shared_ptr<string> modelName_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
