// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRTUALRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRTUALRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateVirtualResourceRequestResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateVirtualResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVirtualResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DisableSpotProtectionPeriod, disableSpotProtectionPeriod_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(VirtualResourceName, virtualResourceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVirtualResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DisableSpotProtectionPeriod, disableSpotProtectionPeriod_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(VirtualResourceName, virtualResourceName_);
    };
    CreateVirtualResourceRequest() = default ;
    CreateVirtualResourceRequest(const CreateVirtualResourceRequest &) = default ;
    CreateVirtualResourceRequest(CreateVirtualResourceRequest &&) = default ;
    CreateVirtualResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVirtualResourceRequest() = default ;
    CreateVirtualResourceRequest& operator=(const CreateVirtualResourceRequest &) = default ;
    CreateVirtualResourceRequest& operator=(CreateVirtualResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disableSpotProtectionPeriod_ == nullptr
        && return this->resources_ == nullptr && return this->virtualResourceName_ == nullptr; };
    // disableSpotProtectionPeriod Field Functions 
    bool hasDisableSpotProtectionPeriod() const { return this->disableSpotProtectionPeriod_ != nullptr;};
    void deleteDisableSpotProtectionPeriod() { this->disableSpotProtectionPeriod_ = nullptr;};
    inline bool disableSpotProtectionPeriod() const { DARABONBA_PTR_GET_DEFAULT(disableSpotProtectionPeriod_, false) };
    inline CreateVirtualResourceRequest& setDisableSpotProtectionPeriod(bool disableSpotProtectionPeriod) { DARABONBA_PTR_SET_VALUE(disableSpotProtectionPeriod_, disableSpotProtectionPeriod) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<CreateVirtualResourceRequestResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<CreateVirtualResourceRequestResources>) };
    inline vector<CreateVirtualResourceRequestResources> resources() { DARABONBA_PTR_GET(resources_, vector<CreateVirtualResourceRequestResources>) };
    inline CreateVirtualResourceRequest& setResources(const vector<CreateVirtualResourceRequestResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline CreateVirtualResourceRequest& setResources(vector<CreateVirtualResourceRequestResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // virtualResourceName Field Functions 
    bool hasVirtualResourceName() const { return this->virtualResourceName_ != nullptr;};
    void deleteVirtualResourceName() { this->virtualResourceName_ = nullptr;};
    inline string virtualResourceName() const { DARABONBA_PTR_GET_DEFAULT(virtualResourceName_, "") };
    inline CreateVirtualResourceRequest& setVirtualResourceName(string virtualResourceName) { DARABONBA_PTR_SET_VALUE(virtualResourceName_, virtualResourceName) };


  protected:
    // Specifies whether to disable the retention period of preemptible instances.
    std::shared_ptr<bool> disableSpotProtectionPeriod_ = nullptr;
    // The resources in the virtual resource group.
    std::shared_ptr<vector<CreateVirtualResourceRequestResources>> resources_ = nullptr;
    // The name of the virtual resource group. Default value: the ID of the virtual resource group.
    std::shared_ptr<string> virtualResourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
