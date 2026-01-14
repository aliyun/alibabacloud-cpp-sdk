// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class UpdateDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TargetDomain, targetDomain_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TargetDomain, targetDomain_);
    };
    UpdateDomainRequest() = default ;
    UpdateDomainRequest(const UpdateDomainRequest &) = default ;
    UpdateDomainRequest(UpdateDomainRequest &&) = default ;
    UpdateDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDomainRequest() = default ;
    UpdateDomainRequest& operator=(const UpdateDomainRequest &) = default ;
    UpdateDomainRequest& operator=(UpdateDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->regionId_ == nullptr && this->targetDomain_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UpdateDomainRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDomainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // targetDomain Field Functions 
    bool hasTargetDomain() const { return this->targetDomain_ != nullptr;};
    void deleteTargetDomain() { this->targetDomain_ = nullptr;};
    inline string getTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(targetDomain_, "") };
    inline UpdateDomainRequest& setTargetDomain(string targetDomain) { DARABONBA_PTR_SET_VALUE(targetDomain_, targetDomain) };


  protected:
    // The new accelerated domain name.
    // 
    // Only primary domain names are supported, such as `example.net`.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The ID of the region where the Global Accelerator (GA) instance is deployed. Set the value to **cn-hangzhou**.
    shared_ptr<string> regionId_ {};
    // The accelerated domain name to be modified.
    // 
    // This parameter is required.
    shared_ptr<string> targetDomain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
