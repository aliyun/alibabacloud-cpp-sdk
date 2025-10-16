// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISSOCIATENETWORKPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISSOCIATENETWORKPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DissociateNetworkPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DissociateNetworkPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DissociateNetworkPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DissociateNetworkPackageRequest() = default ;
    DissociateNetworkPackageRequest(const DissociateNetworkPackageRequest &) = default ;
    DissociateNetworkPackageRequest(DissociateNetworkPackageRequest &&) = default ;
    DissociateNetworkPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DissociateNetworkPackageRequest() = default ;
    DissociateNetworkPackageRequest& operator=(const DissociateNetworkPackageRequest &) = default ;
    DissociateNetworkPackageRequest& operator=(DissociateNetworkPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkPackageId_ == nullptr
        && return this->regionId_ == nullptr; };
    // networkPackageId Field Functions 
    bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
    void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
    inline string networkPackageId() const { DARABONBA_PTR_GET_DEFAULT(networkPackageId_, "") };
    inline DissociateNetworkPackageRequest& setNetworkPackageId(string networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DissociateNetworkPackageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the premium bandwidth plan. You can call the [DescribeNetworkPackages](https://help.aliyun.com/document_detail/216079.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkPackageId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
