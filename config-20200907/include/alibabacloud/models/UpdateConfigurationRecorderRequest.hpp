// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGURATIONRECORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGURATIONRECORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class UpdateConfigurationRecorderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConfigurationRecorderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConfigurationRecorderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
    };
    UpdateConfigurationRecorderRequest() = default ;
    UpdateConfigurationRecorderRequest(const UpdateConfigurationRecorderRequest &) = default ;
    UpdateConfigurationRecorderRequest(UpdateConfigurationRecorderRequest &&) = default ;
    UpdateConfigurationRecorderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConfigurationRecorderRequest() = default ;
    UpdateConfigurationRecorderRequest& operator=(const UpdateConfigurationRecorderRequest &) = default ;
    UpdateConfigurationRecorderRequest& operator=(UpdateConfigurationRecorderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceTypes_ == nullptr; };
    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline string resourceTypes() const { DARABONBA_PTR_GET_DEFAULT(resourceTypes_, "") };
    inline UpdateConfigurationRecorderRequest& setResourceTypes(string resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };


  protected:
    // The resource types. Separate multiple resource types with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
