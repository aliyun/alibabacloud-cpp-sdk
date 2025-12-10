// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSEBODYREASONROLEUSAGESROLEUSAGE_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELINKEDROLEDELETIONSTATUSRESPONSEBODYREASONROLEUSAGESROLEUSAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage() = default ;
    GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage(const GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage &) = default ;
    GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage(GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage &&) = default ;
    GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage() = default ;
    GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage& operator=(const GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage &) = default ;
    GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage& operator=(GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->region_ == nullptr
        && return this->resources_ == nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources & resources() const { DARABONBA_PTR_GET_CONST(resources_, Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources) };
    inline Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources resources() { DARABONBA_PTR_GET(resources_, Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources) };
    inline GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage& setResources(const Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage& setResources(Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The region.
    std::shared_ptr<string> region_ = nullptr;
    // The information about resources.
    std::shared_ptr<Models::GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
