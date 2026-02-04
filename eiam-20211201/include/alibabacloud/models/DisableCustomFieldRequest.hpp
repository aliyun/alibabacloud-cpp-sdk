// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLECUSTOMFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLECUSTOMFIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DisableCustomFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableCustomFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FieldId, fieldId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableCustomFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldId, fieldId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DisableCustomFieldRequest() = default ;
    DisableCustomFieldRequest(const DisableCustomFieldRequest &) = default ;
    DisableCustomFieldRequest(DisableCustomFieldRequest &&) = default ;
    DisableCustomFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableCustomFieldRequest() = default ;
    DisableCustomFieldRequest& operator=(const DisableCustomFieldRequest &) = default ;
    DisableCustomFieldRequest& operator=(DisableCustomFieldRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldId_ == nullptr
        && this->instanceId_ == nullptr; };
    // fieldId Field Functions 
    bool hasFieldId() const { return this->fieldId_ != nullptr;};
    void deleteFieldId() { this->fieldId_ = nullptr;};
    inline string getFieldId() const { DARABONBA_PTR_GET_DEFAULT(fieldId_, "") };
    inline DisableCustomFieldRequest& setFieldId(string fieldId) { DARABONBA_PTR_SET_VALUE(fieldId_, fieldId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DisableCustomFieldRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // fieldId
    // 
    // This parameter is required.
    shared_ptr<string> fieldId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
