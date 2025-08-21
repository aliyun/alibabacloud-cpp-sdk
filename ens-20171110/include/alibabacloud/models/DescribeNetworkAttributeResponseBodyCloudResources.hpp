// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKATTRIBUTERESPONSEBODYCLOUDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKATTRIBUTERESPONSEBODYCLOUDRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkAttributeResponseBodyCloudResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAttributeResponseBodyCloudResources& obj) { 
      DARABONBA_PTR_TO_JSON(CloudResourceSetType, cloudResourceSetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAttributeResponseBodyCloudResources& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudResourceSetType, cloudResourceSetType_);
    };
    DescribeNetworkAttributeResponseBodyCloudResources() = default ;
    DescribeNetworkAttributeResponseBodyCloudResources(const DescribeNetworkAttributeResponseBodyCloudResources &) = default ;
    DescribeNetworkAttributeResponseBodyCloudResources(DescribeNetworkAttributeResponseBodyCloudResources &&) = default ;
    DescribeNetworkAttributeResponseBodyCloudResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAttributeResponseBodyCloudResources() = default ;
    DescribeNetworkAttributeResponseBodyCloudResources& operator=(const DescribeNetworkAttributeResponseBodyCloudResources &) = default ;
    DescribeNetworkAttributeResponseBodyCloudResources& operator=(DescribeNetworkAttributeResponseBodyCloudResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cloudResourceSetType_ != nullptr; };
    // cloudResourceSetType Field Functions 
    bool hasCloudResourceSetType() const { return this->cloudResourceSetType_ != nullptr;};
    void deleteCloudResourceSetType() { this->cloudResourceSetType_ = nullptr;};
    inline const vector<Models::DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType> & cloudResourceSetType() const { DARABONBA_PTR_GET_CONST(cloudResourceSetType_, vector<Models::DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType>) };
    inline vector<Models::DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType> cloudResourceSetType() { DARABONBA_PTR_GET(cloudResourceSetType_, vector<Models::DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType>) };
    inline DescribeNetworkAttributeResponseBodyCloudResources& setCloudResourceSetType(const vector<Models::DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType> & cloudResourceSetType) { DARABONBA_PTR_SET_VALUE(cloudResourceSetType_, cloudResourceSetType) };
    inline DescribeNetworkAttributeResponseBodyCloudResources& setCloudResourceSetType(vector<Models::DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType> && cloudResourceSetType) { DARABONBA_PTR_SET_RVALUE(cloudResourceSetType_, cloudResourceSetType) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType>> cloudResourceSetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
