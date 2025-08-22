// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEENVIRONMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEENVIRONMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteEnvironmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEnvironmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeletePromInstance, deletePromInstance_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEnvironmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletePromInstance, deletePromInstance_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteEnvironmentRequest() = default ;
    DeleteEnvironmentRequest(const DeleteEnvironmentRequest &) = default ;
    DeleteEnvironmentRequest(DeleteEnvironmentRequest &&) = default ;
    DeleteEnvironmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEnvironmentRequest() = default ;
    DeleteEnvironmentRequest& operator=(const DeleteEnvironmentRequest &) = default ;
    DeleteEnvironmentRequest& operator=(DeleteEnvironmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deletePromInstance_ != nullptr
        && this->environmentId_ != nullptr && this->regionId_ != nullptr; };
    // deletePromInstance Field Functions 
    bool hasDeletePromInstance() const { return this->deletePromInstance_ != nullptr;};
    void deleteDeletePromInstance() { this->deletePromInstance_ = nullptr;};
    inline bool deletePromInstance() const { DARABONBA_PTR_GET_DEFAULT(deletePromInstance_, false) };
    inline DeleteEnvironmentRequest& setDeletePromInstance(bool deletePromInstance) { DARABONBA_PTR_SET_VALUE(deletePromInstance_, deletePromInstance) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline DeleteEnvironmentRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteEnvironmentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to delete the related Prometheus instance.
    std::shared_ptr<bool> deletePromInstance_ = nullptr;
    // The ID of the environment instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
