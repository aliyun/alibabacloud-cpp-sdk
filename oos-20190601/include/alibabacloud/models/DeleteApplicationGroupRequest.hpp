// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPLICATIONGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPLICATIONGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class DeleteApplicationGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteApplicationGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RetainResource, retainResource_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteApplicationGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RetainResource, retainResource_);
    };
    DeleteApplicationGroupRequest() = default ;
    DeleteApplicationGroupRequest(const DeleteApplicationGroupRequest &) = default ;
    DeleteApplicationGroupRequest(DeleteApplicationGroupRequest &&) = default ;
    DeleteApplicationGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteApplicationGroupRequest() = default ;
    DeleteApplicationGroupRequest& operator=(const DeleteApplicationGroupRequest &) = default ;
    DeleteApplicationGroupRequest& operator=(DeleteApplicationGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->name_ == nullptr && return this->regionId_ == nullptr && return this->retainResource_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline DeleteApplicationGroupRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteApplicationGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteApplicationGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // retainResource Field Functions 
    bool hasRetainResource() const { return this->retainResource_ != nullptr;};
    void deleteRetainResource() { this->retainResource_ = nullptr;};
    inline bool retainResource() const { DARABONBA_PTR_GET_DEFAULT(retainResource_, false) };
    inline DeleteApplicationGroupRequest& setRetainResource(bool retainResource) { DARABONBA_PTR_SET_VALUE(retainResource_, retainResource) };


  protected:
    // The name of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The name of the application group.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region. Set the value to cn-hangzhou.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to retain resources created by application manager when deleting the application. Valid values:
    // - true
    // - false
    std::shared_ptr<bool> retainResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
