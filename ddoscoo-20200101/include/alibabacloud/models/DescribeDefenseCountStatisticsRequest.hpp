// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSECOUNTSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSECOUNTSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDefenseCountStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseCountStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseCountStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeDefenseCountStatisticsRequest() = default ;
    DescribeDefenseCountStatisticsRequest(const DescribeDefenseCountStatisticsRequest &) = default ;
    DescribeDefenseCountStatisticsRequest(DescribeDefenseCountStatisticsRequest &&) = default ;
    DescribeDefenseCountStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseCountStatisticsRequest() = default ;
    DescribeDefenseCountStatisticsRequest& operator=(const DescribeDefenseCountStatisticsRequest &) = default ;
    DescribeDefenseCountStatisticsRequest& operator=(DescribeDefenseCountStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceGroupId_ != nullptr; };
    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDefenseCountStatisticsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the resource group to which the instance belongs in Resource Management.
    // 
    // If you do not configure this parameter, the instance belongs to the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
