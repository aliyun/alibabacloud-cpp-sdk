// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateResourceRequestSelfManagedResourceOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(SelfManagedResourceOptions, selfManagedResourceOptions_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(SelfManagedResourceOptions, selfManagedResourceOptions_);
    };
    UpdateResourceRequest() = default ;
    UpdateResourceRequest(const UpdateResourceRequest &) = default ;
    UpdateResourceRequest(UpdateResourceRequest &&) = default ;
    UpdateResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceRequest() = default ;
    UpdateResourceRequest& operator=(const UpdateResourceRequest &) = default ;
    UpdateResourceRequest& operator=(UpdateResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceName_ == nullptr
        && return this->selfManagedResourceOptions_ == nullptr; };
    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline UpdateResourceRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // selfManagedResourceOptions Field Functions 
    bool hasSelfManagedResourceOptions() const { return this->selfManagedResourceOptions_ != nullptr;};
    void deleteSelfManagedResourceOptions() { this->selfManagedResourceOptions_ = nullptr;};
    inline const UpdateResourceRequestSelfManagedResourceOptions & selfManagedResourceOptions() const { DARABONBA_PTR_GET_CONST(selfManagedResourceOptions_, UpdateResourceRequestSelfManagedResourceOptions) };
    inline UpdateResourceRequestSelfManagedResourceOptions selfManagedResourceOptions() { DARABONBA_PTR_GET(selfManagedResourceOptions_, UpdateResourceRequestSelfManagedResourceOptions) };
    inline UpdateResourceRequest& setSelfManagedResourceOptions(const UpdateResourceRequestSelfManagedResourceOptions & selfManagedResourceOptions) { DARABONBA_PTR_SET_VALUE(selfManagedResourceOptions_, selfManagedResourceOptions) };
    inline UpdateResourceRequest& setSelfManagedResourceOptions(UpdateResourceRequestSelfManagedResourceOptions && selfManagedResourceOptions) { DARABONBA_PTR_SET_RVALUE(selfManagedResourceOptions_, selfManagedResourceOptions) };


  protected:
    // The new name of the resource group after the update. The name can be up to 27 characters in length.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The configuration items of the self-managed resource group.
    std::shared_ptr<UpdateResourceRequestSelfManagedResourceOptions> selfManagedResourceOptions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
