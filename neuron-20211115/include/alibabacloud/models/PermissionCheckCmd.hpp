// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERMISSIONCHECKCMD_HPP_
#define ALIBABACLOUD_MODELS_PERMISSIONCHECKCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PermissionCheckCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PermissionCheckCmd& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(operatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(operatorType, operatorType_);
      DARABONBA_PTR_TO_JSON(resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, PermissionCheckCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(operatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(operatorType, operatorType_);
      DARABONBA_PTR_FROM_JSON(resource, resource_);
    };
    PermissionCheckCmd() = default ;
    PermissionCheckCmd(const PermissionCheckCmd &) = default ;
    PermissionCheckCmd(PermissionCheckCmd &&) = default ;
    PermissionCheckCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PermissionCheckCmd() = default ;
    PermissionCheckCmd& operator=(const PermissionCheckCmd &) = default ;
    PermissionCheckCmd& operator=(PermissionCheckCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->operatorId_ == nullptr && this->operatorType_ == nullptr && this->resource_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline PermissionCheckCmd& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline PermissionCheckCmd& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline PermissionCheckCmd& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline PermissionCheckCmd& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


  protected:
    // This parameter is required.
    shared_ptr<string> action_ {};
    // This parameter is required.
    shared_ptr<string> operatorId_ {};
    // This parameter is required.
    shared_ptr<string> operatorType_ {};
    // This parameter is required.
    shared_ptr<string> resource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
