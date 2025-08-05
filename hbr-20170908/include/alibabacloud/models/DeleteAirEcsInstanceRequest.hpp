// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAIRECSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAIRECSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DeleteAirEcsInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAirEcsInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(UninstallClientSourceTypes, uninstallClientSourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAirEcsInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(UninstallClientSourceTypes, uninstallClientSourceTypes_);
    };
    DeleteAirEcsInstanceRequest() = default ;
    DeleteAirEcsInstanceRequest(const DeleteAirEcsInstanceRequest &) = default ;
    DeleteAirEcsInstanceRequest(DeleteAirEcsInstanceRequest &&) = default ;
    DeleteAirEcsInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAirEcsInstanceRequest() = default ;
    DeleteAirEcsInstanceRequest& operator=(const DeleteAirEcsInstanceRequest &) = default ;
    DeleteAirEcsInstanceRequest& operator=(DeleteAirEcsInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ecsInstanceId_ != nullptr
        && this->uninstallClientSourceTypes_ != nullptr; };
    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline DeleteAirEcsInstanceRequest& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // uninstallClientSourceTypes Field Functions 
    bool hasUninstallClientSourceTypes() const { return this->uninstallClientSourceTypes_ != nullptr;};
    void deleteUninstallClientSourceTypes() { this->uninstallClientSourceTypes_ = nullptr;};
    inline const vector<string> & uninstallClientSourceTypes() const { DARABONBA_PTR_GET_CONST(uninstallClientSourceTypes_, vector<string>) };
    inline vector<string> uninstallClientSourceTypes() { DARABONBA_PTR_GET(uninstallClientSourceTypes_, vector<string>) };
    inline DeleteAirEcsInstanceRequest& setUninstallClientSourceTypes(const vector<string> & uninstallClientSourceTypes) { DARABONBA_PTR_SET_VALUE(uninstallClientSourceTypes_, uninstallClientSourceTypes) };
    inline DeleteAirEcsInstanceRequest& setUninstallClientSourceTypes(vector<string> && uninstallClientSourceTypes) { DARABONBA_PTR_SET_RVALUE(uninstallClientSourceTypes_, uninstallClientSourceTypes) };


  protected:
    // The ID of the Elastic Compute Service (ECS) instance.
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    // The data sources for which the client needs to be uninstalled.
    std::shared_ptr<vector<string>> uninstallClientSourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
