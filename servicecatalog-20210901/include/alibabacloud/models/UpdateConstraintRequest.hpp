// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONSTRAINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONSTRAINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class UpdateConstraintRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConstraintRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ConstraintId, constraintId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConstraintRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ConstraintId, constraintId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    UpdateConstraintRequest() = default ;
    UpdateConstraintRequest(const UpdateConstraintRequest &) = default ;
    UpdateConstraintRequest(UpdateConstraintRequest &&) = default ;
    UpdateConstraintRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConstraintRequest() = default ;
    UpdateConstraintRequest& operator=(const UpdateConstraintRequest &) = default ;
    UpdateConstraintRequest& operator=(UpdateConstraintRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->constraintId_ == nullptr && this->description_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdateConstraintRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // constraintId Field Functions 
    bool hasConstraintId() const { return this->constraintId_ != nullptr;};
    void deleteConstraintId() { this->constraintId_ = nullptr;};
    inline string getConstraintId() const { DARABONBA_PTR_GET_DEFAULT(constraintId_, "") };
    inline UpdateConstraintRequest& setConstraintId(string constraintId) { DARABONBA_PTR_SET_VALUE(constraintId_, constraintId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateConstraintRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The configurations of the constraint.
    // 
    // Format: { "LocalRoleName": "\\<role_name>" }.
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The ID of the constraint.
    // 
    // This parameter is required.
    shared_ptr<string> constraintId_ {};
    // The description of the constraint.
    // 
    // The value must be 1 to 128 characters in length.
    shared_ptr<string> description_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
