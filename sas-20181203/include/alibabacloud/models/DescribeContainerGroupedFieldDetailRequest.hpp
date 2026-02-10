// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERGROUPEDFIELDDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERGROUPEDFIELDDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerGroupedFieldDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerGroupedFieldDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(GroupField, groupField_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerGroupedFieldDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(GroupField, groupField_);
    };
    DescribeContainerGroupedFieldDetailRequest() = default ;
    DescribeContainerGroupedFieldDetailRequest(const DescribeContainerGroupedFieldDetailRequest &) = default ;
    DescribeContainerGroupedFieldDetailRequest(DescribeContainerGroupedFieldDetailRequest &&) = default ;
    DescribeContainerGroupedFieldDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerGroupedFieldDetailRequest() = default ;
    DescribeContainerGroupedFieldDetailRequest& operator=(const DescribeContainerGroupedFieldDetailRequest &) = default ;
    DescribeContainerGroupedFieldDetailRequest& operator=(DescribeContainerGroupedFieldDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteria_ == nullptr
        && this->groupField_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string getCriteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline DescribeContainerGroupedFieldDetailRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // groupField Field Functions 
    bool hasGroupField() const { return this->groupField_ != nullptr;};
    void deleteGroupField() { this->groupField_ = nullptr;};
    inline string getGroupField() const { DARABONBA_PTR_GET_DEFAULT(groupField_, "") };
    inline DescribeContainerGroupedFieldDetailRequest& setGroupField(string groupField) { DARABONBA_PTR_SET_VALUE(groupField_, groupField) };


  protected:
    // The search conditions that are used to query assets. The value of this parameter is in the JSON format. Separate multiple search conditions with commas (,). Example: `[{"name":"riskStatus","value":"YES"},{"name":"riskLevel","value":"2"}]`.
    // 
    // >  Supported search conditions include the instance ID, instance name, virtual private cloud (VPC) ID, region, and public IP address. You can call the [DescribeCriteria](~~DescribeCriteria~~) operation to query the supported search conditions.
    // 
    // This parameter is required.
    shared_ptr<string> criteria_ {};
    // The filter condition for a grouping and aggregation query. Valid values:
    // 
    // *   **pod**
    // *   **appName**
    // *   **clusterId**
    // *   **namespace**
    // *   **image**
    // *   **containerScan**
    // 
    // This parameter is required.
    shared_ptr<string> groupField_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
