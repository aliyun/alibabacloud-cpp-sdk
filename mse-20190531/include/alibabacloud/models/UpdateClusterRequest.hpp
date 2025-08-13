// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterAliasName, clusterAliasName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaintenanceEndTime, maintenanceEndTime_);
      DARABONBA_PTR_TO_JSON(MaintenanceStartTime, maintenanceStartTime_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterAliasName, clusterAliasName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaintenanceEndTime, maintenanceEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintenanceStartTime, maintenanceStartTime_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
    };
    UpdateClusterRequest() = default ;
    UpdateClusterRequest(const UpdateClusterRequest &) = default ;
    UpdateClusterRequest(UpdateClusterRequest &&) = default ;
    UpdateClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClusterRequest() = default ;
    UpdateClusterRequest& operator=(const UpdateClusterRequest &) = default ;
    UpdateClusterRequest& operator=(UpdateClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->clusterAliasName_ != nullptr && this->instanceId_ != nullptr && this->maintenanceEndTime_ != nullptr && this->maintenanceStartTime_ != nullptr && this->requestPars_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateClusterRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterAliasName Field Functions 
    bool hasClusterAliasName() const { return this->clusterAliasName_ != nullptr;};
    void deleteClusterAliasName() { this->clusterAliasName_ = nullptr;};
    inline string clusterAliasName() const { DARABONBA_PTR_GET_DEFAULT(clusterAliasName_, "") };
    inline UpdateClusterRequest& setClusterAliasName(string clusterAliasName) { DARABONBA_PTR_SET_VALUE(clusterAliasName_, clusterAliasName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateClusterRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maintenanceEndTime Field Functions 
    bool hasMaintenanceEndTime() const { return this->maintenanceEndTime_ != nullptr;};
    void deleteMaintenanceEndTime() { this->maintenanceEndTime_ = nullptr;};
    inline string maintenanceEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintenanceEndTime_, "") };
    inline UpdateClusterRequest& setMaintenanceEndTime(string maintenanceEndTime) { DARABONBA_PTR_SET_VALUE(maintenanceEndTime_, maintenanceEndTime) };


    // maintenanceStartTime Field Functions 
    bool hasMaintenanceStartTime() const { return this->maintenanceStartTime_ != nullptr;};
    void deleteMaintenanceStartTime() { this->maintenanceStartTime_ = nullptr;};
    inline string maintenanceStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintenanceStartTime_, "") };
    inline UpdateClusterRequest& setMaintenanceStartTime(string maintenanceStartTime) { DARABONBA_PTR_SET_VALUE(maintenanceStartTime_, maintenanceStartTime) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string requestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline UpdateClusterRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The alias of the instance.
    std::shared_ptr<string> clusterAliasName_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The end time of the O\\&M window.
    std::shared_ptr<string> maintenanceEndTime_ = nullptr;
    // The start time of the O\\&M window.
    std::shared_ptr<string> maintenanceStartTime_ = nullptr;
    // The extended request parameters in the JSON format.
    std::shared_ptr<string> requestPars_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
