// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCLISTLITERESPONSEBODYVPCLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCLISTLITERESPONSEBODYVPCLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcListLiteResponseBodyVpcList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcListLiteResponseBodyVpcList& obj) { 
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcListLiteResponseBodyVpcList& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeVpcListLiteResponseBodyVpcList() = default ;
    DescribeVpcListLiteResponseBodyVpcList(const DescribeVpcListLiteResponseBodyVpcList &) = default ;
    DescribeVpcListLiteResponseBodyVpcList(DescribeVpcListLiteResponseBodyVpcList &&) = default ;
    DescribeVpcListLiteResponseBodyVpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcListLiteResponseBodyVpcList() = default ;
    DescribeVpcListLiteResponseBodyVpcList& operator=(const DescribeVpcListLiteResponseBodyVpcList &) = default ;
    DescribeVpcListLiteResponseBodyVpcList& operator=(DescribeVpcListLiteResponseBodyVpcList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionNo_ != nullptr
        && this->vpcId_ != nullptr && this->vpcName_ != nullptr; };
    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeVpcListLiteResponseBodyVpcList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcListLiteResponseBodyVpcList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeVpcListLiteResponseBodyVpcList& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The region ID of the VPC.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
