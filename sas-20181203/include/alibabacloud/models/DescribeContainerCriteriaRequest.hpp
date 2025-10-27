// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERCRITERIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERCRITERIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerCriteriaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerCriteriaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupField, groupField_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerCriteriaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupField, groupField_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeContainerCriteriaRequest() = default ;
    DescribeContainerCriteriaRequest(const DescribeContainerCriteriaRequest &) = default ;
    DescribeContainerCriteriaRequest(DescribeContainerCriteriaRequest &&) = default ;
    DescribeContainerCriteriaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerCriteriaRequest() = default ;
    DescribeContainerCriteriaRequest& operator=(const DescribeContainerCriteriaRequest &) = default ;
    DescribeContainerCriteriaRequest& operator=(DescribeContainerCriteriaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupField_ == nullptr
        && return this->value_ == nullptr; };
    // groupField Field Functions 
    bool hasGroupField() const { return this->groupField_ != nullptr;};
    void deleteGroupField() { this->groupField_ = nullptr;};
    inline string groupField() const { DARABONBA_PTR_GET_DEFAULT(groupField_, "") };
    inline DescribeContainerCriteriaRequest& setGroupField(string groupField) { DARABONBA_PTR_SET_VALUE(groupField_, groupField) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeContainerCriteriaRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The filter condition. Valid values:
    // 
    // *   **pod**: pod
    // *   **appName**: application name
    // *   **clusterId**: cluster ID
    // *   **namespace**: namespace
    // *   **image**: image
    // *   **containerScan**: container scan
    std::shared_ptr<string> groupField_ = nullptr;
    // The value of the filter condition. The value can be an application name, node name, namespace, cluster name, public IP address, pod address, region, pod, instance ID, cluster ID, or container ID. Fuzzy match is supported.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
