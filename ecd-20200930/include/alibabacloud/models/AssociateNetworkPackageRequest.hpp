// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATENETWORKPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATENETWORKPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class AssociateNetworkPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateNetworkPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateNetworkPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AssociateNetworkPackageRequest() = default ;
    AssociateNetworkPackageRequest(const AssociateNetworkPackageRequest &) = default ;
    AssociateNetworkPackageRequest(AssociateNetworkPackageRequest &&) = default ;
    AssociateNetworkPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateNetworkPackageRequest() = default ;
    AssociateNetworkPackageRequest& operator=(const AssociateNetworkPackageRequest &) = default ;
    AssociateNetworkPackageRequest& operator=(AssociateNetworkPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkPackageId_ == nullptr
        && this->officeSiteId_ == nullptr && this->regionId_ == nullptr; };
    // networkPackageId Field Functions 
    bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
    void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
    inline string getNetworkPackageId() const { DARABONBA_PTR_GET_DEFAULT(networkPackageId_, "") };
    inline AssociateNetworkPackageRequest& setNetworkPackageId(string networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline AssociateNetworkPackageRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AssociateNetworkPackageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the premium bandwidth plan.
    // 
    // This parameter is required.
    shared_ptr<string> networkPackageId_ {};
    // The ID of the office network. You can call the [DescribeNetworkPackages](https://help.aliyun.com/document_detail/216079.html) to obtain the ID of the office network to which a premium bandwidth plan is bound.
    // 
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
