// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECUSTOMFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLECUSTOMFIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class EnableCustomFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableCustomFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FieldId, fieldId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableCustomFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldId, fieldId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    EnableCustomFieldRequest() = default ;
    EnableCustomFieldRequest(const EnableCustomFieldRequest &) = default ;
    EnableCustomFieldRequest(EnableCustomFieldRequest &&) = default ;
    EnableCustomFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableCustomFieldRequest() = default ;
    EnableCustomFieldRequest& operator=(const EnableCustomFieldRequest &) = default ;
    EnableCustomFieldRequest& operator=(EnableCustomFieldRequest &&) = default ;
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
    inline EnableCustomFieldRequest& setFieldId(string fieldId) { DARABONBA_PTR_SET_VALUE(fieldId_, fieldId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EnableCustomFieldRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


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
