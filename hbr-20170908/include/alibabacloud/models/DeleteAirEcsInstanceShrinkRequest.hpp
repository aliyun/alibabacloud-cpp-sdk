// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAIRECSINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAIRECSINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DeleteAirEcsInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAirEcsInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(UninstallClientSourceTypes, uninstallClientSourceTypesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAirEcsInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(UninstallClientSourceTypes, uninstallClientSourceTypesShrink_);
    };
    DeleteAirEcsInstanceShrinkRequest() = default ;
    DeleteAirEcsInstanceShrinkRequest(const DeleteAirEcsInstanceShrinkRequest &) = default ;
    DeleteAirEcsInstanceShrinkRequest(DeleteAirEcsInstanceShrinkRequest &&) = default ;
    DeleteAirEcsInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAirEcsInstanceShrinkRequest() = default ;
    DeleteAirEcsInstanceShrinkRequest& operator=(const DeleteAirEcsInstanceShrinkRequest &) = default ;
    DeleteAirEcsInstanceShrinkRequest& operator=(DeleteAirEcsInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ecsInstanceId_ != nullptr
        && this->uninstallClientSourceTypesShrink_ != nullptr; };
    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline DeleteAirEcsInstanceShrinkRequest& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // uninstallClientSourceTypesShrink Field Functions 
    bool hasUninstallClientSourceTypesShrink() const { return this->uninstallClientSourceTypesShrink_ != nullptr;};
    void deleteUninstallClientSourceTypesShrink() { this->uninstallClientSourceTypesShrink_ = nullptr;};
    inline string uninstallClientSourceTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(uninstallClientSourceTypesShrink_, "") };
    inline DeleteAirEcsInstanceShrinkRequest& setUninstallClientSourceTypesShrink(string uninstallClientSourceTypesShrink) { DARABONBA_PTR_SET_VALUE(uninstallClientSourceTypesShrink_, uninstallClientSourceTypesShrink) };


  protected:
    // The ID of the Elastic Compute Service (ECS) instance.
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    // The data sources for which the client needs to be uninstalled.
    std::shared_ptr<string> uninstallClientSourceTypesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
