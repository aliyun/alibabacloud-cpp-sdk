// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUPDOMAINAUTORENEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETUPDOMAINAUTORENEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SetupDomainAutoRenewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetupDomainAutoRenewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
    };
    friend void from_json(const Darabonba::Json& j, SetupDomainAutoRenewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
    };
    SetupDomainAutoRenewRequest() = default ;
    SetupDomainAutoRenewRequest(const SetupDomainAutoRenewRequest &) = default ;
    SetupDomainAutoRenewRequest(SetupDomainAutoRenewRequest &&) = default ;
    SetupDomainAutoRenewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetupDomainAutoRenewRequest() = default ;
    SetupDomainAutoRenewRequest& operator=(const SetupDomainAutoRenewRequest &) = default ;
    SetupDomainAutoRenewRequest& operator=(SetupDomainAutoRenewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->operation_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetupDomainAutoRenewRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline SetupDomainAutoRenewRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
