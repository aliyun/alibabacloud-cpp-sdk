// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDOMAINACCELERATORRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDOMAINACCELERATORRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DeleteDomainAcceleratorRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDomainAcceleratorRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorIds, acceleratorIds_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDomainAcceleratorRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorIds, acceleratorIds_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteDomainAcceleratorRelationRequest() = default ;
    DeleteDomainAcceleratorRelationRequest(const DeleteDomainAcceleratorRelationRequest &) = default ;
    DeleteDomainAcceleratorRelationRequest(DeleteDomainAcceleratorRelationRequest &&) = default ;
    DeleteDomainAcceleratorRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDomainAcceleratorRelationRequest() = default ;
    DeleteDomainAcceleratorRelationRequest& operator=(const DeleteDomainAcceleratorRelationRequest &) = default ;
    DeleteDomainAcceleratorRelationRequest& operator=(DeleteDomainAcceleratorRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorIds_ == nullptr
        && this->domain_ == nullptr && this->regionId_ == nullptr; };
    // acceleratorIds Field Functions 
    bool hasAcceleratorIds() const { return this->acceleratorIds_ != nullptr;};
    void deleteAcceleratorIds() { this->acceleratorIds_ = nullptr;};
    inline const vector<string> & getAcceleratorIds() const { DARABONBA_PTR_GET_CONST(acceleratorIds_, vector<string>) };
    inline vector<string> getAcceleratorIds() { DARABONBA_PTR_GET(acceleratorIds_, vector<string>) };
    inline DeleteDomainAcceleratorRelationRequest& setAcceleratorIds(const vector<string> & acceleratorIds) { DARABONBA_PTR_SET_VALUE(acceleratorIds_, acceleratorIds) };
    inline DeleteDomainAcceleratorRelationRequest& setAcceleratorIds(vector<string> && acceleratorIds) { DARABONBA_PTR_SET_RVALUE(acceleratorIds_, acceleratorIds) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DeleteDomainAcceleratorRelationRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDomainAcceleratorRelationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the GA instance to be disassociated. You can specify up to 50 IDs.
    // 
    // If you leave this parameter empty, all GA instances associated with the specified domain name are disassociated.
    shared_ptr<vector<string>> acceleratorIds_ {};
    // The accelerated domain name to be disassociated.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The ID of the region where the Global Accelerator (GA) instance is deployed. Set the value to **cn-hangzhou**.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
