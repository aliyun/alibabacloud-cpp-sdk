// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_ANY_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_ANY_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    GetPermissionRequest() = default ;
    GetPermissionRequest(const GetPermissionRequest &) = default ;
    GetPermissionRequest(GetPermissionRequest &&) = default ;
    GetPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermissionRequest() = default ;
    GetPermissionRequest& operator=(const GetPermissionRequest &) = default ;
    GetPermissionRequest& operator=(GetPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessibility_ != nullptr
        && this->creator_ != nullptr && this->labels_ != nullptr && this->option_ != nullptr && this->resource_ != nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetPermissionRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetPermissionRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline     const Darabonba::Json & labels() const { DARABONBA_GET(labels_) };
    Darabonba::Json & labels() { DARABONBA_GET(labels_) };
    inline GetPermissionRequest& setLabels(const Darabonba::Json & labels) { DARABONBA_SET_VALUE(labels_, labels) };
    inline GetPermissionRequest& setLabels(Darabonba::Json & labels) { DARABONBA_SET_RVALUE(labels_, labels) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string option() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline GetPermissionRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline GetPermissionRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


  protected:
    // The accessibility. Valid values:
    // 
    // *   PUBLIC: All members in the workspace can access the workspace.
    // *   PRIVATE: Only the creator can access the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The UID of the Alibaba Cloud account that is used to create the workspace.
    std::shared_ptr<string> creator_ = nullptr;
    Darabonba::Json labels_ = nullptr;
    // The configuration. Separate multiple configurations with commas (,). Valid values:
    // 
    // *   ResourceEmpty: The Resource parameter is not configured.
    // *   DisableRam: The RAM check is not performed.
    std::shared_ptr<string> option_ = nullptr;
    // The resource.
    std::shared_ptr<string> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
