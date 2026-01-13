// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMERMODULEMETAINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMERMODULEMETAINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class CreateCustomerModuleMetaInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomerModuleMetaInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerModuleId, customerModuleId_);
      DARABONBA_PTR_TO_JSON(FeatureString, featureString_);
      DARABONBA_PTR_TO_JSON(FeatureTemplate, featureTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomerModuleMetaInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerModuleId, customerModuleId_);
      DARABONBA_PTR_FROM_JSON(FeatureString, featureString_);
      DARABONBA_PTR_FROM_JSON(FeatureTemplate, featureTemplate_);
    };
    CreateCustomerModuleMetaInfoRequest() = default ;
    CreateCustomerModuleMetaInfoRequest(const CreateCustomerModuleMetaInfoRequest &) = default ;
    CreateCustomerModuleMetaInfoRequest(CreateCustomerModuleMetaInfoRequest &&) = default ;
    CreateCustomerModuleMetaInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomerModuleMetaInfoRequest() = default ;
    CreateCustomerModuleMetaInfoRequest& operator=(const CreateCustomerModuleMetaInfoRequest &) = default ;
    CreateCustomerModuleMetaInfoRequest& operator=(CreateCustomerModuleMetaInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerModuleId_ == nullptr
        && this->featureString_ == nullptr && this->featureTemplate_ == nullptr; };
    // customerModuleId Field Functions 
    bool hasCustomerModuleId() const { return this->customerModuleId_ != nullptr;};
    void deleteCustomerModuleId() { this->customerModuleId_ = nullptr;};
    inline int32_t getCustomerModuleId() const { DARABONBA_PTR_GET_DEFAULT(customerModuleId_, 0) };
    inline CreateCustomerModuleMetaInfoRequest& setCustomerModuleId(int32_t customerModuleId) { DARABONBA_PTR_SET_VALUE(customerModuleId_, customerModuleId) };


    // featureString Field Functions 
    bool hasFeatureString() const { return this->featureString_ != nullptr;};
    void deleteFeatureString() { this->featureString_ = nullptr;};
    inline string getFeatureString() const { DARABONBA_PTR_GET_DEFAULT(featureString_, "") };
    inline CreateCustomerModuleMetaInfoRequest& setFeatureString(string featureString) { DARABONBA_PTR_SET_VALUE(featureString_, featureString) };


    // featureTemplate Field Functions 
    bool hasFeatureTemplate() const { return this->featureTemplate_ != nullptr;};
    void deleteFeatureTemplate() { this->featureTemplate_ = nullptr;};
    inline string getFeatureTemplate() const { DARABONBA_PTR_GET_DEFAULT(featureTemplate_, "") };
    inline CreateCustomerModuleMetaInfoRequest& setFeatureTemplate(string featureTemplate) { DARABONBA_PTR_SET_VALUE(featureTemplate_, featureTemplate) };


  protected:
    // Customer model ID.
    shared_ptr<int32_t> customerModuleId_ {};
    // A string representation of List<Object>, where Object has the following structure:
    // {
    // "mappingName": "xxx"
    // }
    shared_ptr<string> featureString_ {};
    // Version of the feature adopted.
    shared_ptr<string> featureTemplate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
