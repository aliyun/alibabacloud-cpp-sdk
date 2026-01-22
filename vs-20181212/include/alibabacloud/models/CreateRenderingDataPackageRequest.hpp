// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERENDERINGDATAPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERENDERINGDATAPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateRenderingDataPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRenderingDataPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceBillingCycle, instanceBillingCycle_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRenderingDataPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceBillingCycle, instanceBillingCycle_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    CreateRenderingDataPackageRequest() = default ;
    CreateRenderingDataPackageRequest(const CreateRenderingDataPackageRequest &) = default ;
    CreateRenderingDataPackageRequest(CreateRenderingDataPackageRequest &&) = default ;
    CreateRenderingDataPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRenderingDataPackageRequest() = default ;
    CreateRenderingDataPackageRequest& operator=(const CreateRenderingDataPackageRequest &) = default ;
    CreateRenderingDataPackageRequest& operator=(CreateRenderingDataPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->description_ == nullptr && this->instanceBillingCycle_ == nullptr && this->renderingInstanceId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateRenderingDataPackageRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRenderingDataPackageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceBillingCycle Field Functions 
    bool hasInstanceBillingCycle() const { return this->instanceBillingCycle_ != nullptr;};
    void deleteInstanceBillingCycle() { this->instanceBillingCycle_ = nullptr;};
    inline string getInstanceBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(instanceBillingCycle_, "") };
    inline CreateRenderingDataPackageRequest& setInstanceBillingCycle(string instanceBillingCycle) { DARABONBA_PTR_SET_VALUE(instanceBillingCycle_, instanceBillingCycle) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline CreateRenderingDataPackageRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    shared_ptr<string> category_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> instanceBillingCycle_ {};
    // This parameter is required.
    shared_ptr<string> renderingInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
