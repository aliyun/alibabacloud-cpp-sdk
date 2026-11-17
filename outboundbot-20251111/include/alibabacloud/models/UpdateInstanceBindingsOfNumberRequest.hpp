// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEBINDINGSOFNUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEBINDINGSOFNUMBERREQUEST_HPP_
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
  class UpdateInstanceBindingsOfNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceBindingsOfNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceBindingsOfNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    UpdateInstanceBindingsOfNumberRequest() = default ;
    UpdateInstanceBindingsOfNumberRequest(const UpdateInstanceBindingsOfNumberRequest &) = default ;
    UpdateInstanceBindingsOfNumberRequest(UpdateInstanceBindingsOfNumberRequest &&) = default ;
    UpdateInstanceBindingsOfNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceBindingsOfNumberRequest() = default ;
    UpdateInstanceBindingsOfNumberRequest& operator=(const UpdateInstanceBindingsOfNumberRequest &) = default ;
    UpdateInstanceBindingsOfNumberRequest& operator=(UpdateInstanceBindingsOfNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->number_ == nullptr && this->tenantId_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline UpdateInstanceBindingsOfNumberRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline UpdateInstanceBindingsOfNumberRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline UpdateInstanceBindingsOfNumberRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateInstanceBindingsOfNumberRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The list of instance IDs.
    shared_ptr<vector<string>> instanceIds_ {};
    // The bound number.
    // 
    // This parameter is required.
    shared_ptr<string> number_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
