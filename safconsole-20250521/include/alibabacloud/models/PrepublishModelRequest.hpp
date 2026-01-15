// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREPUBLISHMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREPUBLISHMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class PrepublishModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrepublishModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerModuleId, customerModuleId_);
    };
    friend void from_json(const Darabonba::Json& j, PrepublishModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerModuleId, customerModuleId_);
    };
    PrepublishModelRequest() = default ;
    PrepublishModelRequest(const PrepublishModelRequest &) = default ;
    PrepublishModelRequest(PrepublishModelRequest &&) = default ;
    PrepublishModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrepublishModelRequest() = default ;
    PrepublishModelRequest& operator=(const PrepublishModelRequest &) = default ;
    PrepublishModelRequest& operator=(PrepublishModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerModuleId_ == nullptr; };
    // customerModuleId Field Functions 
    bool hasCustomerModuleId() const { return this->customerModuleId_ != nullptr;};
    void deleteCustomerModuleId() { this->customerModuleId_ = nullptr;};
    inline int32_t getCustomerModuleId() const { DARABONBA_PTR_GET_DEFAULT(customerModuleId_, 0) };
    inline PrepublishModelRequest& setCustomerModuleId(int32_t customerModuleId) { DARABONBA_PTR_SET_VALUE(customerModuleId_, customerModuleId) };


  protected:
    shared_ptr<int32_t> customerModuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
