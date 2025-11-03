// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYCLOUDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYCLOUDRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcAttributeResponseBodyCloudResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAttributeResponseBodyCloudResources& obj) { 
      DARABONBA_PTR_TO_JSON(CloudResourceSetType, cloudResourceSetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAttributeResponseBodyCloudResources& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudResourceSetType, cloudResourceSetType_);
    };
    DescribeVpcAttributeResponseBodyCloudResources() = default ;
    DescribeVpcAttributeResponseBodyCloudResources(const DescribeVpcAttributeResponseBodyCloudResources &) = default ;
    DescribeVpcAttributeResponseBodyCloudResources(DescribeVpcAttributeResponseBodyCloudResources &&) = default ;
    DescribeVpcAttributeResponseBodyCloudResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAttributeResponseBodyCloudResources() = default ;
    DescribeVpcAttributeResponseBodyCloudResources& operator=(const DescribeVpcAttributeResponseBodyCloudResources &) = default ;
    DescribeVpcAttributeResponseBodyCloudResources& operator=(DescribeVpcAttributeResponseBodyCloudResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudResourceSetType_ == nullptr; };
    // cloudResourceSetType Field Functions 
    bool hasCloudResourceSetType() const { return this->cloudResourceSetType_ != nullptr;};
    void deleteCloudResourceSetType() { this->cloudResourceSetType_ = nullptr;};
    inline const vector<Models::DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType> & cloudResourceSetType() const { DARABONBA_PTR_GET_CONST(cloudResourceSetType_, vector<Models::DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType>) };
    inline vector<Models::DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType> cloudResourceSetType() { DARABONBA_PTR_GET(cloudResourceSetType_, vector<Models::DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType>) };
    inline DescribeVpcAttributeResponseBodyCloudResources& setCloudResourceSetType(const vector<Models::DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType> & cloudResourceSetType) { DARABONBA_PTR_SET_VALUE(cloudResourceSetType_, cloudResourceSetType) };
    inline DescribeVpcAttributeResponseBodyCloudResources& setCloudResourceSetType(vector<Models::DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType> && cloudResourceSetType) { DARABONBA_PTR_SET_RVALUE(cloudResourceSetType_, cloudResourceSetType) };


  protected:
    std::shared_ptr<vector<Models::DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType>> cloudResourceSetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
