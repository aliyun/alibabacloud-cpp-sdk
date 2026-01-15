// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ITERATEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ITERATEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class IterateModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IterateModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerModuleId, customerModuleId_);
    };
    friend void from_json(const Darabonba::Json& j, IterateModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerModuleId, customerModuleId_);
    };
    IterateModelRequest() = default ;
    IterateModelRequest(const IterateModelRequest &) = default ;
    IterateModelRequest(IterateModelRequest &&) = default ;
    IterateModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IterateModelRequest() = default ;
    IterateModelRequest& operator=(const IterateModelRequest &) = default ;
    IterateModelRequest& operator=(IterateModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerModuleId_ == nullptr; };
    // customerModuleId Field Functions 
    bool hasCustomerModuleId() const { return this->customerModuleId_ != nullptr;};
    void deleteCustomerModuleId() { this->customerModuleId_ = nullptr;};
    inline int32_t getCustomerModuleId() const { DARABONBA_PTR_GET_DEFAULT(customerModuleId_, 0) };
    inline IterateModelRequest& setCustomerModuleId(int32_t customerModuleId) { DARABONBA_PTR_SET_VALUE(customerModuleId_, customerModuleId) };


  protected:
    shared_ptr<int32_t> customerModuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
