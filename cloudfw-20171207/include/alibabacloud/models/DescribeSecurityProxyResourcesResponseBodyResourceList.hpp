// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESOURCESRESPONSEBODYRESOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYPROXYRESOURCESRESPONSEBODYRESOURCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityProxyResourcesResponseBodyResourceListVpcList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSecurityProxyResourcesResponseBodyResourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityProxyResourcesResponseBodyResourceList& obj) { 
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(VpcList, vpcList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityProxyResourcesResponseBodyResourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(VpcList, vpcList_);
    };
    DescribeSecurityProxyResourcesResponseBodyResourceList() = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceList(const DescribeSecurityProxyResourcesResponseBodyResourceList &) = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceList(DescribeSecurityProxyResourcesResponseBodyResourceList &&) = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityProxyResourcesResponseBodyResourceList() = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceList& operator=(const DescribeSecurityProxyResourcesResponseBodyResourceList &) = default ;
    DescribeSecurityProxyResourcesResponseBodyResourceList& operator=(DescribeSecurityProxyResourcesResponseBodyResourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionNo_ == nullptr
        && return this->vpcList_ == nullptr; };
    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeSecurityProxyResourcesResponseBodyResourceList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // vpcList Field Functions 
    bool hasVpcList() const { return this->vpcList_ != nullptr;};
    void deleteVpcList() { this->vpcList_ = nullptr;};
    inline const vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcList> & vpcList() const { DARABONBA_PTR_GET_CONST(vpcList_, vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcList>) };
    inline vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcList> vpcList() { DARABONBA_PTR_GET(vpcList_, vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcList>) };
    inline DescribeSecurityProxyResourcesResponseBodyResourceList& setVpcList(const vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcList> & vpcList) { DARABONBA_PTR_SET_VALUE(vpcList_, vpcList) };
    inline DescribeSecurityProxyResourcesResponseBodyResourceList& setVpcList(vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcList> && vpcList) { DARABONBA_PTR_SET_RVALUE(vpcList_, vpcList) };


  protected:
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSecurityProxyResourcesResponseBodyResourceListVpcList>> vpcList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
