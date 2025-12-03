// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLERESOURCESAVAILABLERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLERESOURCESAVAILABLERESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource& obj) { 
      DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_TO_JSON(SlaveZoneId, slaveZoneId_);
      DARABONBA_PTR_TO_JSON(SupportResources, supportResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource& obj) { 
      DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_FROM_JSON(SlaveZoneId, slaveZoneId_);
      DARABONBA_PTR_FROM_JSON(SupportResources, supportResources_);
    };
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource() = default ;
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource(const DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource &) = default ;
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource(DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource &&) = default ;
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource() = default ;
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource& operator=(const DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource &) = default ;
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource& operator=(DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->masterZoneId_ == nullptr
        && return this->slaveZoneId_ == nullptr && return this->supportResources_ == nullptr; };
    // masterZoneId Field Functions 
    bool hasMasterZoneId() const { return this->masterZoneId_ != nullptr;};
    void deleteMasterZoneId() { this->masterZoneId_ = nullptr;};
    inline string masterZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterZoneId_, "") };
    inline DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource& setMasterZoneId(string masterZoneId) { DARABONBA_PTR_SET_VALUE(masterZoneId_, masterZoneId) };


    // slaveZoneId Field Functions 
    bool hasSlaveZoneId() const { return this->slaveZoneId_ != nullptr;};
    void deleteSlaveZoneId() { this->slaveZoneId_ = nullptr;};
    inline string slaveZoneId() const { DARABONBA_PTR_GET_DEFAULT(slaveZoneId_, "") };
    inline DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource& setSlaveZoneId(string slaveZoneId) { DARABONBA_PTR_SET_VALUE(slaveZoneId_, slaveZoneId) };


    // supportResources Field Functions 
    bool hasSupportResources() const { return this->supportResources_ != nullptr;};
    void deleteSupportResources() { this->supportResources_ = nullptr;};
    inline const Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources & supportResources() const { DARABONBA_PTR_GET_CONST(supportResources_, Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources) };
    inline Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources supportResources() { DARABONBA_PTR_GET(supportResources_, Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources) };
    inline DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource& setSupportResources(const Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources & supportResources) { DARABONBA_PTR_SET_VALUE(supportResources_, supportResources) };
    inline DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource& setSupportResources(Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources && supportResources) { DARABONBA_PTR_SET_RVALUE(supportResources_, supportResources) };


  protected:
    // The primary zone.
    std::shared_ptr<string> masterZoneId_ = nullptr;
    // The secondary zone.
    std::shared_ptr<string> slaveZoneId_ = nullptr;
    // The supported resources.
    std::shared_ptr<Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResources> supportResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
