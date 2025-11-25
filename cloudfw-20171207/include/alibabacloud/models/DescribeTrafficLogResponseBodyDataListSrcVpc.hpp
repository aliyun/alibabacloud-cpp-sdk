// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICLOGRESPONSEBODYDATALISTSRCVPC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICLOGRESPONSEBODYDATALISTSRCVPC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrafficLogResponseBodyDataListSrcVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficLogResponseBodyDataListSrcVpc& obj) { 
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficLogResponseBodyDataListSrcVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeTrafficLogResponseBodyDataListSrcVpc() = default ;
    DescribeTrafficLogResponseBodyDataListSrcVpc(const DescribeTrafficLogResponseBodyDataListSrcVpc &) = default ;
    DescribeTrafficLogResponseBodyDataListSrcVpc(DescribeTrafficLogResponseBodyDataListSrcVpc &&) = default ;
    DescribeTrafficLogResponseBodyDataListSrcVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficLogResponseBodyDataListSrcVpc() = default ;
    DescribeTrafficLogResponseBodyDataListSrcVpc& operator=(const DescribeTrafficLogResponseBodyDataListSrcVpc &) = default ;
    DescribeTrafficLogResponseBodyDataListSrcVpc& operator=(DescribeTrafficLogResponseBodyDataListSrcVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionNo_ == nullptr
        && return this->vpcId_ == nullptr && return this->vpcName_ == nullptr; };
    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeTrafficLogResponseBodyDataListSrcVpc& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeTrafficLogResponseBodyDataListSrcVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeTrafficLogResponseBodyDataListSrcVpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
