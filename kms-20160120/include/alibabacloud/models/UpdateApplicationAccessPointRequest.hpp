// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONACCESSPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONACCESSPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UpdateApplicationAccessPointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationAccessPointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationAccessPointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
    };
    UpdateApplicationAccessPointRequest() = default ;
    UpdateApplicationAccessPointRequest(const UpdateApplicationAccessPointRequest &) = default ;
    UpdateApplicationAccessPointRequest(UpdateApplicationAccessPointRequest &&) = default ;
    UpdateApplicationAccessPointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationAccessPointRequest() = default ;
    UpdateApplicationAccessPointRequest& operator=(const UpdateApplicationAccessPointRequest &) = default ;
    UpdateApplicationAccessPointRequest& operator=(UpdateApplicationAccessPointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->policies_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApplicationAccessPointRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateApplicationAccessPointRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline string policies() const { DARABONBA_PTR_GET_DEFAULT(policies_, "") };
    inline UpdateApplicationAccessPointRequest& setPolicies(string policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };


  protected:
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the AAP that you want to update.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The permission policy that you want to update.
    // > You can associate up to three permission policies with each AAP.
    std::shared_ptr<string> policies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
