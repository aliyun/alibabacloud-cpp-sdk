// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDPRODUCTFIELDSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDPRODUCTFIELDSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCloudProductFieldStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudProductFieldStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupedFields, groupedFields_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudProductFieldStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupedFields, groupedFields_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudProductFieldStatisticsResponseBody() = default ;
    DescribeCloudProductFieldStatisticsResponseBody(const DescribeCloudProductFieldStatisticsResponseBody &) = default ;
    DescribeCloudProductFieldStatisticsResponseBody(DescribeCloudProductFieldStatisticsResponseBody &&) = default ;
    DescribeCloudProductFieldStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudProductFieldStatisticsResponseBody() = default ;
    DescribeCloudProductFieldStatisticsResponseBody& operator=(const DescribeCloudProductFieldStatisticsResponseBody &) = default ;
    DescribeCloudProductFieldStatisticsResponseBody& operator=(DescribeCloudProductFieldStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupedFields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupedFields& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryCount, categoryCount_);
        DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_TO_JSON(RiskInstanceCount, riskInstanceCount_);
      };
      friend void from_json(const Darabonba::Json& j, GroupedFields& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryCount, categoryCount_);
        DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
        DARABONBA_PTR_FROM_JSON(RiskInstanceCount, riskInstanceCount_);
      };
      GroupedFields() = default ;
      GroupedFields(const GroupedFields &) = default ;
      GroupedFields(GroupedFields &&) = default ;
      GroupedFields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupedFields() = default ;
      GroupedFields& operator=(const GroupedFields &) = default ;
      GroupedFields& operator=(GroupedFields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->categoryCount_ == nullptr
        && this->instanceCount_ == nullptr && this->riskInstanceCount_ == nullptr; };
      // categoryCount Field Functions 
      bool hasCategoryCount() const { return this->categoryCount_ != nullptr;};
      void deleteCategoryCount() { this->categoryCount_ = nullptr;};
      inline string getCategoryCount() const { DARABONBA_PTR_GET_DEFAULT(categoryCount_, "") };
      inline GroupedFields& setCategoryCount(string categoryCount) { DARABONBA_PTR_SET_VALUE(categoryCount_, categoryCount) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline GroupedFields& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // riskInstanceCount Field Functions 
      bool hasRiskInstanceCount() const { return this->riskInstanceCount_ != nullptr;};
      void deleteRiskInstanceCount() { this->riskInstanceCount_ = nullptr;};
      inline int32_t getRiskInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(riskInstanceCount_, 0) };
      inline GroupedFields& setRiskInstanceCount(int32_t riskInstanceCount) { DARABONBA_PTR_SET_VALUE(riskInstanceCount_, riskInstanceCount) };


    protected:
      // The statistics of different types of assets. **MachineType** indicates the type of the asset. **Count** indicates the number of assets of a specific type.
      // 
      // Valid values of **MachineType**:
      // 
      // *   **1**: Server Load Balancer (SLB) instance
      // *   **2**: NAT gateway instance
      // *   **3**: ApsaraDB RDS instance
      // *   **4**: ApsaraDB for MongoDB instance
      shared_ptr<string> categoryCount_ {};
      // The total number of cloud services that are protected by Security Center.
      shared_ptr<int32_t> instanceCount_ {};
      // The number of cloud services that are at risk.
      shared_ptr<int32_t> riskInstanceCount_ {};
    };

    virtual bool empty() const override { return this->groupedFields_ == nullptr
        && this->requestId_ == nullptr; };
    // groupedFields Field Functions 
    bool hasGroupedFields() const { return this->groupedFields_ != nullptr;};
    void deleteGroupedFields() { this->groupedFields_ = nullptr;};
    inline const DescribeCloudProductFieldStatisticsResponseBody::GroupedFields & getGroupedFields() const { DARABONBA_PTR_GET_CONST(groupedFields_, DescribeCloudProductFieldStatisticsResponseBody::GroupedFields) };
    inline DescribeCloudProductFieldStatisticsResponseBody::GroupedFields getGroupedFields() { DARABONBA_PTR_GET(groupedFields_, DescribeCloudProductFieldStatisticsResponseBody::GroupedFields) };
    inline DescribeCloudProductFieldStatisticsResponseBody& setGroupedFields(const DescribeCloudProductFieldStatisticsResponseBody::GroupedFields & groupedFields) { DARABONBA_PTR_SET_VALUE(groupedFields_, groupedFields) };
    inline DescribeCloudProductFieldStatisticsResponseBody& setGroupedFields(DescribeCloudProductFieldStatisticsResponseBody::GroupedFields && groupedFields) { DARABONBA_PTR_SET_RVALUE(groupedFields_, groupedFields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudProductFieldStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics of cloud services that are protected by Security Center.
    shared_ptr<DescribeCloudProductFieldStatisticsResponseBody::GroupedFields> groupedFields_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
