// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTGROUPRESPONSEBODYDATALISTRESOURCEPRIVATEIPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTGROUPRESPONSEBODYDATALISTRESOURCEPRIVATEIPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList& obj) { 
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_TO_JSON(ResourcePrivateIP, resourcePrivateIP_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResourcePrivateIP, resourcePrivateIP_);
    };
    DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList() = default ;
    DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList(const DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList &) = default ;
    DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList(DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList &&) = default ;
    DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList() = default ;
    DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList& operator=(const DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList &) = default ;
    DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList& operator=(DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionNo_ == nullptr
        && return this->resourceInstanceId_ == nullptr && return this->resourceInstanceName_ == nullptr && return this->resourcePrivateIP_ == nullptr; };
    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string resourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceInstanceName Field Functions 
    bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
    void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
    inline string resourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
    inline DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


    // resourcePrivateIP Field Functions 
    bool hasResourcePrivateIP() const { return this->resourcePrivateIP_ != nullptr;};
    void deleteResourcePrivateIP() { this->resourcePrivateIP_ = nullptr;};
    inline string resourcePrivateIP() const { DARABONBA_PTR_GET_DEFAULT(resourcePrivateIP_, "") };
    inline DescribeRiskEventGroupResponseBodyDataListResourcePrivateIPList& setResourcePrivateIP(string resourcePrivateIP) { DARABONBA_PTR_SET_VALUE(resourcePrivateIP_, resourcePrivateIP) };


  protected:
    // The ID of the region to which the private IP address belongs.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The ID of the instance that uses the private IP address.
    std::shared_ptr<string> resourceInstanceId_ = nullptr;
    // The name of the instance that uses the private IP address.
    std::shared_ptr<string> resourceInstanceName_ = nullptr;
    // The private IP address.
    std::shared_ptr<string> resourcePrivateIP_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
