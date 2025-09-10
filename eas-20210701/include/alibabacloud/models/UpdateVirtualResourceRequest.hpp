// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIRTUALRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIRTUALRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateVirtualResourceRequestResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateVirtualResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVirtualResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DisableSpotProtectionPeriod, disableSpotProtectionPeriod_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(VirtualResourceName, virtualResourceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVirtualResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DisableSpotProtectionPeriod, disableSpotProtectionPeriod_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(VirtualResourceName, virtualResourceName_);
    };
    UpdateVirtualResourceRequest() = default ;
    UpdateVirtualResourceRequest(const UpdateVirtualResourceRequest &) = default ;
    UpdateVirtualResourceRequest(UpdateVirtualResourceRequest &&) = default ;
    UpdateVirtualResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVirtualResourceRequest() = default ;
    UpdateVirtualResourceRequest& operator=(const UpdateVirtualResourceRequest &) = default ;
    UpdateVirtualResourceRequest& operator=(UpdateVirtualResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disableSpotProtectionPeriod_ != nullptr
        && this->resources_ != nullptr && this->virtualResourceName_ != nullptr; };
    // disableSpotProtectionPeriod Field Functions 
    bool hasDisableSpotProtectionPeriod() const { return this->disableSpotProtectionPeriod_ != nullptr;};
    void deleteDisableSpotProtectionPeriod() { this->disableSpotProtectionPeriod_ = nullptr;};
    inline bool disableSpotProtectionPeriod() const { DARABONBA_PTR_GET_DEFAULT(disableSpotProtectionPeriod_, false) };
    inline UpdateVirtualResourceRequest& setDisableSpotProtectionPeriod(bool disableSpotProtectionPeriod) { DARABONBA_PTR_SET_VALUE(disableSpotProtectionPeriod_, disableSpotProtectionPeriod) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<UpdateVirtualResourceRequestResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<UpdateVirtualResourceRequestResources>) };
    inline vector<UpdateVirtualResourceRequestResources> resources() { DARABONBA_PTR_GET(resources_, vector<UpdateVirtualResourceRequestResources>) };
    inline UpdateVirtualResourceRequest& setResources(const vector<UpdateVirtualResourceRequestResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline UpdateVirtualResourceRequest& setResources(vector<UpdateVirtualResourceRequestResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // virtualResourceName Field Functions 
    bool hasVirtualResourceName() const { return this->virtualResourceName_ != nullptr;};
    void deleteVirtualResourceName() { this->virtualResourceName_ = nullptr;};
    inline string virtualResourceName() const { DARABONBA_PTR_GET_DEFAULT(virtualResourceName_, "") };
    inline UpdateVirtualResourceRequest& setVirtualResourceName(string virtualResourceName) { DARABONBA_PTR_SET_VALUE(virtualResourceName_, virtualResourceName) };


  protected:
    // Specifies whether to disable the retention period of preemptible instances.
    std::shared_ptr<bool> disableSpotProtectionPeriod_ = nullptr;
    // The resources in the virtual resource group.
    // 
    // >  If you specify this parameter, previous data is overwritten.
    std::shared_ptr<vector<UpdateVirtualResourceRequestResources>> resources_ = nullptr;
    // The new name of the virtual resource group.
    std::shared_ptr<string> virtualResourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
