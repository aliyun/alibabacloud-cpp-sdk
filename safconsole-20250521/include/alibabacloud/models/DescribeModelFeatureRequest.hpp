// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELFEATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELFEATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class DescribeModelFeatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelFeatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerModuleId, customerModuleId_);
      DARABONBA_PTR_TO_JSON(FeatureTemplate, featureTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelFeatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerModuleId, customerModuleId_);
      DARABONBA_PTR_FROM_JSON(FeatureTemplate, featureTemplate_);
    };
    DescribeModelFeatureRequest() = default ;
    DescribeModelFeatureRequest(const DescribeModelFeatureRequest &) = default ;
    DescribeModelFeatureRequest(DescribeModelFeatureRequest &&) = default ;
    DescribeModelFeatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelFeatureRequest() = default ;
    DescribeModelFeatureRequest& operator=(const DescribeModelFeatureRequest &) = default ;
    DescribeModelFeatureRequest& operator=(DescribeModelFeatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerModuleId_ == nullptr
        && this->featureTemplate_ == nullptr; };
    // customerModuleId Field Functions 
    bool hasCustomerModuleId() const { return this->customerModuleId_ != nullptr;};
    void deleteCustomerModuleId() { this->customerModuleId_ = nullptr;};
    inline int32_t getCustomerModuleId() const { DARABONBA_PTR_GET_DEFAULT(customerModuleId_, 0) };
    inline DescribeModelFeatureRequest& setCustomerModuleId(int32_t customerModuleId) { DARABONBA_PTR_SET_VALUE(customerModuleId_, customerModuleId) };


    // featureTemplate Field Functions 
    bool hasFeatureTemplate() const { return this->featureTemplate_ != nullptr;};
    void deleteFeatureTemplate() { this->featureTemplate_ = nullptr;};
    inline string getFeatureTemplate() const { DARABONBA_PTR_GET_DEFAULT(featureTemplate_, "") };
    inline DescribeModelFeatureRequest& setFeatureTemplate(string featureTemplate) { DARABONBA_PTR_SET_VALUE(featureTemplate_, featureTemplate) };


  protected:
    shared_ptr<int32_t> customerModuleId_ {};
    shared_ptr<string> featureTemplate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
