// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHCCNINSTANCETOCENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHCCNINSTANCETOCENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class AttachCcnInstanceToCenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachCcnInstanceToCenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CcnId, ccnId_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Subnet, subnet_);
    };
    friend void from_json(const Darabonba::Json& j, AttachCcnInstanceToCenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CcnId, ccnId_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Subnet, subnet_);
    };
    AttachCcnInstanceToCenRequest() = default ;
    AttachCcnInstanceToCenRequest(const AttachCcnInstanceToCenRequest &) = default ;
    AttachCcnInstanceToCenRequest(AttachCcnInstanceToCenRequest &&) = default ;
    AttachCcnInstanceToCenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachCcnInstanceToCenRequest() = default ;
    AttachCcnInstanceToCenRequest& operator=(const AttachCcnInstanceToCenRequest &) = default ;
    AttachCcnInstanceToCenRequest& operator=(AttachCcnInstanceToCenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ccnId_ == nullptr
        && this->cenId_ == nullptr && this->regionId_ == nullptr && this->subnet_ == nullptr; };
    // ccnId Field Functions 
    bool hasCcnId() const { return this->ccnId_ != nullptr;};
    void deleteCcnId() { this->ccnId_ = nullptr;};
    inline string getCcnId() const { DARABONBA_PTR_GET_DEFAULT(ccnId_, "") };
    inline AttachCcnInstanceToCenRequest& setCcnId(string ccnId) { DARABONBA_PTR_SET_VALUE(ccnId_, ccnId) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline AttachCcnInstanceToCenRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachCcnInstanceToCenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subnet Field Functions 
    bool hasSubnet() const { return this->subnet_ != nullptr;};
    void deleteSubnet() { this->subnet_ = nullptr;};
    inline string getSubnet() const { DARABONBA_PTR_GET_DEFAULT(subnet_, "") };
    inline AttachCcnInstanceToCenRequest& setSubnet(string subnet) { DARABONBA_PTR_SET_VALUE(subnet_, subnet) };


  protected:
    // The ID of the Cloud Connect Network (CCN) instance to attach.
    shared_ptr<string> ccnId_ {};
    // The ID of the CEN instance to authorize.
    shared_ptr<string> cenId_ {};
    // The region ID of the Cloud Connect Network (CCN) instance. You can invoke the DescribeRegions operation to query the regions supported by Smart Access Gateway and the corresponding region IDs.
    shared_ptr<string> regionId_ {};
    // The Internet CIDR block used when the Cloud Connect Network (CCN) instance is attached to the CEN instance.
    shared_ptr<string> subnet_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
