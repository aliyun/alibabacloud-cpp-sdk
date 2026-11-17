// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENUMBERBINDINGSOFINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENUMBERBINDINGSOFINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class UpdateNumberBindingsOfInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNumberBindingsOfInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Numbers, numbers_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNumberBindingsOfInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Numbers, numbers_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    UpdateNumberBindingsOfInstanceRequest() = default ;
    UpdateNumberBindingsOfInstanceRequest(const UpdateNumberBindingsOfInstanceRequest &) = default ;
    UpdateNumberBindingsOfInstanceRequest(UpdateNumberBindingsOfInstanceRequest &&) = default ;
    UpdateNumberBindingsOfInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNumberBindingsOfInstanceRequest() = default ;
    UpdateNumberBindingsOfInstanceRequest& operator=(const UpdateNumberBindingsOfInstanceRequest &) = default ;
    UpdateNumberBindingsOfInstanceRequest& operator=(UpdateNumberBindingsOfInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->numbers_ == nullptr && this->tenantId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateNumberBindingsOfInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // numbers Field Functions 
    bool hasNumbers() const { return this->numbers_ != nullptr;};
    void deleteNumbers() { this->numbers_ = nullptr;};
    inline const vector<string> & getNumbers() const { DARABONBA_PTR_GET_CONST(numbers_, vector<string>) };
    inline vector<string> getNumbers() { DARABONBA_PTR_GET(numbers_, vector<string>) };
    inline UpdateNumberBindingsOfInstanceRequest& setNumbers(const vector<string> & numbers) { DARABONBA_PTR_SET_VALUE(numbers_, numbers) };
    inline UpdateNumberBindingsOfInstanceRequest& setNumbers(vector<string> && numbers) { DARABONBA_PTR_SET_RVALUE(numbers_, numbers) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateNumberBindingsOfInstanceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The list of phone numbers.
    shared_ptr<vector<string>> numbers_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
