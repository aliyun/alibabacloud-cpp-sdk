// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONSPECSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONSPECSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ModifyApplicationSpecShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationSpecShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpecShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationSpecShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpecShrink_);
    };
    ModifyApplicationSpecShrinkRequest() = default ;
    ModifyApplicationSpecShrinkRequest(const ModifyApplicationSpecShrinkRequest &) = default ;
    ModifyApplicationSpecShrinkRequest(ModifyApplicationSpecShrinkRequest &&) = default ;
    ModifyApplicationSpecShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationSpecShrinkRequest() = default ;
    ModifyApplicationSpecShrinkRequest& operator=(const ModifyApplicationSpecShrinkRequest &) = default ;
    ModifyApplicationSpecShrinkRequest& operator=(ModifyApplicationSpecShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->instanceSpecShrink_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ModifyApplicationSpecShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // instanceSpecShrink Field Functions 
    bool hasInstanceSpecShrink() const { return this->instanceSpecShrink_ != nullptr;};
    void deleteInstanceSpecShrink() { this->instanceSpecShrink_ = nullptr;};
    inline string instanceSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceSpecShrink_, "") };
    inline ModifyApplicationSpecShrinkRequest& setInstanceSpecShrink(string instanceSpecShrink) { DARABONBA_PTR_SET_VALUE(instanceSpecShrink_, instanceSpecShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> instanceSpecShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
