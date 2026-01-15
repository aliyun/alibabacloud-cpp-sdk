// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLBACKMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROLLBACKMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class RollbackModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RollbackModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerModuleId, customerModuleId_);
    };
    friend void from_json(const Darabonba::Json& j, RollbackModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerModuleId, customerModuleId_);
    };
    RollbackModelRequest() = default ;
    RollbackModelRequest(const RollbackModelRequest &) = default ;
    RollbackModelRequest(RollbackModelRequest &&) = default ;
    RollbackModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RollbackModelRequest() = default ;
    RollbackModelRequest& operator=(const RollbackModelRequest &) = default ;
    RollbackModelRequest& operator=(RollbackModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerModuleId_ == nullptr; };
    // customerModuleId Field Functions 
    bool hasCustomerModuleId() const { return this->customerModuleId_ != nullptr;};
    void deleteCustomerModuleId() { this->customerModuleId_ = nullptr;};
    inline int32_t getCustomerModuleId() const { DARABONBA_PTR_GET_DEFAULT(customerModuleId_, 0) };
    inline RollbackModelRequest& setCustomerModuleId(int32_t customerModuleId) { DARABONBA_PTR_SET_VALUE(customerModuleId_, customerModuleId) };


  protected:
    // Customer model ID
    shared_ptr<int32_t> customerModuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
