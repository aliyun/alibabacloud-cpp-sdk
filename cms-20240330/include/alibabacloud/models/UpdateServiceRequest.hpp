// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attributes, attributes_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(serviceStatus, serviceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(serviceStatus, serviceStatus_);
    };
    UpdateServiceRequest() = default ;
    UpdateServiceRequest(const UpdateServiceRequest &) = default ;
    UpdateServiceRequest(UpdateServiceRequest &&) = default ;
    UpdateServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRequest() = default ;
    UpdateServiceRequest& operator=(const UpdateServiceRequest &) = default ;
    UpdateServiceRequest& operator=(UpdateServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->serviceStatus_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string attributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline UpdateServiceRequest& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateServiceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateServiceRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline UpdateServiceRequest& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


  protected:
    std::shared_ptr<string> attributes_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> serviceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
