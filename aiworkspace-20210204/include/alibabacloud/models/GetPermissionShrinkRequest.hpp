// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetPermissionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Labels, labelsShrink_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Labels, labelsShrink_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    GetPermissionShrinkRequest() = default ;
    GetPermissionShrinkRequest(const GetPermissionShrinkRequest &) = default ;
    GetPermissionShrinkRequest(GetPermissionShrinkRequest &&) = default ;
    GetPermissionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermissionShrinkRequest() = default ;
    GetPermissionShrinkRequest& operator=(const GetPermissionShrinkRequest &) = default ;
    GetPermissionShrinkRequest& operator=(GetPermissionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->creator_ == nullptr && this->labelsShrink_ == nullptr && this->option_ == nullptr && this->resource_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetPermissionShrinkRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetPermissionShrinkRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // labelsShrink Field Functions 
    bool hasLabelsShrink() const { return this->labelsShrink_ != nullptr;};
    void deleteLabelsShrink() { this->labelsShrink_ = nullptr;};
    inline string getLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(labelsShrink_, "") };
    inline GetPermissionShrinkRequest& setLabelsShrink(string labelsShrink) { DARABONBA_PTR_SET_VALUE(labelsShrink_, labelsShrink) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string getOption() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline GetPermissionShrinkRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline GetPermissionShrinkRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


  protected:
    // The accessibility. Valid values:
    // 
    // *   PUBLIC: All members in the workspace can access the workspace.
    // *   PRIVATE: Only the creator can access the workspace.
    shared_ptr<string> accessibility_ {};
    // The UID of the Alibaba Cloud account that is used to create the workspace.
    shared_ptr<string> creator_ {};
    shared_ptr<string> labelsShrink_ {};
    // The configuration. Separate multiple configurations with commas (,). Valid values:
    // 
    // *   ResourceEmpty: The Resource parameter is not configured.
    // *   DisableRam: The RAM check is not performed.
    shared_ptr<string> option_ {};
    // The resource.
    shared_ptr<string> resource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
