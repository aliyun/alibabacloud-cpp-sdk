// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDPRODUCTFIELDSTATISTICSRESPONSEBODYGROUPEDFIELDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDPRODUCTFIELDSTATISTICSRESPONSEBODYGROUPEDFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCloudProductFieldStatisticsResponseBodyGroupedFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudProductFieldStatisticsResponseBodyGroupedFields& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryCount, categoryCount_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(RiskInstanceCount, riskInstanceCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudProductFieldStatisticsResponseBodyGroupedFields& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryCount, categoryCount_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(RiskInstanceCount, riskInstanceCount_);
    };
    DescribeCloudProductFieldStatisticsResponseBodyGroupedFields() = default ;
    DescribeCloudProductFieldStatisticsResponseBodyGroupedFields(const DescribeCloudProductFieldStatisticsResponseBodyGroupedFields &) = default ;
    DescribeCloudProductFieldStatisticsResponseBodyGroupedFields(DescribeCloudProductFieldStatisticsResponseBodyGroupedFields &&) = default ;
    DescribeCloudProductFieldStatisticsResponseBodyGroupedFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudProductFieldStatisticsResponseBodyGroupedFields() = default ;
    DescribeCloudProductFieldStatisticsResponseBodyGroupedFields& operator=(const DescribeCloudProductFieldStatisticsResponseBodyGroupedFields &) = default ;
    DescribeCloudProductFieldStatisticsResponseBodyGroupedFields& operator=(DescribeCloudProductFieldStatisticsResponseBodyGroupedFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryCount_ != nullptr
        && this->instanceCount_ != nullptr && this->riskInstanceCount_ != nullptr; };
    // categoryCount Field Functions 
    bool hasCategoryCount() const { return this->categoryCount_ != nullptr;};
    void deleteCategoryCount() { this->categoryCount_ = nullptr;};
    inline string categoryCount() const { DARABONBA_PTR_GET_DEFAULT(categoryCount_, "") };
    inline DescribeCloudProductFieldStatisticsResponseBodyGroupedFields& setCategoryCount(string categoryCount) { DARABONBA_PTR_SET_VALUE(categoryCount_, categoryCount) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DescribeCloudProductFieldStatisticsResponseBodyGroupedFields& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // riskInstanceCount Field Functions 
    bool hasRiskInstanceCount() const { return this->riskInstanceCount_ != nullptr;};
    void deleteRiskInstanceCount() { this->riskInstanceCount_ = nullptr;};
    inline int32_t riskInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(riskInstanceCount_, 0) };
    inline DescribeCloudProductFieldStatisticsResponseBodyGroupedFields& setRiskInstanceCount(int32_t riskInstanceCount) { DARABONBA_PTR_SET_VALUE(riskInstanceCount_, riskInstanceCount) };


  protected:
    // The statistics of different types of assets. **MachineType** indicates the type of the asset. **Count** indicates the number of assets of a specific type.
    // 
    // Valid values of **MachineType**:
    // 
    // *   **1**: Server Load Balancer (SLB) instance
    // *   **2**: NAT gateway instance
    // *   **3**: ApsaraDB RDS instance
    // *   **4**: ApsaraDB for MongoDB instance
    std::shared_ptr<string> categoryCount_ = nullptr;
    // The total number of cloud services that are protected by Security Center.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The number of cloud services that are at risk.
    std::shared_ptr<int32_t> riskInstanceCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
