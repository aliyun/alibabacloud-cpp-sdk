// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLERESOURCESAVAILABLERESOURCESUPPORTRESOURCESSUPPORTRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLERESOURCESAVAILABLERESOURCESUPPORTRESOURCESSUPPORTRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
    };
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource() = default ;
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource(const DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource &) = default ;
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource(DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource &&) = default ;
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource() = default ;
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource& operator=(const DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource &) = default ;
    DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource& operator=(DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressIPVersion_ == nullptr
        && return this->addressType_ == nullptr; };
    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResourceSupportResourcesSupportResource& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


  protected:
    // The type of the IP address.
    // 
    // Valid values: **ipv4 and ipv6**.
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    // The network type.
    // 
    // Valid values: **vpc, classic-internet, and classic-intranet**.
    std::shared_ptr<string> addressType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
