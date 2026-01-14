// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DescribeIpSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpSetId, ipSetId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpSetId, ipSetId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeIpSetRequest() = default ;
    DescribeIpSetRequest(const DescribeIpSetRequest &) = default ;
    DescribeIpSetRequest(DescribeIpSetRequest &&) = default ;
    DescribeIpSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpSetRequest() = default ;
    DescribeIpSetRequest& operator=(const DescribeIpSetRequest &) = default ;
    DescribeIpSetRequest& operator=(DescribeIpSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipSetId_ == nullptr
        && this->regionId_ == nullptr; };
    // ipSetId Field Functions 
    bool hasIpSetId() const { return this->ipSetId_ != nullptr;};
    void deleteIpSetId() { this->ipSetId_ = nullptr;};
    inline string getIpSetId() const { DARABONBA_PTR_GET_DEFAULT(ipSetId_, "") };
    inline DescribeIpSetRequest& setIpSetId(string ipSetId) { DARABONBA_PTR_SET_VALUE(ipSetId_, ipSetId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeIpSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the acceleration region.
    // 
    // You can call the [ListIpSets](https://help.aliyun.com/document_detail/2253273.html) operation to query the IDs of acceleration regions of a specific GA instance.
    // 
    // This parameter is required.
    shared_ptr<string> ipSetId_ {};
    // The ID of the region where the Global Accelerator (GA) instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
